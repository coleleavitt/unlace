_DWORD *__fastcall create_memory_linput(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _DWORD *result; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  int v8; // eax

  v2 = qword_2CCB598;
  result = *(_DWORD **)(qword_2CCB598 + 624);
  if ( result )
  {
    v5 = (_QWORD *)operator new(0x28u);
    v6 = *(_QWORD *)(v2 + 624);
    v7 = v5;
    *v5 = off_2B36FB8;
    v8 = 0;
    v7[3] = v6;
    v7[4] = a1;
    v7[1] = a2;
    if ( a2 )
      v8 = (*(_QWORD *)(v6 + 32) & 0x4000LL) == 0 ? 1024 : 256;
    *((_DWORD *)v7 + 4) = v8;
    result = (_DWORD *)create_generic_linput(v7);
    if ( result )
      *result = 3;
  }
  return result;
}
