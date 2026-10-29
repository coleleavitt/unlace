__int64 __fastcall generate_disasm_line(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 not_tail; // rbp
  char v5; // r12
  __int64 v6; // r14
  unsigned int v7; // r13d
  int v8; // eax
  unsigned int v9; // eax
  unsigned __int8 v10; // al
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  _BYTE *v17; // rax
  int v18; // r14d
  __int64 v19; // r15
  __m128i v20; // xmm0
  char *v21; // rbp
  size_t v22; // r15
  __int64 v23; // r8
  size_t v24; // r11
  __int64 v25; // rsi
  __int64 v26; // rbp
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rbx
  void **v31; // rdx
  void *v32; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+10h] [rbp-358h]
  unsigned __int64 v36; // [rsp+10h] [rbp-358h]
  size_t v37; // [rsp+20h] [rbp-348h]
  __int64 v38; // [rsp+28h] [rbp-340h]
  void *ptr; // [rsp+30h] [rbp-338h] BYREF
  __int128 v40; // [rsp+38h] [rbp-330h]
  _QWORD v41[13]; // [rsp+50h] [rbp-318h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp-2B0h]
  unsigned int v43; // [rsp+E0h] [rbp-288h]
  char v44; // [rsp+120h] [rbp-248h]
  void *v45; // [rsp+298h] [rbp-D0h]
  __int64 v46; // [rsp+2A0h] [rbp-C8h]
  unsigned __int64 v47; // [rsp+328h] [rbp-40h]

  not_tail = a2;
  v47 = __readfsqword(0x28u);
  v5 = a3;
  v6 = qword_2CCB598;
  v7 = sub_3BD540(*(_QWORD *)(qword_2CCB598 + 1672), a2, a3);
  if ( !(_BYTE)v7 )
    return v7;
  if ( (v5 & 1) == 0 && (get_flags_ex(a2, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(a2);
  v8 = sub_3BE900(*(_QWORD *)(v6 + 1672), not_tail, 0);
  sub_573180((unsigned int)v41, *(_QWORD *)(v6 + 632), v6 + 928, v6 + 1072, not_tail, v8, 0, 0);
  v44 = 0;
  v9 = v43 & 0xFFF3FFFC | 3;
  if ( (v5 & 2) == 0 )
    v9 = v43 & 0xFFF3FFFE | 1;
  v43 = v9;
  if ( (v5 & 1) != 0 )
    v43 |= 4u;
  if ( (v5 & 8) != 0 )
    v43 |= 0x400000u;
  v41[12] = &ptr;
  ptr = nullptr;
  v40 = 0;
  v42 = dword_2C81AB4;
  sub_381A40((__int64)v41, &byte_22F0C30, 7);
  v10 = segtype(not_tail);
  v11 = (_BYTE *)v10;
  sub_382090((__int64)v41, v10);
  v16 = ptr;
  if ( !(_QWORD)v40 )
  {
    v7 = 0;
    if ( !ptr )
      goto LABEL_33;
    goto LABEL_32;
  }
  if ( a1 )
  {
    v17 = (_BYTE *)*a1;
    v18 = 1;
    v19 = 1;
    v20 = _mm_loadu_si128((const __m128i *)(a1 + 1));
    *a1 = *(_QWORD *)ptr;
    a1[1] = v16[1];
    v12 = v16[2];
    a1[2] = v12;
    *v16 = v17;
    for ( *(__m128i *)(v16 + 1) = v20; v18 < (unsigned __int64)v40; v19 = ++v18 )
    {
      v26 = a1[1];
      v27 = 2;
      if ( v26 )
        v27 = v26-- + 1;
      v11 = (_BYTE *)*a1;
      if ( a1[2] < v27 )
      {
        v35 = v27;
        v28 = qvector_reserve(a1, v11, v27, 1);
        *a1 = v28;
        v27 = v35;
        v11 = (_BYTE *)v28;
      }
      a1[1] = v27;
      v11[v26] = 10;
      *(_BYTE *)(*a1 + v26 + 1) = 0;
      v21 = (char *)ptr + 24 * v19;
      v12 = *((_QWORD *)v21 + 1);
      if ( v12 )
      {
        v22 = v12 - 1;
        if ( v12 != 1 )
        {
          v23 = a1[1];
          v24 = v12 - 1;
          if ( v23 )
          {
            --v23;
            v24 = v22 + v23;
            v12 += v23;
          }
          v25 = *a1;
          if ( a1[2] < v12 )
          {
            v38 = v23;
            v37 = v24;
            v36 = v12;
            v34 = qvector_reserve(a1, v25, v12, 1);
            v23 = v38;
            v24 = v37;
            *a1 = v34;
            v25 = v34;
            v12 = v36;
          }
          a1[1] = v12;
          *(_BYTE *)(v25 + v24) = 0;
          v11 = *(_BYTE **)v21;
          memcpy((void *)(v23 + *a1), *(const void **)v21, v22);
        }
      }
    }
    if ( (v5 & 4) != 0 && (unsigned __int64)a1[1] > 1 )
    {
      v11 = (_BYTE *)*a1;
      tag_remove(a1, *a1, 0);
    }
    v16 = ptr;
    if ( !ptr )
      goto LABEL_33;
    v29 = v40;
    if ( !(_QWORD)v40 )
      goto LABEL_32;
  }
  else
  {
    v29 = v40;
    if ( !ptr )
      goto LABEL_33;
  }
  v30 = 0;
  do
  {
    v31 = (void **)&v16[3 * v30];
    v32 = *v31;
    if ( *v31 )
    {
      v31[1] = nullptr;
      qfree(v32);
      v16 = ptr;
    }
    ++v30;
  }
  while ( v29 != v30 );
LABEL_32:
  *(_QWORD *)&v40 = 0;
  qfree(v16);
LABEL_33:
  v41[0] = &off_2BF9800;
  if ( v45 )
  {
    v46 = 0;
    qfree(v45);
  }
  sub_571590(v41, v11, v12, v13, v14, v15);
  return v7;
}
