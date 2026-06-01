__int64 __fastcall sub_1872040(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned __int64 a5, unsigned int a6)
{
  __int64 *v7; // r15
  __int64 v8; // r13
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // r13
  __int64 v14; // rax
  char *v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  _BYTE *v18; // rax
  char *v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  unsigned __int64 v25; // rax
  void *v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  unsigned __int64 (__fastcall *v29)(__int64); // rax
  int v30; // ecx
  unsigned __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  __int64 v42; // rax
  _QWORD *v43; // rax
  int v44; // eax
  unsigned int v45; // [rsp+10h] [rbp-F8h]
  void *v46; // [rsp+10h] [rbp-F8h]
  __int64 v47; // [rsp+18h] [rbp-F0h]
  unsigned int v48; // [rsp+24h] [rbp-E4h] BYREF
  __int64 v49; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v50; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C0h]
  _BYTE s[184]; // [rsp+50h] [rbp-B8h] BYREF

  v7 = &a4[a5];
  v8 = (__int64)(8 * a5) >> 5;
  v11 = (__int64)(8 * a5) >> 3;
  v12 = a4;
  v49 = a3;
  v48 = a6;
  if ( v8 <= 0 )
  {
LABEL_27:
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        if ( v11 != 1 )
          goto LABEL_30;
        goto LABEL_39;
      }
      if ( sub_B799A0(*v12) )
        goto LABEL_8;
      ++v12;
    }
    if ( sub_B799A0(*v12) )
      goto LABEL_8;
    ++v12;
LABEL_39:
    if ( sub_B799A0(*v12) )
      goto LABEL_8;
LABEL_30:
    v14 = v48;
    goto LABEL_31;
  }
  v13 = &a4[4 * v8];
  while ( !sub_B799A0(*v12) )
  {
    if ( sub_B799A0(v12[1]) )
    {
      ++v12;
      break;
    }
    if ( sub_B799A0(v12[2]) )
    {
      v12 += 2;
      break;
    }
    if ( sub_B799A0(v12[3]) )
    {
      v12 += 3;
      break;
    }
    v12 += 4;
    if ( v13 == v12 )
    {
      v11 = v7 - v12;
      goto LABEL_27;
    }
  }
LABEL_8:
  v14 = v48;
  if ( v7 != v12 )
  {
    if ( a5 - 1 <= v48 )
    {
      v15 = s;
      v16 = v48 - (unsigned int)a5 + 1;
      v45 = v48 - a5;
      v17 = *v12;
      *(_QWORD *)(*v12 + 56) = a2;
      ptr = s;
      v52 = 0x800000000LL;
      if ( (_DWORD)v16 )
      {
        v18 = s;
        if ( v16 > 8 )
        {
          sub_2237220(&ptr, s, v16, 8);
          v18 = ptr;
          v15 = (char *)ptr + 8 * (unsigned int)v52;
        }
        v19 = &v18[8 * v16];
        if ( v19 != v15 )
          memset(v15, 0, 8 * ((unsigned __int64)(v19 - v15 - 8) >> 3) + 8);
        LODWORD(v52) = v16;
        v20 = 0;
        do
        {
          v21 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          v22 = *(_QWORD *)(v17 + 16);
          if ( (*(_QWORD *)(v17 + 40) & 7) != 0 )
            v21 = 0;
          v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v22 & 4) != 0 )
            v23 = (_QWORD *)*v23;
          v24 = sub_B9ACF0(*(_QWORD **)(a1 + 248), (__int64)v23, *(_DWORD *)(v17 + 24), v21, 0);
          v24[7] = a2;
          *(_QWORD *)((char *)ptr + v20) = v24;
          v20 += 8;
        }
        while ( v20 != 8LL * v45 + 8 );
      }
      v25 = sub_A781D0(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL), v45 + 2);
      v26 = ptr;
      v27 = (unsigned int)v52;
      v28 = v25;
      v29 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL);
      if ( v29 == sub_B70840 )
      {
        v30 = *(_DWORD *)(v17 + 24);
      }
      else
      {
        v47 = (unsigned int)v52;
        v46 = ptr;
        v44 = v29(v17);
        v27 = v47;
        v26 = v46;
        v30 = v44;
      }
      v31 = sub_C97290(*(_QWORD **)(a1 + 248), v28, v17, v30, v26, v27);
      *(_QWORD *)(v17 + 48) = v28;
      *(_QWORD *)(v17 + 64) = v31;
      if ( ptr != s )
        free(ptr);
      return 0;
    }
    goto LABEL_32;
  }
LABEL_31:
  if ( a5 == v14 )
    return 0;
LABEL_32:
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xE13u, 0);
  v33 = sub_1605D30((__int64)&ptr, &v49);
  v34 = v33;
  if ( *(_BYTE *)(v33 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v33 + 32), (unsigned int)a5, 3u);
  }
  else if ( *(_BYTE *)(v33 + 132) )
  {
    v41 = sub_168B9E0((_QWORD *)v33);
    v42 = *(_QWORD *)(v34 + 16);
    if ( v42 )
      v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v34 + 16));
    v50 = v42;
    v43 = sub_1587BC0(v41, &v50, v37, v38, v39, v40);
    sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * *(unsigned int *)(v34 + 128) + 8), (unsigned int)a5, 3u);
  }
  v35 = sub_1588370(v34, &v48);
  v36 = sub_1588370(v35, &v48);
  LOBYTE(v50) = a5 > v48;
  sub_1588420(v36, (unsigned __int8 *)&v50);
  sub_15F7200(&ptr);
  return 1;
}
