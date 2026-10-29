__int64 __fastcall sub_AE23D0(_BYTE *a1)
{
  __int64 v1; // rbp
  _BYTE *v2; // rax
  _BYTE *v4; // r14
  __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 *v9; // rcx
  bool v10; // zf
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *i; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx

  if ( !a1 )
    return v1;
  v2 = a1;
  if ( (a1[29] & 1) != 0 )
  {
LABEL_8:
    v4 = a1;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( (v4[29] & 1) != 0 )
      {
        v7 = sub_B68690(v4);
        v8 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
        if ( (v4[29] & 1) != 0 )
          v9 = *(__int64 **)sub_B68690(v4);
        else
          v9 = nullptr;
        v10 = v9 == (__int64 *)v8;
        if ( (unsigned __int64)v9 < v8 )
        {
LABEL_13:
          v11 = v9;
          while ( *(_WORD *)(*v11 + 36) != 295 )
          {
            if ( (__int64 *)v8 == ++v11 )
              goto LABEL_16;
          }
          goto LABEL_20;
        }
        while ( 1 )
        {
          if ( v10 )
            goto LABEL_16;
          v15 = (__int64 *)(v8 + 8);
          if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 295 )
            break;
LABEL_20:
          v13 = *v9;
          for ( i = v9 + 1; *(_WORD *)(v13 + 36) != 295; ++i )
          {
            v13 = *i;
            v9 = i;
          }
          if ( v6 <= *(_DWORD *)(v13 + 60) )
          {
            v5 = v13;
            v6 = *(_DWORD *)(v13 + 60);
          }
          v10 = ++v9 == (__int64 *)v8;
          if ( (unsigned __int64)v9 < v8 )
            goto LABEL_13;
        }
        while ( v15 != v9 )
        {
          v16 = *v15++;
          if ( *(_WORD *)(v16 + 36) == 295 )
            goto LABEL_20;
        }
      }
LABEL_16:
      v12 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 40LL))(v4);
      v4 = (_BYTE *)v12;
      if ( a1 == (_BYTE *)v12 || !v12 )
      {
        if ( v5 )
          return v5;
        return v1;
      }
    }
  }
  while ( 1 )
  {
    v2 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 40LL))(v2);
    if ( a1 == v2 || !v2 )
      return v1;
    if ( (v2[29] & 1) != 0 )
      goto LABEL_8;
  }
}

