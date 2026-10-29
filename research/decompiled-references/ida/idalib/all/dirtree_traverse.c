__int64 __fastcall dirtree_traverse(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v4)(__int64, const __m128i *, __int64); // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r11
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  __int64 (__fastcall *v13)(__int64, const __m128i *, __int64); // rax
  unsigned __int64 v14; // rsi
  char v15; // r13
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  char v19; // r15
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 (__fastcall *v23)(__int64, const __m128i *, __int64); // rax
  unsigned __int64 v24; // rsi
  char v25; // bp
  __int64 v26; // r8
  char v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-D0h]
  unsigned __int64 *v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+18h] [rbp-C0h]
  __int64 v37; // [rsp+18h] [rbp-C0h]
  __int64 v38; // [rsp+18h] [rbp-C0h]
  __int64 *v39; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+20h] [rbp-B8h]
  __int64 v41; // [rsp+20h] [rbp-B8h]
  char v42; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+30h] [rbp-A8h]
  char v45; // [rsp+3Fh] [rbp-99h]
  __int64 v46; // [rsp+40h] [rbp-98h]
  __m128i si128; // [rsp+50h] [rbp-88h] BYREF
  __m128i v48; // [rsp+60h] [rbp-78h] BYREF
  __m128i v49; // [rsp+70h] [rbp-68h] BYREF
  __m128i v50; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v2 = *(_QWORD *)a2;
  v51 = __readfsqword(0x28u);
  v4 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(v2 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  if ( v4 == sub_773620 )
  {
    v5 = qword_2CD44F8;
    if ( qword_2CD44F8 == *(_QWORD *)(a2 + 24) && byte_2CD4500 == *(_BYTE *)(a2 + 32) )
    {
      v6 = 1;
      *(__m128i *)(a2 + 8) = _mm_load_si128(&si128);
      return v6;
    }
  }
  else
  {
    v6 = v4(a2, &si128, (__int64)&qword_2CD44F8);
    if ( v6 )
      return v6;
    v5 = qword_2CD44F8;
  }
  v6 = 0;
  if ( v5 != -1 )
  {
    if ( byte_2CD4500 )
    {
      if ( v5 < *(_QWORD *)(a1 + 56) )
      {
        v8 = *(_QWORD *)(a1 + 48) + 176 * v5;
        v34 = v8;
        sub_777860(a1, v5, v8, nullptr);
        v9 = *(_QWORD *)(v8 + 32);
        v48.m128i_i64[0] = qword_2CD44F8;
        if ( v9 )
        {
          v10 = 0;
          v11 = v9;
          do
          {
            v48.m128i_i64[1] = v10;
            v12 = *(_QWORD *)(v34 + 24) + 9 * v10;
            v13 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(*(_QWORD *)a2 + 16LL);
            if ( v13 == sub_773620 )
            {
              v14 = *(_QWORD *)v12;
              if ( *(_QWORD *)v12 == *(_QWORD *)(a2 + 24) && *(_BYTE *)(v12 + 8) == *(_BYTE *)(a2 + 32) )
              {
                *(__m128i *)(a2 + 8) = _mm_load_si128(&v48);
                return 1;
              }
            }
            else
            {
              v35 = (unsigned __int64 *)(*(_QWORD *)(v34 + 24) + 9 * v10);
              v16 = v13(a2, &v48, v12);
              v12 = (__int64)v35;
              v6 = v16;
              if ( v16 )
                return v6;
              v14 = *v35;
            }
            v15 = ++v10 < v11;
            if ( v14 == -1 )
            {
              v6 = 0;
            }
            else
            {
              v6 = 0;
              if ( *(_BYTE *)(v12 + 8) )
              {
                if ( v14 < *(_QWORD *)(a1 + 56) )
                {
                  v39 = (__int64 *)v12;
                  v42 = *(_BYTE *)(v12 + 8);
                  v36 = *(_QWORD *)(a1 + 48) + 176 * v14;
                  sub_777860(a1, v14, v36, nullptr);
                  v17 = v36;
                  v18 = *(_QWORD *)(v36 + 32);
                  v49.m128i_i64[0] = *v39;
                  if ( v18 )
                  {
                    v44 = v11;
                    v46 = v10;
                    v19 = v42;
                    v45 = v15;
                    v20 = 0;
                    while ( 1 )
                    {
                      v21 = *(_QWORD *)a2;
                      v49.m128i_i64[1] = v20;
                      v22 = *(_QWORD *)(v17 + 24) + 9 * v20;
                      v23 = *(__int64 (__fastcall **)(__int64, const __m128i *, __int64))(v21 + 16);
                      if ( v23 == sub_773620 )
                      {
                        v24 = *(_QWORD *)v22;
                        if ( *(_QWORD *)v22 == *(_QWORD *)(a2 + 24) && *(_BYTE *)(v22 + 8) == *(_BYTE *)(a2 + 32) )
                        {
                          *(__m128i *)(a2 + 8) = _mm_load_si128(&v49);
                          return 1;
                        }
                      }
                      else
                      {
                        v40 = v18;
                        v37 = v17;
                        v28 = v23(a2, &v49, v22);
                        v17 = v37;
                        v18 = v40;
                        if ( v28 )
                          return v28;
                        v24 = *(_QWORD *)v22;
                      }
                      if ( v24 == -1 || (v25 = *(_BYTE *)(v22 + 8)) == 0 )
                      {
                        v25 = v19;
                        v26 = 0;
                      }
                      else
                      {
                        v26 = 0;
                        if ( v24 < *(_QWORD *)(a1 + 56) )
                        {
                          v43 = v18;
                          v41 = v17;
                          v38 = *(_QWORD *)(a1 + 48) + 176 * v24;
                          sub_777860(a1, v24, v38, nullptr);
                          v17 = v41;
                          v18 = v43;
                          v29 = *(_QWORD *)(v38 + 32);
                          v50.m128i_i64[0] = *(_QWORD *)v22;
                          v26 = 0;
                          if ( v29 )
                          {
                            v30 = 0;
                            v31 = v29;
                            do
                            {
                              v32 = *(_QWORD *)(v38 + 24) + 9 * v30;
                              v50.m128i_i64[1] = v30++;
                              v33 = sub_7779F0(a1, &v50, v32, a2);
                            }
                            while ( v30 < v31 && !v33 );
                            v17 = v41;
                            v25 = v33 == 0;
                            v26 = v33;
                            v18 = v43;
                          }
                        }
                      }
                      if ( ++v20 >= v18 || !v25 )
                      {
                        v27 = v25;
                        v11 = v44;
                        v6 = v26;
                        v10 = v46;
                        v15 = v27 & v45;
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
          while ( v15 );
        }
      }
    }
  }
  return v6;
}
