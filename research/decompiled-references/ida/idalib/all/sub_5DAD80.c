__int64 __fastcall sub_5DAD80(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *(unsigned __int8 *)(a1 + 74);
  if ( !(_BYTE)v2 )
    return 0;
  v4 = getn_func(a2);
  v5 = (__int64 *)v4;
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(545);
    BUG();
  }
  v6 = *(_QWORD *)(v4 + 16);
  if ( (v6 & 4) == 0 )
  {
    if ( (v6 & 0x80u) != 0LL )
    {
      v7 = sub_5D9D10(v5);
      LOBYTE(v2) = (unsigned __int8)segtype(v7) == 1;
      return v2;
    }
    return 0;
  }
  return v2;
}
