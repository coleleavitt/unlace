__int64 __fastcall sub_E0A6D0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // esi
  __int64 *v14; // r8
  unsigned int v15; // edx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 *i; // rax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(); // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  __m128i *v29; // rax
  __m128i *v30; // rcx
  __m128i *v31; // rdx
  __int64 v32; // rax
  __m128i *v33; // rdi
  unsigned int v34; // r11d
  const __m128i *v35; // r15
  const __m128i *v36; // r10
  __int64 v37; // r9
  __m128i *v38; // r8
  __int64 v39; // rax
  __m128i *v40; // rdx
  __m128i *v41; // rax
  unsigned int v42; // [rsp+8h] [rbp-90h]
  __m128i *v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v45[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *a2;
  v7 = *(_DWORD *)(a1 + 632);
  v8 = *(_QWORD *)(a1 + 624);
  v45[0] = v6;
  v9 = sub_DF6190(v8, v7, v45);
  if ( v9 )
    v9 = *(_QWORD *)(v9 + 16);
  v44 = v9;
  result = sub_DF6930((unsigned __int64 *)&v44, a3);
  if ( (_BYTE)result )
  {
    if ( *(_QWORD *)(a3 + 16) == v11 )
      goto LABEL_12;
    v12 = *(unsigned int *)(a1 + 656);
    v13 = *(_DWORD *)(a3 + 12);
    v14 = *(__int64 **)(a1 + 648);
    v15 = v12 - 1;
    v12 *= 16;
    v16 = (__int64 *)((char *)v14 + v12);
    v17 = 16LL * (v13 & v15);
    v18 = &v14[(unsigned __int64)v17 / 8];
    if ( v17 != v12 )
    {
      for ( i = &v14[(unsigned __int64)v17 / 8]; v16 != i; i += 2 )
      {
        v20 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v20 + 12) == v13 && a3 == v20 )
          {
LABEL_26:
            v25 = i + 2;
            if ( v16 == i + 2 )
              v25 = *(_QWORD **)(a1 + 648);
            v26 = *(_DWORD *)(a1 + 660) - 1;
            if ( *v25 )
            {
              *i = 1;
              v27 = *(_DWORD *)(a1 + 664);
              *(_DWORD *)(a1 + 660) = v26;
              v28 = v27 + 1;
              if ( v26 < 0x40 )
                v26 = 64;
              *(_DWORD *)(a1 + 664) = v28;
              if ( v26 < v28 && !(unsigned __int8)sub_186AF10(v18) )
              {
                v42 = *(_DWORD *)(a1 + 656);
                v29 = (__m128i *)sub_186B270(16LL * v42);
                v30 = v29;
                v31 = &v29[v42];
                if ( v42 )
                {
                  if ( ((16 * (_BYTE)v42) & 0x10) == 0 || (*v29 = 0, ++v29, v31 != v29) )
                  {
                    do
                    {
                      *v29 = 0;
                      v29 += 2;
                      v29[-1] = 0;
                    }
                    while ( v31 != v29 );
                  }
                }
                v32 = *(unsigned int *)(a1 + 656);
                v33 = *(__m128i **)(a1 + 648);
                v34 = v32 - 1;
                v32 *= 16;
                v35 = v33;
                v36 = (__m128i *)((char *)v33 + v32);
                v37 = v32;
                v38 = (__m128i *)((char *)v30 + v32);
                if ( v33 != (__m128i *)&v33->m128i_i8[v32] )
                {
                  do
                  {
                    if ( v35->m128i_i64[0] > 1uLL )
                    {
                      v39 = 16LL * (*(_DWORD *)(v35->m128i_i64[0] + 12) & v34);
                      v40 = &v30[(unsigned __int64)v39 / 0x10];
                      if ( v37 == v39 )
                      {
LABEL_47:
                        if ( v30 == v40 )
                        {
LABEL_56:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v41 = v30;
                        while ( v41->m128i_i64[0] )
                        {
                          if ( v40 == ++v41 )
                            goto LABEL_56;
                        }
                      }
                      else
                      {
                        v41 = &v30[(unsigned __int64)v39 / 0x10];
                        while ( v41->m128i_i64[0] )
                        {
                          if ( v38 == ++v41 )
                            goto LABEL_47;
                        }
                      }
                      *v41 = _mm_loadu_si128(v35);
                    }
                    ++v35;
                  }
                  while ( v36 != v35 );
                  v33 = *(__m128i **)(a1 + 648);
                }
                if ( v33 )
                {
                  v43 = v30;
                  sub_186B220(v33);
                  v30 = v43;
                }
                *(_QWORD *)(a1 + 648) = v30;
                *(_DWORD *)(a1 + 664) = 0;
              }
            }
            else
            {
              *i = 0;
              *(_DWORD *)(a1 + 660) = v26;
            }
            goto LABEL_12;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_12;
        }
      }
    }
    if ( v14 != v18 )
    {
      for ( i = *(__int64 **)(a1 + 648); v18 != i; i += 2 )
      {
        v24 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v24 + 12) == v13 && a3 == v24 )
            goto LABEL_26;
        }
        else if ( !v24 )
        {
          break;
        }
      }
    }
LABEL_12:
    v21 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 32LL);
    if ( v21 == sub_E0F550 )
    {
      sub_DFBCB0(a1);
      v22 = *(_QWORD *)(a1 + 296);
    }
    else
    {
      v22 = ((__int64 (__fastcall *)(__int64))v21)(a1);
    }
    sub_162A710(v45, v22);
    sub_162A840(v45[2], a3);
    sub_DFBCB0(a1);
    result = sub_DF6AF0((unsigned __int64 *)&v44, *(_QWORD *)(a1 + 296), a3);
    if ( !v44 )
    {
      v23 = *a2;
      v45[1] = 0;
      v45[0] = v23;
      return sub_E10170(a1 + 624, v45);
    }
  }
  return result;
}

