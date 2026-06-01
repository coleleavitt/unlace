__int64 __fastcall sub_48BC30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r8
  __int64 v5; // r14
  unsigned __int64 dir_size; // rax
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbp
  char v11; // r12
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // r14
  char v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v26; // rax
  __int64 (__fastcall *v27)(__int64); // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // [rsp+8h] [rbp-B0h]
  _QWORD *v33; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-B0h]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  _QWORD *v37; // [rsp+10h] [rbp-A8h]
  _QWORD *v38; // [rsp+10h] [rbp-A8h]
  __int64 v39; // [rsp+28h] [rbp-90h]
  __int64 v40; // [rsp+30h] [rbp-88h]
  __int64 v41; // [rsp+38h] [rbp-80h]
  __int64 v42; // [rsp+40h] [rbp-78h] BYREF
  __int64 v43; // [rsp+48h] [rbp-70h]
  _QWORD v44[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v45; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  v3 = a2;
  v4 = (_QWORD *)a1[27];
  v46 = __readfsqword(0x28u);
  v5 = a3;
  if ( !v4 )
    v4 = (_QWORD *)a1[26];
  *(_QWORD *)(a2 + 88) = v4;
  *(_QWORD *)(a2 + 56) = a3;
  *(_BYTE *)(a2 + 64) = 1;
  v43 = -1;
  v42 = a3;
  v32 = v4;
  dir_size = dirtree_get_dir_size(*v4);
  v7 = v32;
  v8 = dir_size;
  v39 = a2 + 8;
  if ( *(_QWORD *)(a2 + 24) < dir_size )
  {
    v38 = v32;
    v35 = dir_size;
    v31 = qvector_reserve(a2 + 8, *(_QWORD *)(a2 + 8), dir_size, 9);
    v7 = v38;
    v8 = v35;
    *(_QWORD *)(a2 + 8) = v31;
  }
  v40 = a2 + 32;
  if ( *(_QWORD *)(a2 + 48) < (unsigned __int64)v8 )
  {
    v37 = v7;
    v34 = v8;
    v30 = qvector_reserve(a2 + 32, *(_QWORD *)(a2 + 32), v8, 8);
    v7 = v37;
    v8 = v34;
    *(_QWORD *)(a2 + 32) = v30;
  }
  v9 = 0;
  if ( v8 > 0 )
  {
    v33 = v7;
    v36 = v8;
    v41 = v5;
    while ( 1 )
    {
      v43 = v9;
      v20 = *v33;
      BYTE8(v45) = 0;
      *(_QWORD *)&v45 = -1;
      dirtree_resolve_cursor(&v45, v20, &v42);
      v21 = v45;
      v22 = BYTE8(v45);
      if ( (_QWORD)v45 == -1 )
        break;
      v11 = BYTE8(v45);
      if ( !BYTE8(v45) )
        goto LABEL_13;
      v12 = *(__int64 (__fastcall **)(__int64))(*a1 + 496LL);
      if ( !(v12 == sub_4866D0 ? sub_4DFF10(a1[2]) : (unsigned __int8)v12((__int64)a1)) )
        goto LABEL_13;
      v26 = (_QWORD *)sub_4E07A0(a1[2], v21);
      if ( v26 )
      {
        v27 = *(__int64 (__fastcall **)(__int64))(*v26 + 24LL);
        if ( v27 == folder_data_t__::vfunc_3 ? v26[2] : v27((__int64)v26) )
          goto LABEL_13;
      }
LABEL_19:
      if ( v36 == ++v9 )
      {
        v7 = v33;
        v5 = v41;
        v3 = a2;
        goto LABEL_23;
      }
    }
    v11 = 0;
LABEL_13:
    v14 = *(_QWORD *)(a2 + 16);
    v15 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v14 + 1) )
    {
      v24 = qvector_reserve(v39, v15, v14 + 1, 9);
      *(_QWORD *)(a2 + 8) = v24;
      v15 = v24;
      v14 = *(_QWORD *)(a2 + 16);
    }
    v16 = v15 + 9 * v14;
    *(_QWORD *)v16 = v21;
    *(_BYTE *)(v16 + 8) = v22;
    v17 = *(_QWORD *)(a2 + 40);
    v18 = *(_QWORD *)(a2 + 48);
    v19 = *(_QWORD *)(a2 + 32);
    v44[0] = v9;
    ++*(_QWORD *)(a2 + 16);
    if ( v18 < v17 + 1 )
    {
      v23 = qvector_reserve(v40, v19, v17 + 1, 8);
      *(_QWORD *)(a2 + 32) = v23;
      v19 = v23;
      v17 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)(v19 + 8 * v17) = v9;
    ++*(_QWORD *)(a2 + 40);
    if ( v11 )
      ++*(_QWORD *)(a2 + 80);
    goto LABEL_19;
  }
LABEL_23:
  if ( *(_QWORD *)(v3 + 56) != -1 )
  {
    if ( *(_BYTE *)(v3 + 64) )
    {
      v44[0] = v5;
      v44[1] = -1;
      v29 = *v7;
      v45 = -1;
      dirtree_get_parent_cursor(&v45, v29, v44);
      if ( (_QWORD)v45 != -1 || !*((_QWORD *)&v45 + 1) )
      {
        *(_QWORD *)(v3 + 65) = v45;
        *(_BYTE *)(v3 + 73) = 1;
      }
    }
  }
  return v3;
}
