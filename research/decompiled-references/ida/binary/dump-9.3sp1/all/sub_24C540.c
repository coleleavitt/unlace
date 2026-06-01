__int64 __fastcall sub_24C540(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5, _QWORD *a6)
{
  int v7; // eax
  __int64 v8; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int8 v34; // [rsp+8h] [rbp-140h]
  __int64 v38; // [rsp+30h] [rbp-118h] BYREF
  __int64 v39; // [rsp+38h] [rbp-110h]
  __int64 v40; // [rsp+40h] [rbp-108h]
  __int64 v41; // [rsp+48h] [rbp-100h]
  __int128 v42; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-E8h]
  int v44; // [rsp+68h] [rbp-E0h]
  __int16 v45; // [rsp+6Ch] [rbp-DCh]
  unsigned __int64 v46; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+78h] [rbp-D0h]
  __int64 v48; // [rsp+80h] [rbp-C8h]
  __int128 v49; // [rsp+88h] [rbp-C0h]
  __int64 v50; // [rsp+98h] [rbp-B0h]
  __int128 v51; // [rsp+A0h] [rbp-A8h]
  __int128 v52; // [rsp+B0h] [rbp-98h]
  __int64 v53; // [rsp+E0h] [rbp-68h]
  int v54; // [rsp+E8h] [rbp-60h]
  __int64 v55; // [rsp+F0h] [rbp-58h]
  char v56; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+108h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v7 = **(_DWORD **)(a2 + 8);
    if ( (unsigned int)(v7 - 56) > 1 && v7 != 2 )
      return 0;
  }
  v46 = 0;
  *(_QWORD *)&v42 = 0;
  v8 = sub_249AF0(a1, a3, a2, &v42, &v46, 8);
  clear_tinfo_t();
  clear_tinfo_t();
  v9 = *(_DWORD *)(v8 + 8);
  v10 = (unsigned int)(v9 - 51);
  if ( (unsigned int)v10 > 0xE )
  {
LABEL_28:
    if ( !v8 )
      return 0;
LABEL_29:
    sub_255630(v8);
    clear_tinfo_t();
    j__qfree(v8);
    return 0;
  }
  v11 = 25473;
  v34 = _bittest64(&v11, v10);
  if ( v34 )
  {
    if ( a4 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( v9 != 57 )
    goto LABEL_28;
  if ( !a4 )
  {
LABEL_32:
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
    {
      if ( !v8 )
        return 0;
      goto LABEL_29;
    }
  }
LABEL_7:
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v53 = 1;
  v54 = -1;
  v55 = 0;
  v56 = 0;
  v46 = 8 * a4;
  v49 = 0;
  v51 = 0;
  v52 = 0;
  if ( (unsigned int)find_tinfo_udt_member() != -1 && (get_tinfo_property() & 0xF) != 0xE )
  {
    v31 = j__qalloc_or_throw(64, 2, v29, v30);
    *(_QWORD *)v31 = -1;
    v27 = v31;
    *(_DWORD *)(v31 + 8) = 59;
    *(_QWORD *)(v31 + 12) = -1;
    *(_QWORD *)(v31 + 24) = v8;
    *(_QWORD *)(v31 + 32) = 0;
    *(_QWORD *)(v31 + 40) = 0;
    *(_QWORD *)(v31 + 48) = 0;
    *(_DWORD *)(v31 + 56) = 0;
    *(_DWORD *)(v31 + 32) = v46 >> 3;
    sub_2441C0(v31, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 1);
    *(_DWORD *)(v27 + 56) |= 1u;
    if ( 8 * a4 == v46 && v47 == 8 * *(_DWORD *)(a5 + 4) && (!(unsigned __int8)*a6 || (unsigned __int8)compare_tinfo()) )
      goto LABEL_20;
    a4 -= *(_DWORD *)(v27 + 32);
    v14 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v27, v32, v33);
    goto LABEL_12;
  }
  if ( !v34 || sub_11CA80(*(_DWORD *)(a2 + 4)) )
    goto LABEL_24;
  if ( *(_DWORD *)(v8 + 8) != 51 )
  {
    v14 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v8, v12, v13);
LABEL_12:
    v15 = v14;
    goto LABEL_13;
  }
  sub_255850(v8, *(_QWORD *)(v8 + 24));
  v15 = v8;
LABEL_13:
  if ( !v15 )
  {
LABEL_24:
    clear_tinfo_t();
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50);
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    goto LABEL_28;
  }
  v38 = 0;
  if ( !a4 && *(_BYTE *)a6 )
  {
    v39 = 0;
    copy_tinfo_t();
  }
  else
  {
    v39 = 17;
  }
  v40 = 0;
  v41 = 0;
  v42 = 0;
  copy_tinfo_t();
  v43 = 0;
  copy_tinfo_t();
  v44 = 0;
  v45 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v16 = *(_QWORD *)(a1 + 328);
  sub_246B40(v15, v16, &v38);
  if ( a4 )
  {
    v21 = j__qalloc_or_throw(64, v16, v17, v18);
    *(_DWORD *)(v21 + 8) = 0;
    v22 = v21;
    *(_OWORD *)(v21 + 24) = 0;
    *(_QWORD *)(v21 + 12) = -1;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 56) = 0;
    *(_QWORD *)v21 = a3;
    v23 = *(_QWORD *)(a1 + 328);
    sub_240A20(v21, v23, *(_QWORD *)(a1 + 176), a4, *(unsigned __int8 *)(v23 + 130), 1u);
    v26 = j__qalloc_or_throw(64, v23, v24, v25);
    *(_QWORD *)v26 = -1;
    *(_DWORD *)(v26 + 8) = 35;
    *(_QWORD *)(v26 + 12) = -1;
    *(_QWORD *)(v26 + 24) = v15;
    *(_QWORD *)(v26 + 32) = v22;
    *(_QWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 48) = 0;
    *(_DWORD *)(v26 + 56) = 0;
    sub_2441C0(v26, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 1);
  }
  else
  {
    v26 = v15;
  }
  v27 = sub_244320(
          *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
          v26,
          *(unsigned int *)(a5 + 4),
          (*(_BYTE *)(a5 + 1) & 4) != 0,
          v19,
          v20);
  clear_tinfo_t();
LABEL_20:
  clear_tinfo_t();
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  return v27;
}
