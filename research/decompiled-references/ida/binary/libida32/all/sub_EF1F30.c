__int64 __fastcall sub_EF1F30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // ebp

  sub_EF1D60(a1, (_WORD *)a2);
  v2 = a1[1];
  result = *(unsigned int *)(v2 + 8);
  v4 = *(_BYTE *)(a2 + 2) >> 3;
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v2 + 12) )
  {
    sub_22134E0(v2, v2 + 16, result + 1, 4);
    result = *(unsigned int *)(v2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v2 + 4 * result) = v4;
  ++*(_DWORD *)(v2 + 8);
  return result;
}

