__int64 __fastcall sub_73EBB0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 )
  {
    sub_5FF0F0(a2, "[[gnu::init_priority");
    sub_5FF0F0(a2, "(");
    v6 = sub_5FF0F0(a2, &byte_3B9466E);
    v7 = sub_26238A0(v6, *(unsigned int *)(a1 + 36));
    sub_5FF0F0(v7, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((init_priority");
    sub_5FF0F0(a2, "(");
    v3 = sub_5FF0F0(a2, &byte_3B9466E);
    v4 = sub_26238A0(v3, *(unsigned int *)(a1 + 36));
    sub_5FF0F0(v4, &byte_3B9466E);
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

