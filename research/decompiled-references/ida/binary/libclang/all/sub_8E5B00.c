__int64 __fastcall sub_8E5B00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // eax
  void *v8; // rdx
  void *v9; // rdx
  unsigned int v10; // ebp
  void *v11; // r12
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v19; // [rsp+8h] [rbp-80h]
  void *v20; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-70h]
  void *v22; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-60h]
  void *v24; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-50h]
  void *v26; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h]
  void *v28; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)a2;
  if ( !*(_DWORD *)(a2 + 48) && *(_BYTE *)(sub_8E5480(a2) + 51) && (v17 = *(unsigned int *)(a2 + 32), v17 == v3) )
    v4 = v2 + v17 + 72;
  else
    v4 = v2 + v3 + 40;
  v19 = 3;
  v18 = &byte_7;
  v5 = sub_A1A4E0(a1, 16);
  v6 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v5 + 8) = v6;
  if ( v6 > 0x40 )
  {
    sub_2585B30(v5);
    v7 = *(_DWORD *)(v4 + 8);
    v21 = v7;
    if ( v7 <= 0x40 )
      goto LABEL_6;
  }
  else
  {
    *(_QWORD *)v5 = *(_QWORD *)v4;
    v7 = *(_DWORD *)(v4 + 8);
    v21 = v7;
    if ( v7 <= 0x40 )
    {
LABEL_6:
      v8 = *(void **)v4;
      v23 = v7;
      v20 = v8;
LABEL_7:
      v22 = &dword_0 + 1;
      v25 = v7;
      v24 = &dword_0 + 1;
      v27 = v7;
LABEL_8:
      v9 = v20;
      v29 = v7;
      v26 = v20;
      goto LABEL_9;
    }
  }
  sub_2585B30(&v20);
  v7 = v21;
  v23 = v21;
  if ( v21 <= 0x40 )
    goto LABEL_7;
  sub_2585A50(&v22, 1, 0);
  v25 = v23;
  if ( v23 <= 0x40 )
  {
    v7 = v21;
    v24 = v22;
  }
  else
  {
    sub_2585B30(&v24);
    v7 = v21;
  }
  v27 = v7;
  if ( v7 <= 0x40 )
    goto LABEL_8;
  sub_2585B30(&v26);
  v29 = v27;
  if ( v27 > 0x40 )
  {
    sub_2585B30(&v28);
    goto LABEL_10;
  }
  v9 = v26;
LABEL_9:
  v28 = v9;
LABEL_10:
  sub_2586200(&v28, &v24);
  v10 = v29;
  v11 = v28;
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  v18 = v11;
  v19 = v10;
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  v12 = *(_QWORD *)(a2 + 24);
  v13 = *(_QWORD *)a2;
  if ( *(_DWORD *)(a2 + 48)
    || !*(_BYTE *)(sub_8E5480(a2) + 51)
    || (v16 = *(unsigned int *)(a2 + 32), v14 = v12 + v16 + 72, v16 != v13) )
  {
    v14 = v12 + v13 + 40;
  }
  if ( *(_DWORD *)(v14 + 8) <= 0x40u && v19 <= 0x40 )
  {
    *(_QWORD *)v14 = v18;
    *(_DWORD *)(v14 + 8) = v19;
  }
  else
  {
    sub_2585EA0(v14, &v18);
  }
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return 1;
}

