__int64 __fastcall disasm_graph_t__::vfunc_32(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // rdx
  unsigned int *v3; // rcx
  unsigned int *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  const char *v9; // rsi
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+10h] [rbp-58h]
  unsigned __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v2 = a2[1];
  v16 = __readfsqword(0x28u);
  v3 = *a2;
  if ( !(4LL * (_QWORD)v2) )
    return -1;
  v5 = *a2;
  v6 = -1;
  do
  {
    while ( 1 )
    {
      v8 = (int)*v5;
      if ( (int)v8 < *(_DWORD *)(a1 + 376) )
        break;
      v11[1] = -1;
      v9 = *(const char **)(a1 + 72);
      v11[0] = 56;
      v12 = 0;
      v13 = -1;
      v14 = 0;
      v15 = 0;
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD *, const char *, _QWORD, unsigned int *))get_node_info)(
                              v11,
                              v9,
                              *v5,
                              v3)
        && v6 > v13 )
      {
        v6 = v13;
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14, v9);
      }
      v3 = *a2;
      v2 = a2[1];
      if ( ++v5 == &(*a2)[(_QWORD)v2] )
        return v6;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 352) + (v8 << 6));
    if ( v6 > v7 )
      v6 = v7;
    ++v5;
  }
  while ( v5 != &v3[(_QWORD)v2] );
  return v6;
}
