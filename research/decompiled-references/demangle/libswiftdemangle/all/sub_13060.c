unsigned __int64 __fastcall sub_13060(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v9; // rax
  __int64 v10; // r9

  v1 = *(_DWORD *)(a1 + 96);
  if ( v1 && (v2 = (unsigned int)(v1 - 1), v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2), *(_WORD *)(v3 + 16) == 40) )
  {
    *(_DWORD *)(a1 + 96) = v2;
    sub_12FF0(a1);
    v4 = sub_E100(a1);
    v6 = sub_CE00((_QWORD *)a1, 68, v5, v4);
    v7 = v6;
    if ( v3 )
    {
      if ( v6 )
        sub_C080(v6, v3, (_QWORD *)a1);
    }
    return v7;
  }
  else
  {
    sub_12FF0(a1);
    v9 = sub_E100(a1);
    return sub_CE00((_QWORD *)a1, 68, v10, v9);
  }
}
