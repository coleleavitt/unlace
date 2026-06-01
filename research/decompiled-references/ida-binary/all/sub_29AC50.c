__int64 __fastcall sub_29AC50(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 (*v3)(void); // rax
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v8; // eax
  int v9; // edx

  if ( a2 < 0 )
    return 0;
  v2 = a2;
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v3 == (char *)interactive_graph_t__::vfunc_7 )
    v4 = *(_DWORD *)(a1 + 184);
  else
    v4 = v3();
  if ( a2 < v4 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    v6 = *(_DWORD *)(v5 + 4LL * a2);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + a2) & 1) == 0 || v6 < 0 )
    {
      while ( v6 != 0x7FFFFFFF )
      {
        v8 = v6 & 0x7FFFFFFF;
        v9 = v8;
        if ( v2 == v8 )
          return 1;
        v6 = *(_DWORD *)(v5 + 4LL * v8);
        if ( v6 < 0 )
          return 0;
        v2 = v9;
      }
    }
  }
  return 0;
}
