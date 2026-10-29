/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E84A
// Address: 0x0008E84A

//----- (0008E84A) --------------------------------------------------------
int __fastcall sub_8E84A(int a1, _BYTE *a2, unsigned int a3)
{
  int result; // r0
  unsigned int v5; // r7
  __int64 v6; // r2
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  _BYTE *v10; // r2
  bool v11; // zf
  unsigned int v12; // r0

  result = -102;
  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    v6 = *(_QWORD *)(a1 + 104);
    v7 = sub_8F128(a1, *(_DWORD *)(a1 + 48), v6 + 22, (unsigned __int64)(v6 + 22) >> 32, 0);
    v8 = a3;
    if ( v5 >= a3 )
      v5 = a3;
    if ( v7 )
      return -1;
    if ( v5 )
    {
      *a2 = 0;
      v9 = (*(int (__fastcall **)(_DWORD, _DWORD, _BYTE *, unsigned int))(a1 + 4))(
             *(_DWORD *)(a1 + 28),
             *(_DWORD *)(a1 + 48),
             a2,
             v5);
      v8 = a3;
      v10 = a2;
      v11 = v9 == v5;
      result = -1;
      if ( !v11 )
        return result;
    }
    else
    {
      v10 = a2;
      result = 0;
      if ( !a2 )
        return result;
    }
    v12 = *(_DWORD *)(a1 + 64);
    if ( v12 < v8 )
      v10[v12] = 0;
    return v5;
  }
  return result;
}
