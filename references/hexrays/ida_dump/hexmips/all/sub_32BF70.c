void __fastcall sub_32BF70(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbp
  unsigned __int64 item_end; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 48);
  for ( *(_OWORD *)(a1 + 32) = -1; v1; v1 = *(_QWORD *)(v1 + 8) )
  {
    v2 = sub_32BF20(*(_QWORD **)(a1 + 64), *(_QWORD *)(v1 + 24));
    item_end = get_item_end(v2);
    if ( *(_QWORD *)(a1 + 32) == -1 )
      *(_QWORD *)(a1 + 32) = v2;
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 < item_end || v4 == -1 )
      *(_QWORD *)(a1 + 40) = item_end;
  }
}
