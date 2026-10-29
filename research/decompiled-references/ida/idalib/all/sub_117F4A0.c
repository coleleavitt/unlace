__int64 __fastcall sub_117F4A0(_DWORD *a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // eax
  int v4; // eax
  size_t v5; // r12
  const void *v6; // rax
  __int64 v7; // rdx

  if ( sub_113D7A0(a1) )
    return 1;
  LOBYTE(v3) = sub_1139440(a1);
  v1 = v3;
  if ( (_BYTE)v3 )
    return 1;
  v4 = a1[8];
  if ( (unsigned int)(v4 - 27) <= 1 )
  {
    if ( a1[10] || a1[11] )
      return v1;
    v5 = j__strlen("elf");
    v6 = (const void *)sub_22B76B0(a1);
    if ( v5 != v7 || v5 && memcmp(v6, "elf", v5) )
    {
      v4 = a1[8];
      goto LABEL_10;
    }
    return 1;
  }
LABEL_10:
  if ( (unsigned int)(v4 - 21) <= 3 && !a1[11] )
    LOBYTE(v1) = a1[12] == 15;
  return v1;
}
