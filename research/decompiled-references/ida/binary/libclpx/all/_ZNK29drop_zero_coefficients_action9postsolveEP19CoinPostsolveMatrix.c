int *__fastcall drop_zero_coefficients_action::postsolve(drop_zero_coefficients_action *this, CoinPostsolveMatrix *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rbp
  int *result; // rax
  __int64 v9; // rcx
  char *v10; // r9
  __int64 v11; // rdx
  int v12; // r13d
  _DWORD *v13; // r12
  int v14; // edi
  __int64 v15; // rax

  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 7);
  v5 = *((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 33);
  result = (int *)(v2 + 8LL * *((int *)this + 4) - 8);
  if ( v2 <= (unsigned __int64)result )
  {
    v9 = v2 + 8LL * *((int *)this + 4) - 16;
    v10 = (char *)result + (~(8LL * *((int *)this + 4) - 8) & 0xFFFFFFFFFFFFFFF8LL);
    while ( 1 )
    {
      v11 = *((int *)a2 + 64);
      v12 = *result;
      v13 = (_DWORD *)(v7 + 4 * v11);
      v14 = *((_DWORD *)a2 + 64);
      v15 = 4LL * result[1];
      *((_DWORD *)a2 + 64) = *v13;
      *(_DWORD *)(v4 + 4 * v11) = v12;
      *(_QWORD *)(v3 + 8 * v11) = 0;
      *v13 = *(_DWORD *)(v5 + v15);
      *(_DWORD *)(v5 + v15) = v14;
      ++*(_DWORD *)(v6 + v15);
      result = (int *)v9;
      if ( (char *)v9 == v10 )
        break;
      v9 -= 8;
    }
  }
  return result;
}

