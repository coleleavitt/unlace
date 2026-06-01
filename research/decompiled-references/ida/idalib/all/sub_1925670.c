unsigned __int64 __fastcall sub_1925670(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 result; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-D0h]
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = a6;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = (unsigned __int64)a5;
  v13 = *(_QWORD *)(a5[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 13 )
  {
    v14 = *(unsigned __int16 *)(v13 + 18);
    LOWORD(v14) = ((unsigned __int16)v14 >> 3) & 0x1FF;
    if ( (unsigned __int16)v14 > 0x1F1u )
    {
      if ( (_WORD)v14 == 501 && (int)a4 <= 3 )
        return sub_1C22C50(*(_QWORD *)(a1 + 776));
      if ( (_DWORD)a4 == 12 )
        return sub_19249E0(a1, a3, 0xCu, (unsigned __int64)a5, 0, a6, a7, a8);
      if ( (_DWORD)a4 == 4 )
      {
        a3 = (unsigned int)(v14 + 14);
        LOWORD(a3) = (v14 + 14) & 0x1FF;
        if ( (unsigned __int16)a3 <= 1u || (_WORD)v14 == 502 )
          return sub_19249E0(a1, v10, 4u, (unsigned __int64)a5, 0, a6, a7, a8);
      }
      a2 = (__int64)a5;
      result = sub_1907C70(a1, a5, (__m128i)a7, a8, a3, a4, (__int64)a5, a6);
      v12 = result & 0xFFFFFFFFFFFFFFFELL;
      if ( result == 1 )
        return result;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
    return sub_19249E0(a1, v10, v11, v12, v8, a6, a7, a8);
  v16 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = (*(_BYTE *)(v16 + 17) & 4) == 0;
  v18 = *(_QWORD *)(v16 + 8);
  if ( !v17 )
  {
    v20 = *(unsigned __int8 *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)v20 <= 0x2Au )
    {
      v21 = 0x4040600007CLL;
      if ( _bittest64(&v21, v20) || (_BYTE)v20 == 33 )
        return sub_19249E0(a1, v10, v11, v12, v8, a6, a7, a8);
    }
    goto LABEL_12;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47) > 1u )
    return sub_19249E0(a1, v10, v11, v12, v8, a6, a7, a8);
LABEL_12:
  if ( !(unsigned int)sub_BF97A0(v11) || v11 == 4 && (unsigned __int8)sub_18BD5E0(v12, a2) )
    return sub_19249E0(a1, v10, v11, v12, v8, a6, a7, a8);
  ptr[0] = v24;
  ptr[1] = (void *)0x1000000000LL;
  v19 = sub_BF97A0(v11);
  if ( v9 && v19 )
    sub_1A5B910(a1, v19, v9, ptr);
  result = sub_1C09DA0(a1, v10, v11, ptr, v12, 1);
  if ( ptr[0] != v24 )
  {
    v22 = result;
    free(ptr[0]);
    return v22;
  }
  return result;
}
