__int64 __fastcall sub_3C7550(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = a1[21];
  *a1 = &off_4BC748;
  while ( v2 )
  {
    sub_3C7380(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *a1 = &off_4B48B0;
  result = merge_handler_dtr(a1);
  v5 = a1[12];
  if ( v5 )
  {
    a1[13] = 0;
    result = qfree(v5);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    return qfree(v6);
  }
  return result;
}
