char __fastcall sub_1FBF490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r12

  sub_1FBEE10((__int64 *)a1, a2, a3, a4, a5, a6);
  v12 = *(_QWORD *)(a2 + 128);
  v13 = (__int64 *)(a1 + 8);
  v14 = nullptr;
  if ( v12 )
  {
    v8 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v12 & 4) != 0 )
      v14 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
  }
  sub_1F9A760(v13, v14, v8, v9, v10, v11);
  v17 = *(_QWORD *)(a2 + 128);
  if ( v17 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = (v17 >> 2) & 1;
    if ( ((v17 >> 2) & 1) != 0 )
    {
      if ( v18 )
        goto LABEL_9;
      v17 = 0;
    }
    else
    {
      v17 &= 0xFFFFFFFFFFFFFFF0LL;
      if ( !v18 )
        v17 = v19;
    }
  }
  sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), v17, *(_QWORD **)(a1 + 24), v15, v16);
LABEL_9:
  sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 136), *(_QWORD **)(a1 + 24), v15, v16);
  sub_9B9C90(
    *(_QWORD *)(a1 + 24),
    ((unsigned __int8)(*(_QWORD *)(a2 + 72) >> 31) << 8)
  | (unsigned __int8)(*(_WORD *)(a2 + 74) >> 7)
  | (((*(_QWORD *)(a2 + 72) >> 40) & 1) << 17)
  | ((unsigned __int8)BYTE4(*(_QWORD *)(a2 + 72)) >> 7 << 16)
  | ((unsigned __int8)((*(_QWORD *)(a2 + 72) & 0x20000000000LL) != 0) << 18));
  v20 = sub_B78840(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v20);
  v21 = *(_QWORD *)(a2 + 144);
  v22 = *(_QWORD *)(a1 + 24);
  if ( v21 )
  {
    sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)v21 & 0xFFFFFFFFFFFFFFF8LL, v22);
    sub_9B9C90(*(_QWORD *)(a1 + 24), ((*(__int64 *)v21 >> 1) & 3) + 1);
    sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v21 + 8), *(_QWORD *)(a1 + 24));
  }
  else
  {
    sub_1F92A90(*(_QWORD *)(a1 + 16), 0, v22);
  }
  v26 = *(_QWORD *)(a2 + 16);
  if ( (v26 & 4) == 0
    || (v27 = v26 & 0xFFFFFFFFFFFFFFF8LL, v23 = *(_QWORD *)v27, *(_QWORD *)(v27 + 8) == *(_QWORD *)v27) )
  {
    LOBYTE(v27) = *(_BYTE *)(a2 + 29);
    if ( (v27 & 1) == 0 && *(char *)(a2 + 28) >= 0 && (v27 & 2) == 0 )
    {
      v28 = *(_QWORD *)(a2 + 120);
      LOBYTE(v27) = v28 & 0xF8;
      if ( !(v28 & 0xFFFFFFFFFFFFFFF8LL | (v28 >> 2) & 1) )
      {
        v29 = *(_QWORD *)(a2 + 104);
        v27 = (unsigned __int64)sub_7052B0((__int64 *)(v29 + 96), v29, 0, v23, v24, v25);
        if ( v29 == v27 && (*(_BYTE *)(a2 + 29) & 0x10) == 0 )
        {
          LODWORD(v27) = (*(_BYTE *)(a2 + 28) & 0x7F) - 59;
          if ( (unsigned int)v27 > 2 )
          {
            v27 = *(_QWORD *)(a2 + 128);
            if ( (!v27 || (v27 & 4) == 0 || (v27 & 0xFFFFFFFFFFFFFFF8LL) == 0) && !*(_QWORD *)(a2 + 144) )
            {
              LOBYTE(v27) = sub_1EA74C0(a2);
              if ( !(_BYTE)v27 && (*(_BYTE *)(a2 + 40) & 7) == 0 )
              {
                LODWORD(v27) = *(_DWORD *)(*(_QWORD *)a1 + 3500LL);
                *(_DWORD *)(a1 + 228) = v27;
              }
            }
          }
        }
      }
    }
    *(_DWORD *)(a1 + 224) = 53;
  }
  else
  {
    *(_DWORD *)(a1 + 224) = 53;
  }
  return v27;
}
