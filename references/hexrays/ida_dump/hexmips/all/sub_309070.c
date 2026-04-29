char __fastcall sub_309070(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  bool v9; // zf
  _DWORD *v11; // rcx
  __int128 v12; // rdi
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  __int128 v16; // rdi
  int *v17; // rcx
  __int64 v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = *a4 == 5;
  v18[1] = __readfsqword(0x28u);
  v18[0] = a3;
  if ( !v9 )
  {
    v11 = sub_308940((__int64)a4);
    if ( v11 )
      goto LABEL_3;
    return 0;
  }
  *((_QWORD *)&v16 + 1) = a4 + 8;
  *(_QWORD *)&v16 = a2;
  v17 = (int *)sub_125240(v16, (__int64)v18, 0);
  if ( !v17 )
    return 0;
  v11 = sub_308AC0(a1, a2, v18, v17);
  if ( !v11 )
    return 0;
LABEL_3:
  if ( !a6 )
    return 1;
  if ( *(_BYTE *)v11 == 4 )
  {
    v15 = *((_DWORD **)v11 + 1);
    if ( *v15 == 8 )
      v11 = v15 + 8;
  }
  if ( *(_BYTE *)a6 == 4 )
  {
    v14 = *(_DWORD **)(a6 + 8);
    if ( *v14 == 8 )
      a6 = (__int64)(v14 + 8);
  }
  *((_QWORD *)&v12 + 1) = a2;
  *(_QWORD *)&v12 = a1;
  return sub_308750(v12, v18[0], (__int64)v11, a5, a6);
}
