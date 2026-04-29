__int64 __fastcall sub_2A3210(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall ***a5)(_QWORD, __int64))
{
  int v8; // eax
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // r8
  __int64 v27; // rdx
  int v28; // ebp
  int v29; // r12d
  __int64 v30; // rax
  char v31; // al
  __int64 v32; // r14
  int *v33; // rcx
  unsigned int v34; // ebp
  __int64 v35; // rbp
  int v36; // eax
  unsigned int v38; // ebp
  int v39; // r12d
  __int64 v40; // r14
  int *v41; // rdi
  __int64 v42; // rax
  char tinfo_property; // al
  int v44; // edx
  int v45; // edx
  __int64 v46; // [rsp+8h] [rbp-90h]
  char v47; // [rsp+8h] [rbp-90h]
  __int64 v48; // [rsp+8h] [rbp-90h]
  char *v49; // [rsp+10h] [rbp-88h]
  int *v50; // [rsp+20h] [rbp-78h] BYREF
  __int128 v51; // [rsp+28h] [rbp-70h]
  char *s1; // [rsp+40h] [rbp-58h]
  __int128 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v8 = *(_DWORD *)(a4 + 40) & 0x68;
  v54 = __readfsqword(0x28u);
  *a2 = v8;
  v10 = *(_DWORD *)(a4 + 36);
  if ( *(_DWORD *)(a4 + 32) != v10 )
    *a2 = ((*(_DWORD *)(a4 + 32) > v10) + 1) | v8;
  v11 = *(_QWORD *)(a4 + 16);
  if ( !v11 )
    return 0;
  v12 = *(_QWORD *)(a4 + 8);
  v13 = v12 + 32 * v11;
  if ( v12 != v13 )
  {
    do
    {
      v14 = v12;
      v12 += 32;
      sub_29C470(v14, a3, *(_DWORD *)(a4 + 40));
    }
    while ( v13 != v12 );
    v11 = *(_QWORD *)(a4 + 16);
    v15 = *(_QWORD *)(a4 + 8);
    v16 = 32 * v11;
    v13 = v15 + 32 * v11;
    if ( v15 != v13 )
    {
      if ( v16 >> 5 )
      {
        _BitScanReverse64(&v17, v16 >> 5);
        v46 = *(_QWORD *)(a4 + 8);
        sub_2A23A0(v15, v15 + v16, 2LL * (int)v17);
        v18 = v46;
        if ( v16 > 512 )
        {
          v19 = v46 + 512;
          sub_2A0A30(v46, v46 + 512);
          do
          {
            v20 = v19;
            v19 += 32;
            sub_2A0830(v20);
          }
          while ( v13 != v19 );
          v13 = *(_QWORD *)(a4 + 8);
          v11 = *(_QWORD *)(a4 + 16);
          goto LABEL_12;
        }
      }
      else
      {
        v48 = *(_QWORD *)(a4 + 8);
        sub_2A23A0(v15, v15 + v16, -2);
        v18 = v48;
      }
      sub_2A0A30(v18, v13);
      v13 = *(_QWORD *)(a4 + 8);
      v11 = *(_QWORD *)(a4 + 16);
    }
LABEL_12:
    if ( !v11 )
      goto LABEL_22;
  }
  v21 = 0;
  v22 = -1;
  v23 = 0;
  do
  {
    v24 = v13 + 32 * v23;
    if ( *(_DWORD *)v24 == 2 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)v25 == 3 )
      {
        if ( *(_QWORD *)(v25 + 8) )
        {
          if ( (_DWORD)v22 != -1 )
            goto LABEL_22;
          v22 = v21;
        }
      }
    }
    v23 = ++v21;
  }
  while ( v21 < v11 );
  if ( (_DWORD)v22 != -1 )
    sub_29F880(v13 + 32 * v22, *(_QWORD *)(a3 + 1504));
LABEL_22:
  v26 = *(_BYTE *)(a4 + 40);
  v51 = 0;
  v50 = nullptr;
  sub_29DAA0(a3, (__int64 *)&v50, (__int64 *)(a4 + 8), a5, (v26 & 8) == 0);
  v27 = v51;
  if ( (unsigned __int64)v51 <= 1 )
  {
    v33 = v50;
    goto LABEL_34;
  }
  v47 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  do
  {
    while ( 1 )
    {
      s1 = nullptr;
      v32 = v30;
      v53 = 0;
      if ( (*(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL * v50[v30] + 16) & 0x100) == 0 || !get_tinfo_pdata() )
        goto LABEL_24;
      if ( !(_QWORD)v53 || (v49 = s1, strcmp(s1, "LPVOID")) )
      {
        tinfo_property = get_tinfo_property();
        v44 = v29;
        v29 |= 2u;
        v45 = v44 | 1;
        if ( (unsigned __int8)((tinfo_property & 0xF) - 10) <= 2u )
          v29 = v45;
LABEL_24:
        v31 = get_tinfo_property();
        if ( (v31 & 0x3E) != 0 && ((v31 & 0xFu) <= 8 || (v31 & 0x3F) == 0x2D) )
          v47 |= !(*(_BYTE *)(*(_QWORD *)(a4 + 8) + 32LL * v50[v32] + 4) >> 7);
        if ( s1 )
        {
          *(_QWORD *)&v53 = 0;
          qfree((__int64)s1);
        }
        goto LABEL_29;
      }
      if ( v49 )
        break;
LABEL_29:
      ++v28;
      v27 = v51;
      v30 = v28;
      if ( v28 >= (unsigned __int64)v51 )
        goto LABEL_47;
    }
    *(_QWORD *)&v53 = 0;
    ++v28;
    qfree((__int64)v49);
    v27 = v51;
    v30 = v28;
  }
  while ( v28 < (unsigned __int64)v51 );
LABEL_47:
  v33 = v50;
  if ( v29 )
  {
    v38 = v27 - 1;
    if ( (int)v27 - 1 >= 0 )
    {
      v39 = v29 & 2;
      v40 = v38;
      while ( 1 )
      {
        v41 = &v33[v40];
        if ( (*(_BYTE *)(*(_QWORD *)(a4 + 8) + 32LL * v33[v40] + 16) & 0xF) != 0xA )
          goto LABEL_50;
        if ( !v39 )
        {
          s1 = nullptr;
          v42 = get_tinfo_property();
          s1 = (char *)v42;
          if ( (_BYTE)v42 && ((v42 & 0xE) != 0 || (v42 & 0x30) == 0) && (v42 & 0x3F) != 1 )
          {
            clear_tinfo_t();
            v33 = v50;
LABEL_50:
            if ( !v47 )
              goto LABEL_53;
            v41 = &v33[v40];
            if ( *(char *)(*(_QWORD *)(a4 + 8) + 32LL * v33[v40] + 4) >= 0 )
              goto LABEL_53;
            goto LABEL_52;
          }
          clear_tinfo_t();
          v41 = &v50[v40];
        }
LABEL_52:
        memmove(v41, v41 + 1, 4 * v51 - 4 - v40 * 4);
        *(_QWORD *)&v51 = v51 - 1;
        v33 = v50;
LABEL_53:
        --v38;
        --v40;
        if ( v38 == -1 )
        {
          v27 = v51;
          break;
        }
      }
    }
  }
LABEL_34:
  v34 = 0;
  if ( v27 )
  {
    v35 = 32LL * *v33;
    copy_tinfo_t();
    v36 = *(_DWORD *)(*(_QWORD *)(a4 + 8) + v35 + 4);
    if ( (v36 & 4) != 0 )
    {
      *a2 |= 4u;
      v36 = *(_DWORD *)(*(_QWORD *)(a4 + 8) + v35 + 4);
    }
    v33 = v50;
    if ( (v36 & 0x80u) != 0 )
      *a2 |= 0x80u;
    v34 = 1;
  }
  if ( v33 )
  {
    *(_QWORD *)&v51 = 0;
    qfree((__int64)v33);
  }
  return v34;
}
