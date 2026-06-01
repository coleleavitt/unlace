char *__fastcall object_derive_im4m_name(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // x22
  __int64 v5; // x21
  __int64 v6; // x0
  int v7; // w2
  int v8; // w3
  int v9; // w4
  int v10; // w5
  int v11; // w6
  int v12; // w7
  vm_address_t v13; // x20
  const char *v14; // x0

  v4 = *(_QWORD *)(a2 + 6800);
  v5 = *(_QWORD *)(a2 + 6960);
  v6 = _simple_salloc(a1);
  v13 = v6;
  if ( v4 )
    _simple_sprintf(v6, "apticket.%s.%llX.im4m", v7, v8, v9, v10, v11, v12, v5);
  else
    _simple_sprintf(v6, "apticket.%s.im4m", v7, v8, v9, v10, v11, v12, v5);
  v14 = (const char *)_simple_string(v13);
  strlcpy(a3, v14, 0xFFu);
  _simple_sfree(v13);
  return a3;
}
