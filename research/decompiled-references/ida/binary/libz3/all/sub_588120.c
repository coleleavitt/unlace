void __fastcall sub_588120(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx

  v5 = *(_QWORD *)(a1 + 40);
  v6 = sub_15E1B70(v5);
  v7 = v6;
  if ( v6 )
  {
    ++*(_DWORD *)(v6 + 8);
    sub_5875C0(a1, a2, v6, a4);
    if ( (*(_DWORD *)(v7 + 8))-- == 1 )
      sub_15D7BC0(v5, v7);
  }
  else
  {
    sub_5875C0(a1, a2, 0, a4);
  }
}

