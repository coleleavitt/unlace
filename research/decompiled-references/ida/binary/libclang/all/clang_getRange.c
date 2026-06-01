__int64 __fastcall clang_getRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // edi
  int v16; // esi

  v12 = a7;
  v13 = a10;
  result = a1;
  if ( (a7 & 1) == 0 )
  {
    if ( a10 == a7 )
    {
      v13 = a8;
      if ( a11 == a8 )
      {
        v15 = a9;
        v16 = a12;
        goto LABEL_4;
      }
    }
    goto LABEL_6;
  }
  if ( (a10 & 1) == 0 )
  {
LABEL_6:
    v12 = 0;
    v13 = 0;
  }
  v15 = 0;
  v16 = 0;
LABEL_4:
  *(_QWORD *)result = v12;
  *(_QWORD *)(result + 8) = v13;
  *(_DWORD *)(result + 16) = v15;
  *(_DWORD *)(result + 20) = v16;
  return result;
}

