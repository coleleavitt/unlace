__int64 __fastcall sub_81B390(_QWORD *a1, unsigned int *a2, unsigned __int8 a3, unsigned __int8 a4, double a5)
{
  int v5; // ebp
  char v6; // dl
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  v5 = a3;
  v6 = sub_7E6250(a1 + 6, a1[9], (__int64)a2, a3, a4, a5);
  result = 4294967294LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1[10] + 1720LL);
    if ( v8 )
    {
      v9 = *a2;
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 - 4) )
        v8 = 0;
      else
        v8 = *(_QWORD *)(v8 + 8 * v9);
    }
    return v5 ^ (unsigned int)(2 * *(_DWORD *)(v8 + 28));
  }
  return result;
}

