unsigned __int64 __fastcall sub_A4A3F0(_QWORD *a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 i; // r15
  __int64 v5; // rsi
  void *v6; // r12
  __int64 v7; // rdx
  void *v8; // rbp
  void *v9; // rbp
  unsigned __int64 result; // rax
  int v11; // [rsp+10h] [rbp-78h] BYREF
  char v12; // [rsp+14h] [rbp-74h]
  __int64 v13; // [rsp+18h] [rbp-70h]
  int v14; // [rsp+20h] [rbp-68h] BYREF
  char v15; // [rsp+24h] [rbp-64h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  _BYTE v17[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[72]; // [rsp+40h] [rbp-48h] BYREF

  v2 = a1[4];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (int)v3 > 0 )
    {
      for ( i = 0; i != v3; ++i )
      {
        if ( (*(_BYTE *)(a1[74] + 4 * i + 3) & 0x30) == 0 && (*(_BYTE *)(a1[74] + 4 * i + 3) & 0x40) != 0 )
        {
          v5 = 32 * i + a1[75];
          if ( (*(_BYTE *)(v5 + 20) & 1) != 0 || *(_DWORD *)(v5 + 16) != 1 )
          {
            v12 &= 0xFCu;
            v15 &= 0xFCu;
            v6 = qword_1C7F2C0;
            v11 = 0;
            v13 = 0;
            v14 = 1;
            v16 = 0;
            sub_18495B0(qword_1C7F2C0, v5, &v11);
            sub_182CBA0(v6, &v14);
            v7 = a1[75];
            v15 &= ~1u;
            v14 = 1;
            sub_3EBB80((__int64)v17, (__int64)&v11, 32 * i + v7);
            sub_9DA920(a1, i, (__int64)v17);
            v8 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v17);
            sub_182CBA0(v8, v18);
            v9 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v11);
            sub_182CBA0(v9, &v14);
          }
        }
      }
    }
  }
  result = sub_A4A0C0((__int64)a1, a2);
  if ( !(_BYTE)result )
    return sub_9CF9E0((__int64)a1);
  return result;
}

