__int64 __fastcall sub_FDC230(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  bool v16; // zf
  __int64 result; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v11 = sub_FDC3B0(*a1, a2, a3, (unsigned int)"type", 4, a6, a4, a5, a7, a8);
  v12 = v11;
  v18 = HIDWORD(v11);
  if ( !v11 )
    return 0;
  v13 = sub_FDC3B0(*a1, a2, a3, (unsigned int)"type", 4, HIDWORD(v11), a4, a5, (__int64)"sanitize", 8);
  v14 = v13;
  v15 = HIDWORD(v13);
  v16 = v13 == 0;
  result = 1;
  if ( !v16 && v12 <= v14 )
  {
    LOBYTE(result) = v12 == v14;
    LOBYTE(v14) = (unsigned int)v18 > (unsigned int)v15;
    return v14 & (unsigned int)result;
  }
  return result;
}

