unsigned __int64 __fastcall sub_4501C0(__m128i *a1, __int64 a2, int *a3)
{
  int v4; // eax
  int v6; // r15d
  int v7; // eax
  int v8; // ebx
  int flags_by_size; // eax
  int v10; // edx
  int v11; // r12d
  int v12; // r12d
  int v13; // ebp
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int8 reftype_by_size; // al
  int v20; // ecx
  int v21; // esi
  int v22; // edi
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  __int64 segm_base; // rax
  char v27; // al
  int v28; // [rsp+0h] [rbp-C8h]
  int *v29; // [rsp+8h] [rbp-C0h]
  char *v30; // [rsp+10h] [rbp-B8h]
  char *v31; // [rsp+18h] [rbp-B0h]
  __int64 v32; // [rsp+20h] [rbp-A8h]
  void *v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+30h] [rbp-98h] BYREF
  _BOOL4 v35; // [rsp+38h] [rbp-90h]
  int v36; // [rsp+3Ch] [rbp-8Ch]
  __int64 v37[2]; // [rsp+40h] [rbp-88h] BYREF
  int v38[4]; // [rsp+50h] [rbp-78h]
  int v39[4]; // [rsp+60h] [rbp-68h] BYREF
  int v40[2]; // [rsp+70h] [rbp-58h]
  int v41[2]; // [rsp+78h] [rbp-50h]
  int v42; // [rsp+80h] [rbp-48h]
  int v43[2]; // [rsp+88h] [rbp-40h]
  __int64 v44; // [rsp+90h] [rbp-38h]

  v4 = *a3;
  *(_QWORD *)v43 = __readfsqword(0x28u);
  if ( (v4 & 0x10000) != 0 )
  {
    v6 = a3[10] - (((v4 & 0x20) == 0) - 1);
    goto LABEL_3;
  }
  v6 = *((unsigned __int16 *)a3 + 2);
  if ( (v4 & 0x20) == 0 )
  {
LABEL_3:
    if ( v6 <= 0 )
      return *(_QWORD *)v43 - __readfsqword(0x28u);
    v7 = v4 & 0x404;
    if ( v7 )
      goto LABEL_5;
LABEL_21:
    v30 = (_BYTE *)(&dword_0 + 2);
    v8 = 2 * v6;
    HIDWORD(v33) = 2;
    goto LABEL_8;
  }
  ++v6;
  v7 = v4 & 0x404;
  if ( !v7 )
    goto LABEL_21;
LABEL_5:
  if ( v7 == 4 )
  {
    HIDWORD(v33) = 4;
    v8 = 4 * v6;
    v30 = &byte_4;
  }
  else if ( v7 == 1024 )
  {
    v30 = (_BYTE *)(&dword_0 + 1);
    v8 = v6;
    HIDWORD(v33) = 1;
  }
  else
  {
    HIDWORD(v33) = 8;
    v8 = 8 * v6;
    v30 = &byte_8;
  }
LABEL_8:
  v31 = *((char **)a3 + 1);
  sub_44FD20(a1, v31, v8);
  flags_by_size = get_flags_by_size(v30);
  v10 = *a3;
  v11 = flags_by_size;
  *(_OWORD *)v37 = 0;
  *(_OWORD *)v38 = 0;
  if ( (v10 & 0x180) != 0 )
    goto LABEL_9;
  v17 = sub_505D70(*(_QWORD *)(a1->m128i_i64[0] + 1672) + 1624LL, a2);
  v18 = v17;
  if ( v17 )
  {
    reftype_by_size = get_reftype_by_size((1 << (*(_BYTE *)(v17 + 43) + 4)) / 8);
    v10 = *a3;
    v20 = v38[2];
    v21 = reftype_by_size;
    if ( (*a3 & 0x2000) != 0 )
    {
      v21 = 1;
      v22 = *a3 & 0x404;
      if ( (v10 & 0x404) != 0 )
      {
        if ( v22 == 4 )
        {
          v21 = 2;
        }
        else
        {
          v21 = 10;
          if ( v22 != 1024 )
            v21 = reftype_by_size;
        }
      }
      BYTE1(v20) = BYTE1(v38[2]) | 2;
    }
  }
  else
  {
    v20 = v38[2];
    v10 = *a3;
    v21 = 2;
  }
  v38[2] = v21 | v20 & 0xFFFFFFB0;
  if ( (v10 & 0x200000) != 0 )
  {
    if ( (v10 & 0x20000) != 0 )
      v38[2] |= 0x100u;
    v37[0] = -1;
    *(_QWORD *)v38 = 0;
    v32 = v11;
    goto LABEL_10;
  }
  if ( (v10 & 0x200) == 0 )
  {
    if ( !v18 )
      goto LABEL_47;
    segm_base = get_segm_base(v18);
    v10 = *a3;
    if ( !segm_base )
      goto LABEL_47;
    v37[1] = segm_base;
    if ( (v10 & 0x200) == 0 )
    {
      v27 = is_mapped(segm_base);
      v10 = *a3;
      if ( v27 )
        goto LABEL_47;
    }
    goto LABEL_46;
  }
  if ( *((_QWORD *)a3 + 7) )
  {
    v37[1] = *((_QWORD *)a3 + 7);
LABEL_46:
    v38[2] |= 0x80u;
  }
LABEL_47:
  if ( (v10 & 0x20000) != 0 )
    v38[2] |= 0x100u;
  v37[0] = -1;
  *(_QWORD *)v38 = 0;
LABEL_9:
  v32 = v11;
  if ( (v10 & 0x201000) != 0 )
  {
LABEL_10:
    v12 = 0;
    v13 = 0;
    v29 = v39;
    do
    {
      *(_OWORD *)v39 = 0;
      *(_QWORD *)v40 = 0;
      *(_QWORD *)v41 = 0;
      sub_3D4400(a1->m128i_i64, (__int64 *)&v31[v12], v32, v30, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v29);
      if ( *(_QWORD *)v40 )
        (*(void (__fastcall **)(int *, int *, __int64))v40)(v29, v29, 3);
      if ( (*a3 & 0x180) == 0 )
      {
        if ( (*a3 & 0x200000) != 0 )
          v37[1] = (__int64)&v31[v12];
        sub_4E2470(
          (int)a1,
          (_DWORD)v31 + v12,
          0,
          (int)v37,
          v14,
          v15,
          v28,
          (int)v29,
          (int)v30,
          (int)v31,
          v32,
          v33,
          v34,
          v35,
          v37[0],
          v37[1],
          v38[0],
          v38[2],
          v39[0],
          v39[2],
          v40[0],
          v41[0],
          v42,
          v43[0],
          v44);
      }
      ++v13;
      v12 += HIDWORD(v33);
    }
    while ( v13 != v6 );
    return *(_QWORD *)v43 - __readfsqword(0x28u);
  }
  *(_OWORD *)v39 = 0;
  *(_QWORD *)v40 = 0;
  *(_QWORD *)v41 = 0;
  sub_3D4400(a1->m128i_i64, (__int64 *)v31, v11, (char *)v8, (void *)0xFFFFFFFFFFFFFFFFLL, (const __m128i *)v39);
  if ( *(_QWORD *)v40 )
    (*(void (__fastcall **)(int *, int *, __int64))v40)(v39, v39, 3);
  if ( (*(_WORD *)a3 & 0x180) == 0 )
    sub_4E2470(
      (int)a1,
      (int)v31,
      0,
      (int)v37,
      v23,
      v24,
      v28,
      (int)v39,
      (int)v30,
      (int)v31,
      v11,
      v33,
      v34,
      v35,
      v37[0],
      v37[1],
      v38[0],
      v38[2],
      v39[0],
      v39[2],
      v40[0],
      v41[0],
      v42,
      v43[0],
      v44);
  if ( get_array_parameters(0, v31) <= 0 )
  {
    HIDWORD(v34) = 0;
    v35 = v6 <= 50;
    v25 = 6;
    if ( v6 >= 51 )
      v25 = -1;
    v36 = v25;
    set_array_parameters(v31, (char *)&v34 + 4);
  }
  return *(_QWORD *)v43 - __readfsqword(0x28u);
}
