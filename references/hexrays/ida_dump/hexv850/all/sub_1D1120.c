__int64 __fastcall sub_1D1120(_QWORD *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 item_end; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 v10; // r12
  unsigned __int64 head; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // r14d
  unsigned __int64 v15; // rdx

  item_end = get_item_end(*(_QWORD *)(a2 + 16));
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == item_end )
    return 0;
  v10 = sub_1CE600(a1[187], a2, item_end, a1 + 61);
  if ( v10 == -1 )
    return 4294967294LL;
  sub_32B650((_DWORD)a1, *(_QWORD *)(a2 + 16), 29, v7, v8, v9);
  head = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 72) + ((__int64)a4 << 6)) < head )
    goto LABEL_7;
  head += *(unsigned __int16 *)(a2 + 26);
  if ( head != -1 )
  {
    while ( get_first_fcref_to(head) == -1 )
    {
      head = next_head(head, v10);
LABEL_7:
      if ( head == -1 )
        goto LABEL_8;
    }
    return 4294967279LL;
  }
LABEL_8:
  v12 = a1[17];
  result = sub_1CA180((__int64)a1, a3, 0, nullptr);
  if ( (_DWORD)result )
    return result;
  if ( a1[17] != v12 )
    return (unsigned int)(unsigned __int8)sub_1CA570(a1 + 1) - 18;
  v14 = a4 + 1;
  if ( v14 >= *(_DWORD *)(a3 + 96) )
    return 0;
  v15 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + ((__int64)v14 << 6));
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) == v15 || v15 >= v10 )
    return 0;
  return 4294967279LL;
}
