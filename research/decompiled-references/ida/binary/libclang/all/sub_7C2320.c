__int64 __fastcall sub_7C2320(__int64 a1, __int64 a2, int a3)
{
  __int64 **v6; // rax
  __int64 v7; // r12
  __int64 *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  char v13; // al
  unsigned int v14; // esi
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  char v21; // al
  unsigned int v22; // esi
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rax
  char v28; // al
  unsigned __int8 v29; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v30; // [rsp+Fh] [rbp-39h]

  v6 = (__int64 **)sub_79A2B0(a2);
  v7 = (__int64)&(*v6)[*((unsigned int *)v6 + 2)];
  if ( *v6 != (__int64 *)v7 )
  {
    v8 = *v6;
    v9 = 0;
    v10 = 133;
    if ( a3 == 1 )
    {
      v18 = 133;
      while ( 1 )
      {
        v20 = *v8;
        v21 = *(_BYTE *)(*v8 + 34);
        if ( (v21 & 1) == 0
          && (v21 & 4) == 0
          && ((*(_BYTE *)(a1 + 12) & 1) == 0 || (((*(_BYTE *)(v20 + 30) & 0xF) - 6) & 0xFD) == 0) )
        {
          v19 = *(unsigned __int16 *)(v20 + 32);
          if ( (unsigned __int16)v19 > 0x120u )
          {
            LOWORD(v19) = v19 - 406;
            if ( (unsigned __int16)v19 > 7u || !_bittest64(&v18, v19) )
            {
LABEL_29:
              v22 = *(_DWORD *)(v20 + 16);
              if ( !v22
                || !*(_DWORD *)(a2 + 24)
                || (v29 = v9, v25 = sub_798D40(a2), v26 = sub_CB1620(*(_QWORD *)(v25 + 2152), v22), v9 = v29, v26) )
              {
                sub_7652A0(v20, *(_QWORD *)a1, a1 + 8);
                v23 = *(_QWORD *)a1;
                v24 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
                if ( (unsigned __int64)v24 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
                {
                  sub_26239D0(v23, 32);
                }
                else
                {
                  *(_QWORD *)(v23 + 32) = v24 + 1;
                  *v24 = 32;
                }
                v9 = 1;
              }
            }
          }
          else if ( (unsigned __int16)v19 <= 0x11Eu )
          {
            goto LABEL_29;
          }
        }
        if ( (__int64 *)v7 == ++v8 )
          return v9;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *v8;
        v13 = *(_BYTE *)(*v8 + 34);
        if ( (v13 & 1) != 0
          || (v13 & 4) != 0
          || (*(_BYTE *)(a1 + 12) & 1) != 0 && (((*(_BYTE *)(v12 + 30) & 0xF) - 6) & 0xFD) != 0 )
        {
          goto LABEL_6;
        }
        v11 = *(unsigned __int16 *)(v12 + 32);
        if ( (unsigned __int16)v11 <= 0x120u )
          break;
        LOWORD(v11) = v11 - 406;
        if ( (unsigned __int16)v11 > 7u || !_bittest64(&v10, v11) )
          goto LABEL_13;
LABEL_6:
        if ( (__int64 *)v7 == ++v8 )
          return v9;
      }
      if ( (unsigned __int16)v11 > 0x11Eu )
        goto LABEL_6;
LABEL_13:
      v14 = *(_DWORD *)(v12 + 16);
      if ( !*(_DWORD *)(a2 + 24)
        || !v14
        || (v30 = v9, v27 = sub_798D40(a2), v28 = sub_CB1620(*(_QWORD *)(v27 + 2152), v14), v9 = v30, v10 = 133, v28) )
      {
        if ( a3 == 2 )
          goto LABEL_6;
      }
      v15 = *(_QWORD *)a1;
      v16 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
      {
        sub_26239D0(v15, 32);
      }
      else
      {
        *(_QWORD *)(v15 + 32) = v16 + 1;
        *v16 = 32;
      }
      ++v8;
      sub_7652A0(v12, *(_QWORD *)a1, a1 + 8);
      v10 = 133;
      v9 = 1;
      if ( (__int64 *)v7 == v8 )
        return v9;
    }
  }
  return 0;
}

