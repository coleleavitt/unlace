__int64 __fastcall CoinPackedMatrix::swap(CoinPackedMatrix *this, CoinPackedMatrix *a2)
{
  char v2; // al
  __int64 v3; // xmm0_8
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax

  v2 = *((_BYTE *)this + 8);
  v3 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)a2 + 2);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  *((_BYTE *)a2 + 8) = v2;
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)a2 + 2) = v3;
  v5 = *((_QWORD *)this + 4);
  v6 = *((_QWORD *)a2 + 4);
  v7 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 3) = v7;
  *((_QWORD *)this + 4) = v6;
  v8 = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 4) = v5;
  v9 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v8;
  v10 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 5) = v9;
  v11 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v10;
  v12 = *((_QWORD *)a2 + 7);
  *((_QWORD *)a2 + 6) = v11;
  v13 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v12;
  LODWORD(v12) = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 7) = v13;
  LODWORD(v13) = *((_DWORD *)this + 16);
  *((_DWORD *)this + 16) = v12;
  *((_DWORD *)a2 + 16) = v13;
  LODWORD(v13) = *((_DWORD *)this + 17);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)a2 + 17) = v13;
  LODWORD(v13) = *((_DWORD *)this + 18);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 18) = v13;
  LODWORD(v13) = *((_DWORD *)this + 19);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)a2 + 19) = v13;
  result = *((unsigned int *)this + 20);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)a2 + 20) = result;
  return result;
}

