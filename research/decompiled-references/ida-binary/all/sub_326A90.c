unsigned __int64 __fastcall segm_chooser_t__::vfunc_6(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned int v10; // r15d
  double v11; // xmm0_8
  __int64 segm_base; // rbx
  char *v13; // rsi
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  char v19; // al
  const char *segment_alignment; // rax
  __int64 v21; // r8
  const char *v22; // rbx
  size_t v23; // rax
  size_t v24; // r15
  const char *segment_combination; // rax
  __int64 v26; // r8
  const char *v27; // rbx
  size_t v28; // rax
  size_t v29; // r15
  int v30; // r15d
  _DWORD *v31; // rax
  int i; // ebx
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v36; // rdi
  size_t v37; // rdx
  void *v38; // rdi
  size_t v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-458h]
  __int64 v47; // [rsp+0h] [rbp-458h]
  __int64 v48; // [rsp+0h] [rbp-458h]
  __int64 v49; // [rsp+0h] [rbp-458h]
  size_t v50; // [rsp+0h] [rbp-458h]
  size_t v51; // [rsp+0h] [rbp-458h]
  __int64 v52; // [rsp+8h] [rbp-450h]
  __int64 v53; // [rsp+8h] [rbp-450h]
  _BYTE v54[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v55; // [rsp+418h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v7 = getnseg(a5);
  if ( v7 )
  {
    v8 = v7;
    v9 = 88;
    if ( *(_BYTE *)(a1 + 192) )
      v9 = 111;
    v10 = 6;
    v11 = qsnprintf(v54, 1024, "%%0%dll%c", *(_DWORD *)(*(_QWORD *)(a1 + 200) + 36LL), v9);
    segm_base = get_segm_base(v8);
    get_segm_name(*a2, v8, 0);
    v13 = "%0*llo";
    if ( !*(_BYTE *)(a1 + 192) )
    {
      v13 = "%0*a";
      v10 = 2 * *(_DWORD *)(a1 + 248);
    }
    sub_1ADAF0((__int64 *)(*a2 + 24LL), (__int64)v13, v10, *(_QWORD *)v8 - segm_base, v11);
    sub_1ADAF0((__int64 *)(*a2 + 48LL), (__int64)v13, v10, *(_QWORD *)(v8 + 8) - segm_base);
    v14 = 63;
    v15 = *(_BYTE *)(v8 + 42);
    if ( v15 )
      v14 = (v15 & 4) == 0 ? 46 : 82;
    sub_169A50((__int64 *)(*a2 + 72LL), (__int64)"%c", v14);
    v16 = 63;
    v17 = *(_BYTE *)(v8 + 42);
    if ( v17 )
      v16 = (v17 & 2) == 0 ? 46 : 87;
    sub_169A50((__int64 *)(*a2 + 96LL), (__int64)"%c", v16);
    v18 = 63;
    v19 = *(_BYTE *)(v8 + 42);
    if ( v19 )
      v18 = (v19 & 1) == 0 ? 46 : 88;
    sub_169A50((__int64 *)(*a2 + 120LL), (__int64)"%c", v18);
    sub_169A50((__int64 *)(*a2 + 144LL), (__int64)"%c", (*(_WORD *)(v8 + 44) & 8) == 0 ? 46 : 68);
    sub_169A50((__int64 *)(*a2 + 168LL), (__int64)"%c", (*(_WORD *)(v8 + 44) & 0x10) == 0 ? 46 : 76);
    segment_alignment = (const char *)get_segment_alignment(*(unsigned __int8 *)(v8 + 40));
    v21 = *a2;
    v22 = segment_alignment;
    if ( segment_alignment && (v46 = *a2, v23 = strlen(segment_alignment), v21 = v46, (v24 = v23) != 0) )
    {
      v38 = *(void **)(v46 + 192);
      v39 = v23 + 1;
      if ( *(_QWORD *)(v46 + 208) < v23 + 1 )
      {
        v43 = *(_QWORD *)(v46 + 192);
        v53 = v46;
        v44 = v46 + 192;
        v51 = v23 + 1;
        v45 = qvector_reserve(v44, v43, v39, 1);
        v21 = v53;
        v39 = v51;
        v38 = (void *)v45;
        *(_QWORD *)(v53 + 192) = v45;
      }
      *(_QWORD *)(v21 + 200) = v39;
      v49 = v21;
      memmove(v38, v22, v24);
      *(_BYTE *)(*(_QWORD *)(v49 + 192) + v24) = 0;
    }
    else
    {
      *(_QWORD *)(v21 + 200) = 0;
    }
    sub_1ADAF0((__int64 *)(*a2 + 216LL), (__int64)v54, *(_QWORD *)(v8 + 48));
    segment_combination = (const char *)get_segment_combination(*(unsigned __int8 *)(v8 + 41));
    v26 = *a2;
    v27 = segment_combination;
    if ( segment_combination && (v47 = *a2, v28 = strlen(segment_combination), v26 = v47, (v29 = v28) != 0) )
    {
      v36 = *(void **)(v47 + 240);
      v37 = v28 + 1;
      if ( *(_QWORD *)(v47 + 256) < v28 + 1 )
      {
        v40 = *(_QWORD *)(v47 + 240);
        v52 = v47;
        v41 = v47 + 240;
        v50 = v28 + 1;
        v42 = qvector_reserve(v41, v40, v37, 1);
        v26 = v52;
        v37 = v50;
        v36 = (void *)v42;
        *(_QWORD *)(v52 + 240) = v42;
      }
      *(_QWORD *)(v26 + 248) = v37;
      v48 = v26;
      memmove(v36, v27, v29);
      *(_BYTE *)(*(_QWORD *)(v48 + 240) + v29) = 0;
    }
    else
    {
      *(_QWORD *)(v26 + 248) = 0;
    }
    v30 = 13;
    get_segm_class(*a2 + 264LL, v8);
    sub_169A50((__int64 *)(*a2 + 288LL), (__int64)"%d", 1 << (*(_BYTE *)(v8 + 43) + 4));
    v31 = *(_DWORD **)(a1 + 184);
    for ( i = v31[17]; v31[18] >= i; ++i )
    {
      if ( v31[20] != i )
      {
        v33 = *(_QWORD *)(v8 + 8LL * (i - v31[17]) + 56);
        v34 = v30++;
        sub_1ADAF0((__int64 *)(*a2 + 24 * v34), (__int64)v54, v33);
        v31 = *(_DWORD **)(a1 + 184);
      }
    }
  }
  return v55 - __readfsqword(0x28u);
}
