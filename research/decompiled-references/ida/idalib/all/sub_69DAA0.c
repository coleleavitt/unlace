__int64 __fastcall sub_69DAA0(__int64 *a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // r13
  __m128i *v7; // r14
  __int64 v8; // rax
  __int64 i; // rbx
  __int64 *v10; // rsi
  __int64 j; // rax
  __int64 *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 **v18; // rdi
  __int64 v19; // rdx
  _BYTE *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 k; // r12
  void *v25; // rdi
  char *v26; // rbx
  char v27; // al
  char *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 m; // r15
  void *v32; // rdi
  unsigned __int64 *v33; // r8
  __int64 v34; // r11
  int n; // r10d
  __int64 v36; // rax
  int v37; // edx
  unsigned __int64 v38; // rsi
  void *v39; // rdi
  void *v40; // rdi
  __int64 v41; // [rsp+0h] [rbp-58h]
  __int64 v42; // [rsp+0h] [rbp-58h]
  int v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+10h] [rbp-48h] BYREF
  int v45[2]; // [rsp+18h] [rbp-40h]
  int v46; // [rsp+20h] [rbp-38h]
  int v47; // [rsp+28h] [rbp-30h]
  int v48; // [rsp+30h] [rbp-28h]
  int v49; // [rsp+38h] [rbp-20h]
  int v50; // [rsp+40h] [rbp-18h]
  int v51; // [rsp+48h] [rbp-10h]
  __int64 v52; // [rsp+50h] [rbp-8h]

  v3 = *a1;
  v4 = *a3;
  *(_QWORD *)v45 = __readfsqword(0x28u);
  v6 = a3[1];
  v7 = *(__m128i **)(v3 + 1840);
  v8 = a1[2];
  if ( v4 == -1 || (*(_BYTE *)(v8 + 12) & 8) == 0 )
  {
    if ( v6 == -1 || (*(_BYTE *)(v8 + 12) & 8) == 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v4 &= ~1uLL;
  if ( v6 != -1 )
LABEL_4:
    v6 &= ~1uLL;
LABEL_5:
  for ( i = 0; ; i += v14 )
  {
    v10 = (__int64 *)v7[2].m128i_i64[1];
    for ( j = (8 * v7[3].m128i_i64[0]) >> 3; j > 0; j >>= 1 )
    {
      while ( 1 )
      {
        v12 = &v10[j >> 1];
        if ( *v12 >= v4 )
          break;
        v10 = v12 + 1;
        j = j - 1 - (j >> 1);
        if ( j <= 0 )
          goto LABEL_10;
      }
    }
LABEL_10:
    if ( v10 == (__int64 *)(8 * v7[3].m128i_i64[0] + v7[2].m128i_i64[1]) )
      break;
    v13 = *v10;
    if ( *v10 >= v6 )
      break;
    v14 = sub_69D860(v7, a2, &v44, *v10);
    v4 = v13 + 1;
  }
  if ( a2 )
  {
    v15 = *a2;
    v16 = a2[1];
    if ( (unsigned int)sub_698410(*a2, v16) )
    {
      sub_84F5B0("bad try block information\n", v41, v43, v44, v45[0], v46, v47, v48, v49, v50, v51, v52);
      v21 = (_BYTE *)*a2;
      if ( *a2 )
      {
        v22 = a2[1];
        if ( v22 )
        {
          v23 = 0;
          for ( k = 0; k != v22; ++k )
          {
            v26 = &v21[v23];
            v27 = v21[v23 + 97];
            if ( v27 == 2 )
            {
              v28 = *((char **)v26 + 3);
              if ( v28 )
              {
                v29 = *((_QWORD *)v26 + 4);
                if ( v29 )
                {
                  v30 = 0;
                  for ( m = 0; m != v29; ++m )
                  {
                    v32 = *(void **)&v28[v30];
                    if ( v32 )
                    {
                      *(_QWORD *)&v28[v30 + 8] = 0;
                      v42 = v30;
                      qfree(v32);
                      v28 = *((char **)v26 + 3);
                      v30 = v42;
                    }
                    v30 += 56;
                  }
                }
                *((_QWORD *)v26 + 4) = 0;
                qfree(v28);
              }
            }
            else if ( v27 == 1 )
            {
              v39 = *((void **)v26 + 8);
              if ( v39 )
              {
                *((_QWORD *)v26 + 9) = 0;
                qfree(v39);
              }
              v40 = *((void **)v26 + 3);
              if ( v40 )
              {
                *((_QWORD *)v26 + 4) = 0;
                qfree(v40);
              }
            }
            v25 = *(void **)v26;
            v26[97] = 0;
            if ( v25 )
            {
              *((_QWORD *)v26 + 1) = 0;
              qfree(v25);
            }
            v21 = (_BYTE *)*a2;
            v23 += 104;
          }
        }
        a2[1] = 0;
        qfree(v21);
        *a2 = 0;
        a2[2] = 0;
      }
      return 0;
    }
    else if ( (int)v16 > 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        *(_BYTE *)(v15 + v17 + 98) = 0;
        v18 = (unsigned __int64 **)*a2;
        v19 = *a2 + v17;
        v15 = *a2;
        if ( !*(_BYTE *)(v19 + 97) || !*(_QWORD *)(v19 + 8) )
          break;
        v17 += 104;
        if ( 104 * ((unsigned int)(v16 - 1) + 1LL) == v17 )
        {
          v33 = *v18;
          v34 = 13;
          for ( n = 1; (_DWORD)v16 != n; v34 += 13 )
          {
            v36 = v34 * 8;
            v37 = n;
            do
            {
              v38 = **(unsigned __int64 **)((char *)v18 + v36);
              if ( v38 >= v33[1] )
                break;
              if ( v38 >= *v33 )
              {
                ++*((_BYTE *)v18 + v36 + 98);
                v18 = (unsigned __int64 **)*a2;
              }
              ++v37;
              v36 += 104;
            }
            while ( (int)v16 > v37 );
            ++n;
            v33 = v18[v34];
          }
          return i;
        }
      }
    }
  }
  return i;
}
