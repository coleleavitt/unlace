unsigned __int64 __fastcall sub_43C2A0(__m128i *a1, unsigned int a2, int *a3)
{
  int v4; // eax
  int v6; // r15d
  int v7; // eax
  int v8; // ebp
  __int64 v9; // r13
  unsigned int v10; // ebx
  int flags_by_size; // eax
  int v12; // edx
  int v13; // r13d
  int v14; // ebp
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int8 reftype_by_size; // al
  int v21; // ecx
  int v22; // edi
  int v23; // r8d
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  unsigned int segm_base; // eax
  char v28; // al
  int v29; // [rsp+0h] [rbp-98h]
  unsigned int v30; // [rsp+4h] [rbp-94h]
  int v31[2]; // [rsp+8h] [rbp-90h]
  int v32[2]; // [rsp+8h] [rbp-90h]
  int v33; // [rsp+10h] [rbp-88h]
  int v34; // [rsp+14h] [rbp-84h] BYREF
  _BOOL4 v35; // [rsp+18h] [rbp-80h]
  int v36; // [rsp+1Ch] [rbp-7Ch]
  int v37[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v38[2]; // [rsp+30h] [rbp-68h] BYREF
  int v39[2]; // [rsp+40h] [rbp-58h]
  void *ptr; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]
  int v42[2]; // [rsp+58h] [rbp-40h]
  __int64 v43; // [rsp+60h] [rbp-38h]

  v4 = *a3;
  *(_QWORD *)v42 = __readfsqword(0x28u);
  if ( (v4 & 0x10000) != 0 )
  {
    v6 = a3[6] - (((v4 & 0x20) == 0) - 1);
    goto LABEL_3;
  }
  v6 = *((unsigned __int16 *)a3 + 2);
  if ( (v4 & 0x20) == 0 )
  {
LABEL_3:
    if ( v6 <= 0 )
      return *(_QWORD *)v42 - __readfsqword(0x28u);
    v7 = v4 & 0x404;
    if ( v7 )
      goto LABEL_5;
LABEL_21:
    v30 = 2;
    v8 = 2 * v6;
    v9 = 2;
    goto LABEL_8;
  }
  ++v6;
  v7 = v4 & 0x404;
  if ( !v7 )
    goto LABEL_21;
LABEL_5:
  if ( v7 == 4 )
  {
    v30 = 4;
    v8 = 4 * v6;
    v9 = 4;
  }
  else if ( v7 == 1024 )
  {
    v30 = 1;
    v8 = v6;
    v9 = 1;
  }
  else
  {
    v30 = 8;
    v8 = 8 * v6;
    v9 = 8;
  }
LABEL_8:
  v10 = a3[2];
  sub_43BE50(a1, v10, v8);
  flags_by_size = get_flags_by_size(v9);
  v12 = *a3;
  v13 = flags_by_size;
  *(_OWORD *)v37 = 0;
  if ( (v12 & 0x180) != 0 )
    goto LABEL_9;
  v18 = sub_4EE820(*(_QWORD *)(a1->m128i_i64[0] + 1480) + 1552LL, a2);
  v19 = v18;
  if ( v18 )
  {
    *(_QWORD *)v32 = v18;
    reftype_by_size = get_reftype_by_size((1 << (*(_BYTE *)(v18 + 23) + 4)) / 8);
    v12 = *a3;
    v21 = v37[3];
    v19 = *(_QWORD *)v32;
    v22 = reftype_by_size;
    if ( (*a3 & 0x2000) != 0 )
    {
      v22 = 1;
      v23 = *a3 & 0x404;
      if ( (v12 & 0x404) != 0 )
      {
        if ( v23 == 4 )
        {
          v22 = 2;
        }
        else
        {
          v22 = 10;
          if ( v23 != 1024 )
            v22 = reftype_by_size;
        }
      }
      BYTE1(v21) = BYTE1(v37[3]) | 2;
    }
  }
  else
  {
    v21 = v37[3];
    v12 = *a3;
    v22 = 2;
  }
  v37[3] = v22 | v21 & 0xFFFFFFB0;
  if ( (v12 & 0x200000) != 0 )
  {
    if ( (v12 & 0x20000) != 0 )
      v37[3] |= 0x100u;
    v37[0] = -1;
    v37[2] = 0;
    *(_QWORD *)v31 = v13;
    goto LABEL_10;
  }
  if ( (v12 & 0x200) == 0 )
  {
    if ( !v19 )
      goto LABEL_47;
    segm_base = get_segm_base(v19);
    v12 = *a3;
    if ( !segm_base )
      goto LABEL_47;
    v37[1] = segm_base;
    if ( (v12 & 0x200) == 0 )
    {
      v28 = is_mapped(segm_base);
      v12 = *a3;
      if ( v28 )
        goto LABEL_47;
    }
    goto LABEL_46;
  }
  if ( a3[8] )
  {
    v37[1] = a3[8];
LABEL_46:
    v37[3] |= 0x80u;
  }
LABEL_47:
  if ( (v12 & 0x20000) != 0 )
    v37[3] |= 0x100u;
  v37[0] = -1;
  v37[2] = 0;
LABEL_9:
  *(_QWORD *)v31 = v13;
  if ( (v12 & 0x201000) != 0 )
  {
LABEL_10:
    v14 = 0;
    do
    {
      *(_OWORD *)v38 = 0;
      *(_QWORD *)v39 = 0;
      ptr = nullptr;
      sub_3CE970(a1->m128i_i64, v10, *(void **)v31, v30, -1, (const __m128i *)v38);
      if ( *(_QWORD *)v39 )
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v39)(v38, v38, 3);
      if ( (*a3 & 0x180) == 0 )
      {
        if ( (*a3 & 0x200000) != 0 )
          v37[1] = v10;
        sub_4CADA0(
          (int)a1,
          v10,
          0,
          (int)v37,
          v15,
          v16,
          v29,
          v31[0],
          v33,
          v35,
          v37[0],
          v37[2],
          v38[0],
          v38[1],
          v39[0],
          ptr,
          v41,
          v42[0],
          v43);
      }
      ++v14;
      v10 += v30;
    }
    while ( v14 != v6 );
    return *(_QWORD *)v42 - __readfsqword(0x28u);
  }
  *(_QWORD *)v39 = 0;
  ptr = nullptr;
  *(_OWORD *)v38 = 0;
  sub_3CE970(a1->m128i_i64, v10, (void *)v13, v8, -1, (const __m128i *)v38);
  if ( *(_QWORD *)v39 )
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v39)(v38, v38, 3);
  if ( (*(_WORD *)a3 & 0x180) == 0 )
    sub_4CADA0(
      (int)a1,
      v10,
      0,
      (int)v37,
      v24,
      v25,
      v29,
      v13,
      v33,
      v35,
      v37[0],
      v37[2],
      v38[0],
      v38[1],
      v39[0],
      ptr,
      v41,
      v42[0],
      v43);
  if ( get_array_parameters(0, v10) <= 0 )
  {
    v34 = 0;
    v35 = v6 <= 50;
    v26 = 6;
    if ( v6 >= 51 )
      v26 = -1;
    v36 = v26;
    set_array_parameters(v10, &v34);
  }
  return *(_QWORD *)v42 - __readfsqword(0x28u);
}

