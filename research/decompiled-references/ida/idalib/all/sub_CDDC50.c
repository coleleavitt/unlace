__int64 __fastcall sub_CDDC50(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rax
  char v16; // al
  char v17; // r14
  __int64 v18; // [rsp+8h] [rbp-C0h]
  unsigned int v19; // [rsp+1Ch] [rbp-ACh] BYREF
  unsigned int v20; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v21; // [rsp+24h] [rbp-A4h] BYREF
  __int64 v22[3]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall **v25)(); // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-50h]
  int v29; // [rsp+80h] [rbp-48h]
  unsigned int v30; // [rsp+84h] [rbp-44h]
  char v31; // [rsp+88h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v18 = *(_QWORD *)(a2 + 16);
  v19 = sub_CFF2B0(a1);
  v20 = sub_CFF2B0(a1);
  v3 = sub_CFF2B0(a1);
  v4 = *(_QWORD *)(a1 + 1488);
  v21 = v3;
  v5 = *(_QWORD *)(a1 + 1480);
  v23 = v4;
  v6 = *(_QWORD *)(a1 + 1504);
  *(_DWORD *)(a1 + 1504) = v3;
  v7 = *(_QWORD *)(a1 + 1328);
  v24 = v6;
  LODWORD(v6) = v20;
  v8 = *(_QWORD *)(a1 + 1496);
  *(_BYTE *)(a1 + 1492) = 1;
  *(_DWORD *)(a1 + 1488) = v6;
  *(_BYTE *)(a1 + 1508) = 1;
  *(_QWORD *)(a1 + 1480) = v7;
  *(_QWORD *)(a1 + 1496) = v7;
  sub_CFF6E0(a1, &v19);
  sub_CFF2A0(a1, v19);
  v26 = a1;
  v9 = *(_QWORD *)(a1 + 1328);
  *(_QWORD *)(a1 + 1328) = &v25;
  v28 = 0;
  v27 = v9;
  v29 = 1;
  v31 = 0;
  v25 = &off_2B4B698;
  if ( (unsigned __int8)sub_CDCBC0(a1, v2, v10, v11, v12)
    && (sub_CFF6E0(a1, &v21), sub_CFF2A0(a1, v21), (unsigned __int8)sub_CB59F0((_QWORD *)a1, v18))
    && (!v31 || (v16 = sub_CBB7D0((__int64)&v25, 0), v22[0] = 4, v17 = v16, sub_CFF770(v26, v30, v22), v17)) )
  {
    sub_CBB4F0((__int64)&v25);
    v13 = sub_CFF5D0(a1, &v19);
    if ( (_BYTE)v13 )
    {
      sub_CFF6E0(a1, &v20);
      sub_CFF2A0(a1, v20);
    }
  }
  else
  {
    v13 = 0;
    sub_CBB4F0((__int64)&v25);
  }
  v14 = v23;
  *(_QWORD *)(a1 + 1496) = v8;
  *(_QWORD *)(a1 + 1480) = v5;
  *(_QWORD *)(a1 + 1488) = v14;
  *(_QWORD *)(a1 + 1504) = v24;
  return v13;
}
