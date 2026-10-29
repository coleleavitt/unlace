__int64 __fastcall sub_1C880(_QWORD *a1)
{
  _WORD *v1; // rcx
  _WORD *v2; // rax
  _WORD *v4; // rdx
  _WORD *v5; // rdx
  _WORD *v6; // rdx
  _WORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx

  v1 = (_WORD *)a1[16];
  v2 = &v1[16 * a1[17]];
  if ( v1 == v2 )
    goto LABEL_54;
  v4 = (_WORD *)a1[16];
  while ( *v4 )
  {
    v4 += 16;
    if ( v4 == v2 )
      goto LABEL_54;
  }
  if ( !v4 )
  {
LABEL_54:
    sub_72E0((__int64)"Map is missing header entry");
    return 0;
  }
  else
  {
    v5 = (_WORD *)a1[16];
    while ( *v5 != 4096 )
    {
      v5 += 16;
      if ( v5 == v2 )
        goto LABEL_55;
    }
    if ( !v5 )
    {
LABEL_55:
      sub_72E0((__int64)"Map is missing map_list entry", a1);
      return 0;
    }
    v6 = (_WORD *)a1[16];
    while ( *v6 != 1 )
    {
      v6 += 16;
      if ( v6 == v2 )
        goto LABEL_36;
    }
    if ( v6 )
    {
      v6 = (_WORD *)a1[16];
      goto LABEL_16;
    }
LABEL_36:
    v9 = a1[5];
    if ( *(_DWORD *)(v9 + 60) || (v6 = v1, *(_DWORD *)(v9 + 56)) )
    {
      sub_72E0((__int64)"Map is missing string_ids entry", a1, v6);
      return 0;
    }
    else
    {
LABEL_16:
      while ( *v6 != 2 )
      {
        v6 += 16;
        if ( v6 == v2 )
          goto LABEL_39;
      }
      if ( v6 )
      {
        v6 = v1;
        goto LABEL_20;
      }
LABEL_39:
      v10 = a1[5];
      if ( *(_DWORD *)(v10 + 68) || (v6 = v1, *(_DWORD *)(v10 + 64)) )
      {
        sub_72E0((__int64)"Map is missing type_ids entry", a1, v6);
        return 0;
      }
      else
      {
LABEL_20:
        while ( *v6 != 3 )
        {
          v6 += 16;
          if ( v6 == v2 )
            goto LABEL_42;
        }
        if ( v6 )
        {
          v7 = v1;
          goto LABEL_24;
        }
LABEL_42:
        v11 = a1[5];
        if ( *(_DWORD *)(v11 + 76) || (v7 = v1, *(_DWORD *)(v11 + 72)) )
        {
          sub_72E0((__int64)"Map is missing proto_ids entry");
          return 0;
        }
        else
        {
LABEL_24:
          while ( *v7 != 4 )
          {
            v7 += 16;
            if ( v7 == v2 )
              goto LABEL_45;
          }
          if ( v7 )
          {
            v7 = v1;
            goto LABEL_28;
          }
LABEL_45:
          v12 = a1[5];
          if ( *(_DWORD *)(v12 + 84) || (v7 = v1, *(_DWORD *)(v12 + 80)) )
          {
            sub_72E0((__int64)"Map is missing field_ids entry", a1, v7);
            return 0;
          }
          else
          {
LABEL_28:
            while ( *v7 != 5 )
            {
              v7 += 16;
              if ( v7 == v2 )
                goto LABEL_48;
            }
            if ( v7 )
              goto LABEL_32;
LABEL_48:
            v13 = a1[5];
            if ( *(_DWORD *)(v13 + 92) || *(_DWORD *)(v13 + 88) )
            {
              sub_72E0((__int64)"Map is missing method_ids entry");
              return 0;
            }
            else
            {
LABEL_32:
              while ( *v1 != 6 )
              {
                v1 += 16;
                if ( v1 == v2 )
                  goto LABEL_51;
              }
              if ( v1 )
                return 1;
LABEL_51:
              v14 = a1[5];
              if ( *(_DWORD *)(v14 + 100) || (result = 1, *(_DWORD *)(v14 + 96)) )
              {
                sub_72E0((__int64)"Map is missing class_defs entry");
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

