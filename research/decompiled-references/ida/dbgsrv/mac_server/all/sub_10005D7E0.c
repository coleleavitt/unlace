/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D7E0
// Address: 0x000000010005D7E0

//----- (000000010005D7E0) ----------------------------------------------------
__int64 __fastcall sub_10005D7E0(__int64 a1, __int64 a2, off_t a3, int a4, __int64 a5)
{
  off_t v6; // r13
  unsigned int v8; // eax
  bool v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  unsigned __int64 v14; // r12
  int v15; // r14d
  __int64 v16; // rcx
  __int128 v17; // rax
  _DWORD *v18; // r12
  unsigned int v19; // r13d
  __int64 v20; // r15
  unsigned int v21; // r12d
  __int64 v22; // r14
  unsigned int v23; // r13d
  char *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  unsigned int v29; // edi
  int v30; // edx
  __int64 v31; // rdx
  unsigned int v32; // edx
  int v33; // esi
  int v34; // esi
  bool v35; // cf
  char *v36; // rax
  __int64 v37; // r14
  unsigned int v38; // r12d
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v45; // [rsp+0h] [rbp-80h]
  __int64 v46; // [rsp+8h] [rbp-78h]
  __int64 v48; // [rsp+18h] [rbp-68h]
  int v49; // [rsp+24h] [rbp-5Ch]
  int v50; // [rsp+28h] [rbp-58h]
  int v51; // [rsp+28h] [rbp-58h]
  bool v52; // [rsp+2Ch] [rbp-54h]
  bool v53; // [rsp+2Ch] [rbp-54h]
  __int128 v54; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+40h] [rbp-40h]

  v6 = a3;
  *(_QWORD *)(a1 + 16) = 0;
  v54 = 0;
  v55 = 0;
  v8 = *(_DWORD *)(a1 + 128);
  v10 = v8 == *(_DWORD *)(a1 + 132);
  v52 = v8 < 0x1000;
  qlseek(a2, a3, 0);
  if ( v6 == -1 )
    v6 = qlseek(a2, 0, 1);
  v11 = qlsize(a2) - v6;
  v12 = a4;
  v13 = a4;
  LODWORD(v14) = 0;
  if ( ((v11 | v6) & 0x8000000000000000LL) == 0LL )
  {
    if ( v13 >= 0 && v11 >= 40 * v12 )
      goto LABEL_8;
    v14 = v11 / 0x28;
  }
  v13 = v14;
  if ( (unsigned int)sub_10001D6D0(
                       1,
                       (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "Number of sections",
                       v12,
                       (int)v14,
                       ". Do you want to continue with the new value?") != 1 )
    sub_10001D7A0(0, (unsigned int)v14);
LABEL_8:
  v53 = v10 && v52;
  v49 = v13;
  if ( v13 <= 0 )
  {
LABEL_18:
    if ( v53 || (v50 = 512, *(_DWORD *)(a1 + 72) == 23126) )
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
      if ( v19 )
        goto LABEL_57;
      v50 = 512;
      if ( v53 )
        v50 = *(_DWORD *)(a1 + 132);
    }
    if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) < 4u || *(_DWORD *)(a1 + 72) == 23126 )
      v50 = 1;
    v46 = a2;
    v48 = a1 + 8;
    if ( v13 <= 0 )
    {
      v21 = 0;
      if ( *(_DWORD *)(a1 + 72) == 23126 )
LABEL_46:
        *(_DWORD *)(a1 + 152) = v21;
LABEL_47:
      v19 = 0;
      if ( v53 || v49 == 0 )
      {
        v37 = qlsize(v46);
        v38 = *(_DWORD *)(a1 + 152);
        if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) >= 4u )
        {
          v39 = 511;
          if ( *(_DWORD *)(a1 + 128) != 4096 )
          {
            v40 = *(_DWORD *)(a1 + 132);
            v35 = v40 == 0;
            v41 = v40 - 1;
            if ( !v35 )
              v39 = v41;
          }
          v38 = ~v39 & (v39 + v38);
        }
        v42 = *(_QWORD **)(a1 + 8);
        v43 = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v43 + 1) )
        {
          v42 = qvector_reserve(v48, *(void **)(a1 + 8), v43 + 1, 0x20u);
          *(_QWORD *)(a1 + 8) = v42;
          v43 = *(_QWORD *)(a1 + 16);
        }
        memmove(v42 + 4, v42, 32 * v43);
        *v42 = 0;
        v42[1] = v38;
        v42[2] = 0;
        v42[3] = v37;
        ++*(_QWORD *)(a1 + 16);
      }
    }
    else
    {
      v51 = -v50;
      v45 = 40LL * (unsigned int)v13;
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        v22 = v54;
        v23 = v51 & *(_DWORD *)(v54 + v20 + 20);
        v24 = *(char **)(a1 + 8);
        v25 = *(_QWORD *)(a1 + 16);
        v26 = v25 + 1;
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v25 + 1) )
        {
          v24 = (char *)qvector_reserve(v48, v24, v26, 0x20u);
          *(_QWORD *)(a1 + 8) = v24;
          v25 = *(_QWORD *)(a1 + 16);
          v26 = v25 + 1;
        }
        v27 = 32 * v25;
        *(_QWORD *)(a1 + 16) = v26;
        *(_QWORD *)&v24[v27] = *(unsigned int *)(v22 + v20 + 12);
        v28 = *(_DWORD *)(v22 + v20 + 8);
        v29 = *(_DWORD *)(v22 + v20 + 16);
        if ( !v28 )
          v28 = *(_DWORD *)(v22 + v20 + 16);
        v30 = (*(_DWORD *)(a1 + 128) == 0) + *(_DWORD *)(a1 + 128);
        v31 = (v30 + v28 - 1) & (unsigned int)-v30;
        if ( (unsigned int)v31 >= v29 )
          v31 = v29;
        *(_QWORD *)&v24[v27 + 24] = v31;
        v32 = *(_DWORD *)(v22 + v20 + 12) + v31;
        if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) >= 4u )
        {
          v33 = 511;
          if ( *(_DWORD *)(a1 + 128) != 4096 )
          {
            v34 = *(_DWORD *)(a1 + 132);
            v35 = v34 == 0;
            v33 = v34 - 1;
            if ( v35 )
              v33 = 511;
          }
          v32 = (v33 + v32) & ~v33;
        }
        v36 = &v24[v27];
        *((_QWORD *)v36 + 1) = v32;
        *((_QWORD *)v36 + 2) = v23;
        if ( *(_DWORD *)(a1 + 72) == 23126 )
          *((_QWORD *)v36 + 2) = v23 - (unsigned __int64)*(unsigned __int16 *)(a1 + 38) + 40;
        v19 = (**(__int64 (__fastcall ***)(__int64, __int64))a5)(a5, v22 + v20);
        if ( v19 )
          break;
        if ( v21 <= *(_DWORD *)(v22 + v20 + 12) + *(_DWORD *)(v22 + v20 + 8) )
          v21 = *(_DWORD *)(v22 + v20 + 12) + *(_DWORD *)(v22 + v20 + 8);
        v20 += 40;
        if ( v45 == v20 )
        {
          if ( *(_DWORD *)(a1 + 72) != 23126 )
            goto LABEL_47;
          goto LABEL_46;
        }
      }
    }
  }
  else
  {
    v15 = v13;
    while ( 1 )
    {
      v16 = *((_QWORD *)&v54 + 1);
      v17 = v54 + __PAIR128__(1, 0);
      if ( v55 < *((_QWORD *)&v54 + 1) + 1LL )
      {
        *(_QWORD *)&v17 = qvector_reserve((__int64)&v54, (void *)v54, *((unsigned __int64 *)&v17 + 1), 0x28u);
        *(_QWORD *)&v54 = v17;
        v16 = *((_QWORD *)&v54 + 1);
        *((_QWORD *)&v17 + 1) = *((_QWORD *)&v54 + 1) + 1LL;
      }
      v18 = (_DWORD *)(v17 + 40 * v16);
      *((_QWORD *)&v54 + 1) = *((_QWORD *)&v17 + 1);
      if ( qlread(a2, v18, 40) != 40 )
        break;
      if ( v18[3] != v18[5] || v18[2] > v18[4] )
        v53 = 0;
      if ( !--v15 )
        goto LABEL_18;
    }
    v19 = -1;
  }
LABEL_57:
  if ( (_QWORD)v54 )
  {
    *((_QWORD *)&v54 + 1) = 0;
    qfree((void *)v54);
  }
  return v19;
}
