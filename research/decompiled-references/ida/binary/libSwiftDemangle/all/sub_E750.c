unsigned __int64 __fastcall sub_E750(__int64 a1)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int16 v19; // di
  __int64 v20; // r15
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+8h] [rbp-40h]

  v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 || (v3 = v2 + 24, v2 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v31 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v31 < 0x20 )
      v31 = 32;
    *(_QWORD *)(a1 + 32) = v31;
    v32 = v31 + 8;
    v33 = malloc(v31 + 8);
    v34 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v33;
    *v33 = v34;
    v2 = ((unsigned __int64)v33 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v33 + v32;
    v3 = v2 + 24;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_WORD *)(v2 + 16) = 212;
  *(_BYTE *)(v2 + 18) = 0;
  v4 = *(_DWORD *)(a1 + 96);
  if ( !v4 )
    goto LABEL_7;
  v5 = (unsigned int)(v4 - 1);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v5);
  if ( *(_WORD *)(v6 + 16) != 262 )
    goto LABEL_33;
  *(_DWORD *)(a1 + 96) = v5;
  if ( !v6 )
  {
    --v4;
    while ( 1 )
    {
LABEL_33:
      if ( v4
        && (v30 = (unsigned int)(v4 - 1), v8 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v30), *(_WORD *)(v8 + 16) == 263) )
      {
        *(_DWORD *)(a1 + 96) = v30;
      }
      else
      {
LABEL_7:
        v8 = 0;
      }
      v9 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 8) = v9;
      if ( !v9 || (v10 = v9 + 24, v9 + 24 > *(_QWORD *)(a1 + 16)) )
      {
        v11 = 2LL * *(_QWORD *)(a1 + 32);
        if ( v11 < 0x20 )
          v11 = 32;
        *(_QWORD *)(a1 + 32) = v11;
        v12 = v11 + 8;
        v13 = malloc(v11 + 8);
        v14 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v13;
        *v13 = v14;
        v9 = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(a1 + 16) = (char *)v13 + v12;
        v10 = v9 + 24;
      }
      *(_QWORD *)(a1 + 8) = v10;
      *(_WORD *)(v9 + 16) = 213;
      *(_BYTE *)(v9 + 18) = 0;
      v15 = *(_DWORD *)(a1 + 96);
      if ( !v15 )
        return 0;
      v16 = *(_QWORD *)(a1 + 88);
      v17 = (unsigned int)(v15 - 1);
      v18 = *(_QWORD *)(v16 + 8 * v17);
      v19 = *(_WORD *)(v18 + 16);
      if ( v19 == 264 )
      {
        *(_DWORD *)(a1 + 96) = v17;
        if ( v9 && v18 )
          sub_C080(v9, v18, (_QWORD *)a1);
        v15 = *(_DWORD *)(a1 + 96);
        if ( !v15 )
          return 0;
        v16 = *(_QWORD *)(a1 + 88);
        v17 = (unsigned int)(v15 - 1);
        v18 = *(_QWORD *)(v16 + 8 * v17);
        v19 = *(_WORD *)(v18 + 16);
      }
      if ( v19 == 98 )
      {
        *(_DWORD *)(a1 + 96) = v17;
        if ( v18 )
        {
          v20 = *(_QWORD *)v18;
          v21 = *(_QWORD *)(v18 + 8);
          v22 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(a1 + 8) = v22;
          if ( !v22 || (v23 = v22 + 24, v22 + 24 > *(_QWORD *)(a1 + 16)) )
          {
            v35 = v21;
            v24 = 2LL * *(_QWORD *)(a1 + 32);
            if ( v24 < 0x20 )
              v24 = 32;
            *(_QWORD *)(a1 + 32) = v24;
            v25 = v24 + 8;
            v26 = malloc(v24 + 8);
            v27 = *(_QWORD *)(a1 + 24);
            v21 = v35;
            *(_QWORD *)(a1 + 24) = v26;
            *v26 = v27;
            v22 = ((unsigned __int64)v26 + 15) & 0xFFFFFFFFFFFFFFF8LL;
            *(_QWORD *)(a1 + 16) = (char *)v26 + v25;
            v23 = v22 + 24;
          }
          *(_QWORD *)(a1 + 8) = v23;
          *(_WORD *)(v22 + 16) = 214;
          *(_QWORD *)(v22 + 8) = v21;
          *(_BYTE *)(v22 + 18) = 1;
          *(_QWORD *)v22 = v20;
          sub_C080(v9, v22, (_QWORD *)a1);
          LODWORD(v17) = *(_DWORD *)(a1 + 96);
        }
        if ( !(_DWORD)v17 )
          return 0;
        v28 = (unsigned int)(v17 - 1);
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v28);
        if ( *(_WORD *)(v29 + 16) != 221 )
          return 0;
      }
      else
      {
        v28 = (unsigned int)(v15 - 1);
        v29 = *(_QWORD *)(v16 + 8 * v28);
        if ( *(_WORD *)(v29 + 16) != 221 )
          return 0;
      }
      *(_DWORD *)(a1 + 96) = v28;
      if ( !v29 )
        return 0;
      sub_C080(v9, v29, (_QWORD *)a1);
      sub_C080(v2, v9, (_QWORD *)a1);
      if ( v8 )
        break;
      v4 = *(_DWORD *)(a1 + 96);
    }
    sub_C3A0(v2, 0);
  }
  return sub_CD20((_QWORD *)a1, 221, v2);
}

