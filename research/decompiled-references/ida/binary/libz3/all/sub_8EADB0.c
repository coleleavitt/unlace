__int64 __fastcall sub_8EADB0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 *v4; // rbx
  __int64 *i; // rbp
  __int64 v6; // rdi

  sub_C0EE90(a1 + 216);
  v1 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 7504) = *(_DWORD *)(v1 + 484);
  result = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(v1 + 476);
  if ( (unsigned int)result > v3 )
    result = v3;
  if ( !(_DWORD)result )
    *(_BYTE *)(v1 + 480) = 0;
  v4 = *(__int64 **)(a1 + 8688);
  if ( v4 )
  {
    result = *((unsigned int *)v4 - 1);
    for ( i = &v4[result]; i != v4; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 248LL))(v6) )
      v6 = *v4++;
  }
  return result;
}

