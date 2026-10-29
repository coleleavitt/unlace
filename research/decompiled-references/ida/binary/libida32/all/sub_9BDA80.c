__int64 __fastcall sub_9BDA80(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 result; // rax
  __int16 v4; // dx

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 48 )
    return 0;
  v1 = sub_B4F900(a1);
  if ( !v1 )
    return 0;
  v2 = sub_B685F0(a1);
  while ( 1 )
  {
    result = sub_BD9B60(v1, v2);
    v4 = *(_WORD *)result & 0x1FF;
    if ( ((v4 + 433) & 0x1FFu) > 9 )
      break;
    if ( ((*(_WORD *)(result + 2) >> 3) & 0x7F) != 2 )
      return 0;
    v1 = *(_QWORD *)(result + 16);
    if ( !v1 )
      BUG();
  }
  if ( v4 != 71 || a1 != *(_QWORD *)(result + 16) )
    return 0;
  return result;
}

