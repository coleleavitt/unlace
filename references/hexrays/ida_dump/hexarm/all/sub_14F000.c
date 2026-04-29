__int64 __fastcall sub_14F000(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  _QWORD v10[13]; // [rsp+0h] [rbp-68h] BYREF

  v10[7] = __readfsqword(0x28u);
  LOBYTE(v6) = sub_1255A0((unsigned __int8 *)(a3 + 32), a3 + 48, 0);
  if ( (_BYTE)v6 )
  {
    v7 = v6;
    if ( a2 || (memset(&v10[1], 0, 32), v10[0] = &off_4D83C0, v10[5] = a1, !(unsigned int)sub_11F1A0((_BYTE *)a3, v10)) )
    {
      v8 = 0;
      if ( *(_DWORD *)a3 <= 0x34u )
        v8 = (0x1532A600000000uLL >> *(_DWORD *)a3) & 1;
      *a4 = v8;
      *(_DWORD *)(a3 + 4) &= ~0x10u;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
