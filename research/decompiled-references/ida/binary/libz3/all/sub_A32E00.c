__int64 __fastcall sub_A32E00(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // eax
  void *v5; // r12
  unsigned int v6; // ebp
  void *v7; // rbx
  void *v9; // [rsp+8h] [rbp-D0h]
  int v10[2]; // [rsp+10h] [rbp-C8h] BYREF
  int v11[2]; // [rsp+18h] [rbp-C0h]
  int v12[2]; // [rsp+20h] [rbp-B8h] BYREF
  int v13[2]; // [rsp+28h] [rbp-B0h]
  __m128i v14; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v16[24]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v17[16]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v18[96]; // [rsp+78h] [rbp-60h] BYREF

  *(_QWORD *)v10 = 0;
  *(_QWORD *)v11 = 0;
  *(_QWORD *)v12 = 1;
  *(_QWORD *)v13 = 0;
  sub_182CBA0(qword_1C7F2C0, v12);
  LOBYTE(v12[1]) &= ~1u;
  v12[0] = 1;
  sub_B28AA0(&v14, a1 + 840, v10, 0, 0);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v10);
  sub_182CBA0(v9, v12);
  v2 = *(__int64 **)(a2 + 8);
  if ( v2 )
    v3 = *((_DWORD *)v2 - 1);
  else
    v3 = 0;
  v4 = sub_A32A40(a1, &v14, v3, v2, *(unsigned int **)(a2 + 16));
  v5 = qword_1C7F2C0;
  v6 = v4;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v5, v18);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v7, v16);
  return v6;
}

