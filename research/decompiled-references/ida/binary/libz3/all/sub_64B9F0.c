__int64 __fastcall sub_64B9F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 *v8; // rcx
  int v9; // edi
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 *v12; // rsi
  __int64 v13; // rbp
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 *j; // rax
  __int64 v18; // rdx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax

  v7 = *(unsigned int *)(a1 + 2272);
  v8 = *(__int64 **)(a1 + 2264);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = v7 - 1;
  v11 = 16 * v7;
  v12 = &v8[(unsigned __int64)v11 / 8];
  v13 = 16LL * (v9 & v10);
  v14 = &v8[(unsigned __int64)v13 / 8];
  if ( v13 != v11 )
  {
    for ( i = &v8[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
    {
      v16 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v16 + 12) == v9 && a2 == v16 )
        {
          v20 = &v8[(unsigned __int64)v13 / 8];
          while ( 1 )
          {
LABEL_22:
            while ( 1 )
            {
              v21 = *v20;
              if ( (unsigned __int64)*v20 > 1 )
                break;
              if ( !v21 )
                goto LABEL_36;
              v20 += 2;
              if ( v12 == v20 )
                goto LABEL_25;
            }
            if ( *(_DWORD *)(v21 + 12) == v9 && a2 == v21 )
              return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20[1] + 24LL))(v20[1], a3, a4);
            v20 += 2;
            if ( v12 == v20 )
              goto LABEL_25;
          }
        }
      }
      else if ( !v16 )
      {
        return std::ostream::_M_insert<unsigned long>();
      }
    }
  }
  if ( v8 != v14 )
  {
    for ( j = v8; v14 != j; j += 2 )
    {
      v18 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v9 && a2 == v18 )
        {
          v20 = &v8[(unsigned __int64)v13 / 8];
          if ( v13 != v11 )
            goto LABEL_22;
LABEL_25:
          while ( v14 != v8 )
          {
            v22 = *v8;
            if ( (unsigned __int64)*v8 > 1 )
            {
              if ( *(_DWORD *)(v22 + 12) == v9 && a2 == v22 )
              {
                v20 = v8;
                return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20[1] + 24LL))(v20[1], a3, a4);
              }
            }
            else if ( !v22 )
            {
              break;
            }
            v8 += 2;
          }
LABEL_36:
          BUG();
        }
      }
      else if ( !v18 )
      {
        return std::ostream::_M_insert<unsigned long>();
      }
    }
  }
  return std::ostream::_M_insert<unsigned long>();
}

