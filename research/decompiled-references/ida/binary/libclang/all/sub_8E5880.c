__int64 __fastcall sub_8E5880(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rsi
  unsigned int v4; // eax
  void *v5; // rdx
  void *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-80h]
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-70h]
  void *v17; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-60h]
  void *v19; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-50h]
  void *v21; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-40h]
  void *v23; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 48)
    || !*(_BYTE *)(sub_8E5480(a1) + 51)
    || (v12 = *(unsigned int *)(a1 + 32), v3 = v1 + v12 + 72, v12 != v2) )
  {
    v3 = v1 + v2 + 40;
  }
  v14 = 3;
  v4 = *(_DWORD *)(v3 + 8);
  v13 = &byte_7;
  v16 = v4;
  if ( v4 <= 0x40 )
  {
    v5 = *(void **)v3;
    v18 = v4;
    v15 = v5;
LABEL_6:
    v17 = &dword_0 + 1;
    v20 = v4;
    v19 = &dword_0 + 1;
    v22 = v4;
LABEL_7:
    v6 = v15;
    v24 = v4;
    v21 = v15;
    goto LABEL_8;
  }
  sub_2585B30(&v15);
  v4 = v16;
  v18 = v16;
  if ( v16 <= 0x40 )
    goto LABEL_6;
  sub_2585A50(&v17, 1, 0);
  v20 = v18;
  if ( v18 <= 0x40 )
  {
    v4 = v16;
    v19 = v17;
  }
  else
  {
    sub_2585B30(&v19);
    v4 = v16;
  }
  v22 = v4;
  if ( v4 <= 0x40 )
    goto LABEL_7;
  sub_2585B30(&v21);
  v24 = v22;
  if ( v22 > 0x40 )
  {
    sub_2585B30(&v23);
    goto LABEL_9;
  }
  v6 = v21;
LABEL_8:
  v23 = v6;
LABEL_9:
  sub_25863C0(&v23, &v19);
  v13 = v23;
  v14 = v24;
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 48)
    || !*(_BYTE *)(sub_8E5480(a1) + 51)
    || (v11 = *(unsigned int *)(a1 + 32), v9 = v7 + v11 + 72, v11 != v8) )
  {
    v9 = v7 + v8 + 40;
  }
  if ( *(_DWORD *)(v9 + 8) <= 0x40u && v14 <= 0x40 )
  {
    *(_QWORD *)v9 = v13;
    *(_DWORD *)(v9 + 8) = v14;
  }
  else
  {
    sub_2585EA0(v9, &v13);
  }
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return 1;
}

