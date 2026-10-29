__int64 __fastcall sub_4CA520(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rbx
  __int64 result; // rax

  v7 = *(_QWORD *)(*(_QWORD *)a1 + 1720LL);
  *(_DWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 60) = a6;
  *(_QWORD *)(v7 + 64) = a4;
  *(_QWORD *)(v7 + 80) = 0;
  generate_disasm_line(0, a5, 0);
  *a2 = *(_QWORD *)(v7 + 80);
  *a3 = *(_QWORD *)(v7 + 88);
  result = *(unsigned int *)(v7 + 56);
  *(_DWORD *)(v7 + 60) = -5;
  *(_QWORD *)(v7 + 64) = 0;
  if ( (_DWORD)result )
    return (unsigned int)(*(_DWORD *)(v7 + 72) + 1);
  return result;
}
