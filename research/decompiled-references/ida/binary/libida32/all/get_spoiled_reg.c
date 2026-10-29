__int64 __fastcall get_spoiled_reg(__int64 a1, const char *a2, unsigned __int64 a3)
{
  __int64 ph; // rax
  int v6; // edx
  int v7; // r9d
  int v8; // ecx
  _DWORD *v9; // rsi
  unsigned __int16 *i; // rcx
  __int64 result; // rax
  __int64 v12; // rdx

  ph = get_ph(a1, a2);
  v6 = *(unsigned __int16 *)(a1 + 12);
  v7 = 0;
  v8 = *(_DWORD *)(ph + 104);
  if ( v6 >= v8 && v6 < *(_DWORD *)(ph + 108) )
    v7 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * (v6 - v8) + 8);
  v9 = dword_2389980;
  for ( i = (unsigned __int16 *)(a1 + 30); *((_BYTE *)i - 5) != 1 || (*v9 & v7) == 0 || !a3; i += 12 )
  {
LABEL_6:
    if ( ++v9 == (_DWORD *)&unk_23899A0 )
      return 0xFFFFFFFFLL;
  }
  result = 0;
  v12 = 0;
  while ( *i != *(_DWORD *)&a2[4 * v12] )
  {
    result = (unsigned int)(result + 1);
    v12 = (int)result;
    if ( (int)result >= a3 )
      goto LABEL_6;
  }
  return result;
}

