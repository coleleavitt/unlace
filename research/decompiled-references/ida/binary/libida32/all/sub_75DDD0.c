__int64 __fastcall sub_75DDD0(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edx
  __int64 v4; // r13
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __m128i v17; // xmm1
  void *v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  void (*v22)(); // rax
  const char *v23; // rdx
  const char *v24; // rdx
  _DWORD *v26; // rdx
  __int64 v27; // r10
  __int64 v28; // rdx
  void (*v29)(); // rax
  unsigned __int64 v30; // [rsp+8h] [rbp-88h]
  unsigned int v31; // [rsp+10h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-80h]
  void *v34; // [rsp+20h] [rbp-70h] BYREF
  __int64 v35; // [rsp+28h] [rbp-68h]
  void *ptr; // [rsp+40h] [rbp-50h] BYREF
  __m128i v37; // [rsp+48h] [rbp-48h]
  unsigned __int64 v38; // [rsp+58h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( !*((_BYTE *)a3 + 4) )
    return 3;
  v3 = *a3;
  if ( v3 == -1 )
    return 2;
  if ( !v3 )
    return 4;
  v4 = a1[6] + 176LL * v3;
  if ( *(_QWORD *)(v4 + 32) )
    return 4;
  v6 = *((unsigned int *)a1 + 24);
  if ( (_DWORD)v6 == v3 )
  {
    v28 = *(unsigned int *)(v4 + 160);
    v29 = *(void (**)())(*a1 + 104LL);
    if ( v29 != nullsub_215 )
    {
      ((void (__fastcall *)(_QWORD *, __int64, __int64))v29)(a1, v6, v28);
      LODWORD(v28) = *(_DWORD *)(a1[6] + 176LL * *((unsigned int *)a1 + 24) + 160);
    }
    *((_DWORD *)a1 + 24) = v28;
    v3 = *a3;
  }
  sub_756780((__int64)&v34, (__int64)a1, v3, 0);
  v7 = a1[6] + 176LL * a2;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v7 + 24);
  v10 = v7;
  v11 = v9 + 5 * v8;
  if ( (*(_BYTE *)(v7 + 164) & 4) != 0 )
  {
    if ( *((_BYTE *)a3 + 4) )
    {
      v12 = *(_QWORD *)(v7 + 24);
      if ( !v8 )
        goto LABEL_35;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v12 + 4) )
          goto LABEL_35;
        if ( *(_DWORD *)v12 == *a3 )
          break;
        v12 += 5;
        if ( v12 == v11 )
          goto LABEL_35;
      }
      if ( v12 == v11 )
      {
LABEL_35:
        if ( !under_debugger )
          interr(1786);
        BUG();
      }
    }
    else
    {
      v32 = *(_QWORD *)(v7 + 32);
      v12 = sub_7534D0(*(_QWORD *)(v7 + 24), v9 + 5 * v8, (__int64)a3);
      if ( v12 == v27 )
        goto LABEL_35;
      v8 = v32;
      if ( *(_DWORD *)v12 != *v26 || *(_BYTE *)(v12 + 4) )
        goto LABEL_35;
    }
    v30 = 0xCCCCCCCCCCCCCCCDLL * (v12 - v9);
    goto LABEL_14;
  }
  if ( v9 == v11 )
    goto LABEL_35;
  v12 = *(_QWORD *)(v7 + 24);
  v13 = *a3;
  while ( v13 != *(_DWORD *)v12 || *((_BYTE *)a3 + 4) != *(_BYTE *)(v12 + 4) )
  {
    v12 += 5;
    if ( v12 == v11 )
      goto LABEL_35;
  }
  if ( v12 == v11 )
    goto LABEL_35;
  v30 = 0xCCCCCCCCCCCCCCCDLL * (v12 - v9);
  sub_753360((_QWORD *)(v7 + 104), v13);
  v8 = *(_QWORD *)(v10 + 32);
  v9 = *(_QWORD *)(v10 + 24);
LABEL_14:
  memmove((void *)v12, (const void *)(v12 + 5), v9 - v12 + 5 * v8 - 5);
  --*(_QWORD *)(v10 + 32);
  *(_DWORD *)(v10 + 164) |= 1u;
  v37 = 0;
  v17 = _mm_loadu_si128((const __m128i *)(v4 + 8));
  ptr = nullptr;
  v18 = *(void **)v4;
  v37 = v17;
  ptr = v18;
  LODWORD(v18) = *(_DWORD *)(v4 + 164);
  *(_QWORD *)v4 = 0;
  v31 = (unsigned int)v18;
  *(_OWORD *)(v4 + 8) = 0;
  v19 = a1[7];
  v20 = *a3;
  v21 = (unsigned int)(v20 + 1);
  if ( v21 == v19 )
    sub_75D340(a1 + 6, v20, v14, v15, v16);
  else
    sub_755D60(a1, v20, v4);
  v22 = *(void (**)())(*a1 + 96LL);
  if ( v22 != nullsub_214 )
    ((void (__fastcall *)(_QWORD *, _QWORD, unsigned __int64, _QWORD, bool, void **, _QWORD))v22)(
      a1,
      a2,
      v30,
      *a3,
      v21 == v19,
      &ptr,
      v31);
  v23 = haystack;
  if ( v35 )
    v23 = (const char *)v34;
  sub_396090(0x42u, a1[4], v23);
  v24 = haystack;
  if ( v35 )
    v24 = (const char *)v34;
  sub_754740((__int64)a1, 66, v24);
  if ( ptr )
  {
    v37.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( v34 )
  {
    v35 = 0;
    qfree(v34);
  }
  return 0;
}

