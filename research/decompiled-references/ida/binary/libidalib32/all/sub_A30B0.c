__int64 __fastcall sub_A30B0(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  unsigned int v4; // edx

  if ( dbg && *(char *)(dbg + 34LL) < 0 )
  {
    LOBYTE(v4) = (unsigned int)sub_9E0A0() == 1;
    return v4;
  }
  else
  {
    v1 = sub_C4D00((unsigned int)dword_251408);
    v2 = 0;
    if ( v1 )
      LOBYTE(v2) = (a1 & *(char *)(v1 + 153)) != 0;
    return v2;
  }
}

