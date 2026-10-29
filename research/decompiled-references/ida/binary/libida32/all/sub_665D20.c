__int64 __fastcall sub_665D20(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rax

  v3 = a2;
  v4 = a3;
  if ( a3 >= a2 )
  {
    v4 = a2;
    v3 = a3;
  }
  if ( (sub_3B9AA0((__int64)a1, v4, 4) & 0x400) != 0 && !(unsigned __int8)get_fixup(0, v4) )
    return 1;
  while ( 1 )
  {
    v5 = sub_3BC980(a1, v4, v3, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3B3450, nullptr);
    v4 = v5;
    if ( v5 == -1 )
      break;
    v6 = getseg(v5);
    if ( (!v6 || (*(_BYTE *)(v6 + 24) & 8) == 0) && !(unsigned __int8)get_fixup(0, v4) )
      return 1;
  }
  return 0;
}

