__int64 __fastcall sub_438190(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r15d
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // eax
  __int64 *v11; // rdx
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 *v22; // [rsp+28h] [rbp-50h] BYREF
  int v23; // [rsp+34h] [rbp-44h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF

  v5 = a3;
  v25 = 0;
  v6 = sub_47B0B0(a1, a2, a3);
  v8 = sub_47B0B0(a1, a2, v7);
  v9 = sub_4495F0(a1, 576);
  if ( !(unsigned int)sub_435280(a1, (__int64)a2, v5, &v25, v6, v8, v9, 0) )
  {
    v10 = sub_47D8F0(a2, v5);
    sub_409C10((_DWORD *)(a4 + 3272), a2, (unsigned __int64)&a2[v10]);
    if ( *(_UNKNOWN ***)(v6 + 24) == &off_655E20 )
    {
      v16 = *(_QWORD *)(v6 + 32);
      v13 = *(_QWORD *)(v8 + 24) == (_QWORD)&off_655E20;
      v17 = (__int64 *)(v16 + 16);
      LODWORD(v16) = *(_DWORD *)(v16 + 8);
      v24 = v17;
      v23 = v16;
      if ( !v13 )
        goto LABEL_4;
    }
    else
    {
      sub_46FD90(0, v6, &v23, &v24);
      if ( *(_UNKNOWN ***)(v8 + 24) != &off_655E20 )
      {
LABEL_4:
        sub_46FD90(0, v8, &v23, &v22);
        v11 = v22;
LABEL_5:
        sub_436FE0(a1, v25, 0, &v24, v11, *(_QWORD *)(v9 + 32), a4, a5);
        goto LABEL_7;
      }
    }
    v18 = *(_QWORD *)(v8 + 32);
    v11 = (__int64 *)(v18 + 16);
    LODWORD(v18) = *(_DWORD *)(v18 + 8);
    v22 = v11;
    v23 = v18;
    goto LABEL_5;
  }
  sub_42BC50(a1, a4);
LABEL_7:
  sub_47DCE0(v9);
  sub_449510(a1, v9);
  v12 = *(_DWORD *)v8 - 1;
  v13 = *(_DWORD *)v8 == 1;
  *(_DWORD *)v8 = v12;
  if ( v12 < 0 || v13 )
  {
    sub_47B120(v8);
    v19 = *(_DWORD *)v6 - 1;
    v13 = *(_DWORD *)v6 == 1;
    *(_DWORD *)v6 = v19;
    if ( v19 >= 0 && !v13 )
      return Tcl_Free(v25);
LABEL_13:
    sub_47B120(v6);
    return Tcl_Free(v25);
  }
  v14 = *(_DWORD *)v6 - 1;
  v13 = *(_DWORD *)v6 == 1;
  *(_DWORD *)v6 = v14;
  if ( v14 < 0 || v13 )
    goto LABEL_13;
  return Tcl_Free(v25);
}

