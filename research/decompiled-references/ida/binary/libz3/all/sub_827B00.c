_DWORD *__fastcall sub_827B00(_QWORD *a1, int a2, int a3, const void **a4, int a5)
{
  _DWORD *v5; // rcx
  _DWORD *result; // rax
  unsigned int v7; // edi
  size_t v8; // rdx

  v5 = *a4;
  result = a1;
  if ( v5 )
  {
    v7 = *(v5 - 1);
    result[4] = a3;
    result[13] = a2;
    *((_QWORD *)result + 1) = 0;
    v8 = 4LL * v7;
    result[5] = -2;
    *((_QWORD *)result + 3) = 0;
    result[8] = v7;
    *((_QWORD *)result + 5) = v8 + 72;
    *((_BYTE *)result + 48) = 0;
    *((_BYTE *)result + 56) = 0;
    result[15] = a5;
    *(_QWORD *)result = off_1C55100;
    if ( v7 )
      return memmove(result + 16, v5, v8);
  }
  else
  {
    a1[1] = 0;
    *(_QWORD *)((char *)a1 + 20) = 4294967294LL;
    *((_DWORD *)a1 + 4) = a3;
    *(_QWORD *)((char *)a1 + 28) = 0;
    a1[5] = 72;
    *((_BYTE *)a1 + 48) = 0;
    *((_DWORD *)a1 + 13) = a2;
    *((_BYTE *)a1 + 56) = 0;
    *((_DWORD *)a1 + 15) = a5;
    *a1 = off_1C55100;
  }
  return result;
}

