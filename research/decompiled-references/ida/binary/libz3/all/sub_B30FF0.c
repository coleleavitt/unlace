__int64 __fastcall sub_B30FF0(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD *v9; // rsi
  __int64 (__fastcall *v10)(_DWORD *, _QWORD *); // rdx
  unsigned int v11; // eax

  result = *a3;
  if ( *a3 )
  {
    v4 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v4 )
    {
      v6 = 8 * v4;
      v7 = 0;
      while ( 1 )
      {
        v9 = *(_QWORD **)(result + v7);
        v10 = *(__int64 (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)a1 + 400LL);
        if ( v10 == sub_B307F0 )
        {
          result = *(_QWORD *)(*(_QWORD *)(*v9 + 16LL) + 24LL);
          if ( result )
          {
            v8 = a1[2];
            if ( v8 == *(_DWORD *)result )
            {
              result = *(unsigned int *)(result + 4);
              if ( !(_DWORD)result )
              {
                v11 = sub_B39350(v9[14], v8);
                result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 392LL))(a1, v11);
              }
            }
          }
          v7 += 8;
          if ( v6 == v7 )
            return result;
        }
        else
        {
          v7 += 8;
          result = v10(a1, v9);
          if ( v6 == v7 )
            return result;
        }
        result = *a3;
      }
    }
  }
  return result;
}

