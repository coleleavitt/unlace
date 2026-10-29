__int64 __fastcall sub_1894E40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v7; // rbp
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rdx

  v3 = (__int64 *)(a3 + 16);
  result = *(unsigned int *)(a3 + 8);
  v5 = a3 + 8 * result + 16;
  if ( v5 != a3 + 16 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *v3;
        if ( *(char *)(*v3 + 28) >= 0 )
          break;
        if ( (__int64 *)v5 == ++v3 )
          return result;
      }
      if ( *(_BYTE *)(a2 + 100) )
      {
        v8 = *(_QWORD **)(a2 + 80);
        v9 = &v8[*(unsigned int *)(a2 + 92)];
        if ( v8 != v9 )
        {
          v10 = *(_QWORD **)(a2 + 80);
          if ( v7 == *v8 )
          {
LABEL_15:
            v12 = *(_DWORD *)(a2 + 92) - 1;
            v13 = v8[v12];
            *(_DWORD *)(a2 + 92) = v12;
            *v10 = v13;
          }
          else
          {
            while ( v9 != ++v10 )
            {
              if ( v7 == *v10 )
                goto LABEL_15;
            }
          }
        }
      }
      else
      {
        v11 = (_QWORD *)sub_2236570(a2 + 80, *v3);
        if ( v11 )
        {
          *v11 = -2;
          ++*(_DWORD *)(a2 + 96);
        }
      }
      ++v3;
      result = sub_15C14A0(*a1 + 2608LL, v7);
    }
    while ( (__int64 *)v5 != v3 );
  }
  return result;
}
