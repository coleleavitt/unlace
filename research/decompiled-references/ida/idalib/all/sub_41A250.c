__int64 __fastcall sub_41A250(int a1, char a2, unsigned __int8 a3, __int64 *a4)
{
  int v6; // edi
  unsigned __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v12; // edi

  if ( a3 )
  {
    v6 = 8 * a1;
    v7 = -1;
    if ( a3 > v6 )
      a3 = v6;
    v8 = a3;
    LODWORD(v9) = a3 & 0xC0;
    if ( !(_DWORD)v9 )
      v7 = (1LL << v8) - 1;
    v10 = *a4;
    if ( v6 <= v8 || (a2 & 1) == 0 )
    {
      LODWORD(v9) = 1;
LABEL_9:
      *a4 = v10 & v7;
      return (unsigned int)v9;
    }
    if ( (a2 & 0x10) == 0 )
    {
      LOBYTE(v9) = v7 >= v10;
      goto LABEL_9;
    }
    v12 = v6 - v8;
    if ( (unsigned __int64)v12 > 0x3F )
    {
      LODWORD(v9) = 0;
      if ( v10 < -1 )
        goto LABEL_9;
      v9 = 0;
    }
    else
    {
      LODWORD(v9) = 0;
      if ( v10 < (__int64)0x8000000000000000LL >> v12 )
        goto LABEL_9;
      v9 = 0x7FFFFFFFFFFFFFFFLL >> v12;
    }
    LOBYTE(v9) = v10 <= v9;
    goto LABEL_9;
  }
  *a4 = 0;
  return 0;
}
