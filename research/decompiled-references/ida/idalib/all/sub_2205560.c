unsigned __int64 *__fastcall sub_2205560(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned __int64 v6; // rbx
  void *v7; // rax
  size_t v8; // rdx
  void *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > 0x40 )
  {
    v6 = ((unsigned __int64)v3 + 63) >> 6;
    v7 = (void *)operator new[](8 * v6);
    v8 = 8;
    if ( (__int64)(v6 - 2) >= -1 )
      v8 = 8 * v6;
    v9 = memset(v7, 0, v8);
    v10 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v9;
    v11 = (unsigned __int64)(v10 + 63) >> 6;
    if ( a3 < (unsigned int)v11 )
      LODWORD(v11) = a3;
    memcpy(v9, a2, (unsigned int)(8 * v11));
    return sub_CF8100((unsigned __int64 *)a1);
  }
  else
  {
    *(_QWORD *)a1 = *a2;
    return sub_CF8100((unsigned __int64 *)a1);
  }
}
