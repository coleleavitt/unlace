_QWORD *__fastcall sub_21CD040(_QWORD *a1, __int64 a2, _QWORD **a3)
{
  _QWORD *v3; // rax
  int v4; // r13d
  __int64 v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-60h] BYREF
  __int64 v9[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v10; // [rsp+30h] [rbp-38h]

  v3 = *a3;
  *a3 = nullptr;
  v7 = a2;
  v8 = v3;
  sub_21CCE70(v9, &v8, (__int64)&v7);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  v4 = *(_DWORD *)(a2 + 8);
  v9[0] = a2 + 16;
  v10 = 260;
  v5 = operator new(0x30u);
  *(_DWORD *)(v5 + 8) = v4;
  *(_QWORD *)v5 = &off_2C74C70;
  sub_2253560(v5 + 16, v9);
  *a1 = v5;
  return a1;
}
