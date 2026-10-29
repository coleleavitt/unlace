__int64 (__fastcall **__fastcall sub_137330(__int64 a1, int a2, __int64 a3, const char *a4))(std::exception *this)
{
  __int64 (__fastcall **result)(std::exception *); // rax
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  void *v9; // rax

  result = off_4DBCD0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = off_4DBCD0;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  if ( a4 )
  {
    v6 = strlen(a4);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(a1 + 24, 0, v6 + 1, 1);
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 24) = v9;
    memmove(v9, a4, v8);
    result = *(__int64 (__fastcall ***)(std::exception *))(a1 + 24);
    *((_BYTE *)result + v8) = 0;
  }
  return result;
}
