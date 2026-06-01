__int64 __fastcall sub_561180(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // ebp
  __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned int *v12; // r15
  __int64 v13; // rdx
  __int16 v14; // r14
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int16 v17; // ax
  char v18; // bp
  unsigned int v19; // ebp
  __int64 v20; // rdi
  unsigned int v21; // r12d
  int item_end; // eax
  int v23; // edx
  int v24; // r14d
  unsigned int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r15d
  __int64 v31; // rsi
  int *v32; // rdi
  __int64 v33; // rcx
  int v34; // esi
  int v35; // [rsp+0h] [rbp-78h]
  int v36; // [rsp+8h] [rbp-70h]
  int v37[4]; // [rsp+10h] [rbp-68h] BYREF
  int v38[2]; // [rsp+20h] [rbp-58h]
  int v39[2]; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( !a2 || !a3 || *(_BYTE *)(a1 + 1530) )
    return 0;
  *(_BYTE *)(a1 + 1530) = 1;
  v10 = *(unsigned int *)(a3 + 8);
  v36 = a1 + 1552;
  v11 = v10 + *(unsigned __int16 *)(a3 + 14);
  v12 = sub_4EE820(a1 + 1552, v10);
  if ( v12 == sub_4EE820(a1 + 1552, v11) )
  {
    v17 = sub_3B9AA0(a1, v11, 4);
    LOBYTE(v13) = 0;
    v14 = v17;
    if ( (v17 & 0x1000) == 0 )
      LOBYTE(v13) = (v17 & 0x600) != 1024;
    v13 = (unsigned __int8)v13;
    if ( !a4 )
    {
LABEL_15:
      if ( (*(_BYTE *)(a3 + 22) & 2) != 0 && (v14 & 0x600) == 0x200 )
      {
        v18 = sub_3D0CF0(a1, v35, v36, 0, 0, 0, 0, v40);
        if ( *(_QWORD *)v38 )
          (*(void (__fastcall **)(int *, int *, __int64))v38)(v37, v37, 3);
        if ( v18 )
        {
          v19 = *(_DWORD *)(a3 + 8) + *(unsigned __int16 *)(a3 + 14);
          if ( (sub_3B9AA0(a1, v19, 4) & 0x600) == 0x200 )
            v19 = sub_3BD5D0(a1, v19);
          if ( (sub_3B9AA0(a1, v19, 4) & 0x600) != 0x400 )
          {
            v6 = 0;
            sub_559F10((_QWORD *)a1, a3);
            goto LABEL_24;
          }
        }
      }
LABEL_27:
      *(_BYTE *)(a1 + 1530) = 0;
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
  v16 = *(_WORD *)(a3 + 22);
  *(_WORD *)(a3 + 22) = v16 | 1;
  if ( (v16 & 2) == 0 )
    goto LABEL_11;
  v21 = *(_DWORD *)(a3 + 8);
  item_end = get_item_end(v21, a3, v16 | 1u, v15);
  v23 = *(unsigned __int16 *)(a3 + 14);
  v24 = item_end - v21;
  if ( v23 == item_end - v21 )
    goto LABEL_11;
  v25 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)v38 = 0;
  *(_QWORD *)v39 = 0;
  *(_OWORD *)v37 = 0;
  v30 = sub_3CEFB0((__int64 *)a1, v25, v23, (int *)&elf_gnu_hash_indexes[107], (const __m128i *)v37);
  if ( *(_QWORD *)v38 )
    (*(void (__fastcall **)(int *, int *, __int64))v38)(v37, v37, 3);
  v31 = *(unsigned int *)(a3 + 8);
  if ( !(_BYTE)v30 )
  {
    *(_DWORD *)(a3 + 8) = -1;
    decode_insn(a3, v31, v26, v27, v28, v29);
LABEL_11:
    *(_BYTE *)(a1 + 1530) = 0;
    return v6;
  }
  if ( (~((unsigned __int16)sub_3B9AA0(a1, v31, 4) >> 8) & 6) != 0 )
    goto LABEL_11;
  if ( *(unsigned __int16 *)(a3 + 14) > v24 )
  {
    v32 = v37;
    v33 = 6;
    v34 = *(_DWORD *)(a3 + 8);
    while ( v33 )
    {
      *v32++ = 0;
      --v33;
    }
    *(_QWORD *)v39 = 0;
    sub_3CC010(a1, v24 + v34, 4);
    sub_374250((__int64)v37);
  }
  v6 = v30;
LABEL_24:
  *(_BYTE *)(a1 + 1530) = 0;
  sub_3D0CF0(a1, v35, v36, 0, 0, 0, 0, v40);
  if ( *(_QWORD *)v38 )
    (*(void (__fastcall **)(int *, int *, __int64))v38)(v37, v37, 3);
  v20 = *(_DWORD *)(a3 + 8) + (unsigned int)*(unsigned __int16 *)(a3 + 14);
  auto_mark_range(v20, (unsigned int)(v20 + 1), 20);
  sub_3A1A90((_QWORD *)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 8) + 1, 0x28u);
  return v6;
}

