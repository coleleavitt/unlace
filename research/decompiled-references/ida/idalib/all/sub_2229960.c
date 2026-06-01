_BYTE *__fastcall sub_2229960(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  _BYTE *result; // rax

  v2 = *((_DWORD *)a1 + 42);
  *((_DWORD *)a1 + 43) -= v2;
  v3 = *((unsigned int *)a1 + 2);
  v4 = *a1;
  v5 = a1[20];
  if ( *(_BYTE *)(v4 + 8 * v3 - 4) && v2 )
  {
    sub_227BA10(v5, 10);
    sub_227D090(a1[20], *((unsigned int *)a1 + 43));
    v5 = a1[20];
  }
  result = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v5 + 24) )
  {
    result = (_BYTE *)sub_227BA10(v5, 93);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = result + 1;
    *result = 93;
  }
  --*((_DWORD *)a1 + 2);
  return result;
}
