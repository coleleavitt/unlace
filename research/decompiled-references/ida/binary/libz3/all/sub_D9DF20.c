__int64 __fastcall sub_D9DF20(__int64 a1)
{
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbp
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  __int64 (__fastcall ***v8)(__int64); // r15
  bool v9; // zf
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 (__fastcall **v11)(__int64); // r13
  __int64 (__fastcall **v12)(__int64); // r14
  __int64 (__fastcall *v13)(__int64); // rsi
  __int64 (__fastcall **v14)(__int64); // rdi
  __int64 (__fastcall *v15)(__int64); // rsi
  __int64 (__fastcall **v16)(__int64); // rax
  __int64 (__fastcall **v17)(__int64); // r13
  __int64 (__fastcall **v18)(__int64); // rdi
  __int64 (__fastcall **v19)(__int64); // rdi
  _BYTE v20[64]; // [rsp+Ah] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 296) )
    return 1;
  sub_1858590(v20, a1 + 8);
  sub_14B5FE0(a1 + 160, v20);
  v3 = (_QWORD *)sub_186B270(0x88u);
  v4 = *(_QWORD *)a1;
  v5 = v3;
  *v3 = &off_1C4DD50;
  v3[1] = v4;
  v6 = (_OWORD *)sub_186B270(0x80u);
  v5[2] = v6;
  *((_DWORD *)v5 + 8) = 0;
  v5[3] = 8;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  v5[5] = v7;
  v5[6] = 8;
  *((_DWORD *)v5 + 14) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v5[8] = sub_1434DE0(v4, 0);
  sub_1694970(v5 + 9, v4);
  v8 = *(__int64 (__fastcall ****)(__int64))(a1 + 104);
  *((_BYTE *)v5 + 132) = 0;
  *((_DWORD *)v5 + 32) = 1;
  if ( v8 )
  {
    v9 = (*((_DWORD *)v8 + 32))-- == 1;
    if ( v9 )
    {
      v10 = **v8;
      if ( v10 == sub_38D2C0 )
      {
        *v8 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
        v11 = v8[2];
        v12 = &v11[2 * *((unsigned int *)v8 + 6)];
        if ( v11 != v12 )
        {
          while ( (unsigned __int64)*v11 <= 1 )
          {
            v11 += 2;
            if ( v12 == v11 )
              goto LABEL_28;
          }
          if ( v12 != v11 )
          {
            v13 = *v11;
            v14 = v8[1];
            if ( *v11 )
              goto LABEL_23;
            while ( 1 )
            {
              v15 = v11[1];
              if ( v15 )
              {
                v9 = (*((_DWORD *)v15 + 2))-- == 1;
                if ( v9 )
                  sub_15D7BC0(v14, v15);
              }
              v16 = v11 + 2;
              if ( v12 == v11 + 2 )
                break;
              while ( 1 )
              {
                v13 = *v16;
                v11 = v16;
                if ( (unsigned __int64)*v16 > 1 )
                  break;
                v16 += 2;
                if ( v12 == v16 )
                  goto LABEL_28;
              }
              if ( v12 == v16 )
                break;
              v14 = v8[1];
LABEL_23:
              v9 = (*((_DWORD *)v13 + 2))-- == 1;
              if ( v9 )
              {
                sub_15D7BC0(v14, v13);
                v14 = v8[1];
              }
            }
          }
        }
LABEL_28:
        sub_1695230(v8 + 9);
        v17 = v8[8];
        if ( v17 )
        {
          (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v17)(v8[8]);
          sub_186B220(v17);
        }
        v18 = v8[5];
        if ( v18 )
          sub_186B220(v18);
        v19 = v8[2];
        if ( v19 )
          sub_186B220(v19);
      }
      else
      {
        v10((__int64)v8);
      }
      sub_186B220(v8);
    }
  }
  *(_QWORD *)(a1 + 104) = v5;
  if ( (unsigned __int8)sub_D9C240(a1) )
  {
    sub_D9D0D0((_QWORD *)a1);
    *(_BYTE *)(a1 + 296) = 1;
    sub_18572D0(v20);
    return 1;
  }
  else
  {
    sub_18572D0(v20);
    return 0;
  }
}

