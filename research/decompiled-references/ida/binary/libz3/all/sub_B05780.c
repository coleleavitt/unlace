void __fastcall sub_B05780(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // r9
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // r11
  _QWORD *v12; // rcx

  v2 = *(_DWORD **)(a2 + 8);
  if ( v2 )
  {
    v3 = (unsigned int)(*(_DWORD *)(a2 + 16) + 1);
    if ( (unsigned int)v3 > *(v2 - 1) )
      v3 = (unsigned int)*(v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      v5 = &v2[v3];
      if ( v4 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_6:
            while ( 1 )
            {
              v6 = *v2 >> 1;
              if ( (unsigned int)v6 < *(_DWORD *)(v4 - 4) )
                break;
              if ( ++v2 == v5 )
                return;
            }
            v7 = *(_QWORD **)(v4 + 48 * v6 + 8LL * (*v2 & 1) + 24);
            if ( v7 )
              break;
            if ( ++v2 == v5 )
              return;
          }
          v8 = (_QWORD *)*v7;
          if ( *v7 )
            break;
          if ( ++v2 == v5 )
            return;
        }
        v9 = *((unsigned int *)v8 - 1);
        for ( i = (_QWORD *)*v7; ; ++i )
        {
          if ( &v8[v9] == i )
          {
            if ( v5 != ++v2 )
              goto LABEL_6;
            return;
          }
          if ( a2 == *i )
            break;
        }
        ++v2;
        v11 = (unsigned int)(v9 - 1);
        v12 = &v8[v11];
        *i = *v12;
        *v12 = a2;
        *((_DWORD *)v8 - 1) = v11;
        if ( v5 != v2 )
          goto LABEL_6;
      }
      else
      {
        do
          ++v2;
        while ( v2 != v5 );
      }
    }
  }
}

