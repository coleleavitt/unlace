unsigned __int64 __fastcall sub_A562B0(_QWORD *a1, double a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 i; // r15
  char v6; // al
  int *v7; // rax
  int *v8; // rax
  void *v9; // r14
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // r14
  void *v13; // r14
  void *v14; // r13
  void *v15; // r13
  void *v16; // rbx
  unsigned __int64 result; // rax
  void *v18; // [rsp+10h] [rbp-108h]
  void *v19; // [rsp+18h] [rbp-100h]
  int v20; // [rsp+20h] [rbp-F8h] BYREF
  char v21; // [rsp+24h] [rbp-F4h]
  int v22; // [rsp+30h] [rbp-E8h] BYREF
  char v23; // [rsp+34h] [rbp-E4h]
  _QWORD v24[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v30[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+B0h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+C0h] [rbp-58h] BYREF
  _QWORD v33[9]; // [rsp+D0h] [rbp-48h] BYREF

  v3 = a1[4];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (int)v4 > 0 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_BYTE *)(a1[90] + 4 * i + 3);
        if ( (v6 & 0x30) == 0 && (v6 & 0x40) != 0 )
        {
          v7 = sub_9AD4F0((__int64)a1, i);
          if ( *v7 || (v7[13] & 1) != 0 || v7[12] != 1 || v7[16] )
          {
            v8 = sub_9AD4F0((__int64)a1, i);
            sub_9A9130((__int64)&v20, (__int64)(v8 + 8));
            v24[0] = 0;
            v24[1] = 0;
            v25[0] = 1;
            v9 = qword_1C7F2C0;
            v25[1] = 0;
            if ( (v21 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v24, &v20);
            else
              LODWORD(v24[0]) = v20;
            if ( (v23 & 1) != 0 )
            {
              sub_182C690(v9, v25, &v22);
            }
            else
            {
              BYTE4(v25[0]) &= ~1u;
              LODWORD(v25[0]) = v22;
            }
            v26[0] = 0;
            v26[1] = 0;
            v27[0] = 1;
            v27[1] = 0;
            v18 = qword_1C7F2C0;
            sub_182CEF0(qword_1C7F2C0, v26);
            sub_182CBA0(v18, v27);
            BYTE4(v27[0]) &= ~1u;
            v10 = qword_1C7F2C0;
            LODWORD(v27[0]) = 1;
            v28[0] = 0;
            v28[1] = 0;
            v29[0] = 1;
            v29[1] = 0;
            v30[0] = 0;
            v30[1] = 0;
            v31[0] = 1;
            v31[1] = 0;
            if ( (v24[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v30, v24);
            else
              LODWORD(v30[0]) = v24[0];
            if ( (v25[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v10, v31, v25);
            }
            else
            {
              BYTE4(v31[0]) &= ~1u;
              LODWORD(v31[0]) = v25[0];
            }
            v32[0] = 0;
            v11 = qword_1C7F2C0;
            v32[1] = 0;
            v33[0] = 1;
            v33[1] = 0;
            if ( (v26[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v32, v26);
            else
              LODWORD(v32[0]) = v26[0];
            if ( (v27[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v11, v33, v27);
            }
            else
            {
              BYTE4(v33[0]) &= ~1u;
              LODWORD(v33[0]) = v27[0];
            }
            v19 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v26);
            sub_182CBA0(v19, v27);
            v12 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v24);
            sub_182CBA0(v12, v25);
            v13 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v20);
            sub_182CBA0(v13, &v22);
            sub_9FD3E0(a1, i, (__int64)v28);
            v14 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v32);
            sub_182CBA0(v14, v33);
            v15 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v30);
            sub_182CBA0(v15, v31);
            v16 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v28);
            sub_182CBA0(v16, v29);
          }
        }
      }
    }
  }
  result = sub_A55F80((__int64)a1, a2);
  if ( !(_BYTE)result )
    return sub_9CFB40((__int64)a1);
  return result;
}

