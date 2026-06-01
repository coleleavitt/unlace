__int64 __fastcall sub_FF640(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax

  v2 = a1[157];
  *((_WORD *)a1 + 616) = 0;
  while ( v2 )
  {
    sub_FEB10(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[163];
  a1[157] = 0;
  a1[158] = (__int64)(a1 + 156);
  a1[159] = (__int64)(a1 + 156);
  a1[160] = 0;
  while ( v4 )
  {
    sub_FEB10(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = "Edit...";
  a1[163] = 0;
  a1[164] = (__int64)(a1 + 162);
  a1[165] = (__int64)(a1 + 162);
  v7 = *a1;
  a1[166] = 0;
  (*(void (__fastcall **)(__int64 *))(v7 + 384))(a1);
  if ( *((_BYTE *)a1 + 1232) )
    v6 = "Apply changes";
  result = sub_19D0F0("hexview:EditOrApplyChanges");
  if ( result )
    return sub_19C000(result, 1, v6);
  return result;
}

