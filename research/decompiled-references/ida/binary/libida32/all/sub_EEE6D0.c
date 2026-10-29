void __fastcall sub_EEE6D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(v2 + 8);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_22134E0(*(_QWORD *)(a1 + 8), v2 + 16, v3 + 1, 4);
    v3 = *(unsigned int *)(v2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v2 + 4 * v3) = a2 != 0;
  ++*(_DWORD *)(v2 + 8);
  if ( a2 )
    sub_E81B80(*(_QWORD *)(a1 + 24), a2);
}

