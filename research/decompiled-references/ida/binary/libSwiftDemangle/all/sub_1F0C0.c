__int64 __fastcall sub_1F0C0(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rdx
  int v4; // ecx
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  _QWORD *v22; // rbp
  __int64 v23; // rdx
  char *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rax
  int v28; // r14d
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    return 0;
  v3 = *(unsigned __int8 **)(a1 + 24);
  v4 = *v3;
  switch ( (_BYTE)v4 )
  {
    case 'E':
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      v5 = sub_C400(*(_QWORD **)(a1 + 40), 68);
      v10 = sub_1C580((_QWORD *)a1);
      if ( v10 )
      {
        v11 = sub_1F0C0(a1, (unsigned int)(a2 + 1), v6, v7, v8, v9);
        if ( v11 )
        {
          v12 = *(_QWORD **)(a1 + 40);
          v13 = v10;
LABEL_6:
          sub_C080(v5, v13, v12);
          sub_C080(v5, v11, *(_QWORD **)(a1 + 40));
          return v5;
        }
      }
      return 0;
    case 'e':
      *(_QWORD *)(a1 + 24) = v3 + 1;
      v15 = a2 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      v5 = sub_C400(*(_QWORD **)(a1 + 40), 68);
      v16 = sub_1C580((_QWORD *)a1);
      if ( v16 )
      {
        v11 = sub_1E7C0((_QWORD *)a1, v15, 0);
        if ( v11 )
        {
          v21 = sub_1F0C0(a1, v15, v17, v18, v19, v20);
          if ( v21 )
          {
            sub_C080(v5, v16, *(_QWORD **)(a1 + 40));
            v12 = *(_QWORD **)(a1 + 40);
            v13 = v21;
            goto LABEL_6;
          }
        }
      }
      return 0;
    case 'S':
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      return sub_1BFA0((_QWORD *)a1);
    case 's':
      v22 = *(_QWORD **)(a1 + 40);
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      v23 = v22[1];
      if ( !v23 || (v24 = (char *)(v23 + 5), (unsigned __int64)(v23 + 5) > v22[2]) )
      {
        v25 = 2LL * v22[4];
        if ( v25 < 6 )
          v25 = 6;
        v22[4] = v25;
        v26 = v25 + 8;
        v27 = malloc(v25 + 8);
        *v27 = v22[3];
        v23 = (__int64)(v27 + 1);
        v22[2] = (char *)v27 + v26;
        v22[3] = v27;
        v24 = (char *)v27 + 13;
      }
      v22[1] = v24;
      *(_DWORD *)v23 = 1718187859;
      *(_BYTE *)(v23 + 4) = 116;
      return sub_C510(v22, 143, v23, 5);
    case 'G':
      v28 = a2 + 2;
      *(_QWORD *)(a1 + 24) = v3 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      v29 = sub_1FBC0(a1);
      if ( !v29 )
        return 0;
      return sub_1E130(a1, v29, v28);
    default:
      if ( (unsigned __int8)(v4 - 70) <= 0x30u )
      {
        v30 = 0x1200000100409LL;
        if ( _bittest64(&v30, (unsigned int)(v4 - 70)) )
          return sub_1FE20(a1);
      }
      v31 = (unsigned int)(v4 - 67);
      if ( (unsigned __int8)v31 <= 0x13u && (v32 = 528385, _bittest64(&v32, v31)) )
        return sub_1FE20(a1);
      else
        return sub_1C580((_QWORD *)a1);
  }
}

