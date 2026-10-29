__int64 __fastcall sub_409140(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  int *v10; // rax
  int *v11; // rbx
  void *v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  bool v15; // zf
  __int64 v17; // rdx
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  void *v20; // rax

  v10 = (int *)sub_496740();
  *v10 = 0;
  v11 = v10;
  v12 = (void *)sub_40FB00(16);
  *((_QWORD *)v11 + 1) = v12;
  qmemcpy(v12, "tcl::mathfunc::", 15);
  *(_BYTE *)(*((_QWORD *)v11 + 1) + 15LL) = 0;
  v11[4] = 15;
  *((_QWORD *)v11 + 3) = 0;
  sub_48EDF0(v11, a2, 0xFFFFFFFFLL);
  ++*v11;
  v13 = sub_47D100(a1, v11);
  v14 = *v11 - 1;
  v15 = *v11 == 1;
  *v11 = v14;
  if ( v14 < 0 || v15 )
    sub_47B120(v11);
  if ( v13 )
  {
    if ( *(__int64 (__fastcall **)())(v13 + 32) == sub_40CB30 )
    {
      v17 = *(_QWORD *)(v13 + 56);
      *a5 = *(_QWORD *)v17;
      *a3 = *(_DWORD *)(v17 + 8);
      *a4 = *(_QWORD *)(v17 + 16);
      *a6 = *(_QWORD *)(v17 + 24);
    }
    else
    {
      *a3 = -1;
      *a4 = 0;
      *a5 = 0;
      *a6 = 0;
    }
    return 0;
  }
  else
  {
    v18 = (_DWORD *)sub_496740();
    *v18 = 0;
    v19 = v18;
    v20 = (void *)sub_40FB00(24);
    *((_QWORD *)v19 + 1) = v20;
    qmemcpy(v20, "unknown math function \"", 23);
    *(_BYTE *)(*((_QWORD *)v19 + 1) + 23LL) = 0;
    v19[4] = 23;
    *((_QWORD *)v19 + 3) = 0;
    sub_48EDF0(v19, a2, 0xFFFFFFFFLL);
    sub_48EDF0(v19, "\"", 1);
    sub_48AFD0(a1, v19);
    *a3 = -1;
    *a4 = 0;
    *a5 = 0;
    *a6 = 0;
    return 1;
  }
}

