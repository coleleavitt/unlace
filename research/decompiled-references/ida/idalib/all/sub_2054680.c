__int64 __fastcall sub_2054680(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx
  int v4; // ebx
  __int64 v5; // rcx
  int v8; // r9d
  _QWORD *v9; // r8
  unsigned int v10; // r15d
  __int64 *v11; // r10
  _QWORD *v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int16 v17; // dx
  unsigned int v18; // eax
  _QWORD *v19; // r11
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  char v28; // al
  __int64 v29; // rcx
  int v30; // r9d
  _QWORD *v31; // r8
  __int64 v32; // r10
  char v33; // al
  __int64 v34; // rdx
  size_t v35; // rdx
  int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // [rsp+0h] [rbp-88h]
  _QWORD *v39; // [rsp+0h] [rbp-88h]
  __int64 v40; // [rsp+0h] [rbp-88h]
  __int64 *v41; // [rsp+0h] [rbp-88h]
  _QWORD *v42; // [rsp+8h] [rbp-80h]
  int v43; // [rsp+8h] [rbp-80h]
  _QWORD *v44; // [rsp+8h] [rbp-80h]
  _QWORD *v45; // [rsp+8h] [rbp-80h]
  int v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+10h] [rbp-78h]
  int v48; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+10h] [rbp-78h]
  __int64 v50; // [rsp+18h] [rbp-70h]
  __int64 *v51; // [rsp+18h] [rbp-70h]
  __int64 v52; // [rsp+18h] [rbp-70h]
  __int64 v53; // [rsp+18h] [rbp-70h]
  __int64 v54; // [rsp+20h] [rbp-68h] BYREF
  int v55; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+30h] [rbp-58h]
  char v57; // [rsp+40h] [rbp-48h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v4 = v3 - 1;
  v5 = *a1;
  v8 = 1;
  v9 = nullptr;
  v10 = v4 & *(_DWORD *)a2;
  v11 = &v54;
  while ( 1 )
  {
    v12 = (_QWORD *)(v5 + 8LL * v10);
    v13 = *v12;
    v14 = *v12;
    if ( *v12 != -4096 && v13 != -8192 )
    {
      if ( *(_QWORD *)(a2 + 8) != *(_QWORD *)(v13 + 8) )
        goto LABEL_6;
      v17 = *(_WORD *)(v13 + 2);
      if ( *(unsigned __int8 *)(a2 + 16) != v17 )
        goto LABEL_6;
      if ( *(_BYTE *)(a2 + 17) != *(_BYTE *)(v13 + 1) >> 1 )
        goto LABEL_6;
      v18 = *(_DWORD *)(v13 + 4) & 0x7FFFFFF;
      if ( *(_QWORD *)(a2 + 32) != v18 )
        goto LABEL_6;
      if ( v18 )
      {
        v19 = *(_QWORD **)(a2 + 24);
        v20 = (_QWORD *)(v13 - 32LL * v18);
        if ( *v20 != *v19 )
          goto LABEL_6;
        v21 = 8LL * (v18 - 1);
        v22 = 0;
        v23 = v21;
        while ( v22 != v23 )
        {
          v24 = v19[v22 / 8 + 1];
          v22 += 8LL;
          if ( v24 != v20[v22 / 2] )
            goto LABEL_6;
        }
        v12 = (_QWORD *)(v5 + 8LL * v10);
      }
      v25 = *(_QWORD *)(a2 + 48);
      if ( v17 == 63 )
      {
        v34 = *(unsigned int *)(v13 + 32);
        if ( v34 != v25 )
          goto LABEL_6;
        v35 = 4 * v34;
        if ( v35 )
        {
          v51 = v11;
          v47 = v5;
          v43 = v8;
          v39 = v9;
          v36 = memcmp(*(const void **)(a2 + 40), *(const void **)(v13 + 24), v35);
          v9 = v39;
          v8 = v43;
          v5 = v47;
          v11 = v51;
          if ( v36 )
            goto LABEL_6;
        }
        v26 = *(_QWORD *)(a2 + 56);
LABEL_44:
        if ( v26 )
          goto LABEL_6;
        v57 = 0;
LABEL_22:
        if ( !*(_BYTE *)(a2 + 96) )
          goto LABEL_35;
LABEL_23:
        v14 = v13;
        goto LABEL_24;
      }
      if ( v25 )
        goto LABEL_6;
      v26 = *(_QWORD *)(a2 + 56);
      if ( v17 != 34 )
        goto LABEL_44;
      if ( v26 != *(_QWORD *)(v13 + 24) )
        goto LABEL_6;
      v27 = *(_BYTE *)(v13 + 72) == 0;
      v57 = 0;
      if ( v27 )
        goto LABEL_22;
      v52 = v5;
      v48 = v8;
      v44 = v9;
      v40 = (__int64)v11;
      sub_20150B0((__int64)v11, v13 + 40);
      v27 = *(_BYTE *)(a2 + 96) == 0;
      v57 = 1;
      v32 = v40;
      v31 = v44;
      v30 = v48;
      v29 = v52;
      if ( v27 )
      {
        sub_200ED00(v40);
        v13 = *v12;
        v5 = v52;
        v8 = v48;
        v9 = v44;
        v11 = (__int64 *)v40;
        goto LABEL_23;
      }
      v37 = *(_DWORD *)(a2 + 72);
      if ( v37 == v55 )
      {
        if ( v37 <= 0x40 )
        {
          v28 = *(_QWORD *)(a2 + 64) == v54;
        }
        else
        {
          v28 = sub_2205D70(a2 + 64, v40);
          v29 = v52;
          v30 = v48;
          v31 = v44;
          v32 = v40;
        }
        if ( v28 )
        {
          if ( *(_DWORD *)(a2 + 88) <= 0x40u )
          {
            v33 = *(_QWORD *)(a2 + 80) == v56;
          }
          else
          {
            v50 = v29;
            v46 = v30;
            v42 = v31;
            v38 = v32;
            v33 = sub_2205D70(a2 + 80, v32 + 16);
            v29 = v50;
            v30 = v46;
            v31 = v42;
            v32 = v38;
          }
          if ( v33 )
          {
            sub_200ED00(v32);
LABEL_35:
            *a3 = v12;
            return 1;
          }
        }
      }
      v53 = v29;
      v49 = v30;
      v45 = v31;
      v41 = (__int64 *)v32;
      sub_200ED00(v32);
      v14 = *v12;
      v11 = v41;
      v9 = v45;
      v8 = v49;
      v5 = v53;
    }
LABEL_24:
    if ( v14 == -4096 )
      break;
    if ( !v9 && v14 == -8192 )
      v9 = v12;
LABEL_6:
    v15 = v8 + v10;
    ++v8;
    v10 = v4 & v15;
  }
  if ( !v9 )
    v9 = v12;
  *a3 = v9;
  return 0;
}
