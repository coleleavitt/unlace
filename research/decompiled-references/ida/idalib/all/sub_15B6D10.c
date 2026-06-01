unsigned __int64 __fastcall sub_15B6D10(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  _QWORD *v18; // rdx
  __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned int v23; // eax
  __int128 v24; // [rsp+0h] [rbp-28h] BYREF

  v2 = sub_BFD550(a2);
  v3 = sub_F6AC00(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 80LL);
    v5 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v4 & 4) != 0 )
      v5 = (unsigned __int64 *)*v5;
  }
  else
  {
    v19 = *(_WORD *)v2 & 0x1FF;
    if ( v19 == 71 )
    {
      v20 = *(_QWORD *)(v2 + 16);
      if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_6;
    }
    else
    {
      if ( v19 != 46 )
        goto LABEL_6;
      v20 = *(_QWORD *)(v2 + 24);
      if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 49 > 2 )
        goto LABEL_6;
    }
    v21 = *(_QWORD *)(v20 + 56);
    v5 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v21 & 4) != 0 )
      v5 = (unsigned __int64 *)v5[4];
  }
  v6 = *v5;
  v7 = (unsigned __int64)(v5 + 1);
  if ( *v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (v6 & 7) != 0 )
          goto LABEL_6;
        if ( (v6 & 8) != 0 )
          goto LABEL_16;
        v9 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v9 + 16) != 42 )
          break;
        if ( !v6 )
        {
          if ( MEMORY[0x10102464C458F] == 40 )
            goto LABEL_6;
LABEL_16:
          if ( (v6 & 8) != 0 )
            goto LABEL_6;
LABEL_17:
          if ( *(_BYTE *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !v6 )
            goto LABEL_6;
          v12 = (_QWORD *)(v7 + 16);
          if ( *(_BYTE *)(v6 + 16) == 25 )
            goto LABEL_7;
          v13 = 8LL * *(unsigned __int16 *)(v6 + 22);
          v14 = &v12[(unsigned __int64)v13 / 8];
          v15 = v13 >> 3;
          v16 = v13 >> 5;
          if ( v16 )
          {
            if ( *(_QWORD *)(v7 + 16) )
            {
              if ( *(_QWORD *)(v7 + 24) )
              {
                if ( *(_QWORD *)(v7 + 32) )
                {
                  v17 = v7 + 32 * v16 + 16;
                  v18 = (_QWORD *)(v7 + 40);
                  if ( *(_QWORD *)(v7 + 40) )
                  {
                    while ( 1 )
                    {
                      v18 = v12 + 4;
                      if ( (_QWORD *)v17 == v12 + 4 )
                      {
                        v15 = v14 - v18;
                        goto LABEL_33;
                      }
                      if ( !v12[4] )
                        goto LABEL_49;
                      if ( !v12[5] )
                      {
                        v18 = v12 + 5;
                        goto LABEL_49;
                      }
                      if ( !v12[6] )
                      {
                        v18 = v12 + 6;
                        goto LABEL_49;
                      }
                      if ( !v12[7] )
                        break;
                      v12 += 4;
                    }
                    v18 = v12 + 7;
                  }
                }
                else
                {
                  v18 = (_QWORD *)(v7 + 32);
                }
              }
              else
              {
                v18 = (_QWORD *)(v7 + 24);
              }
            }
            else
            {
              v18 = (_QWORD *)(v7 + 16);
            }
LABEL_49:
            if ( v14 != v18 )
              goto LABEL_6;
            goto LABEL_7;
          }
          v18 = (_QWORD *)(v7 + 16);
LABEL_33:
          if ( v15 != 2 )
          {
            if ( v15 != 3 )
            {
              if ( v15 != 1 )
                goto LABEL_7;
              goto LABEL_57;
            }
            if ( !*v18 )
              goto LABEL_49;
            ++v18;
          }
          if ( !*v18 )
            goto LABEL_49;
          ++v18;
LABEL_57:
          if ( *v18 )
            goto LABEL_7;
          goto LABEL_49;
        }
        v10 = v7 + 4;
LABEL_14:
        v11 = sub_F6C520(*(_QWORD *)(v6 + 32));
        v6 = *(_QWORD *)(v6 + 32);
        v7 = v11 * ((v10 != 0) + (v10 - (v10 != 0)) / v11);
      }
      if ( *(_BYTE *)(v9 + 16) != 8 )
      {
        if ( *(_BYTE *)(v9 + 16) != 40 )
          goto LABEL_16;
        if ( !v6 )
          break;
        v10 = v7 + 8;
        goto LABEL_14;
      }
      if ( !v6 )
        goto LABEL_17;
      v22 = v7 + 8;
      v23 = sub_F6C520(*(_QWORD *)(v6 + 40));
      v6 = *(_QWORD *)(v6 + 40);
      v7 = v23 * ((v22 != 0) + (v22 - (v22 != 0)) / v23);
    }
  }
LABEL_6:
  v7 = 0;
LABEL_7:
  *(_QWORD *)&v24 = v7;
  return _mm_loadh_ps((const double *)&v24).m128_u64[0];
}
