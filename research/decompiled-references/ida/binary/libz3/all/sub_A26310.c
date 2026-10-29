unsigned __int64 __fastcall sub_A26310(_QWORD *a1, double a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 i; // r15
  char v6; // al
  __int64 v7; // rax
  int *v8; // rax
  void *v9; // rdi
  void *v10; // rbp
  unsigned __int64 result; // rax
  void *v12; // [rsp+8h] [rbp-E0h]
  void *v13; // [rsp+8h] [rbp-E0h]
  void *v14; // [rsp+10h] [rbp-D8h]
  void *v15; // [rsp+10h] [rbp-D8h]
  void *v16; // [rsp+18h] [rbp-D0h]
  void *v17; // [rsp+28h] [rbp-C0h]
  _QWORD v18[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-88h] BYREF
  int v22; // [rsp+70h] [rbp-78h] BYREF
  char v23; // [rsp+74h] [rbp-74h]
  int v24; // [rsp+80h] [rbp-68h] BYREF
  char v25; // [rsp+84h] [rbp-64h]
  _BYTE v26[16]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v27[72]; // [rsp+A0h] [rbp-48h] BYREF

  v3 = a1[4];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (int)v4 > 0 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_BYTE *)(a1[82] + 4 * i + 3);
        if ( (v6 & 0x30) == 0 && (v6 & 0x40) != 0 )
        {
          v7 = (i << 6) + a1[83];
          if ( (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 || *(_DWORD *)(v7 + 32) )
          {
            v8 = sub_9AA900((__int64)a1, i);
            sub_9A9130((__int64)&v22, (__int64)v8);
            v18[0] = 0;
            v18[1] = 0;
            v19[0] = 1;
            v9 = qword_1C7F2C0;
            v19[1] = 0;
            if ( (v23 & 1) != 0 )
            {
              v13 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v18, &v22);
              v9 = v13;
            }
            else
            {
              LODWORD(v18[0]) = v22;
            }
            if ( (v25 & 1) != 0 )
            {
              sub_182C690(v9, v19, &v24);
            }
            else
            {
              BYTE4(v19[0]) &= ~1u;
              LODWORD(v19[0]) = v24;
            }
            v20[0] = 0;
            v20[1] = 0;
            v21[0] = 1;
            v21[1] = 0;
            v16 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v20);
            sub_182CBA0(v16, v21);
            BYTE4(v21[0]) &= ~1u;
            LODWORD(v21[0]) = 1;
            v17 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v22);
            sub_182CBA0(v17, &v24);
            sub_992E80((__int64)&v22, (__int64)v18, (i << 6) + a1[83]);
            sub_9D7F30(a1, i, (__int64)&v22);
            v14 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v26);
            sub_182CBA0(v14, v27);
            v15 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v22);
            sub_182CBA0(v15, &v24);
            v12 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v20);
            sub_182CBA0(v12, v21);
            v10 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v18);
            sub_182CBA0(v10, v19);
          }
        }
      }
    }
  }
  result = sub_A25FE0((__int64)a1, a2);
  if ( !(_BYTE)result )
    return sub_9CF880((__int64)a1);
  return result;
}

