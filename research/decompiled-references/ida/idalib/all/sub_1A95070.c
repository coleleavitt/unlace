void __fastcall sub_1A95070(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 *v8; // rax
  __int64 v9; // r10
  unsigned __int64 *v10; // r11
  __int16 v11; // r12
  unsigned __int64 v12; // r10
  unsigned __int64 *v13; // rbp
  int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-E8h]
  __int64 v34; // [rsp+0h] [rbp-E8h]
  __int64 v35; // [rsp+8h] [rbp-E0h]
  __int64 v36; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v38[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = *(unsigned __int64 **)a8;
  if ( *(_BYTE *)(a8 + 20) )
    v9 = *(unsigned int *)(a8 + 12);
  else
    v9 = *(unsigned int *)(a8 + 8);
  v10 = &v8[v9];
  v11 = *(_WORD *)(a7 + 72) & 0x4000;
  if ( v10 != v8 )
  {
    v12 = *v8;
    if ( *v8 < 0xFFFFFFFFFFFFFFFELL )
    {
LABEL_21:
      while ( a3 != *(_QWORD *)(v12 + 40)
           || ((((unsigned __int8)BYTE2(*(_QWORD *)(v12 + 56)) >> 1) ^ 1) & 1) != (v11 != 0) )
      {
        if ( v8 + 1 == v10 )
          goto LABEL_8;
        v12 = v8[1];
        if ( v12 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v25 = v8 + 2;
          while ( 1 )
          {
            v8 = v25;
            if ( v25 == v10 )
              goto LABEL_8;
            v12 = *v25++;
            if ( v12 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_21;
          }
        }
        ++v8;
      }
      if ( v10 == v8 )
        goto LABEL_8;
      return;
    }
    v13 = v8 + 1;
    while ( 1 )
    {
      v8 = v13;
      if ( v10 == v13 )
        break;
      v12 = *v13++;
      if ( v12 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_21;
    }
  }
LABEL_8:
  if ( a2 )
  {
    if ( sub_BAD910(a2, a3, v11 == 0, 0, 1, a6) )
      return;
    v11 = *(_WORD *)(a7 + 72) & 0x4000;
  }
  v17 = v11 == 0 ? 0x150 : 0;
  if ( (*(_BYTE *)(a5 + 28) & 0x7F) == 0x17 )
    v18 = v17 + 7022;
  else
    v18 = v17 + 7021;
  sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), v18, 0);
  v36 = *(_QWORD *)(a7 + 40);
  v19 = sub_15894B0((__int64)v38, &v36);
  if ( *(_BYTE *)(v19 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v19 + 32), a3, 9u);
  }
  else if ( *(_BYTE *)(v19 + 132) )
  {
    v33 = v19;
    v26 = sub_168B9E0((_QWORD *)v19);
    v29 = v33;
    v30 = v26;
    v31 = *(_QWORD *)(v33 + 16);
    if ( v31 )
    {
      v35 = v30;
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
      v30 = v35;
      v29 = v33;
    }
    v34 = v29;
    v37 = v31;
    v32 = sub_1587BC0(v30, &v37, v29, v30, v27, v28);
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * *(unsigned int *)(v34 + 128) + 8), a3, 9u);
  }
  sub_15F7200(v38);
  sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), *(_DWORD *)(a7 + 24), 0x189Au, 0);
  sub_15F7200(v38);
  v23 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v23 + 2) & 8) != 0
    && byte_265AEBC[*(unsigned int *)(v23 + 368)]
    && (*(_BYTE *)(a5 + 28) & 0x7F) == 0x14 )
  {
    v24 = sub_BABCD0(a5, a1 + 8, (__int64)byte_265AEBC, v20, v21, v22);
    if ( v24 )
    {
      sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), *(_DWORD *)(v24 + 24), 0x18E6u, 0);
      sub_15F7200(v38);
    }
  }
}
