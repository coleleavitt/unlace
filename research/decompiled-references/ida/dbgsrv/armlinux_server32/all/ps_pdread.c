/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdread
// Address: 0x0001C830

//----- (0001C830) --------------------------------------------------------
int __fastcall ps_pdread(int *a1, int a2, unsigned int *a3, int a4)
{
  int (__fastcall **v8)(_DWORD, int); // r1
  int v9; // r9
  int result; // r0
  int v11; // r1
  int v12; // r10
  int (__fastcall **v13[2])(_DWORD, int); // [sp+8h] [bp-10h] BYREF
  int v14; // [sp+10h] [bp-8h]

  v14 = 0;
  v8 = (int (__fastcall **)(_DWORD, int))*a1;
  v13[0] = (int (__fastcall **)(_DWORD, int))&off_D052C;
  v13[1] = v8;
  sub_57274(v13);
  v9 = v14;
  result = 2;
  if ( v14 )
  {
    v11 = *(_DWORD *)(v14 + 1072);
    v12 = *(unsigned __int8 *)(v14 + 1077);
    if ( v11 != -1 )
    {
      if ( *(_BYTE *)(v14 + 1077) || *(_DWORD *)(v14 + 1068) == -1 )
        return 1;
      if ( sub_1C68C(v14, v11, a2, a3, a4, 0) > 0 )
        return 0;
      v12 = *(unsigned __int8 *)(v9 + 1077);
    }
    if ( !v12 && *(_DWORD *)(v9 + 1068) != -1 )
      return sub_1C68C(v9, *a1, a2, a3, a4, 0) <= 0;
    return 1;
  }
  return result;
}
// D052C: using guessed type _UNKNOWN *off_D052C;
