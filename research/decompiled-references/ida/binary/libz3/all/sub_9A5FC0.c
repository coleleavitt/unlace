__int64 __fastcall sub_9A5FC0(__int64 a1, int *a2, unsigned __int8 a3, __int64 *a4)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  void *v18; // rbx
  void *v19; // rbx
  _QWORD v20[2]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+18h] [rbp-68h] BYREF
  int v22; // [rsp+28h] [rbp-58h] BYREF
  char v23; // [rsp+2Ch] [rbp-54h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  int v25; // [rsp+38h] [rbp-48h] BYREF
  char v26; // [rsp+3Ch] [rbp-44h]
  __int64 v27; // [rsp+40h] [rbp-40h]

  if ( a2[8] )
    return 0;
  v20[0] = 0;
  v20[1] = 0;
  v21[0] = 1;
  v21[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v20, a2);
  v23 &= 0xFCu;
  v11 = qword_1C7F2C0;
  v26 &= 0xFCu;
  v22 = 0;
  v24 = 0;
  v25 = 1;
  v27 = 0;
  if ( (v20[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v22, v20);
  else
    v22 = v20[0];
  if ( (v21[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v11, &v25, v21);
  }
  else
  {
    v26 &= ~1u;
    v25 = v21[0];
  }
  v12 = *(_QWORD *)(a1 + 416);
  if ( !v12 )
  {
    sub_16669E0(a1 + 408);
    v12 = *(_QWORD *)(a1 + 416);
  }
  v13 = sub_166A700(v12, (unsigned int)&v22, a3, v8, v9, v10);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v15 = *a4;
  if ( *a4 )
  {
    v16 = a4[1];
    if ( (*(_DWORD *)(v15 + 8))-- == 1 )
      sub_15D7BC0(v16, v15);
  }
  *a4 = v14;
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  sub_182CBA0(v18, &v25);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  sub_182CBA0(v19, v21);
  return 1;
}

