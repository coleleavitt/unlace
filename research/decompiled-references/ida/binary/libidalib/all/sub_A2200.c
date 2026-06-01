__int64 __fastcall sub_A2200(_DWORD *a1, _BYTE *a2, bool *a3)
{
  unsigned __int64 *v4; // rax
  int v5; // edx
  __int64 result; // rax
  char v7; // al
  bool v8; // r12
  __int64 flags; // rax
  char v10; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-30h] BYREF

  v11 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v10;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v11 != v4 );
  v5 = decode_insn();
  result = 0;
  if ( v5 > 0 )
  {
    *a1 = 0;
    v7 = is_call_insn();
    *a2 = v7;
    v8 = v7;
    flags = get_flags_ex();
    if ( (flags & 0x10000) == 0 || (~(_WORD)flags & 0x600) != 0 )
    {
      v8 = 1;
    }
    else if ( !v8 || (flags & 0x1000) == 0 )
    {
      v8 = sub_9E360() == 1;
    }
    *a3 = v8;
    return 1;
  }
  return result;
}

