__int64 __fastcall sub_BAB690(_QWORD *a1, unsigned int a2, unsigned int a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 *v13; // r12
  __int64 v14; // r10
  _QWORD *v15; // r9
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // edi
  int v20; // esi

  result = a1[24];
  if ( result )
  {
    v8 = *(_DWORD *)(result - 4);
    if ( a2 < v8 )
    {
      v9 = 8LL * a2;
      v10 = *(_QWORD *)(result + v9);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 - 4) )
        {
          if ( a3 < v8 )
          {
            result = *(_QWORD *)(result + 8LL * a3);
            v11 = 8LL * a3;
            if ( result )
            {
              result = *(unsigned int *)(result - 4);
              if ( (_DWORD)result )
              {
                sub_BA8A20(a1, a2, a4, a5, a6);
                v13 = (__int64 *)(a1[24] + v9);
                sub_BA8A20(a1, a3, a4, a5, a6);
                v14 = *v13;
                v15 = (_QWORD *)(v11 + a1[24]);
                if ( *v13 )
                  v16 = *(_DWORD *)(v14 - 4);
                else
                  v16 = 0;
                LODWORD(result) = v16 - 1;
                while ( (_DWORD)result != -1 )
                {
                  v17 = (unsigned int)result;
                  result = (unsigned int)(result - 1);
                  v18 = *(_QWORD *)(a1[2] + 8848LL);
                  v19 = *(char *)(v18 + *(unsigned int *)(v14 + 4 * v17));
                  v20 = *(char *)(v18 + *(unsigned int *)(*v15 + 4 * v17));
                  if ( v20 == 0 || v19 == 0 || v20 != v19 )
                    return result;
                }
                return sub_BAA570((__int64)a1, a2, a3, a4, a5, a6);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

