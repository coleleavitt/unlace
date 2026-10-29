__int64 __fastcall sub_FDC330(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r9d

  result = 0;
  if ( a4 )
  {
    v10 = a1[1];
    if ( a4 < 0 )
      a4 = sub_FFE010(a1[1], (unsigned int)a4);
    v11 = sub_FFBD50(v10, (unsigned int)a4);
    return sub_FDC140(a1, a2, a3, (int)"src", 3, v13, v11, v12, a5, a6);
  }
  return result;
}

