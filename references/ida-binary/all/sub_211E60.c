__int64 __fastcall sub_211E60(unsigned int a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  unsigned int v4; // edx

  if ( dbg && *(char *)(dbg + 34) < 0 )
  {
    LOBYTE(v4) = (unsigned int)sub_20CEA0(dbg, 39, (unsigned int)dword_8CC428, a1) == 1;
    return v4;
  }
  else
  {
    v1 = sub_234FE0((unsigned int)dword_8CC428);
    v2 = 0;
    if ( v1 )
      LOBYTE(v2) = (a1 & *(char *)(v1 + 153)) != 0;
    return v2;
  }
}
