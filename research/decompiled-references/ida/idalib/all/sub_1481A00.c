void __fastcall sub_1481A00(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // r12
  int v8; // r15d
  char v9; // r14
  _DWORD v10[2]; // [rsp+0h] [rbp-158h] BYREF
  char v11; // [rsp+8h] [rbp-150h]
  unsigned int v12; // [rsp+Ch] [rbp-14Ch]
  int v13; // [rsp+10h] [rbp-148h]
  char v14; // [rsp+14h] [rbp-144h]
  void *v15; // [rsp+18h] [rbp-140h]
  __int64 v16; // [rsp+20h] [rbp-138h]
  _BYTE v17[24]; // [rsp+28h] [rbp-130h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-118h] BYREF
  char v19; // [rsp+48h] [rbp-110h]
  __int64 v20; // [rsp+4Ch] [rbp-10Ch]
  char v21; // [rsp+54h] [rbp-104h]
  void *v22; // [rsp+58h] [rbp-100h]
  __int64 v23; // [rsp+60h] [rbp-F8h]
  _BYTE v24[24]; // [rsp+68h] [rbp-F0h] BYREF
  unsigned __int8 *v25[10]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v26[17]; // [rsp+D0h] [rbp-88h] BYREF

  v5 = *(unsigned __int16 *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int16)(v5 - 406) > 8u || sub_141A630(v5) )
  {
    sub_14AB020(a1, a2);
    v8 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    sub_14AB020(a1, a2);
    v8 = *(_DWORD *)(a2 + 4);
    if ( v7 )
    {
      sub_1564820(v25, a1, v6, 1716);
      sub_1478560(v25, v7);
      v9 = 1;
      sub_FC70F0((__int64)v26, (__int64)v25);
      goto LABEL_5;
    }
  }
  v9 = 0;
  sub_1564820(v26, a1, v6, 1558);
LABEL_5:
  v17[0] = 0;
  v10[0] = a3;
  v15 = v17;
  v16 = 0;
  v10[1] = a3;
  v11 = 0;
  v12 = v6;
  v13 = v8;
  v14 = 1;
  v17[16] = 0;
  if ( a3 )
    sub_1480470(v26, (unsigned __int64)v10);
  v21 = 0;
  v24[0] = 0;
  v20 = 0;
  v22 = v24;
  v23 = 0;
  v24[16] = 0;
  v18[0] = v6;
  v18[1] = v8;
  v19 = 1;
  if ( v8 )
  {
    if ( v6 )
    {
      sub_1480470(v26, (unsigned __int64)v18);
      if ( v22 != v24 )
        operator delete(v22);
    }
  }
  if ( v15 != v17 )
    operator delete(v15);
  sub_AEA040((__int64)v26);
  if ( v9 )
    sub_AEA040((__int64)v25);
}
