__int64 __fastcall sub_73BF60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, ":packoffset");
  sub_5FF0F0(a2, "(");
  v2 = sub_5FF0F0(a2, &byte_3B9466E);
  v3 = sub_26238C0(v2, *(int *)(a1 + 36));
  sub_5FF0F0(v3, &byte_3B9466E);
  sub_5FF0F0(a2, ", ");
  v4 = sub_5FF0F0(a2, &byte_3B9466E);
  v5 = sub_26238C0(v4, *(int *)(a1 + 40));
  sub_5FF0F0(v5, &byte_3B9466E);
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, &byte_3B9466E);
}

