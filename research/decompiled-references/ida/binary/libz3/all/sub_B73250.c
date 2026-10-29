__int64 __fastcall sub_B73250(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r9d
  __int64 v4; // rbx
  int v6; // [rsp-8h] [rbp-B8h]
  void *ptr; // [rsp+0h] [rbp-B0h] BYREF
  int v8[2]; // [rsp+8h] [rbp-A8h]
  int v9[4]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+20h] [rbp-90h]
  __int64 v11; // [rsp+28h] [rbp-88h]
  char v12; // [rsp+30h] [rbp-80h]
  int v13; // [rsp+38h] [rbp-78h]
  int v14; // [rsp+40h] [rbp-70h]
  void *v15; // [rsp+48h] [rbp-68h]

  ptr = v9;
  *(_QWORD *)v8 = 0x1000000000LL;
  if ( (unsigned __int8)sub_B72F20(a1, a2, (__int64)&ptr) )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
      v3 = *(_DWORD *)(v2 - 4);
    else
      v3 = 0;
    v4 = sub_15E0A80(
           *(_QWORD *)(a2 + 8),
           *(_DWORD *)(a1 + 40),
           *(_QWORD *)(*(_QWORD *)(a2 + 8) + 864LL),
           v8[0],
           (int)ptr,
           v3,
           *(_QWORD *)(a1 + 48),
           v6,
           (int)ptr,
           v8[0],
           v9[0],
           v9[2],
           v10,
           v11,
           v12,
           v13,
           v14,
           v15);
  }
  else
  {
    v4 = 0;
  }
  if ( ptr && ptr != v9 )
    sub_186B220(ptr);
  return v4;
}

