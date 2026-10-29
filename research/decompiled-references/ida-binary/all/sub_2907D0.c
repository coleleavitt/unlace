__int64 __fastcall interactive_graph_t__::vfunc_16(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // ebp
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v9 = __readfsqword(0x28u);
  v2 = *(__int64 (__fastcall **)(__int64))(v1 + 56);
  if ( v2 == interactive_graph_t__::vfunc_7 )
    v3 = *(_DWORD *)(a1 + 184);
  else
    v3 = v2(a1);
  v7 = a1;
  v8 = 0;
  v4 = node_iterator_goup(&v7);
  v5 = (_QWORD *)v4;
  LOBYTE(v4) = v3 == *(_DWORD *)(v4 + 8);
  LOBYTE(v5) = a1 == *v5;
  return (unsigned int)v5 & (unsigned int)v4;
}
