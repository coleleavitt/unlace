__int64 __fastcall sub_179C320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int16 v8; // ax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 *v15; // rax
  __int16 v16; // bp
  __int64 *v17; // rbx
  __int64 v18; // rax
  size_t v19; // rdx
  __int64 v21; // r13
  unsigned __int8 v22; // dl
  int v23; // eax
  int v24; // ebp
  int v25; // r12d
  unsigned __int8 v26; // dl
  int v27; // eax

  v6 = a2;
  v7 = 0;
  v8 = *(_WORD *)(a2 + 36);
  if ( v8 != 324 )
  {
    if ( v8 == 91 )
      v7 = a2;
    v6 = 0;
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v9 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
    v13 = *((unsigned int *)v9 + 2);
    v14 = *v9 + 8 * v13;
    v15 = (*(_BYTE *)(a1 + 29) & 1) != 0 ? (__int64 *)*sub_B8C3D0(a1, a2, v13, v10, v11, v12) : nullptr;
    if ( (__int64 *)v14 != v15 )
    {
      v16 = *(_WORD *)(a2 + 36);
      v17 = v15;
      if ( v7 )
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( *(_WORD *)(*v17 + 36) == v16 )
          {
            v19 = *(unsigned int *)(v7 + 40);
            if ( v19 == *(_DWORD *)(v18 + 40)
              && (!*(_DWORD *)(v7 + 40) || !memcmp(*(const void **)(v7 + 48), *(const void **)(v18 + 48), v19)) )
            {
              break;
            }
          }
          if ( (__int64 *)v14 == ++v17 )
            return 0;
        }
      }
      else
      {
        while ( 1 )
        {
          v21 = *v15;
          if ( v16 == *(_WORD *)(*v15 + 36) )
            break;
          if ( (__int64 *)v14 == ++v15 )
            return 0;
        }
        LOBYTE(v17) = v16 == 324 && v6 != 0;
        if ( (_BYTE)v17 )
        {
          if ( (*(_BYTE *)(v6 + 34) & 0xF0) == 0xF0 )
          {
            if ( !(unsigned int)sub_FA77D0(v6) )
              goto LABEL_38;
            if ( (*(_BYTE *)(v6 + 34) & 0xF0) == 0xF0 )
            {
              if ( (unsigned int)sub_FA77D0(v6) == 1 )
                goto LABEL_38;
              if ( (*(_BYTE *)(v6 + 34) & 0xF0) == 0xF0 )
              {
                if ( (unsigned int)sub_FA77D0(v6) != 2 )
                {
                  if ( (*(_BYTE *)(v6 + 34) & 0xF0) == 0xF0 )
                  {
                    if ( (unsigned int)sub_FA77D0(v6) == 6 )
                      goto LABEL_39;
                    if ( (*(_BYTE *)(v6 + 34) & 0xF0) == 0xF0 )
                    {
                      if ( (unsigned int)sub_FA77D0(v6) != 7 )
                      {
                        if ( (*(_BYTE *)(v6 + 34) & 0xF0) == 0xF0 )
                          v23 = sub_FA77D0(v6);
                        else
                          v23 = *(_BYTE *)(v6 + 34) >> 4;
LABEL_27:
                        if ( v23 != 8 )
                        {
                          v24 = 0;
                          LODWORD(v17) = 0;
                          v25 = 1;
                          goto LABEL_29;
                        }
                      }
LABEL_39:
                      v24 = (int)v17;
                      v25 = 2;
                      LODWORD(v17) = 0;
LABEL_29:
                      if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
                      {
                        if ( !(unsigned int)sub_FA77D0(v21) )
                          return (unsigned int)v17;
                        if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
                        {
                          if ( (unsigned int)sub_FA77D0(v21) == 1 )
                            return (unsigned int)v17;
                          if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
                          {
                            if ( (unsigned int)sub_FA77D0(v21) == 2 )
                              return (unsigned int)v17;
                            if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
                            {
                              LODWORD(v17) = v24;
                              if ( (unsigned int)sub_FA77D0(v21) == 6 )
                                return (unsigned int)v17;
                              if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
                              {
                                if ( (unsigned int)sub_FA77D0(v21) != 7 )
                                {
                                  if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
                                    v27 = sub_FA77D0(v21);
                                  else
                                    v27 = *(_BYTE *)(v21 + 34) >> 4;
                                  goto LABEL_35;
                                }
                                return (unsigned int)v17;
                              }
                              v26 = *(_BYTE *)(v21 + 34) >> 4;
                              v27 = v26;
LABEL_34:
                              LODWORD(v17) = v24;
                              if ( v26 != 7 )
                              {
LABEL_35:
                                LODWORD(v17) = v24;
                                if ( v27 != 8 )
                                  LOBYTE(v17) = v25 == 1;
                                return (unsigned int)v17;
                              }
                              return (unsigned int)v17;
                            }
                            v26 = *(_BYTE *)(v21 + 34) >> 4;
                            v27 = v26;
LABEL_33:
                            LODWORD(v17) = v24;
                            if ( v26 == 6 )
                              return (unsigned int)v17;
                            goto LABEL_34;
                          }
                          v26 = *(_BYTE *)(v21 + 34) >> 4;
                          v27 = v26;
LABEL_32:
                          if ( v26 == 2 )
                            return (unsigned int)v17;
                          goto LABEL_33;
                        }
                        v26 = *(_BYTE *)(v21 + 34) >> 4;
                      }
                      else
                      {
                        v26 = *(_BYTE *)(v21 + 34) >> 4;
                        if ( !v26 )
                          return (unsigned int)v17;
                      }
                      v27 = v26;
                      if ( v26 == 1 )
                        return (unsigned int)v17;
                      goto LABEL_32;
                    }
                    v22 = *(_BYTE *)(v6 + 34) >> 4;
                    v23 = v22;
LABEL_26:
                    if ( v22 != 7 )
                      goto LABEL_27;
                    goto LABEL_39;
                  }
                  v22 = *(_BYTE *)(v6 + 34) >> 4;
                  v23 = v22;
LABEL_25:
                  if ( v22 == 6 )
                    goto LABEL_39;
                  goto LABEL_26;
                }
LABEL_38:
                v24 = 0;
                v25 = 0;
                goto LABEL_29;
              }
              v22 = *(_BYTE *)(v6 + 34) >> 4;
              v23 = v22;
LABEL_24:
              if ( v22 != 2 )
                goto LABEL_25;
              goto LABEL_38;
            }
            v22 = *(_BYTE *)(v6 + 34) >> 4;
          }
          else
          {
            v22 = *(_BYTE *)(v6 + 34) >> 4;
            if ( !v22 )
              goto LABEL_38;
          }
          v23 = v22;
          if ( v22 == 1 )
            goto LABEL_38;
          goto LABEL_24;
        }
      }
      LODWORD(v17) = 1;
      return (unsigned int)v17;
    }
  }
  return 0;
}
