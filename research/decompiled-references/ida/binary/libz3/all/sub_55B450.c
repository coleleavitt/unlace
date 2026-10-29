__int64 __fastcall sub_55B450(_QWORD *a1)
{
  __int64 v2; // r12
  void *v3; // rbp
  void *v4; // rdi
  _DWORD *v5; // rbp
  bool v6; // zf
  void *v7; // rbp
  __int64 v8; // rbx
  __int64 v10; // rax
  void *v11; // rdi
  _BYTE v12[40]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1[8];
  v3 = *(void **)(v2 + 40);
  if ( !v3 )
  {
    v10 = (**(__int64 (__fastcall ***)(_QWORD))v2)(a1[8]);
    v11 = *(void **)(v2 + 40);
    v3 = (void *)v10;
    if ( v11 && (void *)v10 != v11 )
      sub_4D63E0(v11);
    *(_QWORD *)(v2 + 40) = v3;
  }
  v4 = (void *)a1[5];
  if ( v4 != v3 && v4 )
    sub_4D63E0(v4);
  a1[5] = v3;
  v5 = (_DWORD *)a1[8];
  v6 = v5[8]-- == 1;
  *((_QWORD *)v5 + 5) = 0;
  if ( v6 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    sub_186B220(v5);
  }
  a1[8] = 0;
  sub_644D80(v12, "filter_interpreted", 11);
  v7 = (void *)sub_4C4D50(*(_QWORD *)(a1[1] + 24LL), a1[5], a1[6]);
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 16LL))(v7, a1[5]);
  (**(void (__fastcall ***)(void *))v7)(v7);
  sub_186B220(v7);
  v8 = a1[5];
  sub_644EE0(v12);
  return v8;
}

