_QWORD *__fastcall sub_283C00(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *result; // rax
  int v4; // ecx
  _QWORD *v5; // rcx

  result = a1;
  v4 = *(_DWORD *)(*(_QWORD *)(a2[2] + 8LL * a2[3] - 8) + 8LL);
  if ( v4 != 71 && v4 != 83 )
  {
    if ( !under_debugger )
      sub_383060(50600);
LABEL_9:
    BUG();
  }
  v5 = (_QWORD *)(a2[5] + 16LL * a2[6] - 16);
  if ( a3 != v5[1] + 16LL )
  {
    if ( !under_debugger )
      sub_383060(52725);
    goto LABEL_9;
  }
  *a1 = *v5;
  a1[1] = v5[1];
  return result;
}
