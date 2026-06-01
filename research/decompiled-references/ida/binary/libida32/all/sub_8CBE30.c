__int64 __fastcall sub_8CBE30(__int64 a1, __int64 *a2, void *a3)
{
  FILE *v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  bool v11; // dl
  __int64 (*v12)(); // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rdx

  v5 = *(FILE **)(a1 + 144);
  v7 = qfread(v5, a3);
  v8 = *a2;
  *a2 = v7;
  if ( v8 == v7 || (unsigned int)get_qerrno(v5) == 3 )
  {
    if ( v7 && (*(_BYTE *)(a1 + 136) & 4) != 0 && (MD5Update(), (v10 = *(_QWORD *)(a1 + 16)) != 0) )
    {
      v11 = 0;
      v12 = *(__int64 (**)())(*(_QWORD *)v10 + 8LL);
      result = 0;
      if ( v12 != sub_8A46A0 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v12)(v10, 1, v7);
        v11 = (_DWORD)result == 1;
      }
      *(_BYTE *)(a1 + 140) = v11;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v15 = qstrerror(0xFFFFFFFFLL, a3, v13, v14);
    v18 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v18 = *(const char **)(a1 + 24);
    return sub_8DB5A0(33, (unsigned int)"%s: %s", (_DWORD)v18, v15, v16, v17);
  }
  return result;
}

