unsigned __int64 __fastcall sub_386120(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 *v8; // rax

  v5 = *(unsigned __int64 **)(a1 + 32);
  v6 = *v5;
  if ( *(_DWORD *)a3 == 1 )
  {
    v8 = sub_251F30((__int64)v5, *(_QWORD **)(a3 + 8));
    if ( v8 )
      v6 = *v8;
  }
  else if ( *(_DWORD *)a4 == 4 )
  {
    v6 = *(_QWORD *)(a4 + 8);
  }
  else if ( *(_DWORD *)a2 == 4 )
  {
    v6 = *(_QWORD *)(a2 + 8);
  }
  return sub_32B3E0(*(_QWORD **)(a1 + 24), v6);
}
