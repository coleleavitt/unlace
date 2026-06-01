__int64 __fastcall sub_3CB9E0(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v6; // r12d
  int v7; // r13d
  __int64 v8; // r15
  char v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned int *v13; // rax
  __int64 v14; // rsi
  int v15; // r15d
  bool v16; // al
  unsigned int v17; // eax
  int v18; // r15d
  unsigned int v19; // r14d
  unsigned int head; // eax
  __int64 v21; // [rsp+0h] [rbp-F8h]
  unsigned int *v22; // [rsp+8h] [rbp-F0h]
  __int64 *v23; // [rsp+10h] [rbp-E8h]
  void *v24; // [rsp+18h] [rbp-E0h]
  unsigned int v25; // [rsp+18h] [rbp-E0h]
  unsigned int v26; // [rsp+1Ch] [rbp-DCh]
  __int128 *v27; // [rsp+20h] [rbp-D8h]
  void *v28; // [rsp+28h] [rbp-D0h]
  __int64 v29; // [rsp+30h] [rbp-C8h]
  int v30[2]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+60h] [rbp-98h]
  __int64 v35; // [rsp+68h] [rbp-90h]
  unsigned __int64 v36; // [rsp+70h] [rbp-88h]
  void *ptr; // [rsp+78h] [rbp-80h]
  __int128 v38; // [rsp+80h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-68h] BYREF
  void (__fastcall *v40)(__int128 *, __int128 *, __int64); // [rsp+A0h] [rbp-58h]
  __int64 v41; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+B8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v6 = a2;
  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) == 0x200 )
    v6 = sub_3BD5D0((__int64)a1, a2);
  v7 = sub_3B9AA0((__int64)a1, v6, 4);
  if ( (v7 & 0x400) == 0 )
    return 0;
  v8 = v7 & 0x600;
  v21 = a1[128];
  if ( v8 != 1536 )
  {
    sub_375980(0x1Cu, v6);
    v25 = sub_3BCF60((__int64)a1, v6);
    if ( v8 == 1024 )
    {
      sub_3C4DC0(a1, v6, v7, 1);
      v17 = ea2node(v6);
      netnode_supdel(v17, 5, 83);
    }
    v9 = 0;
    goto LABEL_9;
  }
  v13 = (unsigned int *)sub_5AFCE0(a1);
  v14 = v6;
  v22 = v13;
  if ( v13 && *v13 == v6 )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v9 = 1;
      v25 = sub_3BCF60((__int64)a1, v6);
      v16 = 1;
    }
    else
    {
      v15 = sub_375980(0x1Cu, v6);
      v14 = v6;
      LODWORD(v24) = sub_3BCF60((__int64)a1, v6);
      if ( !(unsigned __int8)sub_5B9040((int)a1, v21, (int)v22, (int)v23, v24, (__int64)v27, (int)v28, v29) )
        return 0;
      v22 = nullptr;
      v16 = v15 == 0;
      v9 = 0;
    }
  }
  else
  {
    v14 = v6;
    v18 = sub_375980(0x1Cu, v6);
    v25 = sub_3BCF60((__int64)a1, v6);
    v16 = v18 == 0;
    v9 = 0;
  }
  if ( (*(_BYTE *)(a1[2] + 8LL) & 1) != 0 && v16 && (get_merge_state(a1, v14) & 2) == 0 )
  {
    v14 = v25;
    sub_502C60(a1, v25);
  }
  if ( v7 < 0 && (get_merge_state(a1, v14) & 2) == 0 )
  {
    if ( get_jumptable_info(v30, v6) <= 0 )
    {
      v23 = &v31;
    }
    else
    {
      BYTE4(v31) = 0;
      LODWORD(v31) = -1;
      HIDWORD(v28) = v30[1];
      v26 = v30[0];
      v23 = &v31;
      sub_3FD660(a1, &v31, (unsigned int)v30[0]);
      LODWORD(v27) = v7;
      LODWORD(v28) = a2;
      while ( (_DWORD)v31 != -1 )
      {
        if ( (_DWORD)v31 != v6 )
          goto LABEL_48;
        sub_3FD7C0(a1, &v31, v26);
      }
      v40 = nullptr;
      v27 = &v39;
      v41 = 0;
      v39 = 0;
      sub_3CC010((_DWORD)a1, v26, 0);
      if ( v40 )
        v40(&v39, &v39, 3);
LABEL_48:
      del_jumptable_info(v6);
    }
    v34 = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    v31 = 0x800000;
    v33 = 0;
    v35 = 0;
    v36 = 0xFFFFFFFF00000002LL;
    ptr = nullptr;
    v38 = 0;
    if ( get_switch_info(&v31, v6) > 0 )
    {
      sub_43B790((_DWORD)a1);
      del_switch_info(v6, v6);
    }
    if ( ptr )
    {
      *(_QWORD *)&v38 = 0;
      qfree(ptr);
    }
  }
  sub_3DDB30(a1, v6, a3 & 1);
  if ( v22 && (get_merge_state(a1, v6) & 2) == 0 )
  {
    if ( (sub_614FB0(*a1, 10) & 0x10000) != 0
      && (a3 & 4) == 0
      && (v19 = v22[1], v19 == (unsigned int)sub_3BCF60((__int64)a1, v6)) )
    {
      head = prev_head(v6, *v22);
      sub_3BCF60((__int64)a1, head);
      sub_5B2CC0((int)a1, v21, (int)v22, (__int64)v23, v25, (int)v27, (int)v28, v29);
    }
    else
    {
      if ( v25 == -1 )
        v25 = sub_3BCF60((__int64)a1, v6);
      sub_5A00E0(a1, v22, v25);
      sub_5B2110(a1, v22);
    }
  }
  if ( *((_BYTE *)a1 + 96) && (v7 & 0x800) != 0 )
  {
    sub_3CB5F0(a1, v6, &byte_22CD811, 0);
    sub_3CB5F0(a1, v6, &byte_22CD811, 1u);
  }
  sub_5F0670(v6);
LABEL_9:
  v10 = (unsigned __int16)v7 & 0xC000;
  if ( v10 == 49152 )
  {
    if ( (unsigned __int8)is_public_name(v6) )
      goto LABEL_11;
LABEL_22:
    sub_4C0DE0(
      (int)a1,
      v6,
      (void *)&byte_22CD811,
      v21,
      (int)v22,
      (int)v23,
      v25,
      (int)v27,
      v28,
      v29,
      v30[0],
      v31,
      (void *)si128.m128i_i64[0],
      si128.m128i_i64[1],
      v33,
      v34,
      v35,
      v36,
      (__int64)ptr,
      v38,
      SDWORD2(v38),
      v39);
    goto LABEL_11;
  }
  if ( v10 == 0x8000 )
    goto LABEL_22;
LABEL_11:
  sub_3DD870(a1, v6);
  sub_3CB3B0(a1, v6, 0xFFFFFFFF);
  sub_3CB500((__int64)a1, v6, 162530048, 0);
  if ( !v9 )
    sub_3CA960((__int64)a1, v6, v21);
  if ( a2 != v6 )
    sub_3A1A90(a1, v6, a2, 0xC8u);
  v11 = *a1;
  *(__m128i *)((char *)a1 + 1532) = _mm_load_si128((const __m128i *)&xmmword_2383860);
  sub_356720(v11, v6, v25);
  return 1;
}

