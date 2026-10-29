__int64 __fastcall sub_1AE7CC0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  _DWORD *v4; // rdx
  int *v5; // rax
  int v6; // edx
  _DWORD *v7; // rax

  v1 = a1[8];
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  result = 1;
  if ( (*(_BYTE *)(v2 + 17) & 4) == 0 )
  {
    v4 = (_DWORD *)a1[10];
    if ( !v4 || (*v4 & 0x20000) == 0 )
    {
      v5 = (int *)a1[11];
      if ( !v5 || (v6 = *v5, result = 1, (v6 & 0x20000) == 0) )
      {
        v7 = (_DWORD *)a1[12];
        if ( v7 )
          return (*v7 >> 17) & 1;
        return 0;
      }
    }
  }
  return result;
}
