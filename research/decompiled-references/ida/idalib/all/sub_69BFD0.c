__int64 __fastcall sub_69BFD0(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // r14d
  unsigned __int64 **v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 **v11; // rbx

  v4 = sub_698410(*a2, a2[1]);
  if ( v4 )
    return v4;
  sub_39ADA0(0x2Du, a2);
  v6 = (unsigned __int64 **)*a2;
  v7 = *a2 + 104 * a2[1];
  if ( *a2 == v7 )
    return v4;
LABEL_10:
  v9 = *a1;
  v10 = **v6;
  if ( v10 != -1 && (*(_BYTE *)(v9 + 940) & 8) != 0 )
    v10 &= ~1uLL;
  v11 = v6;
  while ( 1 )
  {
    v11 += 13;
    if ( (unsigned __int64 **)v7 == v11 )
      break;
    v8 = **v11;
    if ( v8 != -1 && (*(_BYTE *)(v9 + 940) & 8) != 0 )
      v8 &= ~1uLL;
    if ( v10 != v8 )
    {
      sub_69B800(a1, v10, (__int64)v6, (__int64)v11);
      v6 = v11;
      *((_OWORD *)a1 + 4) = -1;
      goto LABEL_10;
    }
  }
  sub_69B800(a1, v10, (__int64)v6, v7);
  *((_OWORD *)a1 + 4) = -1;
  sub_39ADA0(0x2Eu, a2);
  return v4;
}
