__int64 __fastcall sub_62F4D0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v4 = &v3[*(_QWORD *)(a1 + 16)];
  if ( v3 == v4 )
    goto LABEL_9;
  while ( *v3 != a2 )
  {
    if ( v4 == ++v3 )
      goto LABEL_9;
  }
  if ( v3 == v4 )
  {
LABEL_9:
    if ( !under_debugger )
      interr(97);
    BUG();
  }
  if ( (*(_DWORD *)(a2 + 80))-- != 1 )
    return 0;
  memmove(v3, v3 + 1, *(_QWORD *)(a1 + 8) + 8LL * *(_QWORD *)(a1 + 16) - (_QWORD)v3 - 8);
  --*(_QWORD *)(a1 + 16);
  return 1;
}

