__int64 __fastcall sub_4F54B0(__int64 a1, _DWORD *a2, const char *a3)
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
  char v15; // [rsp+0h] [rbp-38h]
  int v16; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    v8 = sub_656410(a1, a3);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v8 >= *(_DWORD *)(v9 + 68) && v8 <= *(_DWORD *)(v9 + 72) )
      callui(11, (int)&v16, (int)&callui, v5, v6, v7);
    v10 = sub_4FA170(a1, a3, 0);
    if ( v10 )
    {
      *a2 = *(_DWORD *)(v10 + 28);
      return 2;
    }
    else
    {
      v13 = qsscanf((int)a3, (int)"%a%n", (int)a2, (int)&v16, v11, v12, v15);
      result = 0;
      if ( v13 == 1 )
      {
        v14 = strlen(a3);
        return v16 == v14;
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

