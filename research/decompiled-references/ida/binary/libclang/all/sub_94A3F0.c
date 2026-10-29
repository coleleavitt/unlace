__int64 __fastcall sub_94A3F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // eax
  void *v13; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-90h]
  void *v15; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-80h]
  void *v17; // [rsp+20h] [rbp-78h]
  unsigned int v18; // [rsp+28h] [rbp-70h]
  void *v19; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-60h]
  void *v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-50h]
  void *v23; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-40h]
  void *v25; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v14 = v4;
  v13 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 16);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v16 = v7;
  v15 = *(void **)v6;
  sub_A1A5E0(v5, 16);
  v8 = sub_949E90(a1, a2, (__int64)&v15, (__int64)&v13);
  if ( (_BYTE)v8 )
  {
    v18 = 3;
    v17 = &byte_7;
    v22 = v14;
    if ( v14 > 0x40 )
      sub_2585B30(&v21);
    else
      v21 = v13;
    v20 = v16;
    if ( v16 > 0x40 )
      sub_2585B30(&v19);
    else
      v19 = v15;
    sub_2589B90(&v25, &v19, &v21);
    v24 = v26;
    if ( v26 > 0x40 )
      sub_2585B30(&v23);
    else
      v23 = v25;
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
    v17 = v23;
    v10 = v24;
    v24 = 0;
    v18 = v10;
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    if ( v20 > 0x40 && v19 )
      operator delete[](v19);
    if ( v22 > 0x40 && v21 )
      operator delete[](v21);
    v11 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
    v12 = v18;
    *(_DWORD *)(v11 + 8) = v18;
    if ( v12 > 0x40 )
      sub_2585B30(v11);
    else
      *(_QWORD *)v11 = v17;
    if ( v18 > 0x40 && v17 )
      operator delete[](v17);
  }
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v8;
}

