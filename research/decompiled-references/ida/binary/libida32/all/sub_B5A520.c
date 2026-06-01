__int64 __fastcall sub_B5A520(__int64 a1, __int64 a2, const void *a3, unsigned __int64 a4)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  void *v27; // rcx
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  int v31; // [rsp+8h] [rbp-50h]
  __int64 *v32[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a1 + 17504);
  v8 = sub_2220DF0("$Globals", 8);
  v9 = (unsigned int)sub_2220F70(v7, "$Globals", 8, v8);
  v11 = (__int64 *)(*(_QWORD *)v7 + 8 * v9);
  if ( !*v11 )
  {
LABEL_8:
    v17 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(v7 + 104) += 25LL;
    v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v7 + 32) >= v18 + 25 && v17 )
    {
      *(_QWORD *)(v7 + 24) = v18 + 25;
    }
    else
    {
      v31 = v9;
      v18 = sub_962430(v7 + 24, 25, 25, 3, v9, v10);
      LODWORD(v9) = v31;
    }
    strcpy((char *)(v18 + 16), "$Globals");
    *(_QWORD *)v18 = 8;
    *(_QWORD *)(v18 + 8) = 0;
    *v11 = v18;
    ++*(_DWORD *)(v7 + 12);
    v19 = sub_2221390(v7, (unsigned int)v9);
    sub_965750(v32, (__int64 *)(*(_QWORD *)v7 + 8LL * v19), 0);
    v12 = *v32[0];
    v13 = *(_QWORD **)(*v32[0] + 8);
    if ( v13 )
      goto LABEL_12;
    goto LABEL_4;
  }
  if ( *v11 == -8 )
  {
    --*(_DWORD *)(v7 + 16);
    goto LABEL_8;
  }
  sub_965750(v32, v11, 0);
  v12 = *v32[0];
  v13 = *(_QWORD **)(*v32[0] + 8);
  if ( v13 )
    goto LABEL_12;
LABEL_4:
  v14 = *(_QWORD *)(v7 + 120);
  if ( !v14
    || (v29 = v12,
        v15 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v14 + 16LL))(v14, "$Globals", 8),
        v12 = v29,
        v13 = (_QWORD *)v15,
        (*(_QWORD *)(v29 + 8) = v15) == 0) )
  {
    v30 = v12;
    v13 = (_QWORD *)sub_B57ED0((__int64 *)(v7 + 24), 24, 3u);
    v16 = *v13 & 0xFFFFF80000000000LL;
    v13[1] = 0;
    *v13 = v16 | 0x1FFFC05;
    *(_QWORD *)(v30 + 8) = v13;
    v13[2] = v30;
  }
LABEL_12:
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 5;
  v20 = sub_B6C590(120, a1, a2, 0);
  sub_B4E870(v20, 0x19u, a2, 0);
  *(_QWORD *)(v20 + 40) = v13;
  *(_QWORD *)v20 = &off_2B206B0;
  sub_B6A340(v20 + 48, 25);
  *(_BYTE *)(v20 + 29) |= 2u;
  *(_QWORD *)(v20 + 80) = 0;
  *(_DWORD *)(v20 + 88) = 0;
  *(_QWORD *)(v20 + 112) = 0;
  *(_QWORD *)v20 = &off_2B20598;
  *(_WORD *)(v20 + 92) = 1;
  *(_OWORD *)(v20 + 96) = 0;
  v21 = (_QWORD *)sub_B685F0(v20);
  v24 = -1;
  v25 = v21[294];
  if ( a4 <= 0xFFFFFFFFFFFFFFFLL )
    v24 = 8 * a4;
  v21[304] += v24;
  v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v21[295] >= v24 + v26 && v25 )
  {
    v21[294] = v24 + v26;
    v27 = (void *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v27 = (void *)sub_962430((__int64)(v21 + 294), v24, v24, 3, v22, v23);
  }
  if ( 8 * a4 )
    v27 = memmove(v27, a3, 8 * a4);
  *(_QWORD *)(v20 + 104) = v27;
  *(_QWORD *)(v20 + 112) = a4;
  return v20;
}

