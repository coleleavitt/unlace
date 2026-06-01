__int64 __fastcall sub_235180(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // eax
  _DWORD *v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  int v9; // r13d
  __int64 *v10; // rdi
  __m128i v11; // xmm0
  unsigned int *v12; // rdx
  __int64 v13; // rax
  void (__fastcall *v14)(__int64 *, _QWORD, __m128i *); // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int16 v18; // ax
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+8h] [rbp-60h]
  __m128i v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned int *v23; // [rsp+28h] [rbp-40h]

  result = sub_F86870(*(_QWORD *)(a1 + 16));
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 16);
    v19 = 0;
    v20 = v3;
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v6 = *(_DWORD **)(a1 + 16);
    v7 = v5;
    v8 = v6[2];
    (*(void (**)(void))(*(_QWORD *)v6 + 16LL))();
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
    if ( v8 != v9 )
    {
      while ( 1 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v8);
        v16 = *(_QWORD *)(v15 + 8);
        v17 = v15;
        v18 = *(_WORD *)(v16 + 4);
        if ( v18 )
        {
          if ( v18 == 2 )
          {
LABEL_5:
            sub_158A340(a1 + 32, v16, &v19, a1 + 528);
            v10 = *(__int64 **)(a1 + 16);
            v11 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
            v12 = *(unsigned int **)(v17 + 24);
            v13 = *v10;
            v22 = 0;
            v23 = v12;
            v14 = *(void (__fastcall **)(__int64 *, _QWORD, __m128i *))(v13 + 32);
            v21 = _mm_unpacklo_epi64(v11, (__m128i)(unsigned __int64)v19);
            if ( v19 )
              ++*(_DWORD *)(v19 + 8);
            if ( v12 )
              *v12 = (*v12 + 1) & 0x3FFFFFFF | *v12 & 0xC0000000;
            v14(v10, v8, &v21);
            sub_234F80(v21.m128i_i64);
          }
        }
        else if ( (*(_BYTE *)(v16 + 30) & 2) != 0 )
        {
          goto LABEL_5;
        }
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16))
          || v8 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16)) )
        {
          v8 = v7;
          if ( v7 == v9 )
            return sub_22BCA0(v19, v20);
        }
        else if ( ++v8 == v9 )
        {
          return sub_22BCA0(v19, v20);
        }
      }
    }
    return sub_22BCA0(v19, v20);
  }
  return result;
}

