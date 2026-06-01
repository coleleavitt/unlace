__int64 __fastcall sub_1AF5BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v14; // r13
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rsi
  _QWORD *v24; // rsi
  _QWORD *v25; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(v2 + 344);
  if ( !(_DWORD)v3 )
    return 1;
  v4 = *(_QWORD *)(v2 + 336) + 6776 * v3 - 6776;
  if ( *(_QWORD *)(v4 + 6768) != *(_QWORD *)(v2 + 328) )
    return 1;
  v7 = *(unsigned int *)(v4 + 8);
  v8 = *(unsigned int *)(v2 + 27504);
  if ( (unsigned int)v7 <= (unsigned int)v8 )
    return 1;
  v9 = v7 - v8;
  if ( !v9 )
    return 1;
  v10 = *(_QWORD *)v4 + 1688 * (v9 - 1);
  if ( !v10 )
    return 1;
  v11 = *(_QWORD *)(v10 + 1536);
  if ( !v11 )
    return 1;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 32LL))(*(_QWORD *)(v11 + 16)) == v14 )
    return 1;
  v16 = sub_168B6C0(a1);
  v5 = sub_B7D2B0(a2, v16);
  if ( (_BYTE)v5 )
    return 1;
  if ( *(_DWORD *)(sub_168B6E0(a1) + 64) > 0x33u )
  {
    v17 = sub_1AE5FF0(*(_QWORD *)(a1 + 8));
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
      v19 = *(_QWORD **)(v17 + 1544);
      v20 = 8LL * *(unsigned int *)(v17 + 1552);
      v21 = &v19[(unsigned __int64)v20 / 8];
      v22 = v20 >> 3;
      v23 = v20 >> 5;
      if ( v23 )
      {
        if ( v18 == *v19 )
        {
          LOBYTE(v5) = v19 != v21;
        }
        else if ( v18 == v19[1] )
        {
          LOBYTE(v5) = v21 != v19 + 1;
        }
        else if ( v18 == v19[2] )
        {
          LOBYTE(v5) = v21 != v19 + 2;
        }
        else
        {
          v24 = &v19[4 * v23];
          if ( v18 == v19[3] )
          {
            LOBYTE(v5) = v21 != v19 + 3;
          }
          else
          {
            while ( 1 )
            {
              v25 = v19 + 4;
              if ( v19 + 4 == v24 )
              {
                v22 = v21 - v24;
                goto LABEL_26;
              }
              if ( v18 == v19[4] )
              {
                LOBYTE(v5) = v25 != v21;
                return v5;
              }
              if ( v18 == v19[5] )
              {
                LOBYTE(v5) = v21 != v19 + 5;
                return v5;
              }
              if ( v18 == v19[6] )
              {
                LOBYTE(v5) = v21 != v19 + 6;
                return v5;
              }
              if ( v18 == v19[7] )
                break;
              v19 += 4;
            }
            LOBYTE(v5) = v21 != v19 + 7;
          }
        }
        return v5;
      }
      v25 = *(_QWORD **)(v17 + 1544);
LABEL_26:
      if ( v22 != 2 )
      {
        if ( v22 != 3 )
        {
          if ( v22 != 1 )
            return v5;
LABEL_29:
          if ( v18 != *v25 )
            return v5;
LABEL_30:
          LOBYTE(v5) = v21 != v25;
          return v5;
        }
        if ( v18 == *v25 )
          goto LABEL_30;
        ++v25;
      }
      if ( v18 == *v25 )
        goto LABEL_30;
      ++v25;
      goto LABEL_29;
    }
  }
  return v5;
}
