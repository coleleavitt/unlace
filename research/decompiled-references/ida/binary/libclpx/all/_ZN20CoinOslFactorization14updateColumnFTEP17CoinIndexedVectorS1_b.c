__int64 __fastcall CoinOslFactorization::updateColumnFT(
        CoinOslFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 result; // rax
  int v11; // edx
  _DWORD v12[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = (char *)this + 104;
  v6 = *((_DWORD *)a3 + 4);
  v7 = *((_QWORD *)a3 + 1);
  v8 = *(_QWORD *)a3;
  v9 = *((_QWORD *)v5 + 16);
  v12[0] = v6;
  *((_QWORD *)v5 + 16) = *((_QWORD *)a2 + 1) - 8LL;
  result = c_ekkftrn_ft(v5, v7, v8, v12);
  v11 = v12[0];
  *((_QWORD *)this + 29) = v9;
  *((_DWORD *)a3 + 4) = v11;
  if ( !v11 )
    *((_BYTE *)a3 + 28) = 0;
  *((_DWORD *)this + 114) = result;
  return result;
}

