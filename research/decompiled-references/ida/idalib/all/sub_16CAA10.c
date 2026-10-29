__int64 __fastcall sub_16CAA10(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL);
  v9 = *(_QWORD *)(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL);
  if ( !(unsigned __int8)sub_F613D0(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, (__int64)a3, a4, a5, a6)
    || (result = sub_F613D0(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v10, v11, v12, v13), !(_BYTE)result)
    || (*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)v8 | (unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
  {
    v15 = *a3;
    v26[1] = (__int64)(a3 + 1);
    v26[0] = v15;
    v16 = (unsigned int)sub_F6CCB0(v26, a7);
    result = sub_183BD10(a1, v16, v9, v8);
    if ( (_BYTE)result )
    {
      v21 = sub_F63270(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), v16, v17, v18, v19, v20);
      sub_7052B0((__int64 *)(v21[13] + 96LL), v21[13], v22, v23, v24, v25);
      return (*(_BYTE *)(v21[16] + 1LL) & 0x10) != 0;
    }
  }
  return result;
}
