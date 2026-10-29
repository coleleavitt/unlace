__int64 __fastcall sub_55B360(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned int *v4; // rcx
  unsigned int v5; // edx
  void *v6; // rbp
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v12; // rax
  void *v13; // rdi
  _BYTE v14[56]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1[7];
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v12 = (**(__int64 (__fastcall ***)(_QWORD))v2)(a1[7]);
    v13 = *(void **)(v2 + 40);
    v3 = v12;
    if ( v13 && (void *)v12 != v13 )
      sub_4D63E0(v13);
    *(_QWORD *)(v2 + 40) = v3;
  }
  sub_644D80(v14, "rename", 11);
  v4 = (unsigned int *)a1[6];
  if ( v4 )
    v5 = *(v4 - 1);
  else
    v5 = 0;
  v6 = (void *)sub_4C5590(*(_QWORD *)(a1[1] + 24LL), v3, v5, v4);
  v7 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 16LL))(v6, v3);
  v8 = (void *)a1[5];
  v9 = v7;
  if ( !v8 )
    goto LABEL_7;
  if ( (void *)v7 != v8 )
  {
    sub_4D63E0(v8);
LABEL_7:
    a1[5] = v9;
  }
  (**(void (__fastcall ***)(void *))v6)(v6);
  sub_186B220(v6);
  v10 = a1[5];
  sub_644EE0(v14);
  return v10;
}

