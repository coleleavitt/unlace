__int64 __fastcall get_default_encoding_idx(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v3; // rax

  v1 = (unsigned int)(a1 - 1);
  v2 = 0;
  if ( (unsigned int)v1 <= 3 )
  {
    v3 = dword_23AF980[v1];
    if ( (_DWORD)v3 != -1 )
      return *(unsigned int *)(*(_QWORD *)(qword_2CCB598 + 1592) + 4 * v3 + 32);
  }
  return v2;
}
