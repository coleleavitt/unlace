__int64 __fastcall sub_B98020(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 152);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9464LL);
  result = *(unsigned int *)(a1 + 148);
  if ( v2 < v1 && v1 == (_DWORD)result )
  {
    sub_1265E70(*(_QWORD *)(a1 + 80));
    result = *(unsigned int *)(a1 + 148);
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9464LL);
  }
  *(_DWORD *)(a1 + 152) = v2;
  if ( (unsigned int)result < v2 )
    result = v2;
  *(_DWORD *)(a1 + 148) = result;
  return result;
}

