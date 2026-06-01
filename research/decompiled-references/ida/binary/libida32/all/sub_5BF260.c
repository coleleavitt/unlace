__int64 __fastcall sub_5BF260(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  unsigned int *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // eax

  v2 = *(unsigned __int8 *)(a1 + 74);
  if ( !(_BYTE)v2 )
    return 0;
  v4 = getn_func(a2);
  v5 = (unsigned int *)v4;
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(545);
    BUG();
  }
  v6 = *(_QWORD *)(v4 + 8);
  if ( (v6 & 4) == 0 )
  {
    if ( (v6 & 0x80u) != 0LL )
    {
      v7 = sub_5BE2D0(v5);
      LOBYTE(v2) = (unsigned __int8)segtype(v7) == 1;
      return v2;
    }
    return 0;
  }
  return v2;
}

