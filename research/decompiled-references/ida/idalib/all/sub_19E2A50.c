__int64 __fastcall sub_19E2A50(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int16 v6; // ax
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(_WORD *)a3;
  v7 = *(_QWORD *)(a3 + 8);
  v14[0] = a3;
  if ( (v6 & 0x1FF) == 0x20 )
  {
    v8 = *(_QWORD *)(a3 + 16);
    a3 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v8 & 4) != 0 )
    {
      if ( a3 )
        v7 = *(_QWORD *)(a3 + 80);
    }
    else if ( a3 )
    {
      v7 = *(_QWORD *)(a3 + 56);
    }
  }
  v9 = sub_19CF160(v7, a2, a3, a4);
  result = sub_19CF160(a2, a2, v10, v11);
  if ( v9 == 1 && (_DWORD)result == 4 )
  {
    v13 = sub_EEB7E0(v14[0], a2, *(double *)a5.m128_u64);
    return sub_19E21D0(a1, v13, a2, v7, v14, 1u, a5, a6);
  }
  return result;
}
