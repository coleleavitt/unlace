__int64 __fastcall sub_1A0A380(__int64 a1, __int64 a2)
{
  int v2; // ecx
  _WORD *v3; // r12
  __int16 v4; // ax

  v2 = *(unsigned __int8 *)(a2 + 16);
  if ( (unsigned int)(v2 - 2) > 1 && (_BYTE)v2 != 5 )
    return 6;
  v3 = (_WORD *)sub_BFB9F0(a1);
  v4 = *v3 & 0x1FF;
  if ( v4 == 37 )
  {
    if ( (unsigned __int8)sub_F57EE0(*(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
      return 0;
    v4 = *v3 & 0x1FF;
  }
  if ( v4 == 9 )
    __asm { jmp     rax }
  return 6;
}
