void __fastcall sub_407EA0(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // r14d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // [rsp+0h] [rbp-288h]
  __int64 v14; // [rsp+8h] [rbp-280h]
  int v15[2]; // [rsp+10h] [rbp-278h] BYREF
  __int64 v16; // [rsp+18h] [rbp-270h]
  int v17[2]; // [rsp+20h] [rbp-268h] BYREF
  int v18; // [rsp+28h] [rbp-260h]
  __int64 v19; // [rsp+30h] [rbp-258h]
  void *v20; // [rsp+38h] [rbp-250h]
  _BYTE *v21; // [rsp+B0h] [rbp-1D8h]
  int v22; // [rsp+B8h] [rbp-1D0h]
  __int64 v23; // [rsp+C0h] [rbp-1C8h]
  _QWORD v24[19]; // [rsp+C8h] [rbp-1C0h] BYREF
  int v25; // [rsp+160h] [rbp-128h]
  __int64 (__fastcall **v26)(); // [rsp+168h] [rbp-120h] BYREF
  int v27; // [rsp+1F8h] [rbp-90h]
  __int64 v28; // [rsp+200h] [rbp-88h]
  __int64 v29; // [rsp+208h] [rbp-80h]
  __int64 v30; // [rsp+210h] [rbp-78h]
  __int64 v31; // [rsp+218h] [rbp-70h]
  __int64 v32; // [rsp+220h] [rbp-68h]
  __int64 v33; // [rsp+228h] [rbp-60h]
  __int64 v34; // [rsp+230h] [rbp-58h]
  _BYTE v35[80]; // [rsp+238h] [rbp-50h] BYREF

  if ( !a4 )
  {
    sub_407990(a1, a2, (__int64)a3, 0, a5, a6);
    a4 = a1[2];
  }
  if ( *(_WORD *)(a4 + 4) == 2 )
  {
    v7 = a1[9];
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 - 4) )
      {
        v8 = a1[1];
        v9 = *(_DWORD *)(a4 + 20);
        v14 = *(_QWORD *)(a4 + 24);
        sub_1584DD0(v17, v8, 0);
        *(_QWORD *)v17 = &off_1C4CA60;
        v21 = v35;
        v22 = 0;
        v23 = 0;
        sub_1584DD0(v24, v8, 0);
        v24[18] = 0;
        v25 = 0;
        v24[0] = &off_1C61DB8;
        sub_1584DD0(&v26, v8, 0);
        v27 = 0;
        v28 = 0;
        v26 = &off_1C61DE0;
        v29 = v8;
        v30 = 0;
        v31 = v8;
        v32 = 0;
        v33 = v8;
        v34 = 0;
        v35[8] = 0;
        sub_157BE40((int)v15, (int)v17, v14, v9, a2, v10, v13, v14, v15[0], v16, (int)&off_1C4CA80, v18, v19, v20);
        v11 = *a3;
        v12 = v16;
        *a3 = *(_QWORD *)v15;
        *(_QWORD *)v15 = v11;
        sub_3FCDF0(v11, v12);
        *(_QWORD *)v17 = &off_1C4CA80;
        sub_267D20(v17);
      }
    }
  }
}

