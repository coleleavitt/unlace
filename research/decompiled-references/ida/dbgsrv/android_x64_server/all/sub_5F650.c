/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F650
// Address: 0x000000000005F650

//----- (000000000005F650) ----------------------------------------------------
__int64 __fastcall sub_5F650(__int64 a1, _BYTE *a2)
{
  const char *v3; // rsi
  const char *idcv_attr; // rax
  const char *v5; // r14
  size_t v6; // rdx

  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  else
    v3 = s1;
  idcv_attr = next_idcv_attr(a1, v3);
  v5 = idcv_attr;
  if ( idcv_attr )
    v6 = strlen(idcv_attr);
  else
    v6 = 0;
  *a2 = 7;
  sub_4ABC0((__int64)(a2 + 8), v5, v6);
  return 0;
}
