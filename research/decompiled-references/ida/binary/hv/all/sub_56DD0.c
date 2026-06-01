__int64 __fastcall sub_56DD0(__int64 a1, __int64 *a2, void *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdi
  bool v17; // dl
  __int64 (*v18)(); // rcx

  v9 = sub_958B0(*(FILE **)(a1 + 144), a3);
  v10 = v9;
  if ( *a2 == v9 )
  {
    if ( (*(_BYTE *)(a1 + 136) & 4) != 0 && (sub_932D0(a1 + 48, a3, v9), (v16 = *(_QWORD *)(a1 + 16)) != 0) )
    {
      v17 = 0;
      v18 = *(__int64 (**)())(*(_QWORD *)v16 + 8LL);
      result = 0;
      if ( v18 != sub_34740 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v18)(v16, 1, v10);
        v17 = (_DWORD)result == 1;
      }
      *(_BYTE *)(a1 + 140) = v17;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a2 = v9;
    v11 = sub_978C0(0xFFFFFFFFLL);
    v14 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v14 = *(const char **)(a1 + 24);
    return sub_65D40(33, (unsigned int)"%s: %s", (_DWORD)v14, v11, v12, v13, a7);
  }
  return result;
}

