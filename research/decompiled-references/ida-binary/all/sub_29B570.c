__int64 __fastcall sub_29B570(int *a1, int a2)
{
  __int64 (*v2)(void); // rax
  int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // r12d
  int v7; // r13d

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v2 == (char *)interactive_graph_t__::vfunc_7 )
    v3 = a1[46];
  else
    v3 = v2();
  if ( v3 <= a2 )
    return 0;
  v4 = *((_QWORD *)a1 + 13);
  v5 = *(_BYTE *)(v4 + a2) & 1;
  if ( (*(_BYTE *)(v4 + a2) & 1) == 0 || sub_293760((__int64)a1, 7, a1, (unsigned int)a2) )
  {
    return 0;
  }
  else
  {
    v7 = *(_DWORD *)(*((_QWORD *)a1 + 10) + 4LL * a2);
    sub_293CE0((__int64)a1, a2);
    if ( v7 < 0 )
      sub_29AD80(a1);
  }
  return v5;
}
