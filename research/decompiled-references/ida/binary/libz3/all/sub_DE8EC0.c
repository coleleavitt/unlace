__int64 __fastcall sub_DE8EC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  const char *(*v3)(); // rdx
  const char *v4; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2);
  v3 = *(const char *(**)())(*(_QWORD *)a1 + 96LL);
  v4 = "psort_app";
  if ( v3 != sub_DE8760 )
    v4 = (const char *)((__int64 (__fastcall *)(__int64))v3)(a1);
  v5 = 0;
  if ( (const char *)v2 == v4
    && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
    && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 && (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8) )
    {
      v9 = *(_QWORD *)(a2 + 40);
      v10 = 8 * v8;
      v11 = 0;
      while ( *(_QWORD *)(v7 + v11) == *(_QWORD *)(v9 + v11) )
      {
        v11 += 8;
        if ( v11 == v10 )
          return 1;
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return v5;
}

