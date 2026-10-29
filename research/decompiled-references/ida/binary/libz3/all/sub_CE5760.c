__int64 __fastcall sub_CE5760(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // r13
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // cl
  unsigned int v14; // ecx
  int v15; // ecx
  char v16; // di
  __int64 v17; // rdx
  int v18; // ecx
  __int64 *v19; // r13
  unsigned int v20; // edx
  unsigned int v21; // r12d
  _QWORD *v22; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rax
  __int64 i; // rax
  int v36; // [rsp+14h] [rbp-74h]
  __int64 v38; // [rsp+20h] [rbp-68h]
  _BYTE v39[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v40; // [rsp+40h] [rbp-48h] BYREF
  __int64 v41; // [rsp+48h] [rbp-40h]

  sub_EE4F60("cofactor-term-ite");
  sub_EE5110("cofactor-term-ite");
  sub_EE4940(v39, "cofactor-term-ite", *a2);
  v5 = (__int64 *)*a2;
  v6 = *(_QWORD *)(*a2 + 72LL);
  if ( v6 )
  {
    v7 = *(_BYTE *)(v6 + 3) >> 6;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
LABEL_4:
        if ( v7 == 2 )
          v36 = *(_DWORD *)(v6 + 4) - 1;
        else
          v36 = *(_DWORD *)(v6 + 4);
LABEL_6:
        if ( !v36 )
          goto LABEL_25;
        v8 = 0;
        v9 = 0;
        v38 = *v5;
        v10 = *v5;
        while ( 2 )
        {
          v11 = v5[11];
          if ( !v11 )
          {
LABEL_18:
            v16 = *((_BYTE *)v5 + 123);
            if ( (v16 & 0x10) != 0 )
            {
              v17 = v5[13];
              v18 = 18;
              while ( --v18 )
              {
                if ( *(char *)(v17 + 3) >= 0 )
                {
                  if ( v9 == *(_DWORD *)(v17 + 4) )
                    goto LABEL_23;
                }
                else if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
                {
                  goto LABEL_23;
                }
                v17 = *(_QWORD *)(v17 + 16);
              }
              sub_236900((_QWORD *)(*v5 + 672), v5 + 13);
              v16 = *((_BYTE *)v5 + 123);
LABEL_23:
              if ( (v16 & 0x20) != 0 )
                goto LABEL_24;
            }
            else if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
            {
LABEL_24:
              v5 = (__int64 *)*a2;
              goto LABEL_25;
            }
            v24 = v5[9];
            LODWORD(v25) = 18;
            while ( 1 )
            {
              v25 = (unsigned int)(v25 - 1);
              if ( !(_DWORD)v25 )
                break;
              if ( *(char *)(v24 + 3) >= 0 )
              {
                if ( v9 == *(_DWORD *)(v24 + 4) )
                {
                  v26 = (__int64 *)(v24 + 8);
                  goto LABEL_40;
                }
              }
              else if ( *(_BYTE *)(v24 + 3) >> 6 != 2 )
              {
                v26 = (__int64 *)(v8 + *(_QWORD *)(v24 + 16));
LABEL_40:
                v27 = *v26;
                goto LABEL_41;
              }
              v24 = *(_QWORD *)(v24 + 16);
            }
            sub_233F80((__int64 *)(*v5 + 616), (_DWORD *)v5 + 18);
            v27 = *(_QWORD *)(*(_QWORD *)(v5[9] + 16) + v8);
            if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
              goto LABEL_24;
LABEL_41:
            v40 = 0;
            v41 = v38;
            sub_D307F0(a1 + 24, v27, &v40, v25);
            sub_EDBFA0((int)v5);
            v28 = v40;
            if ( v40 )
            {
              v29 = v41;
              if ( (*(_DWORD *)(v40 + 8))-- == 1 )
                sub_15D7BC0(v29, v28);
            }
            if ( v9 + 1 != v36 )
            {
              v10 = *v5;
              v8 += 8;
              ++v9;
              continue;
            }
            goto LABEL_24;
          }
          break;
        }
        v12 = v5[11];
        v13 = *(_BYTE *)(v11 + 3) >> 6;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
LABEL_11:
            if ( v13 == 2 )
              v14 = *(_DWORD *)(v12 + 4) - 1;
            else
              v14 = *(_DWORD *)(v12 + 4);
LABEL_13:
            if ( v9 < v14 )
            {
              v15 = 18;
              while ( --v15 )
              {
                if ( *(char *)(v11 + 3) >= 0 )
                {
                  if ( *(_DWORD *)(v11 + 4) == v9 )
                    goto LABEL_18;
                }
                else if ( *(_BYTE *)(v11 + 3) >> 6 != 2 )
                {
                  goto LABEL_18;
                }
                v11 = *(_QWORD *)(v11 + 16);
              }
              sub_233F80((__int64 *)(v10 + 616), (_DWORD *)v5 + 22);
            }
            goto LABEL_18;
          }
        }
        else
        {
          do
          {
            v12 = *(_QWORD *)(v12 + 16);
            v13 = *(_BYTE *)(v12 + 3) >> 6;
          }
          while ( !v13 );
          if ( v13 != 1 )
            goto LABEL_11;
        }
        v14 = *(_DWORD *)(v12 + 4) + 1;
        goto LABEL_13;
      }
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v6 + 16);
        v7 = *(_BYTE *)(v6 + 3) >> 6;
      }
      while ( !v7 );
      if ( v7 != 1 )
        goto LABEL_4;
    }
    v36 = *(_DWORD *)(v6 + 4) + 1;
    goto LABEL_6;
  }
LABEL_25:
  *((_DWORD *)v5 + 30) = (*((_DWORD *)v5 + 30) + 1) & 0x3FFFFFF | v5[15] & 0xFC000000;
  v19 = (__int64 *)*a2;
  if ( *a2 )
    ++*((_DWORD *)v19 + 8);
  v20 = *(_DWORD *)(a3 + 8);
  v21 = *(_DWORD *)(a3 + 12);
  if ( v20 >= v21 )
  {
    v31 = 2 * v21;
    v32 = sub_186B270(8 * v31);
    v20 = *(_DWORD *)(a3 + 8);
    v33 = *(_QWORD **)a3;
    v22 = (_QWORD *)v32;
    if ( v20 )
    {
      if ( v20 - 1 <= 2 || (_QWORD *)v32 == v33 + 1 )
      {
        for ( i = 0; i != v20; ++i )
          v22[i] = v33[i];
      }
      else
      {
        v34 = 0;
        do
        {
          *(__m128i *)&v22[v34] = _mm_loadu_si128((const __m128i *)&v33[v34]);
          v34 += 2;
        }
        while ( 2LL * (v20 >> 1) != v34 );
        if ( (v20 & 1) != 0 )
          v22[v20 & 0xFFFFFFFE] = v33[v20 & 0xFFFFFFFE];
      }
    }
    if ( v33 != (_QWORD *)(a3 + 16) && v33 )
    {
      sub_186B220(v33);
      v20 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v22;
    *(_DWORD *)(a3 + 12) = v31;
  }
  else
  {
    v22 = *(_QWORD **)a3;
  }
  v22[v20] = v19;
  *(_DWORD *)(a3 + 8) = v20 + 1;
  return sub_EE4A00(v39);
}

