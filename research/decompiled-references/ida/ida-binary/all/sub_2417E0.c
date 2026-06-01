__int64 __fastcall sub_2417E0(__int64 a1, double a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( *(_DWORD *)a1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    {
      v3 = sub_241540((unsigned int *)a1, a2);
      if ( !(unsigned int)decode_insn(a1 + 16, v3, v4, v5, v6, v7, a2) )
        *(_QWORD *)(a1 + 32) = -1;
      *(_DWORD *)(a1 + 4) |= 2u;
    }
    return a1 + 16;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = -1;
    return a1 + 16;
  }
}
