unsigned __int64 __fastcall sub_1C16E00(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int16 v4; // ax
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // r10
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // ecx
  __int64 v25; // r10
  char v26; // [rsp+Fh] [rbp-49h] BYREF
  __int64 (__fastcall *v27)(__int64, __int64); // [rsp+10h] [rbp-48h] BYREF
  char *v28; // [rsp+18h] [rbp-40h]
  __int64 v29; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v31)(__int64, __int64); // [rsp+30h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_WORD *)v3 & 0x1FF;
  if ( v4 == 4 )
  {
    v5 = *a1;
    v6 = *(_QWORD *)(v3 + 16);
    v28 = &v26;
    v29 = v5;
    v27 = sub_1C15410;
    v30 = 0;
    v31 = &v27;
    v7 = sub_1C15630((__int64)&v29, v6);
    v8 = *a1;
    v9 = *(_DWORD *)(*a1 + 1952);
    v10 = *(unsigned int *)(*a1 + 1956);
    if ( __PAIR64__(v10, v9) == __PAIR64__(*(_DWORD *)(v8 + 1948), *(_DWORD *)(*a1 + 1944)) )
    {
      v10 = 0;
      v9 = 0;
    }
    return sub_C09D40(
             *(_QWORD **)(v8 + 248),
             v7,
             *(_BYTE *)(v3 + 2) >> 3,
             *(_QWORD *)(v3 + 8),
             (*(_BYTE *)(v3 + 1) >> 1) & 3,
             (*(_BYTE *)(v3 + 1) >> 3) & 7,
             *(_DWORD *)(v3 + 4),
             BYTE3(*(_QWORD *)v3) & 1,
             (v10 << 32) | v9);
  }
  if ( v4 == 119 )
  {
    v12 = *a1;
    v13 = *(_QWORD *)(v3 + 16);
    v27 = sub_1C15410;
    v29 = v12;
    v28 = &v26;
    v30 = 0;
    v31 = &v27;
    v14 = sub_1C15630((__int64)&v29, v13);
    v15 = *a1;
    v16 = *(_DWORD *)(*a1 + 1952);
    v17 = *(unsigned int *)(*a1 + 1956);
    if ( __PAIR64__(*(_DWORD *)(v15 + 1948), *(_DWORD *)(*a1 + 1944)) == __PAIR64__(v17, v16) )
    {
      v17 = 0;
      v16 = 0;
    }
    return sub_C0BCA0(
             *(_QWORD **)(v15 + 248),
             v14,
             *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL),
             (*(_WORD *)(v3 + 2) >> 3) & 0x3F,
             *(_QWORD *)(v3 + 8),
             (*(_BYTE *)(v3 + 1) >> 1) & 3,
             (*(_BYTE *)(v3 + 1) >> 3) & 7,
             *(_DWORD *)(v3 + 4),
             (v17 << 32) | v16,
             *(_QWORD *)(v3 + 32),
             *(_QWORD *)(v3 + 40));
  }
  else
  {
    if ( ((v4 + 394) & 0x1FFu) <= 1 )
    {
      v20 = *a1;
      v21 = *(_QWORD *)(v3 + 16);
      v27 = sub_1C15410;
      v29 = v20;
      v28 = &v26;
      v30 = 0;
      v31 = &v27;
      v22 = sub_1C15630((__int64)&v29, v21);
      v23 = *a1;
      v24 = *(_DWORD *)(*a1 + 1952);
      v25 = *(unsigned int *)(*a1 + 1956);
      if ( __PAIR64__(*(_DWORD *)(v23 + 1948), *(_DWORD *)(*a1 + 1944)) == __PAIR64__(v25, v24) )
      {
        v25 = 0;
        v24 = 0;
      }
      return sub_C09F10(
               *(_QWORD **)(v23 + 248),
               v22,
               *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL),
               (*(_WORD *)(v3 + 2) >> 3) & 0x3F,
               *(_QWORD *)(v3 + 8),
               (*(_BYTE *)(v3 + 1) >> 1) & 3,
               (*(_BYTE *)(v3 + 1) >> 3) & 7,
               *(_DWORD *)(v3 + 4),
               (v25 << 32) | v24);
    }
    if ( ((v4 + 423) & 0x1FFu) <= 4 )
      return v3;
    v18 = *a1;
    v19 = *(_QWORD *)(a2 + 16);
    v28 = &v26;
    v29 = v18;
    v27 = sub_1C15410;
    v30 = 0;
    v31 = &v27;
    return sub_1C15630((__int64)&v29, v19);
  }
}
