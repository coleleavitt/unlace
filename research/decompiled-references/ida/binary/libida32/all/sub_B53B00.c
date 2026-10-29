__int64 __fastcall sub_B53B00(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int *v7; // rax

  v1 = sub_B53710(a1);
  v3 = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 16) == 26 && (*(_BYTE *)(v1 + 19) & 0x1E) != 0 )
    {
      v7 = (unsigned int *)(v2 + 8LL * *(unsigned __int16 *)(v1 + 22) + 16);
      v5 = *v7;
      v4 = v7[1];
    }
    else
    {
      v4 = 0;
      v5 = 0;
    }
    return (v4 << 32) | v5;
  }
  return v3;
}

