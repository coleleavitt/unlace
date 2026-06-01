__int64 __fastcall sub_40ABA0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // [rsp+4h] [rbp-14h] BYREF

  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    v16 = *(_DWORD *)(a2 + 16);
    v8 = v16;
    ++*(_DWORD *)a2;
    sub_40AA90(a1, v7, v8, a4, a5, a6);
    result = (unsigned int)(*(_DWORD *)a2 - 1);
    v10 = *(_DWORD *)a2 == 1;
    *(_DWORD *)a2 = result;
    if ( (int)result >= 0 && !v10 )
      return result;
    return sub_47B120(a2);
  }
  v11 = sub_47ACD0(a2, &v16);
  v12 = v16;
  ++*(_DWORD *)a2;
  sub_40AA90(a1, v11, v12, v13, v14, v15);
  result = (unsigned int)(*(_DWORD *)a2 - 1);
  v10 = *(_DWORD *)a2 == 1;
  *(_DWORD *)a2 = result;
  if ( (int)result < 0 || v10 )
    return sub_47B120(a2);
  return result;
}

