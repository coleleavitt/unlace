__int64 __fastcall sub_56010(__int64 a1, __int64 *a2, void *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdi
  bool v13; // dl
  __int64 (*v14)(); // rcx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rdx

  v9 = sub_95810(*(FILE **)(a1 + 144), a3);
  v10 = *a2;
  *a2 = v9;
  if ( v10 == v9 || (unsigned int)sub_8F840() == 3 )
  {
    if ( v9 && (*(_BYTE *)(a1 + 136) & 4) != 0 && (sub_932D0(a1 + 48, a3, v9), (v12 = *(_QWORD *)(a1 + 16)) != 0) )
    {
      v13 = 0;
      v14 = *(__int64 (**)())(*(_QWORD *)v12 + 8LL);
      result = 0;
      if ( v14 != sub_34740 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v14)(v12, 1, v9);
        v13 = (_DWORD)result == 1;
      }
      *(_BYTE *)(a1 + 140) = v13;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v15 = sub_978C0(0xFFFFFFFFLL);
    v18 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v18 = *(const char **)(a1 + 24);
    return sub_65D40(33, (unsigned int)"%s: %s", (_DWORD)v18, v15, v16, v17, a7);
  }
  return result;
}

