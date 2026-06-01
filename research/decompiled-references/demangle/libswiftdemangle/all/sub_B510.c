__int64 __fastcall sub_B510(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)a1[3];
  *a1 = &off_47C88;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    free(v3);
  }
  result = a1[5];
  if ( result )
    *(_BYTE *)(result + 48) = 0;
  return result;
}
