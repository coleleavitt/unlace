__int64 __fastcall sub_8F0930(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  const char *v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdi
  bool v13; // dl
  __int64 (*v14)(); // rcx

  v5 = qfwrite(*(FILE **)(a1 + 144), a3);
  v6 = v5;
  if ( *a2 == v5 )
  {
    if ( (*(_BYTE *)(a1 + 136) & 4) != 0 && (MD5Update(a1 + 48, a3, v5), (v12 = *(_QWORD *)(a1 + 16)) != 0) )
    {
      v13 = 0;
      v14 = *(__int64 (**)())(*(_QWORD *)v12 + 8LL);
      result = 0;
      if ( v14 != sub_8C83E0 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v14)(v12, 1, v6);
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
    *a2 = v5;
    v7 = qstrerror(0xFFFFFFFFLL);
    v10 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v10 = *(const char **)(a1 + 24);
    return sub_8FF2E0(33, (unsigned int)"%s: %s", (_DWORD)v10, v7, v8, v9);
  }
  return result;
}
