__int64 __fastcall sub_8EFB70(__int64 a1, __int64 *a2, void *a3)
{
  FILE *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdi
  bool v10; // dl
  __int64 (*v11)(); // rcx
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rdx

  v5 = *(FILE **)(a1 + 144);
  v6 = qfread(v5, a3);
  v7 = *a2;
  *a2 = v6;
  if ( v7 == v6 || (unsigned int)get_qerrno(v5) == 3 )
  {
    if ( v6 && (*(_BYTE *)(a1 + 136) & 4) != 0 && (MD5Update(a1 + 48, a3, v6), (v9 = *(_QWORD *)(a1 + 16)) != 0) )
    {
      v10 = 0;
      v11 = *(__int64 (**)())(*(_QWORD *)v9 + 8LL);
      result = 0;
      if ( v11 != sub_8C83E0 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v11)(v9, 1, v6);
        v10 = (_DWORD)result == 1;
      }
      *(_BYTE *)(a1 + 140) = v10;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v12 = qstrerror(0xFFFFFFFFLL);
    v15 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v15 = *(const char **)(a1 + 24);
    return sub_8FF2E0(33, (unsigned int)"%s: %s", (_DWORD)v15, v12, v13, v14);
  }
  return result;
}
