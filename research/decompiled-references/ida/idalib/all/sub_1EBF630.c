__int64 __fastcall sub_1EBF630(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int8 *v9; // rcx
  __int64 v10; // rsi
  const __m128i *v11; // rax
  __m128i *v12; // rdx
  const __m128i *v13; // rsi
  __m128i v14; // xmm1
  __m128i *v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-418h] BYREF
  char v18; // [rsp+10h] [rbp-410h]
  const __m128i *v19; // [rsp+18h] [rbp-408h] BYREF
  __int64 v20; // [rsp+20h] [rbp-400h]
  __int64 v21; // [rsp+28h] [rbp-3F8h] BYREF
  char v22; // [rsp+30h] [rbp-3F0h]
  __m128i v23; // [rsp+38h] [rbp-3E8h] BYREF
  int v24; // [rsp+48h] [rbp-3D8h]
  __int128 v25; // [rsp+58h] [rbp-3C8h] BYREF
  int v26; // [rsp+68h] [rbp-3B8h]
  _QWORD v27[5]; // [rsp+78h] [rbp-3A8h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-380h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-370h]
  _QWORD v30[2]; // [rsp+B8h] [rbp-368h] BYREF
  _QWORD v31[34]; // [rsp+C8h] [rbp-358h] BYREF
  void *ptr[2]; // [rsp+1D8h] [rbp-248h] BYREF
  _DWORD v33[142]; // [rsp+1E8h] [rbp-238h] BYREF

  v27[4] = 0x200000000LL;
  v27[0] = a2;
  v30[0] = v31;
  v30[1] = 0x800000000LL;
  v27[1] = a3;
  v27[2] = 0;
  v27[3] = 0;
  v28 = 0;
  v29 = 0;
  v31[32] = 0;
  sub_1EB0230((std::_V2 *)&v25, (__int64)v27);
  if ( (_QWORD)v25 )
  {
    ptr[0] = (void *)v25;
    *(_QWORD *)&v25 = 0;
    sub_A0E8E0((_QWORD **)ptr);
    if ( ptr[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[0] + 8LL))(ptr[0]);
    v4 = v25;
    v33[0] = 0;
    *(_OWORD *)ptr = 0;
    *(_OWORD *)a1 = 0;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else if ( (unsigned __int8)sub_1EBF490((__int64)v27, 0x13u) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_OWORD *)ptr = 0;
    v33[0] = 0;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    ptr[0] = v33;
    ptr[1] = (void *)0x4000000000LL;
    while ( 1 )
    {
      sub_1EB0460((__int64)&v17, (__int64)v27, 0);
      if ( (v18 & 1) != 0 )
      {
        v6 = v17;
        v17 = 0;
        *(_QWORD *)&v25 = v6;
        sub_A0E8E0((_QWORD **)&v25);
        if ( (_QWORD)v25 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 8LL))(v25);
LABEL_16:
        v26 = 0;
        *(_DWORD *)(a1 + 16) = 0;
        v25 = 0;
        *(_OWORD *)a1 = 0;
        goto LABEL_17;
      }
      if ( (_DWORD)v17 != 3 )
        goto LABEL_16;
      LODWORD(ptr[1]) = 0;
      v19 = nullptr;
      v20 = 0;
      sub_2027F10(&v21, v27, HIDWORD(v17), ptr, &v19);
      if ( (v22 & 1) != 0 )
        break;
      if ( (_DWORD)v21 == 1 )
      {
        v8 = v20;
        v9 = (__int8 *)v19;
        v26 = 0;
        v25 = 0;
        v23 = 0;
        v10 = v20;
        v24 = 0;
        if ( v20 > 0 )
        {
          if ( v20 <= 15 )
          {
            v15 = &v23;
LABEL_29:
            v15->m128i_i8[0] = *v9;
            if ( v10 != 1 )
            {
              v15->m128i_i8[1] = v9[1];
              if ( v10 != 2 )
              {
                v15->m128i_i8[2] = v9[2];
                if ( v10 != 3 )
                {
                  v15->m128i_i8[3] = v9[3];
                  if ( v10 != 4 )
                  {
                    v15->m128i_i8[4] = v9[4];
                    if ( v10 != 5 )
                    {
                      v15->m128i_i8[5] = v9[5];
                      if ( v10 != 6 )
                      {
                        v15->m128i_i8[6] = v9[6];
                        if ( v10 != 7 )
                        {
                          v15->m128i_i8[7] = v9[7];
                          if ( v10 != 8 )
                          {
                            v15->m128i_i8[8] = v9[8];
                            if ( v10 != 9 )
                            {
                              v15->m128i_i8[9] = v9[9];
                              if ( v10 != 10 )
                              {
                                v15->m128i_i8[10] = v9[10];
                                if ( v10 != 11 )
                                {
                                  v15->m128i_i8[11] = v9[11];
                                  if ( v10 != 12 )
                                  {
                                    v15->m128i_i8[12] = v9[12];
                                    if ( v10 != 13 )
                                    {
                                      v15->m128i_i8[13] = v9[13];
                                      if ( v10 != 14 )
                                        v15->m128i_i8[14] = v9[14];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v11 = v19;
            v12 = &v23;
            v13 = (const __m128i *)((char *)v19 + (v20 & 0xFFFFFFFFFFFFFFF0LL));
            do
            {
              v14 = _mm_loadu_si128(v11++);
              ++v12;
              v12[-1] = v14;
            }
            while ( v11 != v13 );
            v10 = v8 - (v8 & 0xFFFFFFFFFFFFFFF0LL);
            v9 += v8 & 0xFFFFFFFFFFFFFFF0LL;
            v15 = (__m128i *)((char *)&v23 + (v8 & 0xFFFFFFFFFFFFFFF0LL));
            if ( v8 != (v8 & 0xFFFFFFFFFFFFFFF0LL) )
              goto LABEL_29;
          }
        }
        v16 = v24;
        *(__m128i *)a1 = _mm_load_si128(&v23);
        *(_DWORD *)(a1 + 16) = v16;
        goto LABEL_23;
      }
      sub_A0AE90(&v21);
      sub_A0B030(&v17);
    }
    v7 = v21;
    v21 = 0;
    *(_QWORD *)&v25 = v7;
    sub_A0E8E0((_QWORD **)&v25);
    if ( (_QWORD)v25 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 8LL))(v25);
    v26 = 0;
    *(_DWORD *)(a1 + 16) = 0;
    v25 = 0;
    *(_OWORD *)a1 = 0;
LABEL_23:
    sub_A0AE90(&v21);
LABEL_17:
    sub_A0B030(&v17);
    if ( ptr[0] != v33 )
      free(ptr[0]);
  }
  sub_A0AEB0((__int64)v30);
  sub_A0AD20((__int64)&v28);
  return a1;
}
