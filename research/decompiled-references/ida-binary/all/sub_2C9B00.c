__int64 __fastcall sub_2C9B00(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax

  v2 = a1[138];
  *((_WORD *)a1 + 540) = 0;
  while ( v2 )
  {
    sub_2C8DE0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[144];
  a1[138] = 0;
  a1[139] = (__int64)(a1 + 137);
  a1[140] = (__int64)(a1 + 137);
  a1[141] = 0;
  while ( v4 )
  {
    sub_2C8DE0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = "Edit...";
  a1[144] = 0;
  a1[145] = (__int64)(a1 + 143);
  a1[146] = (__int64)(a1 + 143);
  v7 = *a1;
  a1[147] = 0;
  (*(void (__fastcall **)(__int64 *))(v7 + 664))(a1);
  if ( *((_BYTE *)a1 + 1080) )
    v6 = "Apply changes";
  result = sub_534430("hexview:EditOrApplyChanges");
  if ( result )
    return sub_537630(result, 1, v6);
  return result;
}
