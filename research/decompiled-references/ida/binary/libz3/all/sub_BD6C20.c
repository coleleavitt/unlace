__int64 __fastcall sub_BD6C20(__int64 a1, __int64 a2, __m128 a3, __m128 a4, __m128 a5)
{
  __int64 result; // rax
  int v7; // edx
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 24LL);
  if ( result )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v7 == *(_DWORD *)result )
    {
      result = *(unsigned int *)(result + 4);
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result == 5 && (*(_BYTE *)(a2 + 44) & 8) == 0 )
        {
          v8 = (__int64 *)(a2 + 112);
          result = 8LL * *(unsigned int *)(*(_QWORD *)a2 + 24LL);
          v9 = (__int64 *)(a2 + 112 + result);
          if ( result )
          {
            while ( 1 )
            {
              v10 = *v8++;
              v11 = sub_B39350(v10, v7);
              result = sub_BD6A00((_QWORD *)a1, v11, a3, a4, a5);
              if ( v9 == v8 )
                break;
              v7 = *(_DWORD *)(a1 + 8);
            }
          }
        }
      }
      else
      {
        v12 = sub_B39350(*(_QWORD *)(a2 + 112), v7);
        return sub_BD6A00((_QWORD *)a1, v12, a3, a4, a5);
      }
    }
  }
  return result;
}

