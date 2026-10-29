__int64 __fastcall generate_disasm_line(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int not_tail; // ebp
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
  unsigned __int64 v35; // [rsp+10h] [rbp-298h]
  unsigned __int64 v36; // [rsp+10h] [rbp-298h]
  size_t v37; // [rsp+20h] [rbp-288h]
  __int64 v38; // [rsp+28h] [rbp-280h]
  void *ptr; // [rsp+30h] [rbp-278h] BYREF
  __int128 v40; // [rsp+38h] [rbp-270h]
  _QWORD v41[13]; // [rsp+50h] [rbp-258h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp-1F0h]
  unsigned int v43; // [rsp+E0h] [rbp-1C8h]
  char v44; // [rsp+118h] [rbp-190h]
  void *v45; // [rsp+200h] [rbp-A8h]
  __int64 v46; // [rsp+208h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+268h] [rbp-40h]

  not_tail = a2;
  v47 = __readfsqword(0x28u);
  v5 = a3;
  v6 = qword_2CA1698;
  v7 = sub_3B8910(*(_QWORD *)(qword_2CA1698 + 1480), a2, a3);
  if ( !(_BYTE)v7 )
    return v7;
  if ( (v5 & 1) == 0 && (get_flags_ex((unsigned int)a2, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail((unsigned int)a2);
  v8 = sub_3B9AA0(*(_QWORD *)(v6 + 1480), not_tail, 0);
  sub_559680((unsigned int)v41, *(_QWORD *)(v6 + 544), v6 + 760, v6 + 904, not_tail, v8, 0, 0);
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
  v42 = dword_2C57A94;
  sub_37DF70((unsigned int *)v41, &byte_22CD811, 7);
  v10 = segtype(not_tail);
  v11 = (_BYTE *)v10;
  sub_37E5B0((__int64)v41, v10);
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
    v17 = *(_BYTE **)a1;
    v18 = 1;
    v19 = 1;
    v20 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)a1 = *(_QWORD *)ptr;
    *(_QWORD *)(a1 + 8) = v16[1];
    v12 = v16[2];
    *(_QWORD *)(a1 + 16) = v12;
    *v16 = v17;
    for ( *(__m128i *)(v16 + 1) = v20; v18 < (unsigned __int64)v40; v19 = ++v18 )
    {
      v26 = *(_QWORD *)(a1 + 8);
      v27 = 2;
      if ( v26 )
        v27 = v26-- + 1;
      v11 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v27 )
      {
        v35 = v27;
        v28 = qvector_reserve(a1, v11, v27, 1);
        *(_QWORD *)a1 = v28;
        v27 = v35;
        v11 = (_BYTE *)v28;
      }
      *(_QWORD *)(a1 + 8) = v27;
      v11[v26] = 10;
      *(_BYTE *)(*(_QWORD *)a1 + v26 + 1) = 0;
      v21 = (char *)ptr + 24 * v19;
      v12 = *((_QWORD *)v21 + 1);
      if ( v12 )
      {
        v22 = v12 - 1;
        if ( v12 != 1 )
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = v12 - 1;
          if ( v23 )
          {
            --v23;
            v24 = v22 + v23;
            v12 += v23;
          }
          v25 = *(_QWORD *)a1;
          if ( *(_QWORD *)(a1 + 16) < v12 )
          {
            v38 = v23;
            v37 = v24;
            v36 = v12;
            v34 = qvector_reserve(a1, v25, v12, 1);
            v23 = v38;
            v24 = v37;
            *(_QWORD *)a1 = v34;
            v25 = v34;
            v12 = v36;
          }
          *(_QWORD *)(a1 + 8) = v12;
          *(_BYTE *)(v25 + v24) = 0;
          v11 = *(_BYTE **)v21;
          memcpy((void *)(v23 + *(_QWORD *)a1), *(const void **)v21, v22);
        }
      }
    }
    if ( (v5 & 4) != 0 && *(_QWORD *)(a1 + 8) > 1u )
    {
      v11 = *(_BYTE **)a1;
      tag_remove();
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
  v41[0] = &off_2BCF860;
  if ( v45 )
  {
    v46 = 0;
    qfree(v45);
  }
  sub_557A80(v41, v11, v12, v13, v14, v15);
  return v7;
}

