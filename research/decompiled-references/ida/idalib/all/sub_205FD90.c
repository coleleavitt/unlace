_BYTE *__fastcall sub_205FD90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  __int64 *v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned int v15; // r15d
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rsi
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  _DWORD *v22; // rdx
  __int64 v23; // rdx

  v6 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 1 )
    return (_BYTE *)sub_2058290(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL), a2, a3, a4, a5, a6);
  switch ( v6 )
  {
    case 2:
      return (_BYTE *)sub_205FC70(*(__int64 ***)(*(_QWORD *)(a1 + 8) + 24LL), a2, a3, a4, a5, a6);
    case 5:
      v7 = (__int64 *)sub_20CB0D0(a1);
      return (_BYTE *)sub_2054E70(v7, a1 + 24);
    case 6:
      v9 = (_QWORD *)sub_20CB0D0(a1);
      return (_BYTE *)sub_2055C80(v9, (__int64 *)(a1 + 24));
    case 4:
      return (_BYTE *)sub_205FC20(a1);
    case 12:
      return sub_2051540(a1, a2);
  }
  v10 = 0;
  if ( v6 == 18 && *(_WORD *)(a1 + 2) == 63 )
  {
    v11 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
    if ( **(_BYTE **)(a1 + 32 * (1 - v11)) <= 1u )
    {
      v12 = *(_QWORD *)(a1 - 32 * v11);
      if ( *(_BYTE *)v12 == 18 && *(_WORD *)(v12 + 2) == 62 )
      {
        v13 = *(_DWORD *)(v12 + 4) & 0x7FFFFFF;
        if ( **(_BYTE **)(v12 - 32 * v13) <= 1u )
        {
          v14 = *(_QWORD *)(v12 + 32 * (2 - v13));
          if ( *(_BYTE *)v14 == 5 )
          {
            v15 = *(_DWORD *)(v14 + 32);
            if ( v15 > 0x40 )
            {
              if ( v15 - (unsigned int)sub_2206780(v14 + 24) > 0x40 )
                return (_BYTE *)v10;
              v16 = **(_QWORD **)(v14 + 24);
            }
            else
            {
              v16 = *(_QWORD *)(v14 + 24);
            }
            v10 = 0;
            if ( !v16 )
            {
              v17 = *(_DWORD **)(a1 + 24);
              v10 = *(_QWORD *)(v12 + 32 * (1 - v13));
              v18 = *(unsigned int *)(a1 + 32);
              v19 = &v17[v18];
              v20 = (v18 * 4) >> 4;
              if ( v20 )
              {
                if ( *v17 )
                  goto LABEL_40;
                if ( v17[1] )
                {
                  ++v17;
                  goto LABEL_40;
                }
                if ( v17[2] )
                {
                  v17 += 2;
                  goto LABEL_40;
                }
                if ( v17[3] )
                {
                  v17 += 3;
                  goto LABEL_40;
                }
                v21 = *(_DWORD **)(a1 + 24);
                v22 = &v17[4 * v20];
                while ( 1 )
                {
                  v17 += 4;
                  if ( v22 == v17 )
                    break;
                  if ( *v17 )
                    goto LABEL_40;
                  if ( v17[1] )
                  {
                    v17 = v21 + 5;
                    goto LABEL_40;
                  }
                  if ( v17[2] )
                  {
                    v17 = v21 + 6;
                    goto LABEL_40;
                  }
                  if ( v17[3] )
                  {
                    v17 = v21 + 7;
                    goto LABEL_40;
                  }
                  v21 = v17;
                }
              }
              v23 = v19 - v17;
              if ( v23 != 2 )
              {
                if ( v23 != 3 )
                {
                  if ( v23 != 1 )
                    return (_BYTE *)v10;
                  goto LABEL_39;
                }
                if ( *v17 )
                  goto LABEL_40;
                ++v17;
              }
              if ( *v17 )
                goto LABEL_40;
              ++v17;
LABEL_39:
              if ( !*v17 )
                return (_BYTE *)v10;
LABEL_40:
              if ( v19 != v17 )
                return nullptr;
            }
          }
        }
      }
    }
  }
  return (_BYTE *)v10;
}
