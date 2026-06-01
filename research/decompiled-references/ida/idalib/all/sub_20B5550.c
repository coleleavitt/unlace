void __fastcall sub_20B5550(__int64 a1, _QWORD *a2)
{
  char *v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  bool v14; // zf
  __int64 v15; // r9
  __int64 *v16; // rax
  __int64 v17; // rsi
  __int64 *v18; // rbx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // esi
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  int v26; // eax
  int v27; // r9d
  _QWORD *v28; // r8
  _QWORD *v29; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v30; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v31; // [rsp+18h] [rbp-30h] BYREF

  v3 = (char *)(a1 + 24);
  v29 = a2;
  v4 = (__int64 *)sub_20CB0D0(a1);
  v5 = sub_20B54D0(v4, a2);
  v6 = *v4;
  v7 = *(_QWORD **)(a1 + 24);
  v29 = (_QWORD *)v5;
  v8 = *(_DWORD *)(v6 + 536);
  v9 = *(_QWORD *)(v6 + 520);
  if ( v8 )
  {
    v10 = v8 - 1;
    v11 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v12 = (_QWORD *)(v9 + 16LL * v11);
    v13 = (_QWORD *)*v12;
    if ( v7 == (_QWORD *)*v12 )
    {
LABEL_3:
      *v12 = -8192;
      v7 = *(_QWORD **)(a1 + 24);
      --*(_DWORD *)(v6 + 528);
      ++*(_DWORD *)(v6 + 532);
      goto LABEL_4;
    }
    v26 = 1;
    if ( v13 != (_QWORD *)-4096LL )
    {
      do
      {
        v27 = v26 + 1;
        v11 = v10 & (v26 + v11);
        v12 = (_QWORD *)(v9 + 16LL * v11);
        v28 = (_QWORD *)*v12;
        if ( v7 == (_QWORD *)*v12 )
          goto LABEL_3;
        v26 = v27;
      }
      while ( v28 != (_QWORD *)-4096LL );
    }
  }
LABEL_4:
  if ( v7 )
    sub_20A0850((__int64)v3, v7);
  *(_QWORD *)(a1 + 24) = 0;
  v14 = (unsigned __int8)sub_20A1190((__int64 *)(v6 + 520), (__int64 *)&v29, &v30) == 0;
  v16 = v30;
  if ( v14 )
  {
    v19 = *(_DWORD *)(v6 + 528);
    v31 = v30;
    v20 = (unsigned int)(v19 + 1);
    v21 = *(unsigned int *)(v6 + 536);
    v22 = (unsigned int)(4 * v20);
    v23 = 2 * v21;
    if ( (unsigned int)v22 < 3 * (int)v21 )
    {
      if ( (int)v21 - *(_DWORD *)(v6 + 532) - (int)v20 > (unsigned int)v21 >> 3 )
      {
LABEL_11:
        v14 = *v16 == -4096;
        *(_DWORD *)(v6 + 528) = v20;
        if ( !v14 )
          --*(_DWORD *)(v6 + 532);
        v24 = (__int64)v29;
        v16[1] = 0;
        v18 = v16 + 1;
        *v16 = v24;
        goto LABEL_14;
      }
      v23 = *(_DWORD *)(v6 + 536);
    }
    sub_20AF820(v6 + 520, v23, v20, v21, v22, v15);
    sub_20A1190((__int64 *)(v6 + 520), (__int64 *)&v29, &v31);
    LODWORD(v20) = *(_DWORD *)(v6 + 528) + 1;
    v16 = v31;
    goto LABEL_11;
  }
  v17 = v30[1];
  v18 = v30 + 1;
  if ( v17 )
  {
    sub_20CDD90(a1, v17);
    sub_20A0920(a1);
    operator delete((void *)a1, 0x20u);
    return;
  }
LABEL_14:
  v25 = v29;
  *(_QWORD *)(a1 + 24) = v29;
  if ( v25 )
    sub_20B2EE0((__int64)v3, v25, a1 & 0xFFFFFFFFFFFFFFFCLL);
  *v18 = a1;
}
