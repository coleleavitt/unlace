void __fastcall sub_208B960(__m128 *a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rbp
  _QWORD *v7; // r12
  volatile signed __int32 *v8; // r13
  signed __int32 v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int32 v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // [rsp+0h] [rbp-1A0h] BYREF
  void *v21[2]; // [rsp+8h] [rbp-198h] BYREF
  _BYTE v22[16]; // [rsp+18h] [rbp-188h] BYREF
  __m128i v23[2]; // [rsp+28h] [rbp-178h] BYREF
  __int16 v24; // [rsp+48h] [rbp-158h]
  __m128i v25[2]; // [rsp+58h] [rbp-148h] BYREF
  __int16 v26; // [rsp+78h] [rbp-128h]
  __m128i v27[3]; // [rsp+88h] [rbp-118h] BYREF
  __m128i v28[2]; // [rsp+B8h] [rbp-E8h] BYREF
  __int16 v29; // [rsp+D8h] [rbp-C8h]
  __m128i v30[3]; // [rsp+E8h] [rbp-B8h] BYREF
  __m128i v31[2]; // [rsp+118h] [rbp-88h] BYREF
  __int16 v32; // [rsp+138h] [rbp-68h]
  __m128i v33[5]; // [rsp+148h] [rbp-58h] BYREF

  if ( a2[1] )
  {
    v3 = (_QWORD *)operator new(0x20u);
    v4 = *a2;
    v5 = a2[1];
    v6 = v3;
    v3[1] = 0x100000001LL;
    v7 = v3 + 2;
    *v3 = off_2C051B8;
    sub_2233940(v3 + 2, v4, v5, 0);
    v20 = v7;
    v8 = (volatile signed __int32 *)a1->m128_u64[1];
    v20 = v6;
    *a1 = _mm_loadh_ps((const double *)&v20);
    if ( v8 )
    {
      if ( &_pthread_key_create )
      {
        v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
      }
      else
      {
        v9 = *((_DWORD *)v8 + 2);
        *((_DWORD *)v8 + 2) = v9 - 1;
      }
      if ( v9 == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
        if ( &_pthread_key_create )
        {
          v13 = _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF);
        }
        else
        {
          v13 = *((_DWORD *)v8 + 3);
          *((_DWORD *)v8 + 3) = v13 - 1;
        }
        if ( v13 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 24LL))(v8);
      }
      v7 = (_QWORD *)a1->m128_u64[0];
    }
    v21[1] = nullptr;
    v21[0] = v22;
    v22[0] = 0;
    if ( !(unsigned __int8)sub_2233C80(v7, v21) )
    {
      v25[0].m128i_i64[0] = (__int64)a2;
      v31[0].m128i_i64[0] = (__int64)v21;
      v28[0].m128i_i64[0] = (__int64)"' in -pass-remarks: ";
      v23[0].m128i_i64[0] = (__int64)"Invalid regular expression '";
      v32 = 260;
      v29 = 259;
      v26 = 260;
      v24 = 259;
      sub_A41580(v27, v23, v25, v10, v11, v12);
      sub_A41580(v30, v27, v28, v14, v15, v16);
      sub_A41580(v33, v30, v31, v17, v18, v19);
      sub_2221AD0(v33, 0);
    }
    if ( v21[0] != v22 )
      operator delete(v21[0]);
  }
}
