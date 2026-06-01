void __fastcall sub_1701760(__int64 a1, __int64 *a2, char *a3)
{
  __int64 v3; // r13
  char *v4; // rbx
  char *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  char *v13; // rbx
  __int64 *v14; // r13
  __int64 v15; // r14
  __int16 v16; // dx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r10
  unsigned int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // r14
  int *v29; // r12
  int v30; // eax
  __int64 v31; // rsi
  __m128i si128; // xmm2
  __int64 v33; // rax
  __int64 *v34; // r15
  __int64 v35; // [rsp+8h] [rbp-D0h]
  __int64 v36; // [rsp+10h] [rbp-C8h]
  __int64 *v37; // [rsp+18h] [rbp-C0h] BYREF
  __int64 *v38; // [rsp+20h] [rbp-B8h]
  char **v39; // [rsp+28h] [rbp-B0h]
  __m128 v40; // [rsp+30h] [rbp-A8h] BYREF
  char *v41; // [rsp+40h] [rbp-98h] BYREF
  __int64 v42; // [rsp+48h] [rbp-90h]
  char v43; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+60h] [rbp-78h] BYREF
  int v45; // [rsp+68h] [rbp-70h]
  __m128i v46; // [rsp+70h] [rbp-68h]
  __int128 v47; // [rsp+80h] [rbp-58h]
  __int128 v48; // [rsp+90h] [rbp-48h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v3 = a2[4];
  v37 = a2;
  if ( v3 )
  {
    v4 = a3;
    if ( a3 )
    {
      v5 = nullptr;
      while ( 1 )
      {
        if ( v4[8] >= 0 )
          goto LABEL_4;
        if ( v4[100] )
          break;
        if ( sub_2236570(v4 + 80, v3) )
          goto LABEL_12;
LABEL_4:
        v5 = v4;
        if ( !*(_QWORD *)v4 )
          return;
        v4 = *(char **)v4;
      }
      v6 = *((_QWORD **)v4 + 10);
      v7 = &v6[*((unsigned int *)v4 + 23)];
      if ( v6 == v7 )
        goto LABEL_4;
      while ( v3 != *v6 )
      {
        if ( v7 == ++v6 )
          goto LABEL_4;
      }
LABEL_12:
      if ( v5 )
      {
        if ( v5[8] >= 0 )
        {
          v8 = *((_QWORD *)v5 + 45);
          v41 = &v43;
          v39 = &v41;
          v42 = 0x100000000LL;
          if ( v8 )
          {
            v9 = sub_B8C1B0(v8);
            v10 = sub_B8BF90(v9);
            if ( v10 )
              sub_BBDAC0(v10, (__int64)&v41);
            v11 = *(_BYTE *)(v8 + 8) & 0x7F;
            if ( v11 == 61 )
            {
              if ( v8 != 64 )
              {
                sub_BBD810(*(_QWORD *)(v8 + 120), (__int64)v39);
                v11 = *(_BYTE *)(v8 + 8) & 0x7F;
                goto LABEL_20;
              }
            }
            else
            {
LABEL_20:
              if ( v11 == 42 )
              {
                v12 = sub_B8C1B0(v8);
                if ( v12 )
                  sub_BBD810(*(_QWORD *)(v12 + 144), (__int64)v39);
              }
            }
            v13 = &v41[16 * (unsigned int)v42];
            if ( v41 != v13 )
            {
              v14 = (__int64 *)v41;
              v38 = (__int64 *)&v44;
              v40 = _mm_loadh_ps((const double *)&v37);
              while ( 1 )
              {
                v15 = *v14;
                if ( !*v14 )
                  goto LABEL_34;
                v16 = *(_WORD *)v15 & 0x1FF;
                if ( v16 == 75 )
                {
                  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 56LL);
                  v18 = *(_QWORD *)(v15 + 24);
                  v19 = v18 + 40;
                  v20 = *(_QWORD *)(v17 + 56);
                  v21 = v18 + 40 + 24LL * *(unsigned int *)(v18 + 36);
                  if ( v18 + 40 != v21 && (*(_DWORD *)(v20 + 20) & 0x1FFFFFFF) != 0 )
                  {
                    v22 = 0;
                    while ( 1 )
                    {
                      if ( (*(_DWORD *)v19 & 0x7FFFFFFF) != 1 )
                        goto LABEL_31;
                      v23 = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                      if ( !v23 || *(_QWORD *)(v23 + 8) != v37[1] )
                        goto LABEL_31;
                      v24 = *(_QWORD *)(v20 + 8LL * v22 + 24);
                      if ( (*(_BYTE *)(v24 + 28) & 0x7F) == 0x43 )
                        break;
LABEL_32:
                      v19 += 24;
                      if ( v21 == v19 || (*(_DWORD *)(v20 + 20) & 0x1FFFFFFFu) <= v22 )
                        goto LABEL_34;
                    }
                    v36 = v19;
                    v35 = v21;
                    sub_16FECB0(a1, *(_QWORD *)(v17 + 64), *(__int64 **)(v24 + 48));
                    v19 = v36;
                    v21 = v35;
LABEL_31:
                    ++v22;
                    goto LABEL_32;
                  }
LABEL_34:
                  v14 += 2;
                  if ( v13 == (char *)v14 )
                    goto LABEL_35;
                }
                else if ( ((v16 + 394) & 0x1FFu) <= 1 )
                {
                  if ( ((*(_WORD *)(v15 + 2) >> 3) & 0x3Fu) - 19 > 1 )
                    goto LABEL_34;
                  v34 = v37;
                  v14 += 2;
                  sub_16FECB0(a1, *(_QWORD *)(v15 + 16), v37);
                  sub_16FECB0(a1, *(_QWORD *)(v15 + 24), v34);
                  if ( v13 == (char *)v14 )
                    goto LABEL_35;
                }
                else
                {
                  if ( v16 != 15 )
                    goto LABEL_34;
                  v25 = *(unsigned int *)(v15 + 16);
                  v26 = v15 + 8 * v25 + 48;
                  v27 = v26 + 8LL * *(unsigned int *)(v15 + 20);
                  if ( v26 == v27 )
                    goto LABEL_34;
                  v28 = v15 + 8 * v25 + 48;
                  do
                  {
                    v29 = *(int **)v28;
                    if ( (*(_BYTE *)(*(_QWORD *)v28 + 4LL) & 1) != 0 )
                    {
                      v30 = *v29;
                      if ( *v29 )
                      {
                        if ( (unsigned int)(v30 - 1) > 1 )
                        {
                          if ( v30 == 3 )
                            sub_16FECB0(a1, *((_QWORD *)v29 + 1), v37);
                        }
                        else
                        {
                          si128 = _mm_load_si128((const __m128i *)&v40);
                          v45 = 16777472;
                          v44 = off_2C4F008;
                          v46 = si128;
                          v47 = 0;
                          v48 = 0;
                          v33 = *((_QWORD *)v29 + 3);
                          if ( (v33 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v33 & 4) == 0 )
                          {
                            *((_QWORD *)&v48 + 1) = sub_C0F1A0((_QWORD *)v29 + 3);
                            *(_QWORD *)&v48 = *((_QWORD *)v29 + 1) & 0xFFFFFFFFFFFFFFFCLL;
                          }
                          sub_BC97E0(v38, *((_QWORD *)v29 + 1) & 0xFFFFFFFFFFFFFFFCLL);
                        }
                      }
                      else
                      {
                        v31 = *(_QWORD *)(*((_QWORD *)v29 + 1) & 0xFFFFFFFFFFFFFFF8LL);
                        v45 = 16777472;
                        v44 = off_2C4F008;
                        v46.m128i_i64[0] = a1;
                        v46.m128i_i64[1] = (__int64)v37;
                        v47 = 0u;
                        v48 = 0u;
                        sub_BC7D30((__int64)v38, v31);
                      }
                    }
                    v28 += 8;
                  }
                  while ( v27 != v28 );
                  v14 += 2;
                  if ( v13 == (char *)v14 )
                  {
LABEL_35:
                    v13 = v41;
                    break;
                  }
                }
              }
            }
            if ( v13 != (char *)(v39 + 2) )
              free(v13);
          }
        }
      }
    }
  }
}
