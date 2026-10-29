__int64 __fastcall sub_5CA680(__int64 a1, __int64 a2, char a3, unsigned __int64 *a4, double a5, double a6, __m128 a7)
{
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rbx
  char *v16; // r15
  int v17; // eax
  char *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // rax
  char v23; // al
  __int64 v24; // rdx
  char v25; // r8
  unsigned __int64 *v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __m128i *v29; // rdi
  __int64 v30; // rbx
  char *v31; // r15
  unsigned __int64 v32; // rdx
  char *v33; // rbx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  char *v36; // rax
  char *v37; // rsi
  __int64 v38; // rsi
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  char v41; // al
  int srca; // [rsp+0h] [rbp-68h]
  _QWORD *srcb; // [rsp+0h] [rbp-68h]
  char *src; // [rsp+0h] [rbp-68h]
  __int64 *v45; // [rsp+8h] [rbp-60h]
  __int64 v47[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)a1;
  v9 = *(__int64 **)(qword_2CCB598 + 1672);
  v47[1] = __readfsqword(0x28u);
  v45 = v9;
  get_func(v8);
  v12 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  if ( !a1 || (v15 = *(_QWORD *)(a1 + 16) & 0x8000LL, (*(_QWORD *)(a1 + 16) & 0x8000) != 0) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v23 = sub_5C7D50(v45, a1, v11);
      if ( v23 )
      {
        if ( *(int *)(a1 + 32) > 0 )
        {
          v24 = 0;
          v25 = 0;
          do
          {
            v26 = (unsigned __int64 *)(*(_QWORD *)(a1 + 40) + 8 * v24);
            v27 = *v26;
            if ( *v26 >= v12 && v27 < v12 + v14 )
            {
              v25 = v23;
              *v26 = v13 - v12 + v27;
            }
            v28 = *(int *)(a1 + 32);
            ++v24;
          }
          while ( (int)v28 > (int)v24 );
          if ( v25 )
          {
            v29 = *(__m128i **)(a1 + 40);
            v30 = 8 * v28;
            v31 = &v29->m128i_i8[8 * v28];
            if ( v29 != (__m128i *)v31 )
            {
              src = *(char **)(a1 + 40);
              _BitScanReverse64(&v32, v30 >> 3);
              sub_5C4710(v29, (unsigned __int64 *)v29 + v28, 2LL * (int)v32, a5, a6, a7);
              if ( v30 <= 128 )
              {
                sub_5C4980(src, v31);
              }
              else
              {
                v33 = src + 128;
                sub_5C4980(src, src + 128);
                do
                {
                  v34 = *(_QWORD *)v33;
                  v35 = *((_QWORD *)v33 - 1);
                  v36 = v33 - 8;
                  if ( *(_QWORD *)v33 >= v35 )
                  {
                    v37 = v33;
                  }
                  else
                  {
                    do
                    {
                      *((_QWORD *)v36 + 1) = v35;
                      v37 = v36;
                      v35 = *((_QWORD *)v36 - 1);
                      v36 -= 8;
                    }
                    while ( v34 < v35 );
                  }
                  v33 += 8;
                  *(_QWORD *)v37 = v34;
                }
                while ( v31 != v33 );
              }
            }
            sub_5C85A0(v45, a1, 0);
          }
        }
      }
    }
    *(_QWORD *)(a1 + 24) = correct_address(*(_QWORD *)(a1 + 24), v12, v13, v14, 0);
  }
  else
  {
    v16 = *(char **)(a1 + 88);
    if ( v16 )
    {
      if ( *(int *)(a1 + 80) > 0 )
      {
        v17 = 0;
        do
        {
          v18 = v16;
          srca = v17;
          v16 += 40;
          free_regvar(v18);
          v17 = srca + 1;
        }
        while ( srca + 1 < *(_DWORD *)(a1 + 80) );
        v16 = *(char **)(a1 + 88);
      }
      qfree(v16);
      *(_QWORD *)(a1 + 88) = 0;
    }
    qfree(*(void **)(a1 + 72));
    *(_QWORD *)(a1 + 72) = 0;
    sub_63F9D0(v45, a1);
    if ( (unsigned __int8)sub_5C7820(v45, a1, 0) )
    {
      if ( *(int *)(a1 + 128) > 0 )
      {
        do
        {
          v19 = 16 * v15++;
          srcb = (_QWORD *)(v19 + *(_QWORD *)(a1 + 136));
          *srcb = correct_address(*srcb, v12, v13, v14, 0);
          v20 = *(_QWORD *)(a1 + 136) + v19;
          *(_QWORD *)(v20 + 8) = correct_address(*(_QWORD *)(v20 + 8), v12, v13, v14, 0);
        }
        while ( *(_DWORD *)(a1 + 128) > (int)v15 );
      }
      sub_5C7BB0(v45, a1, 0);
    }
    v21 = *(_QWORD *)(a1 + 24);
    if ( v21 != -1 )
    {
      if ( a3 )
      {
        *(_QWORD *)(a1 + 24) = v21 + a2;
        return 0;
      }
      v38 = *(_QWORD *)a1;
      v47[0] = 0;
      v39 = sub_3BDD60(v45, v38);
      if ( v39 != -1 )
      {
        v41 = sub_54BE00(v45, (unsigned __int64 *)v47, v39);
        v40 = *(_QWORD *)a1;
        if ( !v41 )
          goto LABEL_36;
        sub_5BE4E0(v45, v47, *(_QWORD *)(a1 + 24), v40);
      }
      v40 = *(_QWORD *)a1;
LABEL_36:
      *(_QWORD *)(a1 + 24) = v40;
      clear_tinfo_t(v47);
    }
  }
  return 0;
}
