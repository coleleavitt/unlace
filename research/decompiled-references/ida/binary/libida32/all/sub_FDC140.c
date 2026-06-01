__int64 __fastcall sub_FDC140(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v13; // rax
  int v14; // r9d
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v18; // rcx
  bool v19; // zf
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v13 = sub_FDC3B0(*a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  v15 = v13;
  v21 = HIDWORD(v13);
  if ( !v13 )
    return 0;
  v16 = sub_FDC3B0(*a1, a2, a3, a4, a5, v14, a7, a8, (__int64)"sanitize", 8);
  v17 = v16;
  v18 = HIDWORD(v16);
  v19 = v16 == 0;
  result = 1;
  if ( !v19 && v15 <= v17 )
  {
    LOBYTE(result) = (unsigned int)v18 < (unsigned int)v21;
    LOBYTE(v17) = v15 == v17;
    return v17 & (unsigned int)result;
  }
  return result;
}

