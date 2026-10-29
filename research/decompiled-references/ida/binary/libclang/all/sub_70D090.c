__int64 __fastcall sub_70D090(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  unsigned __int8 v10; // r14
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // r13
  unsigned __int8 v18; // r15
  __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // rbp
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 13 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 56 > 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(unsigned __int8 *)(v15 + 16);
      if ( (unsigned int)(v16 - 56) > 1 )
        goto LABEL_11;
      v25 = sub_B0D320(v5);
      v5 = v25;
      if ( !v25 )
        goto LABEL_10;
      v8 = (*(_BYTE *)(v25 + 18) >> 3) & 0xF;
      if ( v8 != 6 )
      {
LABEL_4:
        v9 = *v4;
        if ( !v8 )
        {
          v10 = (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 192LL) >> 5) & 3;
          v11 = sub_6F6DE0(a1, v9);
          v12 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
          v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 2160) + 176LL) << 7);
          if ( v12 == 100 || v12 == 103 )
          {
            v29 = v11;
            v27 = sub_6F7120(a1);
            v11 = v29;
            v13 /= v27;
          }
          v14 = v10;
          if ( v11 == v13 )
          {
LABEL_8:
            if ( v14 == 2 )
              return 1;
            if ( v14 == 1 )
            {
              if ( sub_6B3140(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL]
                                        & 0xFFFFFFFFFFFFFFF0LL)) )
              {
                v26 = sub_B086D0(*v3, a1);
                if ( sub_6B3140(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL)) )
                  return 1;
              }
            }
            goto LABEL_10;
          }
          goto LABEL_10;
        }
        v15 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v16) = *(_BYTE *)(v15 + 16);
LABEL_11:
        if ( (_BYTE)v16 != 13 )
          return 0;
        goto LABEL_12;
      }
    }
    else
    {
      v8 = (*(_BYTE *)(v5 + 18) >> 3) & 0xF;
      if ( v8 != 6 )
        goto LABEL_4;
    }
    if ( ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) != 0x64 )
    {
      v14 = (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 192LL) >> 5) & 3;
      goto LABEL_8;
    }
LABEL_10:
    v15 = *(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v16) = *(_BYTE *)(v15 + 16);
    goto LABEL_11;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 13 )
    return 0;
LABEL_12:
  v17 = *v3;
  if ( (unsigned int)*(unsigned __int8 *)(*v3 + 16) - 56 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 > 1 )
      return 0;
    v17 = sub_B0D320(*v3);
    if ( !v17 )
      return 0;
  }
  if ( ((*(_BYTE *)(v17 + 18) >> 3) & 0xF) == 6 )
  {
    if ( ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x64 )
      return 0;
    v22 = (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 192LL) >> 5) & 3;
  }
  else
  {
    if ( ((*(_BYTE *)(v17 + 18) >> 3) & 0xF) != 0 )
      return 0;
    v18 = (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 192LL) >> 5) & 3;
    v19 = sub_6F6DE0(a1, *v3);
    v20 = (*(_WORD *)(v15 + 18) >> 3) & 0x1FF;
    v21 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 2160) + 176LL) << 7);
    if ( v20 == 100 || v20 == 103 )
    {
      v30 = v19;
      v28 = sub_6F7120(a1);
      v19 = v30;
      v21 /= v28;
    }
    if ( v19 != v21 )
      return 0;
    v22 = v18;
  }
  if ( v22 == 2 )
    return 1;
  if ( v22 == 1 )
  {
    if ( sub_6B3140(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v23 = sub_B086D0(*v4, a1);
      if ( sub_6B3140(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL)) )
        return 1;
    }
  }
  return 0;
}

