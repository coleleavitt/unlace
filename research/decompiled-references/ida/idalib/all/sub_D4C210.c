__int64 __fastcall sub_D4C210(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-A0h]
  void *v20; // [rsp+10h] [rbp-98h] BYREF
  __int64 v21; // [rsp+18h] [rbp-90h]
  void *v22; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-80h]
  char v24; // [rsp+2Ch] [rbp-7Ch]
  void *v25; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-70h]
  char v27; // [rsp+3Ch] [rbp-6Ch]
  void *v28; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-60h]
  _BYTE v30[88]; // [rsp+50h] [rbp-58h] BYREF

  v5 = sub_D251C0(a1[22]);
  v6 = a1[22];
  v19 = v7;
  v18 = v5;
  v8 = sub_E21760(v6, 48);
  v9 = (unsigned int)(*(_DWORD *)v8 + *(_DWORD *)(a3 + 8));
  sub_E23220(v30, *(_QWORD *)(v8 + 32), v9, (unsigned int)v9);
  v14 = (void *)sub_D44EB0(a1, v19, v10, v11, v12, v13);
  v21 = v15;
  v20 = v14;
  sub_D4B780((__int64)&v22, (__int64)&v18, 0);
  sub_B78170(*(_QWORD *)a3);
  LOBYTE(a3) = v24;
  sub_2206A40(&v28, &v22);
  v27 = a3;
  v26 = v29;
  v25 = v28;
  sub_2206DE0(&v28, &v25, (unsigned int)v19);
  sub_D0C590(&v20, (__int64)&v28);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  v16 = sub_D0E230((__int64)v30);
  *(_QWORD *)v16 = v20;
  *(_DWORD *)(v16 + 8) = v21;
  sub_E23CF0(v30);
  sub_E24D00(v30);
  sub_E232A0(v30);
  return 1;
}
