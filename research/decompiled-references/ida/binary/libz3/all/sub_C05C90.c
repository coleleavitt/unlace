__int64 __fastcall sub_C05C90(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 v14; // r12
  int v15; // r9d
  __int64 v16; // rax

  v5 = *(unsigned int *)(a1 + 56);
  v7 = *(__int64 **)(a1 + 48);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v5 - 1;
  result = 16 * v5;
  v11 = (__int64)v7 + result;
  v12 = 16LL * (v8 & v9);
  v13 = (__int64 *)((char *)v7 + v12);
  if ( v12 != result )
  {
    result = (__int64)v7 + v12;
    do
    {
      v12 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v8 && a2 == v12 )
          goto LABEL_10;
      }
      else if ( !v12 )
      {
        return result;
      }
      result += 16;
    }
    while ( v11 != result );
  }
  for ( ; v13 != v7; v7 += 2 )
  {
    result = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v8 && a2 == result )
      {
        result = (__int64)v7;
LABEL_10:
        v14 = *(_QWORD *)(result + 8);
        if ( v14 && !*(_QWORD *)(v14 + 24) )
        {
          if ( !a3
            || (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 48LL))(
                        a1,
                        *(_QWORD *)(a2 + 40),
                        v12,
                        v7,
                        v13)) == 0 )
          {
            v16 = sub_1347E10(v14, v11, v12, v7, v13);
            LODWORD(v11) = v16;
            if ( !v16 )
              LODWORD(v11) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
                               a1,
                               *(_QWORD *)(a2 + 40));
          }
          return sub_1349280(v14, v11, v12, (_DWORD)v7, (_DWORD)v13, v15);
        }
        return result;
      }
    }
    else if ( !result )
    {
      return result;
    }
  }
  return result;
}

