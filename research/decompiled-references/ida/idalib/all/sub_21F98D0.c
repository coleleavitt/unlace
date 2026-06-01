_BOOL8 __fastcall sub_21F98D0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rdi
  int v6; // ecx
  unsigned int v7; // eax
  _QWORD *v8; // rsi
  __int64 v9; // r10
  _BOOL8 result; // rax
  __int64 i; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9

  v2 = *a1;
  v5 = a1 + 1;
  v6 = 1;
  v7 = *(_DWORD *)(v2 + 8) + 64;
  if ( v7 > 0x7F )
  {
    v5 = (_QWORD *)a1[1];
    v6 = v7 >> 6;
  }
  v8 = a2 + 1;
  if ( (unsigned int)(*(_DWORD *)(*a2 + 8LL) + 64) > 0x7F )
    v8 = (_QWORD *)a2[1];
  if ( v6 )
  {
    v9 = (unsigned int)(v6 - 1);
    result = 0;
    for ( i = 0; ; i = v13 )
    {
      v14 = v5[i];
      v15 = v8[i] + v14;
      if ( result )
      {
        v12 = v15 + 1;
        v13 = i + 1;
        v5[i] = v12;
        result = v14 >= v12;
        if ( i == v9 )
          return result;
      }
      else
      {
        result = __CFADD__(v8[i], v14);
        v5[i] = v15;
        v13 = i + 1;
        if ( i == v9 )
          return result;
      }
    }
  }
  return 0;
}
