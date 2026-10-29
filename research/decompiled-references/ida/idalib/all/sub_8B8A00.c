__int64 __fastcall sub_8B8A00(size_t **a1)
{
  __int64 v1; // rbx
  size_t *v2; // rdx
  __int64 result; // rax

  v1 = sub_8BCA60(*a1, 0, 1);
  *(_BYTE *)(v1 - 2) = 1;
  memset((void *)v1, 0, **a1);
  qstrncpy(v1, "VA*", 4);
  *(_WORD *)(v1 + 4) = 3;
  v2 = a1[3];
  *(_DWORD *)(v1 + 8) = (_DWORD)v2;
  *(_DWORD *)(v1 + 12) = **a1 >> 2;
  result = *((unsigned int *)a1 + 10);
  *(_WORD *)(v1 + 6) = 0;
  *(_DWORD *)(v1 + 16) = result;
  if ( !(_DWORD)v2 )
    *((_BYTE *)a1 + 100) = 0;
  return result;
}
