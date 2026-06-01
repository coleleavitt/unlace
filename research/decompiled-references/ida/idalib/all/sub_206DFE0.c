__int64 __fastcall sub_206DFE0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  _QWORD *i; // r12

  v1 = *(_QWORD **)(a1 + 128);
  result = *(unsigned int *)(a1 + 136);
  for ( i = &v1[result]; i != v1; ++v1 )
  {
    if ( *v1 )
      result = sub_20B2EE0(v1, *v1, a1 & 0xFFFFFFFFFFFFFFFCLL | 1);
  }
  return result;
}
