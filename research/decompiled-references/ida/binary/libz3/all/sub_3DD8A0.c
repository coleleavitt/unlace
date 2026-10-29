__int64 __fastcall sub_3DD8A0(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  unsigned int v5; // ecx
  _QWORD *p_ptr; // rdx
  __int64 v7; // rax
  __int16 v8; // cx
  _QWORD *v9; // rbp
  unsigned int v10; // r14d
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // ecx
  int v15; // edi
  int *v16; // rax
  int v17; // esi
  __int16 v18; // ax
  _DWORD *v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 result; // rax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int *v28; // r14
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // ebp
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbp
  char *v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rbp
  char *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned int v45; // [rsp+10h] [rbp-168h]
  _QWORD *v46; // [rsp+10h] [rbp-168h]
  _QWORD *v47; // [rsp+10h] [rbp-168h]
  __m128i v49; // [rsp+20h] [rbp-158h] BYREF
  void *v50; // [rsp+30h] [rbp-148h] BYREF
  __int64 v51; // [rsp+38h] [rbp-140h]
  _DWORD *ptr; // [rsp+40h] [rbp-138h] BYREF
  int v53; // [rsp+48h] [rbp-130h]

  v3 = a3;
  if ( a3[2] > 1u )
  {
    v5 = *a3;
    if ( *a3 < *(_DWORD *)(a2 + 8) )
    {
      v43 = *(_QWORD *)(a2 + 16);
      v44 = v5 >> 5;
      result = *(_DWORD *)(v43 + 4 * v44) & (unsigned int)(1 << v5);
      if ( (*(_DWORD *)(v43 + 4 * v44) & (1 << v5)) != 0 )
        return result;
    }
    sub_3D2BC0(a2, v3);
  }
  p_ptr = &ptr;
  ptr = v3;
  v50 = &ptr;
  v53 = 0;
  v51 = 0x1000000001LL;
  LODWORD(v7) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *((_WORD *)v3 + 2);
      v9 = &p_ptr[2 * (unsigned int)v7];
      if ( v8 == 1 )
        goto LABEL_32;
      if ( v8 != 2 )
        break;
      v25 = v3[18];
      v26 = *((_DWORD *)v9 + 2);
      v27 = v25 + v3[19] + 1;
      if ( v26 >= v27 )
        goto LABEL_31;
      if ( !v26 )
      {
        v28 = *((unsigned int **)v3 + 3);
        v26 = 1;
        *((_DWORD *)v9 + 2) = 1;
        if ( v28[2] > 1 )
          goto LABEL_44;
LABEL_51:
        v30 = (unsigned int)v51;
        v31 = HIDWORD(v51);
        if ( (unsigned int)v51 >= HIDWORD(v51) )
          goto LABEL_57;
        goto LABEL_52;
      }
      while ( 1 )
      {
        v29 = v26 - 1;
        if ( v25 < v26 )
          v29 = (unsigned int)v29 - v25;
        ++v26;
        v28 = *(unsigned int **)&v3[4 * (unsigned int)v3[5] + 20 + 2 * v29];
        *((_DWORD *)v9 + 2) = v26;
        if ( v28[2] <= 1 )
          goto LABEL_51;
LABEL_44:
        if ( *v28 >= *(_DWORD *)(a2 + 8) || (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * (*v28 >> 5)) & (1 << *v28)) == 0 )
          break;
        if ( v26 >= v27 )
        {
LABEL_31:
          LODWORD(v7) = v51 - 1;
LABEL_32:
          LODWORD(v51) = v7;
          if ( !(_DWORD)v7 )
            goto LABEL_37;
          goto LABEL_33;
        }
        v25 = v3[18];
      }
      sub_3D2BC0(a2, v28);
      v30 = (unsigned int)v51;
      v31 = HIDWORD(v51);
      if ( (unsigned int)v51 >= HIDWORD(v51) )
      {
LABEL_57:
        v34 = (unsigned int)(2 * v31);
        p_ptr = (_QWORD *)sub_186B270(16 * v34);
        v35 = (char *)v50;
        v36 = 0;
        v30 = (unsigned int)v51;
        v37 = 16LL * (unsigned int)v51;
        if ( (_DWORD)v51 )
        {
          do
          {
            *(__m128i *)&p_ptr[v36 / 8] = _mm_loadu_si128((const __m128i *)&v35[v36]);
            v36 += 16LL;
          }
          while ( v36 != v37 );
        }
        if ( v35 != (char *)&ptr && v35 )
        {
          v46 = p_ptr;
          sub_186B220(v35);
          v30 = (unsigned int)v51;
          p_ptr = v46;
        }
        v50 = p_ptr;
        HIDWORD(v51) = v34;
        goto LABEL_53;
      }
LABEL_52:
      p_ptr = v50;
LABEL_53:
      v32 = &p_ptr[2 * v30];
      *v32 = v28;
LABEL_54:
      *((_DWORD *)v32 + 2) = 0;
      v33 = (unsigned int)v51;
      LODWORD(v51) = v51 + 1;
      LODWORD(v7) = v33;
LABEL_55:
      v3 = (_DWORD *)p_ptr[2 * v33];
    }
    if ( v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v10 = v3[6];
    v11 = *((_DWORD *)v9 + 2);
    if ( v11 < v10 )
    {
      while ( 1 )
      {
        v12 = v11++;
        v13 = *(_QWORD *)&v3[2 * v12 + 8];
        *((_DWORD *)v9 + 2) = v11;
        if ( *(_DWORD *)(v13 + 8) > 1u )
        {
          v14 = *(_DWORD *)v13;
          if ( *(_DWORD *)v13 < *(_DWORD *)(a2 + 8) )
          {
            v15 = 1 << v14;
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v14 >> 5));
            v17 = *v16;
            if ( ((1 << v14) & *v16) != 0 )
              goto LABEL_18;
          }
          else
          {
            v45 = *(_DWORD *)v13;
            sub_186B510(a2 + 8, v14 + 1, 0);
            v15 = 1 << v45;
            v16 = (int *)(*(_QWORD *)(a2 + 16) + 4LL * (v45 >> 5));
            v17 = *v16;
          }
          *v16 = v17 | v15;
        }
        v18 = *(_WORD *)(v13 + 4);
        if ( v18 != 1 )
        {
          if ( v18 == 2 )
          {
            v38 = (unsigned int)v51;
            if ( (unsigned int)v51 >= HIDWORD(v51) )
            {
              v39 = (unsigned int)(2 * HIDWORD(v51));
              p_ptr = (_QWORD *)sub_186B270(16 * v39);
              v40 = (char *)v50;
              v41 = 0;
              v38 = (unsigned int)v51;
              v42 = 16LL * (unsigned int)v51;
              if ( (_DWORD)v51 )
              {
                do
                {
                  *(__m128i *)&p_ptr[v41 / 8] = _mm_loadu_si128((const __m128i *)&v40[v41]);
                  v41 += 16LL;
                }
                while ( v42 != v41 );
              }
              if ( v40 != (char *)&ptr && v40 )
              {
                v47 = p_ptr;
                sub_186B220(v40);
                v38 = (unsigned int)v51;
                p_ptr = v47;
              }
              v50 = p_ptr;
              HIDWORD(v51) = v39;
            }
            else
            {
              p_ptr = v50;
            }
            v32 = &p_ptr[2 * v38];
            *v32 = v13;
            goto LABEL_54;
          }
          if ( v18 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v13 + 24) )
          {
            v49.m128i_i64[0] = v13;
            v49.m128i_i32[2] = 0;
            sub_3DCD80((char **)&v50, &v49);
            p_ptr = v50;
            LODWORD(v7) = v51 - 1;
            v33 = (unsigned int)(v51 - 1);
            goto LABEL_55;
          }
        }
        v11 = *((_DWORD *)v9 + 2);
LABEL_18:
        if ( v11 >= v10 )
        {
          LODWORD(v7) = v51 - 1;
          break;
        }
      }
    }
    LODWORD(v51) = v7;
    if ( !*((_WORD *)v3 + 2) )
    {
      v19 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL);
      if ( v19 )
      {
        if ( *((_DWORD *)a1 + 2) == *v19 && v19[1] == 1 )
        {
          v20 = v3[6];
          v21 = 1;
          if ( v20 > 1 )
          {
            do
            {
              v22 = *(_QWORD *)&v3[2 * v21 + 8];
              if ( !*(_WORD *)(v22 + 4) )
              {
                v49.m128i_i64[0] = *(_QWORD *)&v3[2 * v21 + 8];
                v23 = *a1;
                ++*(_DWORD *)(v22 + 8);
                sub_3D5D00((_QWORD *)(v23 + 8), &v49);
                v20 = v3[6];
              }
              ++v21;
            }
            while ( v21 < v20 );
            LODWORD(v7) = v51;
          }
        }
      }
    }
    p_ptr = v50;
    if ( !(_DWORD)v7 )
      break;
LABEL_33:
    v7 = (unsigned int)(v7 - 1);
    v3 = (_DWORD *)p_ptr[2 * v7];
  }
LABEL_37:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

