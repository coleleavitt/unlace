__int64 __fastcall sub_18C0A20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx

  result = *(unsigned __int8 *)(a1 + 20);
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD **)a1;
    v4 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 12);
    if ( *(_QWORD *)a1 != v4 )
    {
      v5 = *(_QWORD **)a1;
      if ( *v3 == a2 )
      {
LABEL_11:
        v7 = *(_DWORD *)(a1 + 12) - 1;
        v8 = v3[v7];
        *(_DWORD *)(a1 + 12) = v7;
        *v5 = v8;
        return result;
      }
      while ( (_QWORD *)v4 != ++v5 )
      {
        if ( *v5 == a2 )
          goto LABEL_11;
      }
    }
    return 0;
  }
  v6 = (_QWORD *)sub_2236570(a1, a2);
  if ( !v6 )
    return 0;
  *v6 = -2;
  result = 1;
  ++*(_DWORD *)(a1 + 16);
  return result;
}
