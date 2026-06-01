__int64 __fastcall CoinPresolveMatrix::initializeStuff(CoinPresolveMatrix *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  int v6; // r13d
  double *v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 result; // rax

  v2 = 3 * *((_DWORD *)this + 1);
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_13;
  *((_QWORD *)this + 56) = operator new[](4 * v2);
  v3 = 2 * *((_DWORD *)this + 1);
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_13;
  *((_QWORD *)this + 57) = operator new[](8 * v3);
  v4 = 2 * *(_DWORD *)this;
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_13;
  *((_QWORD *)this + 58) = operator new[](4 * v4);
  v5 = 2 * *(_DWORD *)this;
  if ( v5 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_13;
  *((_QWORD *)this + 59) = operator new[](8 * v5);
  v6 = *((_DWORD *)this + 1) + 1;
  if ( v6 < *(_DWORD *)this + 1 )
    v6 = *(_DWORD *)this + 1;
  if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFLL
    || (v7 = (double *)operator new[](8LL * v6),
        *((_QWORD *)this + 60) = v7,
        coin_init_random_vec(v7, v6),
        v8 = *((int *)this + 1),
        v8 > 0x1FFFFFFFFFFFFFFELL)
    || (v9 = operator new[](4 * v8), v10 = *((int *)this + 1), *((_QWORD *)this + 61) = v9, v10 > 0xFFFFFFFFFFFFFFFLL)
    || (v11 = operator new[](8 * v10), v12 = *((int *)this + 1),
                                       *((_QWORD *)this + 62) = v11,
                                       v12 > 0x1FFFFFFFFFFFFFFELL)
    || (v13 = operator new[](4 * v12), v14 = *((int *)this + 1), *((_QWORD *)this + 63) = v13, v14 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_13:
    __cxa_throw_bad_array_new_length();
  }
  result = operator new[](8 * v14);
  *((_QWORD *)this + 64) = result;
  return result;
}

