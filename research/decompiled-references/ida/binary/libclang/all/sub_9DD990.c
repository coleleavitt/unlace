__int64 __fastcall sub_9DD990(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-A0h]
  void *v16; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-90h]
  void *v18; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-80h]
  _QWORD v20[6]; // [rsp+30h] [rbp-78h] BYREF
  int v21; // [rsp+60h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v20, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9DD130(a1, a2, (__int64)v20, a3);
  if ( (_BYTE)v6 )
  {
    v8 = *(_QWORD *)(a1 + 184);
    v9 = v20[0];
    if ( v21 == 1 )
    {
      v12 = sub_8E9110((__int64)v20);
      v17 = a3;
      v10 = v20[4] + v9 * v12;
      if ( a3 <= 0x40 )
      {
LABEL_5:
        if ( a3 )
        {
          v15 = a3;
          v14 = (0xFFFFFFFFFFFFFFFFLL >> -(char)a3) & v10;
        }
        else
        {
          v15 = 0;
          v14 = 0;
        }
LABEL_7:
        v11 = sub_A1A4E0(v8, 16);
        *(_DWORD *)(v11 + 8) = v15;
        *(_QWORD *)v11 = v14;
        goto LABEL_2;
      }
    }
    else
    {
      v17 = a3;
      v10 = v20[3] + v20[0];
      if ( a3 <= 0x40 )
        goto LABEL_5;
    }
    sub_2585A50(&v16, v10, 1);
    v19 = v17;
    if ( v17 <= 0x40 )
    {
      v15 = v17;
      v14 = (unsigned __int64)v16;
    }
    else
    {
      sub_2585B30(&v18);
      v15 = v19;
      if ( v19 <= 0x40 )
      {
        v13 = v17;
        v14 = (unsigned __int64)v18;
      }
      else
      {
        sub_2585B30(&v14);
        if ( v19 > 0x40 && v18 )
          operator delete[](v18);
        v13 = v17;
      }
      if ( v13 > 0x40 && v16 )
        operator delete[](v16);
    }
    goto LABEL_7;
  }
LABEL_2:
  sub_A1C0C0(v20);
  return v6;
}

