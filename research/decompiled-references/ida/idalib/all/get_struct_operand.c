__int64 __fastcall get_struct_operand(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1720LL);
  *(_QWORD *)(v5 + 64) = a3;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = a5;
  *(_QWORD *)(v5 + 80) = 0;
  generate_disasm_line(0, a4, 0);
  *a1 = *(_QWORD *)(v5 + 80);
  *a2 = *(_QWORD *)(v5 + 88);
  result = *(unsigned int *)(v5 + 56);
  *(_DWORD *)(v5 + 60) = -5;
  *(_QWORD *)(v5 + 64) = 0;
  if ( (_DWORD)result )
    return (unsigned int)(*(_DWORD *)(v5 + 72) + 1);
  return result;
}
