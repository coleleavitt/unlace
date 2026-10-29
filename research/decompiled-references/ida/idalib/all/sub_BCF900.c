__int64 __fastcall sub_BCF900(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_B8E970(a2);
  if ( !v2 )
    return 1;
  v3 = v2;
  while ( 1 )
  {
    v4 = *(_BYTE *)(v3 + 28) & 0x7F;
    if ( ((v4 + 121) & 0x7Fu) > 1
      && ((unsigned int)v4 - 59 > 2 || (v5 = *(_QWORD *)(v3 + 128)) == 0 || (*(_BYTE *)(v5 + 10) & 0x20) == 0) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*a1 + 56LL))(*a1, v3);
      if ( !(_BYTE)result )
        break;
    }
    v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v3 )
      return 1;
  }
  return result;
}
