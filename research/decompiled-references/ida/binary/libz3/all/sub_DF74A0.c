__int64 __fastcall sub_DF74A0(__int64 **a1, __int64 a2)
{
  __int64 *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  bool v8; // zf
  __int64 result; // rax

  v4 = *a1;
  v5 = **a1;
  if ( v5 )
  {
    v6 = v5 + 16LL * (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
    v7 = *(_QWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = MEMORY[0xFFFFFFFF8];
    v6 = 0xFFFFFFFF0LL;
    if ( !MEMORY[0xFFFFFFFF8] )
      goto LABEL_5;
  }
  v8 = (*(_DWORD *)(v7 + 8))-- == 1;
  if ( !v8 || (sub_15D7BC0(a2, v7), v4 = *a1, v6 = 0xFFFFFFFF0LL, (v5 = **a1) != 0) )
    v6 = v5 + 16LL * (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
LABEL_5:
  if ( *(_QWORD *)v6 )
    sub_186B220((void *)(*(_QWORD *)v6 - 8LL));
  result = *v4;
  --*(_DWORD *)(*v4 - 4);
  return result;
}

