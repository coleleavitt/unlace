__int64 __fastcall get_struct_operand(_DWORD *a1, _DWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1528LL);
  *(_QWORD *)(v5 + 64) = a3;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = a5;
  *(_DWORD *)(v5 + 76) = 0;
  generate_disasm_line(0, a4, 0);
  *a1 = *(_DWORD *)(v5 + 76);
  *a2 = *(_DWORD *)(v5 + 80);
  result = *(unsigned int *)(v5 + 56);
  *(_DWORD *)(v5 + 60) = -5;
  *(_QWORD *)(v5 + 64) = 0;
  if ( (_DWORD)result )
    return (unsigned int)(*(_DWORD *)(v5 + 72) + 1);
  return result;
}

