__int64 __fastcall sub_23F1C0(__int64 a1, int a2, double a3, __int64 a4, char *a5)
{
  __int64 v7; // rax
  int v8; // r12d
  int v9; // ebp
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  int v12; // eax

  if ( dword_8CC5F0 > 0 && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
    return 0;
  if ( a2 == -2 )
  {
    v8 = dword_8CC38C;
    v12 = dword_8CC38C;
    goto LABEL_14;
  }
  if ( a2 == -1 )
  {
    v8 = dword_8CC388;
    v12 = dword_8CC388;
LABEL_14:
    v9 = *(_DWORD *)(a1 + 36) & v12;
    if ( !v9 )
      return *(_QWORD *)(a1 + 40);
    goto LABEL_10;
  }
  if ( a2 < 0 )
    return *(_QWORD *)(a1 + 40);
  if ( a2 >= (unsigned __int64)xmmword_8CC398 )
    return *(_QWORD *)(a1 + 40);
  v7 = qword_8CC390 + 56LL * a2;
  if ( !v7 )
    return *(_QWORD *)(a1 + 40);
  v8 = *(unsigned __int8 *)(*(_QWORD *)(dbg + 56) + 32LL * *(int *)(v7 + 44) + 12);
  v9 = *(_DWORD *)(a1 + 36) & (v8 | dword_8CC388);
  if ( !v9 )
    return *(_QWORD *)(a1 + 40);
LABEL_10:
  v10 = qword_8CC600;
  if ( qword_8CC600
    && (v11 = *(_QWORD *)(a1 + 40),
        *(_DWORD *)qword_8CC600 = *(_DWORD *)a1,
        v10[8] = v9,
        *((_QWORD *)v10 + 5) = v11,
        (int)sub_23D480((__int64)v10, 16, v11, a5, a3) > 0) )
  {
    *(_DWORD *)(a1 + 36) &= ~v9;
  }
  else if ( (v9 & v8) != 0 )
  {
    return 0;
  }
  return *(_QWORD *)(a1 + 40);
}
