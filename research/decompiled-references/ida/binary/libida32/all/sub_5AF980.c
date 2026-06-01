__int64 __fastcall sub_5AF980(unsigned int *a1, int a2, char a3, unsigned int *a4)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  unsigned int v10; // r13d
  __int64 v11; // rbx
  char *v12; // r15
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r15
  unsigned int v17; // eax
  char v19; // al
  __int64 v20; // rdx
  char v21; // r8
  unsigned int *v22; // rsi
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __m128i *v25; // rdi
  __int64 v26; // rbx
  char *v27; // r15
  unsigned __int64 v28; // rdx
  char *v29; // rbx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  char *v32; // rax
  char *v33; // rsi
  int v34; // esi
  unsigned int v35; // eax
  int v36; // ecx
  char v37; // al
  int srca; // [rsp+8h] [rbp-60h]
  _DWORD *srcb; // [rsp+8h] [rbp-60h]
  char *src; // [rsp+8h] [rbp-60h]
  __int64 *v41; // [rsp+10h] [rbp-58h]
  __int64 v43[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *a1;
  v6 = *(__int64 **)(qword_2CA1698 + 1480);
  v43[1] = __readfsqword(0x28u);
  v41 = v6;
  get_func(v5);
  v8 = *a4;
  v9 = a4[1];
  v10 = a4[2];
  if ( !a1 || (v11 = *((_QWORD *)a1 + 1) & 0x8000LL, (*((_QWORD *)a1 + 1) & 0x8000) != 0) )
  {
    if ( a1[5] )
    {
      v19 = sub_5AD260(v41, (__int64)a1);
      if ( v19 )
      {
        if ( (int)a1[5] > 0 )
        {
          v20 = 0;
          v21 = 0;
          do
          {
            v22 = (unsigned int *)(*((_QWORD *)a1 + 3) + 4 * v20);
            v23 = *v22;
            if ( *v22 >= v8 && v23 < v8 + v10 )
            {
              v21 = v19;
              *v22 = v9 - v8 + v23;
            }
            v24 = (int)a1[5];
            ++v20;
          }
          while ( (int)v24 > (int)v20 );
          if ( v21 )
          {
            v25 = *((__m128i **)a1 + 3);
            v26 = 4 * v24;
            v27 = &v25->m128i_i8[4 * v24];
            if ( v25 != (__m128i *)v27 )
            {
              src = *((char **)a1 + 3);
              _BitScanReverse64(&v28, v26 >> 2);
              sub_5AA1C0(v25, (unsigned int *)v25 + v24, 2LL * (int)v28);
              if ( v26 <= 64 )
              {
                sub_5AA400(src, v27);
              }
              else
              {
                v29 = src + 64;
                sub_5AA400(src, src + 64);
                do
                {
                  v30 = *(_DWORD *)v29;
                  v31 = *((_DWORD *)v29 - 1);
                  v32 = v29 - 4;
                  if ( *(_DWORD *)v29 >= v31 )
                  {
                    v33 = v29;
                  }
                  else
                  {
                    do
                    {
                      *((_DWORD *)v32 + 1) = v31;
                      v33 = v32;
                      v31 = *((_DWORD *)v32 - 1);
                      v32 -= 4;
                    }
                    while ( v30 < v31 );
                  }
                  v29 += 4;
                  *(_DWORD *)v33 = v30;
                }
                while ( v27 != v29 );
              }
            }
            sub_5ADA10(v41, (__int64)a1, 0);
          }
        }
      }
    }
    a1[4] = correct_address(a1[4], v8, v9, v10, 0);
  }
  else
  {
    v12 = *((char **)a1 + 8);
    if ( v12 )
    {
      if ( (int)a1[14] > 0 )
      {
        v13 = 0;
        do
        {
          v14 = v12;
          srca = v13;
          v12 += 32;
          free_regvar(v14);
          v13 = srca + 1;
        }
        while ( srca + 1 < (int)a1[14] );
        v12 = *((char **)a1 + 8);
      }
      qfree(v12);
      *((_QWORD *)a1 + 8) = 0;
    }
    qfree(*((void **)a1 + 6));
    *((_QWORD *)a1 + 6) = 0;
    sub_6227D0(v41, a1);
    if ( (unsigned __int8)sub_5ACDD0(v41, (__int64)a1, 0) )
    {
      if ( (int)a1[26] > 0 )
      {
        do
        {
          v15 = 8 * v11++;
          srcb = (_DWORD *)(v15 + *((_QWORD *)a1 + 14));
          *srcb = correct_address((unsigned int)*srcb, v8, v9, v10, 0);
          v16 = *((_QWORD *)a1 + 14) + v15;
          *(_DWORD *)(v16 + 4) = correct_address(*(unsigned int *)(v16 + 4), v8, v9, v10, 0);
        }
        while ( (int)a1[26] > (int)v11 );
      }
      sub_5AD0D0(v41, (__int64)a1, 0);
    }
    v17 = a1[4];
    if ( v17 != -1 )
    {
      if ( a3 )
      {
        a1[4] = v17 + a2;
        return 0;
      }
      v34 = *a1;
      v43[0] = 0;
      v35 = sub_3B90A0(v41, v34);
      if ( v35 != -1 )
      {
        v37 = sub_532DA0(v41, (unsigned __int64 *)v43, v35);
        v36 = *a1;
        if ( !v37 )
          goto LABEL_36;
        sub_5A3DD0(v41, v43, a1[4], v36);
      }
      v36 = *a1;
LABEL_36:
      a1[4] = v36;
      clear_tinfo_t(v43);
    }
  }
  return 0;
}

