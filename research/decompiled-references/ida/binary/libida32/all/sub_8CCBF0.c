__int64 __fastcall sub_8CCBF0(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  const char *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdi
  bool v16; // dl
  __int64 (*v17)(); // rcx

  v6 = qfwrite(*(FILE **)(a1 + 144), a3);
  v9 = v6;
  if ( *a2 == v6 )
  {
    if ( (*(_BYTE *)(a1 + 136) & 4) != 0 && (MD5Update(), (v15 = *(_QWORD *)(a1 + 16)) != 0) )
    {
      v16 = 0;
      v17 = *(__int64 (**)())(*(_QWORD *)v15 + 8LL);
      result = 0;
      if ( v17 != sub_8A46A0 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v17)(v15, 1, v9);
        v16 = (_DWORD)result == 1;
      }
      *(_BYTE *)(a1 + 140) = v16;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a2 = v6;
    v10 = qstrerror(0xFFFFFFFFLL, a3, v7, v8);
    v13 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v13 = *(const char **)(a1 + 24);
    return sub_8DB5A0(33, (unsigned int)"%s: %s", (_DWORD)v13, v10, v11, v12);
  }
  return result;
}

