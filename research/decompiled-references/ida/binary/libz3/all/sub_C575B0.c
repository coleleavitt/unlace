__int64 __fastcall sub_C575B0(_QWORD *a1, unsigned int a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rbx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 result; // rax

  v8 = *a3;
  if ( *a3 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *a4;
  if ( !*a4 || (v10 = a4[1], v11 = *(_DWORD *)(v9 + 8) == 1, --*(_DWORD *)(v9 + 8), !v11) )
  {
    *a4 = v8;
    if ( a2 > 1 )
      goto LABEL_6;
    return 4;
  }
  sub_15D7BC0(v10, v9);
  *a4 = v8;
  if ( a2 <= 1 )
    return 4;
LABEL_6:
  v12 = a3 + 1;
  v13 = 1;
  while ( 1 )
  {
    v14 = *v12;
    ++v13;
    ++v12;
    result = sub_C57020(a1, v8, v14, a4);
    if ( (_DWORD)result != 4 || v13 >= a2 )
      break;
    v8 = *a4;
  }
  return result;
}

