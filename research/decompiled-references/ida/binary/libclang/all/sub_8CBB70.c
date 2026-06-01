__int64 __fastcall sub_8CBB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi

  v3 = sub_8CB420(a1, a3);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( !(unsigned __int8)sub_8CBAD0(a1, a2, v3) )
    return 0;
  result = *(unsigned __int8 *)(v4 + 496);
  if ( (_BYTE)result )
    return result;
  v6 = *(_QWORD *)(v4 + 8);
  if ( (v6 & 4) == 0 && (v7 = v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v7 + 28) & 0x7Fu) - 33 <= 3 )
    return sub_7A5D20(v7);
  else
    return 0;
}

