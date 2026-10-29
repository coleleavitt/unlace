__int64 __fastcall sub_895100(__int64 *a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  char *v7; // rcx
  __int64 result; // rax
  char *v9; // rsi
  _DWORD *v10; // rdx

  v6 = sub_898D20(*a1, a3, 1);
  *(_BYTE *)(v6 - 2) = 1;
  v7 = (char *)memset((void *)(v6 + a4), 0, *(_QWORD *)*a1 - a4);
  result = *a1;
  v9 = &v7[(*(_QWORD *)*a1 - a4) & 0xFFFFFFFFFFFFFFF8LL];
  if ( v7 != v9 )
  {
    v10 = (_DWORD *)*a2;
    do
    {
      result = a1[2] + 16 * a1[3];
      if ( v10 == (_DWORD *)result )
        break;
      v7 += 8;
      *((_DWORD *)v7 - 2) = *v10;
      *((_DWORD *)v7 - 1) = *(_DWORD *)(*a2 + 4);
      result = *a2;
      v10 = (_DWORD *)(*a2 + 16);
      *a2 = (__int64)v10;
    }
    while ( v9 != v7 );
  }
  return result;
}

