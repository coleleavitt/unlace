__int64 __fastcall sub_B6D0(_QWORD *a1)
{
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v3; // rbx
  void *v4; // rdi
  __int64 result; // rax

  *a1 = &off_47CB0;
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[70];
  if ( v2 )
    v2(a1 + 68, a1 + 68, 3);
  v3 = (_QWORD *)a1[3];
  *a1 = &off_47C88;
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    free(v4);
  }
  result = a1[5];
  if ( result )
    *(_BYTE *)(result + 48) = 0;
  return result;
}
