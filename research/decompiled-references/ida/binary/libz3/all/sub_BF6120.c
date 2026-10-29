unsigned int *__fastcall sub_BF6120(__int64 a1, unsigned int *a2)
{
  char v2; // al
  __int64 v3; // rdx
  char v4; // cl
  _QWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  char v8; // cl
  __int64 v9; // rcx
  unsigned int *result; // rax
  __int64 v11; // rdx

  v2 = sub_15D2CB0(*(_QWORD *)(a1 + 24), a2);
  v3 = *a2;
  v4 = v2;
  v5 = *(_QWORD **)(a1 + 16);
  if ( v4 )
  {
    v6 = v5[1104];
    if ( v6 )
    {
      if ( (unsigned int)v3 < *(_DWORD *)(v6 - 4) )
      {
        v7 = *(_DWORD *)(v6 + 4LL * (unsigned int)v3);
        if ( v7 != 0x7FFFFFFF )
        {
          v8 = *(_BYTE *)(v5[1106] + (unsigned int)(2 * v7));
          if ( v8 == -1 )
            return *(unsigned int **)(*(_QWORD *)(a1 + 24) + 864LL);
          if ( v8 == 1 )
            return *(unsigned int **)(*(_QWORD *)(a1 + 24) + 856LL);
        }
      }
    }
  }
  v9 = v5[1082];
  result = a2;
  if ( v9 && (unsigned int)v3 < *(_DWORD *)(v9 - 4) )
  {
    v11 = *(_QWORD *)(v9 + 8 * v3);
    if ( v11 )
      return **(unsigned int ***)(v11 + 8);
  }
  return result;
}

