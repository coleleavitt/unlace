__int64 __fastcall sub_8D8A60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  void *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v13; // eax
  void *v14; // [rsp+0h] [rbp-98h]
  unsigned int v15; // [rsp+8h] [rbp-90h]
  void *v16; // [rsp+10h] [rbp-88h]
  unsigned int v17; // [rsp+18h] [rbp-80h]
  void *v18; // [rsp+20h] [rbp-78h]
  unsigned int v19; // [rsp+28h] [rbp-70h]
  void *v20; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-60h]
  void *v22; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-50h]
  void *v24; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-40h]
  void *v26; // [rsp+60h] [rbp-38h]
  unsigned int v27; // [rsp+68h] [rbp-30h]
  void *v28; // [rsp+70h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+78h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 16);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v19 = v3;
  v18 = *(void **)v2;
  sub_A1A5E0(v1, 16);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v17 = v6;
  v16 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v23 = v19;
  if ( v19 > 0x40 )
    sub_2585B30(&v22);
  else
    v22 = v18;
  v7 = v17;
  v21 = v17;
  if ( v17 <= 0x40 )
  {
    v8 = (unsigned __int64)v16;
    v20 = v16;
LABEL_5:
    v9 = (void *)((unsigned __int64)v22 & v8);
    v27 = v7;
    v24 = v9;
    v26 = v9;
    v25 = 0;
    v29 = v7;
    goto LABEL_6;
  }
  sub_2585B30(&v20);
  v7 = v21;
  v25 = v21;
  if ( v21 <= 0x40 )
  {
    v8 = (unsigned __int64)v20;
    goto LABEL_5;
  }
  sub_2585B30(&v24);
  v7 = v25;
  if ( v25 <= 0x40 )
  {
    v8 = (unsigned __int64)v24;
    goto LABEL_5;
  }
  sub_2586580(&v24, &v22);
  v13 = v25;
  v9 = v24;
  v25 = 0;
  v27 = v13;
  v26 = v24;
  v29 = v13;
  if ( v13 > 0x40 )
  {
    sub_2585B30(&v28);
    goto LABEL_7;
  }
LABEL_6:
  v28 = v9;
LABEL_7:
  v14 = v28;
  v10 = v29;
  v29 = 0;
  v15 = v10;
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v11 + 8) = v15;
  if ( v15 > 0x40 )
    sub_2585B30(v11);
  else
    *(_QWORD *)v11 = v14;
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return 1;
}

