__int64 __fastcall sub_57AAA0(__m128i *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // ebp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 *v12; // r15
  __int64 v13; // rdx
  __int16 v14; // r14
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  char v18; // bp
  unsigned __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r12
  int item_end; // eax
  int v23; // edx
  int v24; // r14d
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r15d
  unsigned __int64 v31; // rsi
  int *v32; // rdi
  __int64 i; // rcx
  __int64 v34; // rsi
  int v35; // [rsp+0h] [rbp-78h]
  int v36; // [rsp+8h] [rbp-70h]
  int v37[4]; // [rsp+10h] [rbp-68h] BYREF
  int v38[2]; // [rsp+20h] [rbp-58h]
  int v39[2]; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( !a2 || !a3 || a1[98].m128i_i8[10] )
    return 0;
  a1[98].m128i_i8[10] = 1;
  v10 = *(_QWORD *)(a3 + 16);
  v36 = (_DWORD)a1 + 1624;
  v11 = v10 + *(unsigned __int16 *)(a3 + 26);
  v12 = sub_505D70((__int64)&a1[101].m128i_i64[1], v10);
  if ( v12 == sub_505D70((__int64)&a1[101].m128i_i64[1], v11) )
  {
    v17 = sub_3BE900(a1, v11, 4);
    LOBYTE(v13) = 0;
    v14 = v17;
    if ( (v17 & 0x1000) == 0 )
      LOBYTE(v13) = (v17 & 0x600) != 1024;
    v13 = (unsigned __int8)v13;
    if ( !a4 )
    {
LABEL_15:
      if ( (*(_BYTE *)(a3 + 34) & 2) != 0 && (v14 & 0x600) == 0x200 )
      {
        v18 = sub_3D68E0((int)a1, v35, v36, 0, 0, 0, 0, v40);
        if ( *(_QWORD *)v38 )
          (*(void (__fastcall **)(int *, int *, __int64))v38)(v37, v37, 3);
        if ( v18 )
        {
          v19 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
          if ( (sub_3BE900(a1, v19, 4) & 0x600) == 0x200 )
            v19 = sub_3C2650(a1, v19);
          if ( (sub_3BE900(a1, v19, 4) & 0x600) != 0x400 )
          {
            v6 = 0;
            sub_573AA0(a1->m128i_i64, a3);
            goto LABEL_24;
          }
        }
      }
LABEL_27:
      a1[98].m128i_i8[10] = 0;
      return 0;
    }
  }
  else
  {
    if ( !a4 )
      goto LABEL_27;
    v13 = 0;
    v14 = 0;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, a3, v13);
  if ( !(_BYTE)v6 )
    goto LABEL_15;
  v16 = *(_WORD *)(a3 + 34);
  *(_WORD *)(a3 + 34) = v16 | 1;
  if ( (v16 & 2) == 0 )
    goto LABEL_11;
  v21 = *(_QWORD *)(a3 + 16);
  item_end = get_item_end(v21, a3, v16 | 1u, v15);
  v23 = *(unsigned __int16 *)(a3 + 26);
  v24 = item_end - v21;
  if ( v23 == item_end - (_DWORD)v21 )
    goto LABEL_11;
  v25 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)v37 = 0;
  *(_QWORD *)v38 = 0;
  *(_QWORD *)v39 = 0;
  v30 = sub_3D4AC0(a1, v25, (unsigned __int16)v23, (int *)&elf_gnu_hash_indexes[107], (const __m128i *)v37);
  if ( *(_QWORD *)v38 )
    (*(void (__fastcall **)(int *, int *, __int64))v38)(v37, v37, 3);
  v31 = *(_QWORD *)(a3 + 16);
  if ( !(_BYTE)v30 )
  {
    *(_QWORD *)(a3 + 16) = -1;
    decode_insn(a3, v31, v26, v27, v28, v29, 0.0);
LABEL_11:
    a1[98].m128i_i8[10] = 0;
    return v6;
  }
  if ( (~((unsigned __int16)sub_3BE900(a1, v31, 4) >> 8) & 6) != 0 )
    goto LABEL_11;
  if ( *(unsigned __int16 *)(a3 + 26) > v24 )
  {
    v32 = v37;
    for ( i = 6; i; --i )
      *v32++ = 0;
    v34 = *(_QWORD *)(a3 + 16) + v24;
    *(_QWORD *)v39 = 0;
    sub_3D19E0((_DWORD)a1, v34);
    sub_377BA0((__int64)v37);
  }
  v6 = v30;
LABEL_24:
  a1[98].m128i_i8[10] = 0;
  sub_3D68E0((int)a1, v35, v36, 0, 0, 0, 0, v40);
  if ( *(_QWORD *)v38 )
    (*(void (__fastcall **)(int *, int *, __int64))v38)(v37, v37, 3);
  v20 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
  auto_mark_range(v20, v20 + 1, 20);
  sub_3A61A0(a1, *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 16) + 1LL, 0x28u);
  return v6;
}
