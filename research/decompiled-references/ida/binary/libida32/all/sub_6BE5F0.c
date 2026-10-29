__int64 __fastcall sub_6BE5F0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  char v5; // dl
  unsigned int v6; // eax
  _BOOL8 v8; // rbx
  unsigned int v9; // esi
  char v10; // bp
  int *v11; // rbx
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r15
  char v15; // r14
  char v16; // si
  char v17; // al
  int v18; // eax
  __int64 v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  _DWORD *v23; // rax
  __int64 v24; // rdx

  v5 = *((_BYTE *)a2 + 88);
  v6 = v5 & 0xF0;
  if ( (v5 & 0xF0) == 0xC0 )
    v6 = *((_DWORD *)a2 + 7);
  if ( v6 <= 0x10 )
  {
    if ( (unsigned int)getinf(99) - 208 > 0x2F )
      return 1;
  }
  else if ( v6 - 208 > 0x2F )
  {
    return 1;
  }
  v8 = (get_tinfo_property(a2[4], 2) & 0x3F) == 1;
  v9 = a2[11] & 0xF0;
  if ( (a2[11] & 0xF0) == 0xC0 )
    v9 = *((_DWORD *)a2 + 7);
  if ( v9 <= 0x10 )
    v9 = getinf(99);
  v10 = sub_689E30((__int64)(a2 + 5), v9, v8);
  if ( v10 )
  {
    v11 = (int *)*a2;
    v12 = *((_DWORD *)a2 + 10);
    v13 = 80 * a2[1];
    v14 = *a2 + v13;
    if ( v12 == 2 )
    {
      v19 = a2[6];
      v20 = *(_DWORD **)v19;
      v21 = *(_QWORD *)v19 + 24LL * *(_QWORD *)(v19 + 8);
      if ( v20 == (_DWORD *)v21 )
      {
        v15 = v10;
        if ( v13 )
          goto LABEL_14;
LABEL_29:
        *((_DWORD *)a2 + 6) |= 0x200u;
      }
      else
      {
        while ( *v20 == 1 )
        {
          v20 += 6;
          if ( (_DWORD *)v21 == v20 )
          {
            v15 = v10;
            if ( (int *)v14 == v11 )
              goto LABEL_29;
LABEL_14:
            v16 = 0;
            while ( 1 )
            {
              v18 = *v11;
              if ( *v11 )
              {
                if ( v18 == 2 )
                {
                  v22 = *((_QWORD *)v11 + 1);
                  v23 = *(_DWORD **)v22;
                  v24 = *(_QWORD *)v22 + 24LL * *(_QWORD *)(v22 + 8);
                  if ( v23 == (_DWORD *)v24 )
                  {
LABEL_35:
                    v17 = v16;
                    v15 = v10;
                  }
                  else
                  {
                    while ( *v23 == 1 )
                    {
                      v23 += 6;
                      if ( (_DWORD *)v24 == v23 )
                        goto LABEL_35;
                    }
                    v17 = v15 & v16;
                  }
                }
                else
                {
                  v15 |= v18 == 1;
                  v17 = v16 & v15;
                }
                if ( v17 )
                {
LABEL_21:
                  sub_6BB730(a1, a3, (__int64)"Explicit locations, if present, should be given for all stack arguments");
                  return 0;
                }
              }
              else
              {
                cleanup_argloc(v11);
                *v11 = 1;
                v16 = v10;
                v11[2] = 0;
                if ( v15 )
                  goto LABEL_21;
              }
              v11 += 20;
              if ( (int *)v14 == v11 )
                goto LABEL_28;
            }
          }
        }
        v15 = 0;
        if ( (int *)v14 != v11 )
          goto LABEL_14;
      }
    }
    else
    {
      v15 = v12 == 1;
      if ( (int *)v14 != v11 )
        goto LABEL_14;
LABEL_28:
      if ( v15 )
        goto LABEL_29;
    }
    return 1;
  }
  sub_6BB730(a1, a3, (__int64)"Illegal return value location");
  return 0;
}

