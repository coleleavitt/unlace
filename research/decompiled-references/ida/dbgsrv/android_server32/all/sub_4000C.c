/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4000C
// Address: 0x0004000C

//----- (0004000C) --------------------------------------------------------
bool __fastcall sub_4000C(int a1, unsigned __int8 *a2, char *a3)
{
  int v5; // r2
  int v6; // r0
  const char *v7; // r0
  unsigned __int8 *idc_gvar; // r0
  int v9; // r5
  void *v11; // r0
  size_t v12; // [sp+4h] [bp-14h]
  void *v13; // [sp+8h] [bp-10h] BYREF
  size_t v14; // [sp+Ch] [bp-Ch]
  int v15; // [sp+10h] [bp-8h]

  v5 = 0;
  if ( !a2 )
    return get_idcv_attr(a1, v5, a3, 0) == 0;
  v6 = *a2;
  if ( v6 == 7 )
  {
    if ( *((_DWORD *)a2 + 3) )
      v7 = *((const char **)a2 + 2);
    else
      v7 = &byte_B3CBE;
    idc_gvar = (unsigned __int8 *)find_idc_gvar(v7);
    if ( !idc_gvar )
    {
      set_qerrno(1532);
      return 0;
    }
    a2 = idc_gvar;
    v6 = *idc_gvar;
  }
  if ( v6 != 5 || a3 && *a3 )
  {
    v5 = (int)a2;
    return get_idcv_attr(a1, v5, a3, 0) == 0;
  }
  v14 = 0;
  v13 = nullptr;
  v15 = 0;
  if ( get_idcv_class_name((int)&v13, (int)a2) )
  {
    v9 = 0;
  }
  else
  {
    free_idcv((unsigned __int8 *)a1);
    *(_BYTE *)a1 = 7;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    v9 = 1;
    if ( v14 )
    {
      v12 = v14;
      v11 = qalloc_or_throw(v14);
      *(_DWORD *)(a1 + 16) = v12;
      *(_DWORD *)(a1 + 8) = v11;
      qmemcpy(v11, v13, v12);
      *(_DWORD *)(a1 + 12) = v12;
    }
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v15 = 0;
    v13 = nullptr;
  }
  return v9;
}
// B3CBE: using guessed type char byte_B3CBE;
