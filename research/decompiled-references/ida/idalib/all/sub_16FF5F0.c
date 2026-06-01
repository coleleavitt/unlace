__int64 __fastcall sub_16FF5F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int8 v9; // cl
  __int64 result; // rax
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rdx

  v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(*(_QWORD *)a2 + 16LL) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v8 = sub_B8EAA0((__int64)v7);
  v9 = *(_BYTE *)(v8 + 8) & 0x7F;
  if ( v9 > 0x12u )
  {
    if ( ((v9 + 94) & 0x7Fu) <= 5 )
      return 1;
  }
  else if ( ((1LL << v9) & 0x40182) != 0 )
  {
    return 1;
  }
  v11 = (__int64 *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
  {
    if ( v8 == sub_B8EAA0(*v11) )
      return 1;
  }
  else if ( v8 == sub_B8EAA0((__int64)v11) )
  {
    return 1;
  }
  *(_BYTE *)(a2 + 64) = *(_BYTE *)(a2 + 64) & 0xFA | 1;
  result = 0;
  if ( !*(_QWORD *)(a2 + 72) )
  {
    v15 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(*(_QWORD *)a2 + 16LL) & 4) != 0 )
      v15 = (_QWORD *)*v15;
    *(_QWORD *)(a2 + 72) = sub_16FF440(*(_QWORD **)(*(_QWORD *)a1 + 248LL), a3, (__int64)v15, v12, v13, v14);
    return 0;
  }
  return result;
}
