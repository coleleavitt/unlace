bool __fastcall sub_1F6AD70(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 18 > 0x3F )
    return 0;
  v1 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = (_QWORD *)*v1;
  v2 = *(_BYTE *)(sub_B8EAA0((__int64)v1) + 8) & 0x7F;
  return (!v2 || v2 == 24) && (unsigned __int8)sub_B844D0((_BYTE *)a1) == 2;
}
