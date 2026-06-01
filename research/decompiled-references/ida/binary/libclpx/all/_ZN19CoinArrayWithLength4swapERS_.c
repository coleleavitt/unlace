__int64 __fastcall CoinArrayWithLength::swap(CoinArrayWithLength *this, CoinArrayWithLength *a2)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)this;
  v3 = *((_DWORD *)this + 2);
  *(_QWORD *)this = v2;
  LODWORD(v2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v3;
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = v2;
  result = *((unsigned int *)a2 + 3);
  *((_DWORD *)a2 + 3) = v4;
  *((_DWORD *)this + 3) = result;
  return result;
}

