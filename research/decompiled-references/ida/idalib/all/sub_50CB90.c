__int64 __fastcall sub_50CB90(__int64 a1, _QWORD *a2, const char *a3)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  size_t v14; // rax
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    v8 = sub_674200(a1, a3);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v8 >= *(_DWORD *)(v9 + 68) && v8 <= *(_DWORD *)(v9 + 72) )
      callui(11, (int)v15, (int)&callui, v5, v6, v7);
    v10 = sub_511C40(a1, a3, 0);
    if ( v10 )
    {
      *a2 = *(_QWORD *)(v10 + 48);
      return 2;
    }
    else
    {
      v13 = qsscanf((_DWORD)a3, (unsigned int)"%a%n", (_DWORD)a2, (unsigned int)v15, v11, v12);
      result = 0;
      if ( v13 == 1 )
      {
        v14 = strlen(a3);
        return SLODWORD(v15[0]) == v14;
      }
    }
  }
  else
  {
    *a2 = -1;
    return 0;
  }
  return result;
}
