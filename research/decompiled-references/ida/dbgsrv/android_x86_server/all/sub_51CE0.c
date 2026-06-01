/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51CE0
// Address: 0x00051CE0

//----- (00051CE0) --------------------------------------------------------
int __cdecl sub_51CE0(int a1, char *a2, char *s2)
{
  char *idc_gvar; // eax
  char v4; // cl
  char *v5; // eax
  int v6; // ecx
  size_t v8; // edi
  void *v9; // eax
  int v10; // esi
  void *v11; // [esp+18h] [ebp-24h] BYREF
  size_t v12; // [esp+1Ch] [ebp-20h]
  int v13; // [esp+20h] [ebp-1Ch]
  unsigned int v14; // [esp+28h] [ebp-14h]

  idc_gvar = a2;
  v14 = __readgsdword(0x14u);
  if ( !a2 )
  {
    idc_gvar = nullptr;
LABEL_12:
    LOBYTE(v6) = get_idcv_attr(a1, (int)idc_gvar, s2, 0) == 0;
    return v6;
  }
  v4 = *a2;
  if ( *a2 == 7 )
  {
    if ( *((_DWORD *)a2 + 2) )
      v5 = *((char **)a2 + 1);
    else
      v5 = byte_EF875;
    idc_gvar = (char *)find_idc_gvar(v5);
    if ( !idc_gvar )
    {
      set_qerrno(1532);
      return 0;
    }
    v4 = *idc_gvar;
  }
  if ( v4 != 5 || s2 && *s2 )
    goto LABEL_12;
  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  if ( get_idcv_class_name((int)&v11, (int)idc_gvar) )
  {
    v6 = 0;
  }
  else
  {
    free_idcv((char *)a1);
    *(_BYTE *)a1 = 7;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    v8 = v12;
    LOBYTE(v6) = 1;
    if ( v12 )
    {
      v9 = qalloc_or_throw(v12);
      *(_DWORD *)(a1 + 4) = v9;
      *(_DWORD *)(a1 + 12) = v8;
      memcpy(v9, v11, v8);
      *(_DWORD *)(a1 + 8) = v8;
      LOBYTE(v6) = 1;
    }
  }
  if ( v11 )
  {
    v10 = v6;
    v12 = 0;
    qfree(v11);
    v11 = nullptr;
    v13 = 0;
    return v10;
  }
  return v6;
}
// 51D75: variable 'v6' is possibly undefined
