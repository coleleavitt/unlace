/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C9D0
// Address: 0x000000000041C9D0

//----- (000000000041C9D0) ----------------------------------------------------
__int64 __fastcall sub_41C9D0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _DWORD *v10; // r13
  char v11; // bp
  _DWORD *v12; // rbx
  unsigned int v13; // edi
  int v14; // edi
  char *v15; // rax
  __int64 result; // rax
  int v17; // edi
  char *v18; // rax

  v10 = (_DWORD *)(a1 + 1216);
  v11 = 1;
  sub_41C660(a1, 0, 1, a2, a3, a4, a5, a6, a7, a8, a9);
  v12 = *(_DWORD **)(a1 + 1232);
  if ( v12 == (_DWORD *)(a1 + 1216) )
    goto LABEL_16;
  do
  {
    v13 = v12[10];
    if ( v12[15] == 1 )
    {
      if ( ptrace(PTRACE_KILL, v13, 0, 9) )
      {
        v17 = *__errno_location();
        if ( v17 != 3 )
        {
          v18 = strerror(v17);
          sub_411B10(a1, "PTRACE_KILL %d: %s\n", v12[10], v18);
          goto LABEL_7;
        }
      }
    }
    else if ( v13 != -1 )
    {
      if ( sub_40D760(v13, 9u) )
      {
        v14 = *__errno_location();
        if ( v14 != 3 )
        {
          v15 = strerror(v14);
          sub_411B10(a1, "SIGKILL %d: %s\n", v12[10], v15);
LABEL_7:
          v11 = 0;
          goto LABEL_8;
        }
      }
    }
    if ( !v11 )
      goto LABEL_7;
    v12[15] = 0;
    v12[11] = 0;
LABEL_8:
    v12 = (_DWORD *)std::_Rb_tree_increment(v12);
  }
  while ( v12 != v10 );
  if ( v11 )
  {
LABEL_16:
    *(_BYTE *)(a1 + 1348) = 0;
    result = 1;
    *(_DWORD *)(a1 + 1340) = -1;
    goto LABEL_11;
  }
  result = 0xFFFFFFFFLL;
LABEL_11:
  *(_BYTE *)(a1 + 1349) = 1;
  *(_BYTE *)(a1 + 1412) = 1;
  return result;
}
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
