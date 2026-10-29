__int64 __fastcall sub_15D25C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  v3 = a1 + 32;
  *(_QWORD *)a1 = &off_2C48C18;
  *(_QWORD *)(a1 + 24) = 0x200000000LL;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  ++*(_DWORD *)(a2 + 8);
  ++*(_DWORD *)(a3 + 8);
  v5 = *(unsigned int *)(a1 + 24);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_2237220(a1 + 16, a1 + 32, v5 + 1, 8);
    v3 = *(_QWORD *)(a1 + 16);
    v5 = *(unsigned int *)(a1 + 24);
  }
  *(_QWORD *)(v3 + 8 * v5) = a2;
  v6 = *(unsigned int *)(a1 + 28);
  result = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
  *(_DWORD *)(a1 + 24) = result;
  if ( result + 1 > v6 )
  {
    sub_2237220(a1 + 16, a1 + 32, result + 1, 8);
    result = *(unsigned int *)(a1 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * result) = a3;
  ++*(_DWORD *)(a1 + 24);
  return result;
}
