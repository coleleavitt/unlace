__int64 __fastcall CoinOslFactorization::updateTwoColumnsFT(
        CoinOslFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r9
  bool v11; // zf
  int v13; // [rsp+8h] [rbp-20h] BYREF
  int v14; // [rsp+Ch] [rbp-1Ch] BYREF

  v7 = *(_QWORD *)a3;
  v8 = *((_QWORD *)a4 + 1);
  v9 = *(_QWORD *)a4;
  v10 = *((_QWORD *)a3 + 1);
  v13 = *((_DWORD *)a3 + 4);
  v14 = *((_DWORD *)a4 + 4);
  c_ekkftrn2((_DWORD)this + 104, v8 - 8, *((_QWORD *)a2 + 1), v9, (int)&v14, v10, v7, (__int64)&v13);
  v11 = v13 == 0;
  *((_DWORD *)a3 + 4) = v13;
  if ( v11 )
    *((_BYTE *)a3 + 28) = 0;
  v11 = v14 == 0;
  *((_DWORD *)a4 + 4) = v14;
  if ( v11 )
    *((_BYTE *)a4 + 28) = 0;
  return *((unsigned int *)this + 114);
}

