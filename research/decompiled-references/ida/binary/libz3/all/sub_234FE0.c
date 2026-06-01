// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_234FE0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // eax
  _DWORD *v4; // rdi
  unsigned int v5; // r13d
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // rdi
  unsigned int *v9; // rdx
  __m128i v10; // xmm0
  void (__fastcall *v11)(__int64, _QWORD, __m128i *); // [rsp+8h] [rbp-70h]
  __int64 v12; // [rsp+18h] [rbp-60h]
  __m128i v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  unsigned int *v15; // [rsp+38h] [rbp-40h]

  result = sub_F86870(*(_QWORD *)(a1 + 16));
  if ( (_BYTE)result )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
    v4 = *(_DWORD **)(a1 + 16);
    v5 = v3;
    v6 = v4[2];
    (*(void (**)(void))(*(_QWORD *)v4 + 16LL))();
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
    while ( v6 != v7 )
    {
      while ( 1 )
      {
        if ( *(_WORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                                      *(_QWORD *)(a1 + 16),
                                      v6)
                                  + 8)
                      + 4LL) == 2
          && (unsigned __int8)sub_1537200(*(_QWORD *)(a1 + 8)) )
        {
          v8 = *(_QWORD *)(a1 + 16);
          v11 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v8 + 32LL);
          v9 = *(unsigned int **)((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v6) + 24);
          v14 = 0;
          v10 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
          v15 = v9;
          v13 = _mm_unpacklo_epi64(v10, (__m128i)0LL);
          if ( v9 )
            *v9 = (*v9 + 1) & 0x3FFFFFFF | *v9 & 0xC0000000;
          v11(v8, v6, &v13);
          sub_234F80(v13.m128i_i64);
        }
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
          || v6 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
        {
          break;
        }
        if ( ++v6 == v7 )
          return sub_22BCA0(0, v12);
      }
      v6 = v5;
    }
    return sub_22BCA0(0, v12);
  }
  return result;
}

