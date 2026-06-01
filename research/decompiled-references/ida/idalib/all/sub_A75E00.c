unsigned __int64 __fastcall sub_A75E00(_QWORD *a1, __int64 a2)
{
  char v2; // al
  unsigned __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v4 = sub_A73320(a1, a2);
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v2 - 2) <= 4u || (unsigned __int8)(v2 - 25) <= 1u )
    v4 = sub_A75D20(a1, v4);
  return sub_6D5440(&v4);
}
