__int64 __fastcall sub_634B0(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  char *v15; // r13
  _DWORD *v16; // rdx
  __int64 v17; // rax
  size_t v18; // rbx
  int v19; // edx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  unsigned __int64 v24; // r12
  char *v25; // r11
  size_t v26; // r13
  char *v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r15
  size_t v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  char *v35; // r13
  char *v36; // rax
  _DWORD *v37; // r8
  char *v38; // r11
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  int v42; // eax
  int v44; // [rsp+14h] [rbp-A4h]
  unsigned __int64 v45; // [rsp+18h] [rbp-A0h]
  _DWORD *v46; // [rsp+18h] [rbp-A0h]
  _DWORD *v47; // [rsp+18h] [rbp-A0h]
  char *v48; // [rsp+30h] [rbp-88h]
  char *v49; // [rsp+30h] [rbp-88h]
  __int64 v50; // [rsp+38h] [rbp-80h]
  unsigned __int64 v51; // [rsp+40h] [rbp-78h]
  unsigned __int64 v54; // [rsp+58h] [rbp-60h]
  _DWORD v55[2]; // [rsp+6Ch] [rbp-4Ch] BYREF
  _DWORD n[17]; // [rsp+74h] [rbp-44h]

  *(_QWORD *)&n[1] = __readfsqword(0x28u);
  if ( a8 )
  {
    a6 = sub_7CF20(a8);
    a7 = sub_7CF30(a8, a2, v10, v11, v12, v13);
  }
  v14 = *(_DWORD *)(a1 + 30104);
  v15 = a2;
  v44 = 0;
  while ( 2 )
  {
    v16 = (_DWORD *)a4;
    if ( v14 )
    {
      if ( a5 )
      {
        v17 = a8;
        if ( a8 )
          goto LABEL_7;
LABEL_45:
        v18 = ZSTD_decompressBegin_usingDict(a1, a6, a7);
        if ( v18 > 0xFFFFFFFFFFFFFF88LL )
          return v18;
        goto LABEL_8;
      }
      return v15 - a2;
    }
    while ( 1 )
    {
      if ( a5 <= 4 )
      {
        if ( !a5 )
          return v15 - a2;
        return -72;
      }
      if ( (*v16 & 0xFFFFFFF0) != 0x184D2A50 )
        break;
      if ( a5 <= 7 )
        return -72;
      v39 = (unsigned int)v16[1];
      if ( (unsigned int)v39 > 0xFFFFFFF7 )
        return -14;
      v40 = v39 + 8;
      if ( v40 > a5 )
        return -72;
      v16 = (_DWORD *)((char *)v16 + v40);
      a5 -= v40;
    }
    v17 = a8;
    a4 = (__int64)v16;
    if ( !a8 )
      goto LABEL_45;
LABEL_7:
    v18 = ZSTD_decompressBegin_usingDDict(a1, v17, v16);
    if ( v18 > 0xFFFFFFFFFFFFFF88LL )
      return v18;
LABEL_8:
    sub_6EE50(a1, v15, a3);
    v19 = *(_DWORD *)(a1 + 30104);
    if ( !v19 )
    {
      v20 = 5;
      if ( a5 > 8 )
        goto LABEL_10;
LABEL_53:
      v18 = -72;
      goto LABEL_48;
    }
    v20 = 1;
    if ( a5 <= 4 )
      goto LABEL_53;
LABEL_10:
    v21 = sub_617E0(a4, v20, v19);
    v18 = v21;
    if ( v21 > 0xFFFFFFFFFFFFFF88LL )
    {
LABEL_48:
      if ( (unsigned int)ZSTD_getErrorCode(v18) != 10 )
        return v18;
LABEL_49:
      if ( v44 != 1 )
        goto LABEL_50;
      return -72;
    }
    if ( v21 + 3 > a5 )
      goto LABEL_53;
    v22 = sub_623B0(a1, a4, v21);
    if ( v22 > 0xFFFFFFFFFFFFFF88LL )
    {
      v18 = v22;
      goto LABEL_48;
    }
    v23 = *(_DWORD *)(a1 + 30232);
    v24 = a5 - v18;
    if ( v23 )
    {
      if ( *(_DWORD *)(a1 + 29944) <= v23 )
        v23 = *(_DWORD *)(a1 + 29944);
      *(_DWORD *)(a1 + 29944) = v23;
    }
    v50 = a3;
    v25 = v15;
    v45 = (unsigned __int64)&v15[a3];
    v48 = v15;
    v26 = a4 + v18;
    v51 = a5;
    v27 = v25;
    while ( 2 )
    {
      v28 = sub_6C4D0(v26, v24, v55);
      v18 = v28;
      if ( v28 > 0xFFFFFFFFFFFFFF88LL )
      {
        v15 = v48;
        a3 = v50;
        a5 = v51;
        goto LABEL_48;
      }
      v29 = v24 - 3;
      v30 = v26 + 3;
      if ( v28 > v29 )
      {
        v15 = v48;
        a3 = v50;
        v18 = -72;
        a5 = v51;
        goto LABEL_48;
      }
      if ( v30 < (unsigned __int64)v27 || (v31 = v26 + 3, v45 <= v30) )
      {
        v32 = v55[0];
        v31 = v45;
        if ( v55[0] == 1 )
          goto LABEL_56;
LABEL_23:
        if ( v32 )
        {
          if ( v32 != 2 )
          {
            v15 = v48;
            a3 = v50;
            v18 = -20;
            a5 = v51;
            goto LABEL_48;
          }
          v33 = sub_6EE20(a1, v27, v31 - (_QWORD)v27, v26 + 3, v18, 0);
          v34 = v33;
          if ( v33 > 0xFFFFFFFFFFFFFF88LL )
          {
            v15 = v48;
            a3 = v50;
            v18 = v33;
            a5 = v51;
            goto LABEL_48;
          }
        }
        else
        {
          if ( v18 > v45 - (unsigned __int64)v27 )
          {
LABEL_64:
            v15 = v48;
            a3 = v50;
            v18 = -70;
            a5 = v51;
            goto LABEL_48;
          }
          if ( !v27 )
          {
            if ( v18 )
              goto LABEL_69;
            goto LABEL_66;
          }
          memmove(v27, (const void *)(v26 + 3), v18);
          v34 = v18;
        }
        v35 = &v27[v34];
        if ( *(_DWORD *)(a1 + 30112) )
          goto LABEL_59;
        goto LABEL_27;
      }
      v32 = v55[0];
      if ( v55[0] != 1 )
        goto LABEL_23;
LABEL_56:
      if ( n[0] > v31 - (unsigned __int64)v27 )
        goto LABEL_64;
      if ( v27 )
      {
        v54 = n[0];
        memset(v27, *(unsigned __int8 *)(v26 + 3), n[0]);
        v34 = v54;
        v35 = &v27[v54];
        if ( *(_DWORD *)(a1 + 30112) )
          goto LABEL_59;
        goto LABEL_27;
      }
      if ( n[0] )
      {
LABEL_69:
        v15 = v48;
        a3 = v50;
        v18 = -74;
        a5 = v51;
        goto LABEL_48;
      }
LABEL_66:
      if ( *(_DWORD *)(a1 + 30112) )
      {
        v35 = nullptr;
        v34 = 0;
LABEL_59:
        sub_71DA0(a1 + 30008, v27, v34);
LABEL_27:
        v27 = v35;
      }
      v26 = v30 + v18;
      v24 = v29 - v18;
      if ( !v55[1] )
        continue;
      break;
    }
    v36 = *(char **)(a1 + 29928);
    v37 = (_DWORD *)(v30 + v18);
    v38 = v27;
    v15 = v48;
    a3 = v50;
    a5 = v51;
    if ( v36 != (char *)-1LL && v36 != (char *)(v38 - v48) )
    {
      v18 = -20;
      goto LABEL_48;
    }
    if ( *(_DWORD *)(a1 + 29960) )
    {
      if ( v24 <= 3
        || !*(_DWORD *)(a1 + 30108)
        && (v49 = v38, v47 = v37, v42 = sub_71FB0(a1 + 30008), v37 = v47, v38 = v49, *v47 != v42) )
      {
        v18 = -22;
        goto LABEL_48;
      }
      ++v37;
      a5 = v24 - 4;
    }
    else
    {
      a5 = v24;
    }
    v18 = v38 - v15;
    if ( *(_QWORD *)((char *)&loc_176E0 + a1) && &ZSTD_trace_decompress_end )
    {
      v46 = v37;
      sub_61A00(a1, v38 - v15, (__int64)v37 - a4, 0);
      v37 = v46;
    }
    a4 = (__int64)v37;
    if ( (unsigned int)ZSTD_getErrorCode(v18) == 10 )
      goto LABEL_49;
LABEL_50:
    if ( v18 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v15 += v18;
      a3 -= v18;
      v14 = *(_DWORD *)(a1 + 30104);
      v44 = 1;
      continue;
    }
    return v18;
  }
}

