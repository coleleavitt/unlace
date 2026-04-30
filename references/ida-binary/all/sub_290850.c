__int64 __fastcall interactive_graph_t__::vfunc_8(_DWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  _DWORD *v3; // rdx
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  _DWORD *v7; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v1 = 0;
  v9 = __readfsqword(0x28u);
  v8 = 0;
  v7 = a1;
  v2 = node_iterator_goup(&v7);
  v3 = *(_DWORD **)v2;
  LODWORD(v2) = *(_DWORD *)(v2 + 8);
  v7 = v3;
  v8 = v2;
  while ( 1 )
  {
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    v5 = v4 == interactive_graph_t__::vfunc_7 ? a1[46] : v4((__int64)a1);
    if ( v5 == v8 && a1 == v7 )
      break;
    ++v1;
    ++v8;
    node_iterator_goup(&v7);
  }
  return v1;
}
