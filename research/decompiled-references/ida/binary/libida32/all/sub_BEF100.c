__int64 __fastcall sub_BEF100(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // ebx
  void *v13; // r14
  char v14; // r13
  void *v16; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+8h] [rbp-70h]
  char v18; // [rsp+Ch] [rbp-6Ch]
  void *v19; // [rsp+10h] [rbp-68h] BYREF
  void *v20; // [rsp+18h] [rbp-60h]
  int v21; // [rsp+20h] [rbp-58h]
  char v22; // [rsp+24h] [rbp-54h]

  v5 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_F41500(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL));
  v16 = a2;
  v17 = 64;
  v18 = v7 ^ 1;
  v11 = sub_A884B0(v6, v5, v8, v9, v10);
  v12 = 64;
  if ( v11 == 64 )
  {
    v13 = v16;
    v14 = v18;
  }
  else
  {
    v14 = v18;
    if ( v18 )
      sub_21E3050(&v19, &v16, v11);
    else
      sub_21E30A0(&v19, &v16, v11);
    v12 = (int)v20;
    v13 = v19;
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
  }
  BYTE4(v19) &= ~1u;
  LODWORD(v19) = 2;
  v20 = v13;
  v21 = v12;
  v22 = v14;
  sub_A2BFE0(a4, (__int64)&v19);
  if ( (unsigned int)v19 > 1 )
    sub_A2BBA0((int *)&v19);
  return 1;
}

