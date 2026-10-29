char __fastcall sub_4910B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // dx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  char result; // al
  int *v8; // rcx
  int *v9; // rdx
  int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  bool v14; // zf
  _DWORD *v15; // rax
  _DWORD *v16; // rdx
  unsigned __int16 v17; // ax
  bool v18; // cf
  unsigned int v19; // edx
  unsigned int v20; // eax
  _DWORD *v21; // rax
  _DWORD *v22; // r9

  v2 = a1;
  if ( a1 == a2 )
    return 0;
  v3 = *(_WORD *)(a1 + 4);
  v4 = *(_WORD *)(a2 + 4);
  if ( v3 )
  {
    if ( v4 )
    {
      if ( v3 == v4 )
        return *(_DWORD *)v2 < *(_DWORD *)a2;
      return v3 < v4;
    }
    v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v6 )
      return v3 < v4;
    if ( *v6 )
    {
LABEL_29:
      v3 = *(_WORD *)(v2 + 4);
      v4 = *(_WORD *)(a2 + 4);
      if ( v4 == v3 )
      {
        if ( v4 )
          return *(_DWORD *)v2 < *(_DWORD *)a2;
        v8 = *(int **)(*(_QWORD *)(v2 + 16) + 24LL);
        v9 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
        if ( !v8 )
        {
          if ( v9 )
          {
            v11 = *v9;
            if ( *v9 != -1 )
            {
              v10 = -1;
              return v11 > v10;
            }
            v13 = v9[1];
            if ( v13 != -1 )
              return v11 < v13;
          }
          return *(_DWORD *)v2 < *(_DWORD *)a2;
        }
        v10 = *v8;
        if ( !v9 )
        {
          v11 = -1;
          if ( v10 != -1 )
            return v11 > v10;
          v11 = v8[1];
          v13 = -1;
          if ( v11 != -1 )
            return v11 < v13;
          return *(_DWORD *)v2 < *(_DWORD *)a2;
        }
        v11 = *v9;
        if ( v10 != *v9 )
          return v11 > v10;
        v11 = v8[1];
        v12 = v9[1];
        v13 = v12;
        if ( v12 != v11 )
          return v11 < v13;
        if ( v10 != 5 )
          return *(_DWORD *)v2 < *(_DWORD *)a2;
        if ( v12 == 2 )
        {
          v15 = nullptr;
          if ( *(_DWORD *)(v2 + 24) == 2 )
          {
            v15 = *(_DWORD **)(v2 + 40);
            v2 = *(_QWORD *)(v2 + 32);
          }
LABEL_46:
          if ( *(_DWORD *)(a2 + 24) != 2 )
            goto LABEL_47;
          v16 = *(_DWORD **)(a2 + 40);
          a2 = *(_QWORD *)(a2 + 32);
          if ( v15 )
          {
            if ( !v16 )
              return v15 < v16;
            if ( v2 == a2 )
              return *v15 < *v16;
            v17 = *(_WORD *)(v2 + 4);
            v18 = v17 < *(_WORD *)(a2 + 4);
            if ( v17 == *(_WORD *)(a2 + 4) )
            {
              if ( v17 )
                return *(_DWORD *)v2 < *(_DWORD *)a2;
              v19 = *(unsigned __int16 *)(v2 + 28);
              v20 = *(unsigned __int16 *)(a2 + 28);
              v18 = v19 < v20;
              if ( v19 == v20 )
              {
                sub_490FE0(v2);
                v21 = sub_490FE0(a2);
                if ( v22 && v21 )
                {
                  if ( v22 == v21 )
                    return *(_DWORD *)v2 < *(_DWORD *)a2;
                  return *v22 < *v21;
                }
                else
                {
                  v18 = v22 < v21;
                  if ( v22 == v21 )
                    return *(_DWORD *)v2 < *(_DWORD *)a2;
                }
              }
            }
            return v18;
          }
          if ( v16 )
            return v15 < v16;
          return *(_DWORD *)v2 < *(_DWORD *)a2;
        }
        if ( v12 == 4 || v12 == 3 )
        {
          v15 = nullptr;
          if ( *(_DWORD *)(v2 + 24) != 2 )
            goto LABEL_43;
        }
        else
        {
          v14 = v11 == 5;
          v15 = nullptr;
          if ( !v14 || *(_DWORD *)(v2 + 24) != 2 )
          {
LABEL_43:
            if ( v12 != 4 && v12 != 3 && v12 != 5 )
            {
LABEL_47:
              if ( v15 )
              {
                v16 = nullptr;
                return v15 < v16;
              }
              return *(_DWORD *)v2 < *(_DWORD *)a2;
            }
            goto LABEL_46;
          }
        }
        v15 = *(_DWORD **)(v2 + 40);
        v2 = *(_QWORD *)(v2 + 32);
        goto LABEL_43;
      }
      return v3 < v4;
    }
    result = 1;
  }
  else
  {
    v5 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( v5 && !*v5 && v5[1] == 8 && *(_DWORD *)(a1 + 24) == 1 )
    {
      v2 = *(_QWORD *)(a1 + 32);
      result = 0;
      if ( v4 )
        goto LABEL_10;
      v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v6 )
        goto LABEL_10;
    }
    else
    {
      if ( v4 )
        return v3 < v4;
      v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v6 )
        goto LABEL_29;
      result = 1;
    }
    if ( *v6 )
    {
LABEL_9:
      result = 0;
      goto LABEL_10;
    }
  }
  if ( v6[1] != 8 || *(_DWORD *)(a2 + 24) != 1 )
    goto LABEL_9;
  a2 = *(_QWORD *)(a2 + 32);
LABEL_10:
  if ( a2 != v2 )
    goto LABEL_29;
  return result;
}

