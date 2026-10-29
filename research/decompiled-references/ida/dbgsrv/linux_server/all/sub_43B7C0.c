/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B7C0
// Address: 0x000000000043B7C0

//----- (000000000043B7C0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_43B7C0(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4)
{
  int v4; // r12d
  unsigned __int8 *v5; // r14
  int v6; // eax
  int v8; // eax
  unsigned __int8 *v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a4;
  v9[0] = a3;
  while ( 1 )
  {
    v5 = a3;
    v6 = sub_4796E0(v9);
    if ( v6 == -1 )
      v6 = (char)*v9[0]++;
    if ( !v6 )
      break;
    v5 = v9[0];
    a3 = v9[0];
    if ( *(char *)(a1 + 184) == v6 )
    {
      v8 = sub_4796E0(v9);
      if ( v8 == -1 )
        v8 = (char)*v9[0]++;
      if ( !v8 )
        break;
      a3 = v9[0];
    }
    else if ( v4 == v6 )
    {
      sub_43B570(a1, a2, v9[0], *(_DWORD *)(a1 + 124));
      return v9[0];
    }
  }
  sub_43B570(a1, a2, v5, *(_DWORD *)(a1 + 176));
  return nullptr;
}
