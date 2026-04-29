__int64 __fastcall sub_30DE90(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 name_ea; // rax
  __int64 v5; // rbp
  __int64 func; // rax
  __int64 head; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 result; // rax

  name_ea = get_name_ea(-1, a2);
  if ( name_ea == -1 )
    return 0;
  v5 = name_ea;
  func = get_func(name_ea);
  head = v5;
  if ( func )
    head = *(_QWORD *)(func + 8);
  if ( (get_flags_ex(head, 0) & 0x10000) != 0 )
  {
    do
    {
      v8 = head;
      head = next_head(head, -1);
    }
    while ( (get_flags_ex(head, 0) & 0x10000) != 0 );
    head = v8;
  }
  else
  {
    while ( (get_flags_ex(head, 0) & 0x10000) == 0 )
      head = prev_head(head, v5);
  }
  a1[1] = v5;
  a1[2] = head;
  if ( !a3 )
    goto LABEL_18;
  v9 = 0;
  while ( 1 )
  {
    ++v9;
    v10 = next_head(v5, head);
    v5 = v10;
    if ( a3 == v9 )
      break;
    head = a1[2];
  }
  if ( v10 == -1 )
  {
LABEL_18:
    a1[3] = 0;
    goto LABEL_19;
  }
  v11 = a1[1];
  v12 = v10 - v11;
  a1[3] = v10 - v11;
  if ( v10 == v11 )
  {
LABEL_19:
    sub_6D0A0((__int64)"VDGO: cannot compute block size for %s - ignored\n", a2);
    return 0;
  }
  result = 1;
  if ( (a1[2] - v11) % v12 )
  {
    sub_6D0A0((__int64)"VDGO: wrong block size of %s: %zu - ignored\n", a2, v12);
    return 0;
  }
  return result;
}
