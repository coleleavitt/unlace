unsigned __int64 __fastcall sub_1250F0(__int64 a1, __int64 *a2)
{
  const char *segment_alignment; // rax
  __int64 v4; // r8
  const char *v5; // rbx
  size_t v6; // rax
  size_t v7; // r15
  const char *segment_combination; // rax
  __int64 v9; // r8
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // r15
  int v13; // r15d
  _DWORD *v14; // rax
  int i; // ebx
  __int64 v16; // rax
  void *v18; // rdi
  size_t v19; // rdx
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-458h]
  __int64 v25; // [rsp+0h] [rbp-458h]
  __int64 v26; // [rsp+0h] [rbp-458h]
  __int64 v27; // [rsp+0h] [rbp-458h]
  size_t v28; // [rsp+0h] [rbp-458h]
  size_t v29; // [rsp+0h] [rbp-458h]
  __int64 v30; // [rsp+8h] [rbp-450h]
  __int64 v31; // [rsp+8h] [rbp-450h]
  unsigned __int64 v32; // [rsp+418h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( getnseg() )
  {
    qsnprintf();
    get_segm_base();
    get_segm_name();
    sub_95250((__int64 *)(*a2 + 24));
    sub_95250((__int64 *)(*a2 + 48));
    sub_94440((__int64 *)(*a2 + 72));
    sub_94440((__int64 *)(*a2 + 96));
    sub_94440((__int64 *)(*a2 + 120));
    sub_94440((__int64 *)(*a2 + 144));
    sub_94440((__int64 *)(*a2 + 168));
    segment_alignment = (const char *)get_segment_alignment();
    v4 = *a2;
    v5 = segment_alignment;
    if ( segment_alignment && (v24 = *a2, v6 = strlen(segment_alignment), v4 = v24, (v7 = v6) != 0) )
    {
      v20 = *(void **)(v24 + 192);
      v21 = v6 + 1;
      if ( *(_QWORD *)(v24 + 208) < v6 + 1 )
      {
        v31 = v24;
        v29 = v6 + 1;
        v23 = qvector_reserve();
        v4 = v31;
        v21 = v29;
        v20 = (void *)v23;
        *(_QWORD *)(v31 + 192) = v23;
      }
      *(_QWORD *)(v4 + 200) = v21;
      v27 = v4;
      memmove(v20, v5, v7);
      *(_BYTE *)(*(_QWORD *)(v27 + 192) + v7) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 200) = 0;
    }
    sub_95250((__int64 *)(*a2 + 216));
    segment_combination = (const char *)get_segment_combination();
    v9 = *a2;
    v10 = segment_combination;
    if ( segment_combination && (v25 = *a2, v11 = strlen(segment_combination), v9 = v25, (v12 = v11) != 0) )
    {
      v18 = *(void **)(v25 + 240);
      v19 = v11 + 1;
      if ( *(_QWORD *)(v25 + 256) < v11 + 1 )
      {
        v30 = v25;
        v28 = v11 + 1;
        v22 = qvector_reserve();
        v9 = v30;
        v19 = v28;
        v18 = (void *)v22;
        *(_QWORD *)(v30 + 240) = v22;
      }
      *(_QWORD *)(v9 + 248) = v19;
      v26 = v9;
      memmove(v18, v10, v12);
      *(_BYTE *)(*(_QWORD *)(v26 + 240) + v12) = 0;
    }
    else
    {
      *(_QWORD *)(v9 + 248) = 0;
    }
    v13 = 13;
    get_segm_class();
    sub_94440((__int64 *)(*a2 + 288));
    v14 = *(_DWORD **)(a1 + 184);
    for ( i = v14[17]; v14[18] >= i; ++i )
    {
      if ( v14[20] != i )
      {
        v16 = v13++;
        sub_95250((__int64 *)(*a2 + 24 * v16));
        v14 = *(_DWORD **)(a1 + 184);
      }
    }
  }
  return v32 - __readfsqword(0x28u);
}

