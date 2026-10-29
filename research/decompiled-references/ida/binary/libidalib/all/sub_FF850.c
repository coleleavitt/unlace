__int64 __fastcall sub_FF850(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax

  v2 = a1[159];
  *((_WORD *)a1 + 624) = 0;
  while ( v2 )
  {
    sub_FECD0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[165];
  a1[159] = 0;
  a1[160] = (__int64)(a1 + 158);
  a1[161] = (__int64)(a1 + 158);
  a1[162] = 0;
  while ( v4 )
  {
    sub_FECD0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = "Edit...";
  a1[165] = 0;
  a1[166] = (__int64)(a1 + 164);
  a1[167] = (__int64)(a1 + 164);
  v7 = *a1;
  a1[168] = 0;
  (*(void (__fastcall **)(__int64 *))(v7 + 384))(a1);
  if ( *((_BYTE *)a1 + 1248) )
    v6 = "Apply changes";
  result = sub_19DCF0("hexview:EditOrApplyChanges");
  if ( result )
    return sub_19CC00(result, 1, v6);
  return result;
}

