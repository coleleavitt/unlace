__int64 __fastcall sub_55B670(_QWORD *a1)
{
  __int64 v2; // r12
  void *v3; // rbp
  void *v4; // rdi
  _DWORD *v5; // rbp
  bool v6; // zf
  unsigned int *v7; // rcx
  unsigned int v8; // edx
  void *v9; // rbp
  __int64 v10; // rbx
  __int64 v12; // rax
  void *v13; // rdi
  _BYTE v14[40]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1[7];
  v3 = *(void **)(v2 + 40);
  if ( !v3 )
  {
    v12 = (**(__int64 (__fastcall ***)(_QWORD))v2)(a1[7]);
    v13 = *(void **)(v2 + 40);
    v3 = (void *)v12;
    if ( v13 && (void *)v12 != v13 )
      sub_4D63E0(v13);
    *(_QWORD *)(v2 + 40) = v3;
  }
  v4 = (void *)a1[5];
  if ( v4 != v3 && v4 )
    sub_4D63E0(v4);
  a1[5] = v3;
  v5 = (_DWORD *)a1[7];
  v6 = v5[8]-- == 1;
  *((_QWORD *)v5 + 5) = 0;
  if ( v6 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    sub_186B220(v5);
  }
  a1[7] = 0;
  sub_644D80(v14, "filter_identical", 11);
  v7 = (unsigned int *)a1[6];
  if ( v7 )
    v8 = *(v7 - 1);
  else
    v8 = 0;
  v9 = (void *)sub_4C5780(*(_QWORD *)(a1[1] + 24LL), a1[5], v8, v7);
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, a1[5]);
  (**(void (__fastcall ***)(void *))v9)(v9);
  sub_186B220(v9);
  v10 = a1[5];
  sub_644EE0(v14);
  return v10;
}

