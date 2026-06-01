__int64 __fastcall sub_77E230(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r13
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
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
  _QWORD *v26; // rdx
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
  if ( !*(_BYTE *)(a3 + 8) )
    return 3;
  v3 = *(_QWORD *)a3;
  if ( v3 == -1 )
    return 2;
  if ( !v3 )
    return 4;
  v4 = a1[6] + 176 * v3;
  if ( *(_QWORD *)(v4 + 32) )
    return 4;
  v6 = a1[12];
  if ( v6 == v3 )
  {
    v28 = *(_QWORD *)(v4 + 160);
    v29 = *(void (**)())(*a1 + 104);
    if ( v29 != nullsub_236 )
    {
      ((void (__fastcall *)(__int64 *, __int64, __int64))v29)(a1, v6, v28);
      v28 = *(_QWORD *)(a1[6] + 176 * a1[12] + 160);
    }
    a1[12] = v28;
    v3 = *(_QWORD *)a3;
  }
  sub_776CB0((__int64)&v34, (__int64)a1, v3, 0);
  v7 = a1[6] + 176 * a2;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v7 + 24);
  v10 = v7;
  v11 = v9 + 9 * v8;
  if ( (*(_BYTE *)(v7 + 168) & 4) != 0 )
  {
    if ( *(_BYTE *)(a3 + 8) )
    {
      v12 = *(_QWORD *)(v7 + 24);
      if ( !v8 )
        goto LABEL_35;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v12 + 8) )
          goto LABEL_35;
        if ( *(_QWORD *)v12 == *(_QWORD *)a3 )
          break;
        v12 += 9;
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
      v12 = sub_773990(*(_QWORD *)(v7 + 24), v9 + 9 * v8, a3);
      if ( v12 == v27 )
        goto LABEL_35;
      v8 = v32;
      if ( *(_QWORD *)v12 != *v26 || *(_BYTE *)(v12 + 8) )
        goto LABEL_35;
    }
    v30 = 0x8E38E38E38E38E39LL * (v12 - v9);
    goto LABEL_14;
  }
  if ( v9 == v11 )
    goto LABEL_35;
  v12 = *(_QWORD *)(v7 + 24);
  v13 = *(_QWORD *)a3;
  while ( v13 != *(_QWORD *)v12 || *(_BYTE *)(a3 + 8) != *(_BYTE *)(v12 + 8) )
  {
    v12 += 9;
    if ( v12 == v11 )
      goto LABEL_35;
  }
  if ( v12 == v11 )
    goto LABEL_35;
  v30 = 0x8E38E38E38E38E39LL * (v12 - v9);
  sub_773820((_QWORD *)(v7 + 104), v13);
  v8 = *(_QWORD *)(v10 + 32);
  v9 = *(_QWORD *)(v10 + 24);
LABEL_14:
  memmove((void *)v12, (const void *)(v12 + 9), v9 - v12 + 9 * v8 - 9);
  --*(_QWORD *)(v10 + 32);
  *(_DWORD *)(v10 + 168) |= 1u;
  v37 = 0;
  v17 = _mm_loadu_si128((const __m128i *)(v4 + 8));
  ptr = nullptr;
  v18 = *(void **)v4;
  v37 = v17;
  ptr = v18;
  LODWORD(v18) = *(_DWORD *)(v4 + 168);
  *(_QWORD *)v4 = 0;
  v31 = (unsigned int)v18;
  *(_OWORD *)(v4 + 8) = 0;
  v19 = a1[7];
  v20 = *(_QWORD *)a3;
  v21 = *(_QWORD *)a3 + 1LL;
  if ( v21 == v19 )
    sub_77D7A0(a1 + 6, v20, v14, v15, v16);
  else
    sub_776280(a1, v20, v4);
  v22 = *(void (**)())(*a1 + 96);
  if ( v22 != nullsub_235 )
    ((void (__fastcall *)(__int64 *, __int64, unsigned __int64, _QWORD, bool, void **, _QWORD))v22)(
      a1,
      a2,
      v30,
      *(_QWORD *)a3,
      v21 == v19,
      &ptr,
      v31);
  v23 = haystack;
  if ( v35 )
    v23 = (const char *)v34;
  sub_39ADA0(0x42u, a1[4], v23);
  v24 = haystack;
  if ( v35 )
    v24 = (const char *)v34;
  sub_774BB0((__int64)a1, 66, v24);
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
