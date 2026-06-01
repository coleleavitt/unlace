__int64 __fastcall sub_6751E0(char **a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, const char *a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // r12

  result = 0xFFFFFFFFLL;
  if ( a2 )
  {
    if ( *(char *)(a2 + 17) >= 0 && a5 )
    {
      if ( a3 >= a4 )
      {
        return 4294967294LL;
      }
      else
      {
        v7 = sub_674F40(a1, a2, a3, a4, a5, nullptr);
        v8 = v7;
        if ( v7 )
        {
          v9 = v7;
          v10 = *(_DWORD *)(a2 + 80) - 1;
          v11 = (v7 - *(_QWORD *)(a2 + 88)) >> 3;
          *(_DWORD *)(a2 + 80) = v10;
          v12 = v10 - 0xCCCCCCCCCCCCCCCDLL * v11;
          free_regvar(v9);
          memmove((void *)v8, (const void *)(v8 + 40), 40 * v12);
          sub_674600((__int64 *)a1, a2, 1);
          return 0;
        }
        else
        {
          return 4294967293LL;
        }
      }
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
