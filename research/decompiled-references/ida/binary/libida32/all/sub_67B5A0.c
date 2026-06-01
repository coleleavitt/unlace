__int64 __fastcall sub_67B5A0(__int64 a1, __int64 a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // rax
  unsigned int v6; // r12d

  v5 = *a4;
  if ( *a4 >= a4[1] )
  {
    sub_67B300(a1, (unsigned __int64 *)a2, 0, a3, (__int64)a4);
    return 0;
  }
  else
  {
    v6 = *v5;
    *a4 = v5 + 1;
    sub_67B300(a1, (unsigned __int64 *)a2, v6, a3, (__int64)a4);
    if ( (v6 & 4) != 0 )
      *(_DWORD *)(a2 + 28) = (unsigned __int16)unpack_dw(a4, a4[1]);
    if ( (v6 & 8) != 0 )
      *(_DWORD *)(a2 + 24) = unpack_dd(a4);
    return v6;
  }
}

