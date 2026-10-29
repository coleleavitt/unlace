__int64 __fastcall sub_115B760(_DWORD *a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // eax
  int v4; // eax
  size_t v5; // r12
  const void *v6; // rax
  __int64 v7; // rdx

  if ( sub_1119A60(a1) )
    return 1;
  LOBYTE(v3) = sub_1115700(a1);
  v1 = v3;
  if ( (_BYTE)v3 )
    return 1;
  v4 = a1[8];
  if ( (unsigned int)(v4 - 27) <= 1 )
  {
    if ( a1[10] || a1[11] )
      return v1;
    v5 = j__strlen("elf");
    v6 = (const void *)sub_2293970(a1);
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

