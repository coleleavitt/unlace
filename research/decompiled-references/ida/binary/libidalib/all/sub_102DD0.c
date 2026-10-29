__int64 __fastcall sub_102DD0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  const char *v3; // rbp
  __int64 v5; // rax

  v3 = "Apply changes";
  sub_102D60(a3);
  if ( !a3[1248] )
    v3 = "Edit...";
  v5 = sub_19DCF0("hexview:EditOrApplyChanges");
  if ( v5 )
    sub_19CC00(v5, 1, v3);
  return 1;
}

