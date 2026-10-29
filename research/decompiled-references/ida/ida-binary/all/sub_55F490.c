__int64 __fastcall sub_55F490(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _DWORD *v3; // r9
  unsigned __int64 *v4; // rdi
  __int64 *v5; // rdx
  int v6; // r10d
  int v7; // ebp
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // esi
  unsigned __int64 v12; // r11
  int v13; // r10d
  _QWORD *v14; // rdx
  __int64 v15; // r14
  int v16; // ebx
  int v17; // esi
  int v18; // r9d
  int v19; // edi
  int v20; // eax
  unsigned __int16 v21; // ax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  _DWORD *v24; // rcx
  int v25; // edx
  _DWORD *v26; // [rsp+8h] [rbp-50h]
  unsigned int v27; // [rsp+14h] [rbp-44h]
  unsigned __int64 *v28; // [rsp+18h] [rbp-40h]

  result = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)result )
    __assert_fail(
      "(uint32_t)((&self->stack)->size - 1) < (&self->stack)->size",
      "lib/src/./tree_cursor.c",
      0x172u,
      "ts_tree_cursor_goto_previous_sibling_internal");
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_DWORD *)(v2 + 32LL * (unsigned int)(result - 1));
  if ( v3[2] || !v3[4] )
    return result;
  v4 = nullptr;
  v5 = (__int64 *)(32LL * (unsigned int)(result - 2) + v2);
  result = (unsigned int)v3[5];
  v6 = *((_DWORD *)v5 + 2);
  v7 = *((_DWORD *)v5 + 3);
  v8 = *((_DWORD *)v5 + 4);
  v9 = *v5;
  if ( (*(_BYTE *)v9 & 1) == 0 )
    v4 = (unsigned __int64 *)(*(_QWORD *)v9 - 8LL * *(unsigned int *)(*(_QWORD *)v9 + 36LL));
  if ( !(_DWORD)result )
  {
LABEL_28:
    v3[2] = v6;
    v3[3] = v7;
    v3[4] = v8;
    return result;
  }
  v10 = *v4;
  if ( (*v4 & 1) != 0 )
  {
    v12 = HIBYTE(v10);
    v13 = HIBYTE(v10) + v6;
    goto LABEL_30;
  }
  v11 = *(_DWORD *)(v10 + 20);
  LODWORD(v12) = *(_DWORD *)(v10 + 24);
  v13 = *(_DWORD *)(v10 + 16) + v6;
  if ( !v11 )
  {
LABEL_30:
    LODWORD(v12) = v8 + v12;
    goto LABEL_11;
  }
  v7 += v11;
LABEL_11:
  if ( (_DWORD)result == 1 )
    goto LABEL_24;
  v26 = v3;
  v14 = v4 + 1;
  v27 = v3[5];
  v15 = (__int64)&v4[(unsigned int)(result - 2) + 2];
  v28 = v4;
  do
  {
    v21 = *((_WORD *)v14 + 3);
    v22 = *((unsigned __int8 *)v14 + 4);
    LOBYTE(v19) = *((_BYTE *)v14 + 5) & 0xF;
    v23 = ((unsigned __int64)(unsigned __int8)v19 << 40) & 0xFFFFFFFFFFFFLL
        | *v14 & 0xF000FFFFFFFFLL
        | (v22 << 32) & 0xF0FFFFFFFFFFLL
        | ((unsigned __int64)v21 << 48);
    if ( (*(_DWORD *)v14 & 1) != 0 )
    {
      v16 = 0;
      v17 = HIBYTE(v21);
      v18 = HIBYTE(v21);
      if ( (*(_BYTE *)v14 & 1) != 0 )
        goto LABEL_14;
    }
    else
    {
      v17 = *(_DWORD *)((char *)&word_10
                      + (((unsigned __int64)(*((_BYTE *)v14 + 5) & 0xF) << 40) & 0xFFFFFFFFFFFFLL
                       | *v14 & 0xF000FFFFFFFFLL
                       | (v22 << 32) & 0xF0FFFFFFFFFFLL
                       | ((unsigned __int64)*((unsigned __int16 *)v14 + 3) << 48)));
      v16 = *(int *)((char *)&dword_14
                   + (((unsigned __int64)(*((_BYTE *)v14 + 5) & 0xF) << 40) & 0xFFFFFFFFFFFFLL
                    | *v14 & 0xF000FFFFFFFFLL
                    | (v22 << 32) & 0xF0FFFFFFFFFFLL
                    | ((unsigned __int64)*((unsigned __int16 *)v14 + 3) << 48)));
      v18 = *(_DWORD *)((char *)&off_18
                      + (((unsigned __int64)(*((_BYTE *)v14 + 5) & 0xF) << 40) & 0xFFFFFFFFFFFFLL
                       | *v14 & 0xF000FFFFFFFFLL
                       | (v22 << 32) & 0xF0FFFFFFFFFFLL
                       | ((unsigned __int64)*((unsigned __int16 *)v14 + 3) << 48)));
      if ( (*(_BYTE *)v14 & 1) != 0 )
      {
LABEL_14:
        v19 = (unsigned __int8)v19;
        v20 = v17 + (unsigned __int8)v21;
        if ( v16 )
          goto LABEL_15;
        goto LABEL_22;
      }
    }
    v19 = *(_DWORD *)&byte_8[((unsigned __int64)(*((_BYTE *)v14 + 5) & 0xF) << 40) & 0xFFFFFFFFFFFFLL
                           | *v14 & 0xF000FFFFFFFFLL
                           | (v22 << 32) & 0xF0FFFFFFFFFFLL
                           | ((unsigned __int64)*((unsigned __int16 *)v14 + 3) << 48)];
    LODWORD(v22) = *(_DWORD *)&byte_9[(((unsigned __int64)(*((_BYTE *)v14 + 5) & 0xF) << 40) & 0xFFFFFFFFFFFFLL
                                     | *v14 & 0xF000FFFFFFFFLL
                                     | (v22 << 32) & 0xF0FFFFFFFFFFLL
                                     | ((unsigned __int64)*((unsigned __int16 *)v14 + 3) << 48))
                                    + 3];
    v20 = v17 + *(_DWORD *)(v23 + 4);
    if ( v16 )
    {
LABEL_15:
      v19 += v16;
      goto LABEL_16;
    }
LABEL_22:
    v18 += v22;
LABEL_16:
    v13 += v20;
    LODWORD(v12) = v18 + v12;
    if ( v19 )
    {
      v7 += v19;
      LODWORD(v12) = v18;
    }
    ++v14;
  }
  while ( v14 != (_QWORD *)v15 );
  v3 = v26;
  result = v27;
  v4 = v28;
LABEL_24:
  v24 = (_DWORD *)v4[result];
  if ( ((unsigned __int8)v24 & 1) != 0 )
  {
    v8 = BYTE4(v24);
    v25 = BYTE6(v24);
    result = (v4[result] >> 40) & 0xF;
  }
  else
  {
    v25 = v24[1];
    result = (unsigned int)v24[2];
    v8 = v24[3];
  }
  v6 = v25 + v13;
  if ( (_DWORD)result )
  {
    v7 += result;
    goto LABEL_28;
  }
  v3[2] = v6;
  v3[3] = v7;
  v3[4] = v12 + v8;
  return result;
}
