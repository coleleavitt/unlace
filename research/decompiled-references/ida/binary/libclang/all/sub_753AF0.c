__int64 __fastcall sub_753AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v9[41]; // [rsp+Fh] [rbp-29h] BYREF

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((reqd_work_group_size");
  v9[0] = 0;
  sub_5FF0F0(a2, "(");
  v2 = sub_5FF0F0(a2, &byte_3B9466E);
  v3 = sub_26238A0(v2, *(unsigned int *)(a1 + 36));
  sub_5FF0F0(v3, &byte_3B9466E);
  sub_722380(a2, v9);
  v4 = sub_5FF0F0(a2, &byte_3B9466E);
  v5 = sub_26238A0(v4, *(unsigned int *)(a1 + 40));
  sub_5FF0F0(v5, &byte_3B9466E);
  sub_722380(a2, v9);
  v6 = sub_5FF0F0(a2, &byte_3B9466E);
  v7 = sub_26238A0(v6, *(unsigned int *)(a1 + 44));
  sub_5FF0F0(v7, &byte_3B9466E);
  if ( !v9[0] )
    sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

