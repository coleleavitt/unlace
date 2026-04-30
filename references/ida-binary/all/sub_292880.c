__int64 __fastcall interactive_graph_t__::vfunc_19(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(void); // rax
  int v3; // eax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v2 == (char *)interactive_graph_t__::vfunc_7 )
    v3 = *(_DWORD *)(a1 + 184);
  else
    v3 = v2();
  if ( v3 <= (int)a2 )
    sub_16B930((__int64)"nrect(%d) failed", a2);
  return *(_QWORD *)(a1 + 224) + 16LL * (int)a2;
}
