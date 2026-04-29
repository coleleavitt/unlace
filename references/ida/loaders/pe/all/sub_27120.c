char *__fastcall sub_27120(__int64 a1, _DWORD *a2, int a3)
{
  unsigned __int16 *v3; // rcx
  char *result; // rax

  v3 = *(unsigned __int16 **)(a1 + 8);
  result = (char *)v3 + a3;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)result )
    sub_680C(a1, (__int64)a2, a3);
  switch ( a3 )
  {
    case 2:
      result = (char *)*v3;
      *a2 = (_DWORD)result;
      *(_QWORD *)(a1 + 8) += 2LL;
      break;
    case 4:
      result = (char *)*(unsigned int *)v3;
      *a2 = (_DWORD)result;
      *(_QWORD *)(a1 + 8) += 4LL;
      break;
    case 1:
      result = (char *)*(unsigned __int8 *)v3;
      *a2 = (_DWORD)result;
      ++*(_QWORD *)(a1 + 8);
      break;
  }
  return result;
}
