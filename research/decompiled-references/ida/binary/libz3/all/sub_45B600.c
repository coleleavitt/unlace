__int64 (__fastcall **__fastcall sub_45B600(__int64 *a1, __int64 a2))()
{
  __int64 v3; // rax
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  int v6; // eax
  __int64 v7; // r13
  _DWORD *v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // esi
  __m128i *v11; // r13
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __m128i *v14; // r14
  int v15; // esi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i *v18; // rdi
  __m128i *v19; // rax
  __m128i *v20; // rcx
  _DWORD *v21; // rdx
  __int64 (__fastcall **result)(); // rax
  _DWORD *v23; // rax
  __m128i *v24; // rax
  __m128i *v25; // r9
  const __m128i *v26; // rax
  __m128i *v27; // r11
  __int64 v28; // rdx
  __m128i *v29; // rsi
  __m128i *v30; // rdx
  _DWORD *v31; // [rsp+8h] [rbp-B0h]
  __int64 v32; // [rsp+10h] [rbp-A8h]
  int v33; // [rsp+18h] [rbp-A0h]
  _QWORD v34[4]; // [rsp+30h] [rbp-88h] BYREF
  void *v35; // [rsp+50h] [rbp-68h]
  void *ptr; // [rsp+68h] [rbp-50h]

  sub_F8BB20(v34, a2, *a1);
LABEL_2:
  while ( (unsigned __int8)sub_F8BB00(v34) )
  {
    v3 = sub_F8BBA0(v34);
    v4 = (_DWORD *)v3;
    if ( !*(_WORD *)(v3 + 4) )
    {
      v5 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( v5 )
      {
        if ( !*v5 && v5[1] == 34 )
          continue;
      }
    }
    if ( *v4 >= *((_DWORD *)a1 + 36) || (*(_DWORD *)(a1[19] + 4LL * (*v4 >> 5)) & (1 << *v4)) == 0 )
    {
      v6 = v4[6];
      if ( v6 )
      {
        v7 = *a1;
        if ( *(_QWORD *)(v7 + 848) != sub_15D1F10(*(_QWORD *)&v4[2 * (v6 - 1) + 8]) )
        {
          v8 = *(_DWORD **)&v4[2 * (v4[6] - 1) + 8];
          if ( *v8 < *((_DWORD *)a1 + 30) && (*(_DWORD *)(a1[16] + 4LL * (*v8 >> 5)) & (1 << *v8)) != 0 )
          {
            v9 = *((unsigned int *)a1 + 18);
            v10 = 2 * v9;
            v33 = 2 * v9;
            if ( 3 * (int)v9 < (unsigned int)(4 * (*((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20))) )
            {
              v31 = *(_DWORD **)&v4[2 * (v4[6] - 1) + 8];
              v24 = (__m128i *)sub_186B270(16LL * v10);
              v13 = 16LL * v10;
              v8 = v31;
              v11 = v24;
              v25 = (__m128i *)((char *)v24 + v13);
              if ( v10 )
              {
                if ( ((16 * (_BYTE)v10) & 0x10) == 0 || (*v24 = 0, ++v24, v25 != v24) )
                {
                  do
                  {
                    *v24 = 0;
                    v24 += 2;
                    v24[-1] = 0;
                  }
                  while ( v25 != v24 );
                }
              }
              v26 = (const __m128i *)a1[8];
              v14 = v25;
              v27 = (__m128i *)&v26[*((unsigned int *)a1 + 18)];
              v12 = v33 - 1;
              if ( v26 != v27 )
              {
                do
                {
                  if ( v26->m128i_i64[0] > 1uLL )
                  {
                    v28 = 16LL * (*(_DWORD *)(v26->m128i_i64[0] + 12) & v12);
                    v29 = &v11[(unsigned __int64)v28 / 0x10];
                    if ( v13 == v28 )
                    {
LABEL_52:
                      if ( v11 == v29 )
                      {
LABEL_64:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v30 = v11;
                      while ( v30->m128i_i64[0] )
                      {
                        if ( v29 == ++v30 )
                          goto LABEL_64;
                      }
                    }
                    else
                    {
                      v30 = &v11[(unsigned __int64)v28 / 0x10];
                      while ( v30->m128i_i64[0] )
                      {
                        if ( v25 == ++v30 )
                          goto LABEL_52;
                      }
                    }
                    *v30 = _mm_loadu_si128(v26);
                  }
                  ++v26;
                }
                while ( v27 != v26 );
                v27 = (__m128i *)a1[8];
              }
              if ( v27 )
              {
                v32 = v13;
                sub_186B220(v27);
                v13 = v32;
                v12 = v33 - 1;
                v8 = v31;
              }
              a1[8] = (__int64)v11;
              *((_DWORD *)a1 + 20) = 0;
              *((_DWORD *)a1 + 18) = v33;
            }
            else
            {
              v11 = (__m128i *)a1[8];
              v12 = v9 - 1;
              v13 = 16 * v9;
              v14 = (__m128i *)((char *)v11 + v13);
            }
            v15 = v8[3];
            v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v4);
            v17 = 16LL * (v15 & v12);
            v18 = &v11[(unsigned __int64)v17 / 0x10];
            if ( v17 != v13 )
            {
              v19 = &v11[(unsigned __int64)v17 / 0x10];
              v20 = nullptr;
              while ( 1 )
              {
                v21 = (_DWORD *)v19->m128i_i64[0];
                if ( v19->m128i_i64[0] > 1uLL )
                {
                  if ( v21[3] == v15 && v8 == v21 )
                  {
                    *v19 = v16;
                    goto LABEL_2;
                  }
                }
                else
                {
                  if ( !v21 )
                  {
                    if ( v20 )
                      goto LABEL_62;
                    v20 = v19;
                    goto LABEL_63;
                  }
                  v20 = v19;
                }
                if ( ++v19 == v14 )
                  goto LABEL_34;
              }
            }
            v20 = nullptr;
            while ( 1 )
            {
LABEL_34:
              if ( v18 == v11 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v23 = (_DWORD *)v11->m128i_i64[0];
              if ( v11->m128i_i64[0] <= 1uLL )
                break;
              if ( v23[3] == v15 && v8 == v23 )
              {
                *v11 = v16;
                goto LABEL_2;
              }
LABEL_33:
              ++v11;
            }
            if ( v23 )
            {
              v20 = v11;
              goto LABEL_33;
            }
            if ( v20 )
LABEL_62:
              --*((_DWORD *)a1 + 20);
            else
              v20 = v11;
LABEL_63:
            *v20 = v16;
            ++*((_DWORD *)a1 + 19);
          }
        }
      }
    }
  }
  result = &off_1C62200;
  v34[1] = &off_1C62200;
  if ( ptr )
    result = (__int64 (__fastcall **)())sub_186B220(ptr);
  if ( v35 )
    result = (__int64 (__fastcall **)())sub_186B220(v35);
  if ( v34[0] )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v34[0] - 8LL));
  return result;
}

