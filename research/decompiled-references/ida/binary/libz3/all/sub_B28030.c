__int64 __fastcall sub_B28030(unsigned int *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rdx
  void *v11; // rbx
  unsigned int v12; // [rsp+0h] [rbp-38h] BYREF
  char v13; // [rsp+4h] [rbp-34h]
  __int64 v14; // [rsp+8h] [rbp-30h]
  int v15; // [rsp+10h] [rbp-28h] BYREF
  char v16; // [rsp+14h] [rbp-24h]
  __int64 v17; // [rsp+18h] [rbp-20h]

  result = *a1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v13 &= 0xFCu;
      v16 &= 0xFCu;
      v12 = 0;
      v14 = 0;
      v15 = 1;
      v17 = 0;
      sub_184BE60(qword_1C7F2C0, a1 + 2, a2, &v12);
      v3 = v12;
      v4 = v13;
      v12 = a1[2];
      v5 = *((_QWORD *)a1 + 2);
      a1[2] = v3;
      v6 = v14;
      v14 = v5;
      LOBYTE(v5) = *((_BYTE *)a1 + 12);
      *((_QWORD *)a1 + 2) = v6;
      LOBYTE(v6) = v4;
      v4 &= ~2u;
      v7 = v5 & 0xFD;
      v13 = v5 & 1 | v4 & 0xFE | v5 & 2;
      LODWORD(v5) = a1[6];
      *((_BYTE *)a1 + 12) = v4 & 1 | v7 & 0xFE | v6 & 2;
      LODWORD(v6) = v15;
      v15 = v5;
      v8 = *((_QWORD *)a1 + 4);
      v9 = v16;
      a1[6] = v6;
      v10 = v17;
      v17 = v8;
      LOBYTE(v8) = *((_BYTE *)a1 + 28);
      *((_QWORD *)a1 + 4) = v10;
      LOBYTE(v10) = v9;
      v9 &= ~2u;
      v16 = v8 & 1 | v9 & 0xFE | v8 & 2;
      *((_BYTE *)a1 + 28) = v9 & 1 | v8 & 0xFC | v10 & 2;
      v11 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v12);
      return sub_182CBA0(v11, &v15);
    }
  }
  else if ( (a2 & 1) == 0 )
  {
    *a1 = 2;
  }
  return result;
}

