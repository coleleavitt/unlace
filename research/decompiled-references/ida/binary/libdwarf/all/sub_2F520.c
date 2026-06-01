__int64 __fastcall sub_2F520(unsigned int **a1, int a2)
{
  unsigned int *v2; // rsi
  _QWORD *v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax

  if ( (unsigned int)(a2 - 1) > 1 )
  {
    v2 = *a1;
    v3 = ptr;
    v4 = (*a1)[1];
    v5 = 3 * qword_B8D50;
    result = ++qword_B8D50;
    *((_QWORD *)ptr + v5 + 1) = v4;
    v3[v5] = *v2;
    v3[v5 + 2] = *((_QWORD *)v2 + 1);
  }
  return result;
}

