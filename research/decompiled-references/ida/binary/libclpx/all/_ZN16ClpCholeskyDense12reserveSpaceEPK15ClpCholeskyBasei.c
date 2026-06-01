__int64 __fastcall ClpCholeskyDense::reserveSpace(ClpCholeskyDense *this, const ClpCholeskyBase *a2, int a3)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  void *v12; // rax
  size_t v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax

  *((_DWORD *)this + 11) = a3;
  v4 = (((a3 + 15) >> 4) + ((a3 + 15) >> 4) * (((a3 + 15) >> 4) + 1) / 2) << 8;
  *((_DWORD *)this + 40) = v4;
  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 40);
    v6 = *((_DWORD *)a2 + 11);
    *((_BYTE *)this + 980) = 1;
    v7 = 8LL * (v6 - a3);
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 11) + 8LL * (v5 - v4);
    *((_QWORD *)this + 16) = v7 + *((_QWORD *)a2 + 16);
    v8 = *((_QWORD *)a2 + 15) + v7;
    *((_DWORD *)this + 20) = 0;
    *((_QWORD *)this + 15) = v8;
    return 0;
  }
  else
  {
    if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFLL
      || (v10 = operator new[](8LL * v4),
          v11 = *((int *)this + 11),
          *((_QWORD *)this + 11) = v10,
          v12 = (void *)operator new[](v11),
          v13 = *((int *)this + 11),
          *((_QWORD *)this + 7) = v12,
          memset(v12, 0, v13),
          v13 > 0xFFFFFFFFFFFFFFFLL)
      || (v14 = operator new[](8 * v13),
          v15 = *((int *)this + 11),
          *((_QWORD *)this + 16) = v14,
          v15 > 0xFFFFFFFFFFFFFFFLL) )
    {
      __cxa_throw_bad_array_new_length();
    }
    v16 = operator new[](8 * v15);
    *((_DWORD *)this + 20) = 0;
    *((_QWORD *)this + 15) = v16;
    return 0;
  }
}

