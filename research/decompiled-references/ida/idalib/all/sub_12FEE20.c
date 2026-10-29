_QWORD *__fastcall sub_12FEE20(_QWORD *a1, __int64 **a2, __int64 *a3)
{
  __int64 *v4; // rax
  int *v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  void *v9[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h] BYREF
  void *v11[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 *v13[15]; // [rsp+40h] [rbp-78h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, void *))(**a2 + 48))(*a2, &unk_2D0AA9C) )
  {
    v6 = (int *)a3[1];
    v7 = *a2;
    *a2 = nullptr;
    sub_FC70B0((__int64)v13, *a3, 0, *v6);
    sub_2253560(v11, a3[2]);
    sub_AEC220(v13, (_BYTE *)v11[0], (signed __int64)v11[1]);
    (*(void (__fastcall **)(void **, __int64 *))(*v7 + 24))(v9, v7);
    sub_AEC220(v13, (_BYTE *)v9[0], (signed __int64)v9[1]);
    if ( v9[0] != &v10 )
      operator delete(v9[0]);
    if ( v11[0] != &v12 )
      operator delete(v11[0]);
    sub_AEA040((__int64)v13);
    v8 = *v7;
    *a1 = 0;
    (*(void (__fastcall **)(__int64 *))(v8 + 8))(v7);
  }
  else
  {
    v4 = *a2;
    *a2 = nullptr;
    *a1 = v4;
  }
  return a1;
}
