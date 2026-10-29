__int64 __fastcall sub_204D180(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // rdx

  if ( *(_BYTE *)(a1 + 36) )
  {
    result = *(unsigned int *)(a1 + 28);
    v3 = *(_QWORD **)(a1 + 16);
    v4 = &v3[result];
    if ( v3 != v4 )
    {
      result = *(_QWORD *)(a1 + 16);
      if ( a2 == *v3 )
      {
LABEL_12:
        v5 = *(_DWORD *)(a1 + 28) - 1;
        v6 = v3[v5];
        *(_DWORD *)(a1 + 28) = v5;
        *(_QWORD *)result = v6;
      }
      else
      {
        while ( 1 )
        {
          result += 8;
          if ( v4 == (_QWORD *)result )
            break;
          if ( a2 == *(_QWORD *)result )
            goto LABEL_12;
        }
      }
    }
  }
  else
  {
    result = sub_2236570(a1 + 16, a2);
    if ( result )
    {
      *(_QWORD *)result = -2;
      ++*(_DWORD *)(a1 + 32);
    }
  }
  return result;
}
