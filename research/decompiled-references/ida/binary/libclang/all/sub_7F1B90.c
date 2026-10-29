__int64 __fastcall sub_7F1B90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // r13

  if ( !(unsigned __int8)sub_7EF1F0((__int64)a1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), a4, a5, a6) )
    return 0;
  result = sub_7F0C20(a1, *(_QWORD *)(a2 + 24), *(__int64 **)(a2 + 40));
  v11 = result;
  if ( !(_BYTE)result )
    return 0;
  v12 = *(_QWORD *)(a2 + 64);
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 + 8);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 16;
      v15 = v14 + 32 * v13;
      while ( 1 )
      {
        result = sub_7EF520(a1, v14, v7, v8, v9, v10);
        if ( !(_BYTE)result )
          break;
        v14 += 32;
        if ( v14 == v15 )
          return v11;
      }
    }
    else
    {
      return v11;
    }
  }
  return result;
}

