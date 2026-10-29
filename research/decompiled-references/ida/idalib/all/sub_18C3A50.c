__int64 __fastcall sub_18C3A50(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // eax
  unsigned __int16 *v11; // rax
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int16 *v26; // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  char *v31; // rax
  char *v32; // r14
  unsigned __int64 v33; // rdi
  _DWORD *v34; // [rsp+8h] [rbp-1F0h]
  __int64 v35; // [rsp+8h] [rbp-1F0h]
  char v36; // [rsp+14h] [rbp-1E4h]
  char *v37; // [rsp+18h] [rbp-1E0h]
  unsigned int v38; // [rsp+20h] [rbp-1D8h] BYREF
  char v39; // [rsp+24h] [rbp-1D4h]
  __int16 v40; // [rsp+60h] [rbp-198h] BYREF
  void **p_ptr; // [rsp+68h] [rbp-190h]
  unsigned int v42; // [rsp+70h] [rbp-188h] BYREF
  char v43; // [rsp+74h] [rbp-184h]
  void *ptr; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-140h]
  _BYTE v46[312]; // [rsp+C0h] [rbp-138h] BYREF

  v4 = a2;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v5 == 3 )
    return a2;
  if ( v5 <= 1 )
    return a2;
  if ( !a3 )
    return a2;
  if ( a2 <= 1 )
    return a2;
  v8 = a2;
  if ( !(unsigned __int8)sub_B7D7F0(a3) )
    return a2;
  v9 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
  v10 = *(_DWORD *)v9;
  if ( ((unsigned int)(*(_DWORD *)v9 - 4) <= 1 || *(_BYTE *)(a1 + 2440)) && !*(_BYTE *)(v9 + 600) )
    return a2;
  if ( v10 == 7
    || *(_BYTE *)(v9 + 599)
    || *(_BYTE *)(a1 + 4600) | (v10 == 5)
    || (v10 == 2 || v10 == 6) && *(_BYTE *)(v9 + 597) )
  {
    return a2;
  }
  v34 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFFFFELL);
  v11 = (unsigned __int16 *)sub_BFB900(a2 & 0xFFFFFFFFFFFFFFFELL);
  v14 = *v11;
  v15 = (unsigned int)(v14 + 423);
  LOWORD(v15) = (v14 + 423) & 0x1FF;
  if ( (unsigned __int16)v15 <= 4u )
  {
    v26 = (unsigned __int16 *)sub_BFB900(*((_QWORD *)v11 + 4));
    v15 = *v26;
    LOWORD(v15) = v15 & 0x1FF;
    if ( (_WORD)v15 == 71 )
    {
      a2 = (unsigned __int64)v26;
      sub_18C0A20(v9 + 456, (__int64)v26);
    }
  }
  v38 = 0;
  v39 &= ~1u;
  if ( (*v34 & 0x20000) != 0 || !*(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 42) )
    goto LABEL_52;
  a2 = (unsigned __int64)&v40;
  v30 = *(_QWORD *)(a1 + 248);
  v40 = 0;
  ptr = v46;
  v42 = 0;
  v45 = 0x800000000LL;
  v43 &= ~1u;
  p_ptr = &ptr;
  v36 = sub_C82410((unsigned __int64)v34, (__int64)&v40, v30, 3u, v12, v13);
  if ( v36 )
  {
    if ( (_DWORD)v45 )
    {
      v36 = 0;
    }
    else
    {
      a2 = (unsigned __int64)&v42;
      sub_A4FD20((__int64)&v38, (__int64)&v42);
    }
  }
  if ( v42 > 1 )
    sub_A4F8E0((int *)&v42);
  v31 = (char *)ptr;
  v32 = (char *)ptr + 32 * (unsigned int)v45;
  while ( v31 != v32 )
  {
    while ( 1 )
    {
      v32 -= 32;
      a2 = *((_QWORD *)v32 + 1);
      if ( !a2 )
        break;
      v33 = *((_QWORD *)v32 + 2);
      if ( !v33 )
        break;
      v37 = v31;
      sub_1580C40(v33, a2);
      v31 = v37;
      if ( v37 == v32 )
        goto LABEL_43;
    }
  }
LABEL_43:
  if ( ptr != v46 )
    free(ptr);
  if ( v36 )
  {
LABEL_52:
    if ( *(_BYTE *)(a1 + 4512) )
    {
      a2 = (unsigned __int64)v34;
      v8 = sub_C96350(*(_QWORD **)(a1 + 248), (__int64)v34, *(_BYTE *)(a1 + 4513), 0, 0, v13);
    }
    v16 = *(_QWORD *)(a1 + 248);
    v17 = sub_C1D490(a3, a2, v15, v14);
    v21 = sub_BF78E0(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), v16, v18, v19, v20);
    v24 = sub_C09AC0(*(_QWORD **)(a1 + 248), v8 & 0xFFFFFFFFFFFFFFFELL, v21, 1, v22, v23);
    v25 = v24;
    if ( v38 > 1 )
      sub_BF7970(v24, (__int64)&v38, *(_QWORD *)(a1 + 248));
    if ( (*(_DWORD *)v25 & 0x20000) == 0 )
    {
      v27 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
      v28 = *(unsigned int *)(v27 + 416);
      v29 = *(unsigned int *)(v27 + 420);
      if ( v28 >= v29 && v29 < v28 + 1 )
      {
        sub_2237220(v27 + 408, v27 + 424, v28 + 1, 8);
        v28 = *(unsigned int *)(v27 + 416);
      }
      *(_QWORD *)(*(_QWORD *)(v27 + 408) + 8 * v28) = v25 & 0xFFFFFFFFFFFFFFFBLL;
      ++*(_DWORD *)(v27 + 416);
    }
    result = v25;
  }
  else
  {
    sub_18C39D0(a1, (unsigned __int64)v34);
    result = v4;
  }
  if ( v38 > 1 )
  {
    v35 = result;
    sub_A4F8E0((int *)&v38);
    return v35;
  }
  return result;
}
