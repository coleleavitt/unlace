__int64 __fastcall sub_B73310(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // edx
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // rbx
  int v8; // [rsp-8h] [rbp-B8h]
  void *ptr; // [rsp+0h] [rbp-B0h] BYREF
  int v10[2]; // [rsp+8h] [rbp-A8h]
  int v11[4]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+20h] [rbp-90h]
  __int64 v13; // [rsp+28h] [rbp-88h]
  char v14; // [rsp+30h] [rbp-80h]
  int v15; // [rsp+38h] [rbp-78h]
  int v16; // [rsp+40h] [rbp-70h]
  void *v17; // [rsp+48h] [rbp-68h]

  ptr = v11;
  *(_QWORD *)v10 = 0x1000000000LL;
  if ( (unsigned __int8)sub_B72F20(a1, a2, (__int64)&ptr) )
  {
    v2 = *(_QWORD *)(a2 + 8);
    v3 = sub_8E7230(*(_QWORD *)(a2 + 24), **(_DWORD ***)(a1 + 56), **(_DWORD ***)(a1 + 64));
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
      v5 = *(_DWORD *)(v4 - 4);
    else
      v5 = 0;
    v6 = sub_15E0A80(
           v2,
           *(_DWORD *)(a1 + 40),
           v3,
           v10[0],
           (int)ptr,
           v5,
           *(_QWORD *)(a1 + 48),
           v8,
           (int)ptr,
           v10[0],
           v11[0],
           v11[2],
           v12,
           v13,
           v14,
           v15,
           v16,
           v17);
  }
  else
  {
    v6 = 0;
  }
  if ( ptr && ptr != v11 )
    sub_186B220(ptr);
  return v6;
}

