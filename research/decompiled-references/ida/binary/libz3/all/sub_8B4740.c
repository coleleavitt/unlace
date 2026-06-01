__int64 __fastcall sub_8B4740(_QWORD *a1, unsigned int a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-D8h]
  __int64 v13; // [rsp+8h] [rbp-D8h]
  __int64 v14; // [rsp+8h] [rbp-D8h]
  __int64 v15; // [rsp+10h] [rbp-D0h]
  __int64 v16; // [rsp+18h] [rbp-C8h]
  char v17; // [rsp+26h] [rbp-BAh] BYREF
  char v18; // [rsp+27h] [rbp-B9h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+2Ch] [rbp-B4h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-A8h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-98h] BYREF
  _QWORD *v24; // [rsp+60h] [rbp-80h]
  _QWORD v25[2]; // [rsp+68h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+88h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+98h] [rbp-48h] BYREF

  v24 = a1 + 92;
  v25[0] = 0;
  v25[1] = 0;
  v26[0] = 1;
  v26[1] = 0;
  v27[0] = 0;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  v21 = a1 + 1;
  v22[0] = 0;
  v22[1] = 0;
  v23[0] = 1;
  v23[1] = 0;
  while ( 1 )
  {
    if ( !(unsigned __int8)sub_18290A0(*a1) )
    {
      v5 = 0;
      goto LABEL_8;
    }
    sub_8AF8E0(a1, a2, &v19, &v20, (__int64 *)&v21, &v17, &v18);
    v3 = v20;
    if ( v20 == -1 )
      break;
    if ( v19 == -1 )
    {
      v4 = a1[199] + 232LL * v20;
      v16 = v4;
      if ( v18 )
      {
        if ( *(char *)(v4 + 3) >= 0 )
          goto LABEL_7;
        v15 = (__int64)v24;
        sub_8ADE80((__int64)v24, (__int64)v25, (int *)(v4 + 136));
        sub_8ADE80(v15, (__int64)v27, (int *)(v16 + 168));
        sub_8B3C30((__int64)v24, (__int64)v25, v16 + 8, (__int64)v25);
      }
      else
      {
        if ( (*(_BYTE *)(v4 + 3) & 0x40) == 0 )
        {
LABEL_7:
          v5 = -1;
          goto LABEL_8;
        }
        v12 = (__int64)v24;
        sub_8ADE80((__int64)v24, (__int64)v25, (int *)(v4 + 72));
        sub_8ADE80(v12, (__int64)v27, (int *)(v16 + 104));
        v9 = v16 + 8;
        if ( (v26[0] & 0x100000000LL) != 0
          || LODWORD(v26[0]) != 1
          || (*(_BYTE *)(v16 + 28) & 1) != 0
          || *(_DWORD *)(v16 + 24) != 1 )
        {
          v13 = (__int64)v24;
          sub_1854300(v24, v25, v9, v25);
          v10 = v13;
        }
        else
        {
          v14 = (__int64)v24;
          sub_183A580(v24, v25, v9, v25);
          sub_182EF00(v14, v26);
          BYTE4(v26[0]) &= ~1u;
          v10 = v14;
          LODWORD(v26[0]) = 1;
        }
        v11 = v16 + 40;
        if ( (v28[0] & 0x100000000LL) != 0
          || LODWORD(v28[0]) != 1
          || (*(_BYTE *)(v16 + 60) & 1) != 0
          || *(_DWORD *)(v16 + 56) != 1 )
        {
          sub_1854300(v10, v27, v11, v27);
        }
        else
        {
          sub_183A580(v10, v27, v11, v27);
          sub_182EF00(v10, v28);
          BYTE4(v28[0]) &= ~1u;
          LODWORD(v28[0]) = 1;
        }
      }
      sub_8B2760(a1, v3, (__int64)v25);
    }
    else
    {
      v8 = v19;
      sub_8B22E0((__int64)a1, v19, v20, (__int64)v22);
      sub_8B40C0(a1, v8, v17 ^ 1);
    }
  }
  v5 = 1;
LABEL_8:
  v6 = (__int64)v21;
  sub_182EF00(v21, v22);
  sub_182EF00(v6, v23);
  sub_8AD4E0((__int64)v24, (__int64)v25);
  return v5;
}

