__int64 __fastcall sub_8E5080(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 *i; // rbp
  __int64 v10; // rdi

  v2 = 0;
  v4 = a1 + 144;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 731LL) )
    v2 = a2 + 1;
  sub_AB3090(v4, v2);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
  sub_C0EE90(a1 + 216);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 7504) = *(_DWORD *)(v5 + 484);
  result = *(unsigned int *)(v5 + 476);
  if ( (unsigned int)result > v6 )
    result = v6;
  if ( !(_DWORD)result )
    *(_BYTE *)(v5 + 480) = 0;
  v8 = *(__int64 **)(a1 + 8688);
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    for ( i = &v8[result]; i != v8; result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 248LL))(v10) )
      v10 = *v8++;
  }
  return result;
}

