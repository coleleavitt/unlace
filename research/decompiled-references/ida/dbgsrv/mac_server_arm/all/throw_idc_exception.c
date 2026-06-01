/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: throw_idc_exception
// Address: 0x000000010001ED68

//----- (000000010001ED68) ----------------------------------------------------
__int64 __fastcall throw_idc_exception(unsigned __int8 *a1, const char *a2)
{
  __int64 idc_class; // x0
  size_t v5; // x0
  size_t v6; // x21
  unsigned __int64 v7; // x22
  _BYTE *v8; // x0
  __int64 v9; // x19
  unsigned __int8 v11[8]; // [xsp+8h] [xbp-58h] BYREF
  _BYTE *v12; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v13; // [xsp+18h] [xbp-48h]
  __int64 v14; // [xsp+20h] [xbp-40h]

  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v11[0] = 2;
  v13 = 0;
  v14 = 0;
  v12 = nullptr;
  free_idcv(v11);
  if ( a2 )
  {
    v5 = strlen(a2);
    v11[0] = 7;
    v13 = 0;
    v14 = 0;
    v12 = nullptr;
    if ( v5 )
    {
      v6 = v5;
      v7 = v5 + 1;
      if ( v5 == -1 )
      {
        v8 = nullptr;
      }
      else
      {
        v8 = qvector_reserve(&v12, nullptr, v7, 1u);
        v12 = v8;
      }
      v13 = v7;
      memmove(v8, a2, v6);
      v12[v6] = 0;
    }
  }
  else
  {
    v11[0] = 7;
    v13 = 0;
    v14 = 0;
    v12 = nullptr;
  }
  set_idcv_attr((__int64)a1, "description", v11, 0);
  v9 = set_qerrno();
  free_idcv(v11);
  return v9;
}
