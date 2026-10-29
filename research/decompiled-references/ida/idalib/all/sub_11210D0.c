__int64 __fastcall sub_11210D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rsi

  v2 = *(_QWORD **)(a2 + 8);
  result = a1;
  v4 = &v2[*(unsigned int *)(a2 + 16)];
  if ( v4 != v2 )
  {
    v5 = v4 - 1;
    if ( !*(v4 - 1) )
    {
      while ( 1 )
      {
        v4 = v5;
        if ( v5 == v2 )
          break;
        if ( *--v5 )
          goto LABEL_3;
      }
      v4 = v2;
    }
  }
LABEL_3:
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = v2;
  *(_QWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
