unsigned __int64 __fastcall sub_1B13570(__int64 *a1, _DWORD **a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // edx
  __int64 v9; // rax
  __int64 v10; // r8
  _QWORD **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  _QWORD *v21; // rax
  __int64 v22; // r9
  int v23; // [rsp+1Ch] [rbp-CCh] BYREF
  _QWORD v24[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v25[32]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int8 *v26[11]; // [rsp+50h] [rbp-98h] BYREF
  char v27; // [rsp+A8h] [rbp-40h]
  char v28; // [rsp+B4h] [rbp-34h]

  if ( a3 != 1 )
  {
    if ( a3 )
      v6 = *a2[1];
    else
      v6 = a5;
    sub_168B9F0((__int64)v25, a1, v6, 0x11FAu, 0);
    sub_15F7200(v25);
    return 1;
  }
  v9 = sub_1AE5FF0(a1[1]);
  if ( v9 )
  {
    v11 = *(_QWORD ***)(v9 + 1008);
    if ( v11 )
    {
      v12 = *v11;
      if ( !v12 || (v13 = v12[5], *v12 != v13) || !*(_QWORD *)v13 || (*(_BYTE *)(*(_QWORD *)v13 + 10LL) & 1) == 0 )
      {
        v14 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
        sub_168B9F0((__int64)v25, a1, a4, 0x11DCu, 0);
        v15 = sub_20EAB70(63, v14);
        v24[1] = v16;
        v24[0] = v15;
        v17 = sub_166BAF0((__int64)v25, (__int64)v24);
        v23 = 5;
        sub_1587D10(v17, &v23);
        sub_15F7200(v25);
        return 1;
      }
    }
  }
  v18 = sub_1AE6050(v10);
  if ( !v18 )
  {
LABEL_25:
    v21 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F009A0(v21, a4, a5, a2, 1, v22);
  }
  if ( !*(_DWORD *)(v18 + 1112) )
  {
    *(_DWORD *)(v18 + 1112) = a4;
    goto LABEL_25;
  }
  sub_168B9F0((__int64)v25, a1, a4, 0x1204u, 0);
  if ( v27 )
  {
    sub_AE9DF0(v26, (__int64)"scan", 1u);
  }
  else if ( v28 )
  {
    sub_1B132F0((__int64)v25, (__int64)"scan");
  }
  sub_15F7200(v25);
  v19 = sub_1AE6050(a1[1]);
  v20 = 0;
  if ( v19 )
    v20 = *(_DWORD *)(v19 + 1112);
  sub_168B9F0((__int64)v25, a1, v20, 0x182Cu, 0);
  if ( v27 )
  {
    sub_AE9DF0(v26, (__int64)"scan", 1u);
  }
  else if ( v28 )
  {
    sub_1B132F0((__int64)v25, (__int64)"scan");
  }
  sub_15F7200(v25);
  return 1;
}
