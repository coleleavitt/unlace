bool __fastcall sub_3EFD10(__int64 a1, __int64 a2, double a3)
{
  char v3; // al
  int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  __int64 v9; // rdx
  int v10; // eax

  v3 = *(_BYTE *)(a2 + 41);
  if ( !v3 )
    return 0;
  v4 = 0;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    {
      if ( v3 == 1 || v3 == 12 )
      {
        v5 = v4;
        v6 = a2 + 40LL * v4;
        if ( (unsigned __int16)(*(_WORD *)(v6 + 46) - 163) <= 0x1Fu && *(char *)(v6 + 72) > 0 && !*(_BYTE *)(v6 + 74) )
        {
LABEL_11:
          v7 = sub_3EE110(a1, a2 + 8 * (5 * v5 + 5), a3);
          return get_dtype_size(v7) == 16;
        }
      }
    }
    else if ( v3 == 1 )
    {
      v5 = v4;
      v9 = a2 + 40LL * v4;
      v10 = *(unsigned __int16 *)(v9 + 46);
      if ( (unsigned int)(v10 - 45) <= 0xF
        || (unsigned int)(v10 - 61) <= 0x1F && (unsigned __int64)get_dtype_size(*(unsigned __int8 *)(v9 + 45)) <= 7 )
      {
        goto LABEL_11;
      }
    }
    v3 = *(_BYTE *)(a2 + 40LL * ++v4 + 41);
  }
  while ( v3 );
  return 0;
}
