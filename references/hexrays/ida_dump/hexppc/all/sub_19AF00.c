__int64 __fastcall sub_19AF00(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // r15
  __m128i *v6; // rax
  bool v7; // zf
  int v8; // r12d
  unsigned __int64 i; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  _DWORD *v18; // r10
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v26; // r10
  __int64 v27; // rdx
  _DWORD *v28; // r10
  __int64 v29; // rsi
  __int64 v30; // rax
  const char *v31; // rdi
  int v32; // eax
  int v33; // eax
  const char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rbx
  __int64 v39; // rax
  _DWORD *v40; // [rsp+0h] [rbp-A0h]
  _DWORD *v41; // [rsp+8h] [rbp-98h]
  char v42; // [rsp+13h] [rbp-8Dh]
  int v43; // [rsp+14h] [rbp-8Ch]
  __int64 v44; // [rsp+18h] [rbp-88h]
  _DWORD *v45; // [rsp+18h] [rbp-88h]
  int v46; // [rsp+18h] [rbp-88h]
  _DWORD *v47; // [rsp+20h] [rbp-80h]
  _DWORD *v48; // [rsp+20h] [rbp-80h]
  _DWORD *v49; // [rsp+20h] [rbp-80h]
  _QWORD *v50; // [rsp+20h] [rbp-80h]
  __int64 v51; // [rsp+20h] [rbp-80h]
  __int64 v52; // [rsp+28h] [rbp-78h]
  __int64 v53; // [rsp+28h] [rbp-78h]
  int v54; // [rsp+28h] [rbp-78h]
  __int64 v55; // [rsp+28h] [rbp-78h]
  __int64 v56; // [rsp+30h] [rbp-70h]
  __int64 v57; // [rsp+38h] [rbp-68h]
  unsigned __int8 v58; // [rsp+40h] [rbp-60h]
  _DWORD *v59; // [rsp+40h] [rbp-60h]
  __int64 v60; // [rsp+40h] [rbp-60h]
  __int64 v61; // [rsp+40h] [rbp-60h]
  __int64 v62; // [rsp+48h] [rbp-58h]
  const char *v63; // [rsp+50h] [rbp-50h] BYREF
  __int128 v64; // [rsp+58h] [rbp-48h]
  unsigned __int64 v65; // [rsp+68h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 16);
  v65 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 280);
  v57 = *(_QWORD *)(v5 + 1504);
  v6 = sub_CE760(v5);
  v7 = a2[1] == 0;
  v63 = nullptr;
  v56 = (__int64)v6;
  v64 = 0;
  if ( v7 )
    return 0;
  v58 = 0;
  v8 = 0;
  i = 0;
  do
  {
    v10 = *(_QWORD *)(*a2 + 8 * i);
    v62 = v10;
    if ( !v10 )
      goto LABEL_3;
    if ( *(_DWORD *)v10 != 4 )
      goto LABEL_3;
    if ( *(_BYTE *)(v10 + 32) != 4 )
      goto LABEL_3;
    v11 = *(_QWORD *)(v10 + 40);
    if ( *(_BYTE *)(v11 + 64) != 8 || *(_DWORD *)(*(_QWORD *)(v11 + 72) + 284LL) != 23 || *(_BYTE *)(v62 + 64) != 9 )
      goto LABEL_3;
    v12 = *(__int64 **)(v62 + 72);
    v13 = *v12;
    v14 = *((int *)v12 + 4);
    if ( *(_QWORD *)(v13 + 440) < v14 )
      sub_1919A0();
    v15 = 13 * v14;
    v16 = *(_QWORD *)(v13 + 432);
    v17 = v16 + 8 * v15;
    if ( *(_DWORD *)v17 != 1 )
      goto LABEL_3;
    v52 = v16 + 8 * v15;
    if ( (get_tinfo_property(*(_QWORD *)(v17 + 80), 2) & 0xF) == 0xB )
      goto LABEL_3;
    v18 = (_DWORD *)v52;
    v19 = *(_QWORD *)(v62 + 72);
    if ( *(_QWORD *)(v19 + 8) )
    {
      if ( *(_DWORD *)v52 == 1 )
        v53 = *(_QWORD *)(v52 + 8);
      else
        v53 = -1;
      v20 = v8 - 1;
      if ( v8 - 1 < 0 )
        goto LABEL_3;
      v21 = 8LL * v20;
      v43 = *(_DWORD *)(v19 + 16);
      while ( 1 )
      {
        v22 = *(_QWORD *)(*a2 + v21);
        v62 = v22;
        if ( !v22 )
          goto LABEL_3;
        if ( *(_DWORD *)v22 == 4 && *(_BYTE *)(v22 + 32) == 4 )
        {
          v23 = *(_QWORD *)(v22 + 40);
          if ( *(_BYTE *)(v23 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v23 + 72) + 284LL) == 23 )
          {
            v44 = v21;
            v47 = v18;
            v24 = sub_1925B0(v57, v62 + 64);
            v18 = v47;
            v21 = v44;
            if ( v24 == v53 )
              break;
          }
        }
        --v20;
        v21 -= 8;
        if ( v20 == -1 )
          goto LABEL_3;
      }
      if ( *(_DWORD *)(v62 + 68) >= v47[22] )
        goto LABEL_3;
      if ( *v47 != 1 )
        goto LABEL_64;
      v8 = v20;
    }
    else
    {
      if ( *(_DWORD *)(v62 + 68) >= *(_DWORD *)(v52 + 88) )
        goto LABEL_3;
      if ( *(_DWORD *)v52 != 1 )
      {
        if ( v8 >= 0 )
        {
LABEL_64:
          if ( !under_debugger )
            sub_37EEE0(51615);
LABEL_70:
          BUG();
        }
LABEL_3:
        i = ++v8;
        continue;
      }
      if ( v8 < 0 )
        goto LABEL_3;
      v53 = *(_QWORD *)(v52 + 8);
      v43 = *(_DWORD *)(v19 + 16);
    }
    v40 = v18 + 20;
    v48 = v18;
    ++v8;
    v42 = sub_D2D80(*(int **)(a1 + 8), v18, (_DWORD **)v18 + 10, 0xFFFFFFFFLL, *(unsigned int *)(v5 + 72));
    v26 = v48;
    for ( i = v8; (unsigned __int64)v8 < a2[1]; i = ++v8 )
    {
      v27 = *(_QWORD *)(*a2 + 8 * i);
      if ( v27 )
      {
        if ( v62 == v27 )
        {
          if ( !under_debugger )
            sub_37EEE0(51616);
          goto LABEL_70;
        }
        if ( *(_DWORD *)v27 != 4 )
          break;
        if ( *(_BYTE *)(v27 + 32) != 4 )
          break;
        v35 = *(_QWORD *)(v27 + 40);
        if ( *(_BYTE *)(v35 + 64) != 8 )
          break;
        if ( *(_DWORD *)(*(_QWORD *)(v35 + 72) + 284LL) != 23 )
          break;
        v45 = v26;
        v51 = *(_QWORD *)(*a2 + 8 * i);
        v36 = sub_1925B0(v57, v27 + 64);
        v26 = v45;
        if ( v53 >= v36 || v53 + (int)v45[22] <= v36 )
          break;
        if ( *(_BYTE *)(v51 + 64) == 9 && *(_DWORD *)(*(_QWORD *)(v51 + 72) + 16LL) == v43 )
        {
          if ( v42 )
          {
            sub_9FA40(v56, v51);
            v26 = v45;
          }
          *(_QWORD *)(*a2 + 8 * i) = 0;
        }
        else
        {
          v37 = *(_DWORD *)(v51 + 36);
          *(_BYTE *)(v51 + 32) = 9;
          v41 = v45;
          v46 = v37;
          v38 = (int)v36 - (int)v53;
          v39 = j__qalloc_or_throw(24);
          *(_QWORD *)v39 = v5;
          *(_QWORD *)(v39 + 8) = v38;
          *(_DWORD *)(v39 + 16) = v43;
          v26 = v41;
          *(_QWORD *)(v51 + 40) = v39;
          *(_DWORD *)(v51 + 36) = v46;
        }
      }
    }
    if ( !v42 )
      goto LABEL_3;
    v59 = v26;
    print_tinfo(&v63, 0, 0, 0, 0, v40, 0, 0);
    v28 = v59;
    if ( *(_BYTE *)(v62 + 64) != 9 || *(_DWORD *)(*(_QWORD *)(v62 + 72) + 16LL) != v43 )
    {
      v49 = v59;
      v60 = j__qalloc_or_throw(80);
      v29 = *(_QWORD *)(v62 + 24);
      *(_QWORD *)(v60 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v60 + 40) = 0;
      *(_QWORD *)(v60 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v60 + 56) = 0;
      *(_QWORD *)(v60 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v60 + 72) = 0;
      sub_32C520(v60, v29);
      *(_DWORD *)v60 = 4;
      sub_121740(v60 + 64, (unsigned __int8 *)(v62 + 64));
      *(_BYTE *)(v60 + 32) = 9;
      v54 = *(_DWORD *)(v60 + 68);
      v30 = j__qalloc_or_throw(24);
      *(_QWORD *)v30 = v5;
      *(_QWORD *)(v30 + 8) = 0;
      *(_DWORD *)(v30 + 16) = v43;
      *(_DWORD *)(v60 + 36) = v54;
      *(_QWORD *)(v60 + 40) = v30;
      sub_9F720(v56, (_QWORD *)v60, v62);
      v28 = v49;
    }
    v50 = v28;
    v61 = *(_QWORD *)(*(_QWORD *)(v62 + 40) + 72LL);
    v55 = *(_QWORD *)(v61 + 24);
    qfree(*(_QWORD *)(v55 + 88));
    v31 = s1;
    if ( (_QWORD)v64 )
      v31 = v63;
    *(_QWORD *)(v55 + 88) = qstrdup(v31);
    copy_tinfo_t(v61 + 72, v40);
    v32 = *((_DWORD *)v50 + 22);
    *(_DWORD *)(*(_QWORD *)(v62 + 40) + 68LL) = v32;
    *(_DWORD *)(v62 + 36) = v32;
    *(_DWORD *)(v62 + 68) = v32;
    *(_QWORD *)(*(_QWORD *)(v62 + 72) + 8LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v62 + 72) + 16LL) = v43;
    if ( (get_tinfo_property(v50[10], 2) & 0x2F) == 0xD )
    {
      *(_BYTE *)(*(_QWORD *)(v62 + 40) + 65LL) |= 2u;
      *(_BYTE *)(v62 + 33) |= 2u;
      *(_BYTE *)(v62 + 65) |= 2u;
    }
    v33 = *(_DWORD *)(v56 + 24);
    BYTE1(v33) &= ~2u;
    LOBYTE(v33) = v33 | 0x80;
    *(_DWORD *)(v56 + 24) = v33;
    v34 = (const char *)sub_1B2100(v62, v56);
    sub_9EAE0(v56, (__int64)"combine va_args: %s", v34);
    v58 = v42;
  }
  while ( i < a2[1] );
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  return v58;
}
