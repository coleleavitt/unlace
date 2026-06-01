__int64 __fastcall sub_3AA3E0(__int64 a1, __int64 *a2, char *a3)
{
  int v4; // r14d
  __int64 result; // rax
  __int64 v6; // r15
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // [rsp+Ch] [rbp-3Ch]

  v4 = sub_3AA350(a3);
  result = 0;
  if ( v4 != -1 )
  {
    v6 = *(_QWORD *)(qword_2CCB598 + 1576);
    v7 = *(_DWORD *)(v6 + 8) - 1;
    if ( v7 >= 0 )
    {
      v8 = 0;
      v9 = 8LL * (unsigned int)v7;
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v6 + v9);
        if ( *(_DWORD *)(v10 + 44) != 3 )
          break;
        if ( *(_DWORD *)(v10 + 40) == v4 )
        {
          if ( a2 )
          {
            v11 = a2[1];
            v12 = *a2;
            if ( a2[2] < (unsigned __int64)(v11 + 1) )
            {
              v14 = v8;
              v13 = qvector_reserve(a2, v12, v11 + 1, 8);
              v8 = v14;
              *a2 = v13;
              v12 = v13;
              v11 = a2[1];
            }
            *(_QWORD *)(v12 + 8 * v11) = v10;
            ++a2[1];
          }
          --v7;
          ++v8;
          v9 -= 8;
          if ( v7 == -1 )
            return v8;
        }
        else
        {
          --v7;
          v9 -= 8;
          if ( v7 == -1 )
            return v8;
        }
      }
      return v8;
    }
  }
  return result;
}
