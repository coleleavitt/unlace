__int64 __fastcall sub_B730A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rbx
  int v13; // [rsp-8h] [rbp-C8h]
  int v14; // [rsp+0h] [rbp-C0h]
  int v15; // [rsp+8h] [rbp-B8h]
  int v16; // [rsp+Ch] [rbp-B4h]
  void *ptr; // [rsp+10h] [rbp-B0h] BYREF
  int v18[2]; // [rsp+18h] [rbp-A8h]
  __int64 v19[2]; // [rsp+20h] [rbp-A0h] BYREF
  char v20; // [rsp+30h] [rbp-90h]
  int v21; // [rsp+38h] [rbp-88h]
  int v22; // [rsp+40h] [rbp-80h]
  void *v23; // [rsp+48h] [rbp-78h]

  ptr = v19;
  *(_QWORD *)v18 = 0x1000000000LL;
  if ( !(unsigned __int8)sub_B72F20(a1, a2, (__int64)&ptr) )
  {
    v11 = 0;
    goto LABEL_12;
  }
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 8);
  if ( dword_1C7ED74 == v2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 856LL);
    v7 = v8;
    if ( !v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( dword_1C7ED70 == v2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 864LL);
    v7 = v8;
    if ( !v8 )
      goto LABEL_7;
LABEL_6:
    ++*(_DWORD *)(v8 + 8);
    goto LABEL_7;
  }
  v5 = *(_QWORD *)(v3 + 8840);
  v6 = v2 >> 1;
  v7 = *(_QWORD *)(v5 + 8 * v6);
  if ( (v2 & 1) == 0 )
  {
    v8 = *(_QWORD *)(v5 + 8 * v6);
    if ( !v7 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v8 = sub_15E1A70(*(_QWORD *)(v3 + 104));
  v7 = v8;
  if ( v8 )
    goto LABEL_6;
LABEL_7:
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
    v10 = *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  v11 = sub_15E0A80(
          v4,
          *(_DWORD *)(a1 + 40),
          v7,
          v18[0],
          (int)ptr,
          v10,
          *(_QWORD *)(a1 + 48),
          v13,
          v14,
          v15,
          (int)ptr,
          v18[0],
          v19[0],
          v19[1],
          v20,
          v21,
          v22,
          v23);
  if ( v7 )
  {
    v16 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = v16 - 1;
    if ( v16 == 1 )
      sub_15D7BC0(v4, v7);
  }
LABEL_12:
  if ( ptr && ptr != v19 )
    sub_186B220(ptr);
  return v11;
}

