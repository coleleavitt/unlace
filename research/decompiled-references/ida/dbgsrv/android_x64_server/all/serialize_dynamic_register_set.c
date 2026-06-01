/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_dynamic_register_set
// Address: 0x00000000000B4440

//----- (00000000000B4440) ----------------------------------------------------
unsigned __int64 __fastcall serialize_dynamic_register_set(__int64 a1, __int64 *a2)
{
  __int64 v2; // r15
  _BYTE *v3; // rax
  __int64 v4; // r12
  _BYTE *v6; // rax
  __int64 i; // rbx
  const char *v8; // rbp
  size_t v9; // rax
  unsigned __int64 v10; // r12
  __int64 **v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 **v13; // r14
  unsigned __int64 v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  _BYTE *v17; // rax
  __int64 v18; // rbx
  unsigned __int64 j; // r15
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 **v22; // r14
  __int64 **v23; // rbx
  __int64 *v24; // rcx
  __int64 *v25; // rcx
  __int64 *v26; // rax
  __int64 *v27; // r12
  unsigned int v28; // ebx
  char v29; // al
  _BYTE *v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 k; // rbp
  const char *v33; // rbx
  size_t v34; // rax
  _BYTE *v35; // rax
  unsigned __int64 m; // r15
  unsigned int v37; // ecx
  __int64 v38; // r14
  const char *v39; // rbp
  size_t v40; // rax
  _BYTE *v41; // rax
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int128 *v46; // rax
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  _BYTE *v49; // rax
  __int64 v51; // [rsp+0h] [rbp-98h]
  unsigned __int64 v52; // [rsp+8h] [rbp-90h]
  __int64 v53; // [rsp+10h] [rbp-88h]
  __int128 *v54; // [rsp+20h] [rbp-78h] BYREF
  __int128 v55; // [rsp+28h] [rbp-70h] BYREF
  __int128 *v56; // [rsp+38h] [rbp-60h] BYREF
  __int128 v57; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v58[5]; // [rsp+56h] [rbp-42h] BYREF
  _BYTE v59[5]; // [rsp+5Bh] [rbp-3Dh] BYREF
  unsigned __int64 v60[7]; // [rsp+60h] [rbp-38h] BYREF

  v60[0] = __readfsqword(0x28u);
  v52 = a2[1];
  if ( !v52 )
    return __readfsqword(0x28u);
  if ( !*a2 )
    return __readfsqword(0x28u);
  v2 = a2[6];
  if ( !v2 )
    return __readfsqword(0x28u);
  v51 = *a2;
  v3 = pack_dd(v58, (unsigned __int64)v59, 0xFFFFFF01);
  sub_56350(a1, v58, v3 - v58);
  v4 = -1;
  while ( *(_QWORD *)(v2 + 8 * v4++ + 8) != 0 )
    ;
  v6 = pack_dd(v58, (unsigned __int64)v59, v4);
  sub_56350(a1, v58, v6 - v58);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v8 = *(const char **)(v2 + 8 * i);
      if ( !v8 )
        v8 = &byte_EB522;
      v9 = strlen(v8);
      sub_56350(a1, v8, v9 + 1);
    }
  }
  v57 = 0;
  v56 = &v57;
  v10 = 0;
  v53 = 0;
  do
  {
    v12 = *(_QWORD *)(v51 + 32 * v10 + 16);
    if ( !v12 )
      goto LABEL_29;
    if ( (_QWORD)v57 )
    {
      v13 = (__int64 **)v57;
      v11 = (__int64 **)&v57;
      while ( 1 )
      {
        v14 = (unsigned __int64)v13[4];
        if ( v12 >= v14 )
        {
          if ( v14 >= v12 || (v11 = v13 + 1, (v15 = v13[1]) == nullptr) )
          {
            if ( !*v11 )
              goto LABEL_26;
            goto LABEL_29;
          }
        }
        else
        {
          v15 = *v13;
          v11 = v13;
          if ( !*v13 )
          {
            v11 = v13;
            if ( *v13 )
              goto LABEL_29;
            goto LABEL_26;
          }
        }
        v13 = (__int64 **)v15;
      }
    }
    v13 = (__int64 **)&v57;
    v11 = (__int64 **)&v57;
LABEL_26:
    v16 = (__int64 *)operator new(0x30u);
    v16[4] = v12;
    v16[5] = v53;
    *(_OWORD *)v16 = 0;
    v16[2] = (__int64)v13;
    *v11 = v16;
    if ( *(_QWORD *)v56 )
    {
      v56 = *(__int128 **)v56;
      v16 = *v11;
    }
    sub_4A450((__int64 *)v57, v16);
    ++*((_QWORD *)&v57 + 1);
    ++v53;
LABEL_29:
    ++v10;
  }
  while ( v10 < v52 );
  v55 = 0;
  v54 = &v55;
  v17 = pack_dd(v58, (unsigned __int64)v59, v53);
  v18 = v51;
  sub_56350(a1, v58, v17 - v58);
  for ( j = 0; j < v52; ++j )
  {
    v20 = 32 * j;
    v21 = *(_QWORD *)(v18 + 32 * j + 16);
    if ( !v21 )
      goto LABEL_54;
    v22 = (__int64 **)v55;
    if ( !(_QWORD)v55 )
    {
      v22 = (__int64 **)&v55;
      v23 = (__int64 **)&v55;
      goto LABEL_44;
    }
    v23 = (__int64 **)&v55;
    while ( 1 )
    {
      v24 = v22[4];
      if ( v21 < (unsigned __int64)v24 )
        break;
      if ( (unsigned __int64)v24 >= v21 || (v23 = v22 + 1, (v25 = v22[1]) == nullptr) )
      {
        if ( *v23 )
          goto LABEL_54;
        goto LABEL_44;
      }
LABEL_34:
      v22 = (__int64 **)v25;
    }
    v25 = *v22;
    v23 = v22;
    if ( *v22 )
      goto LABEL_34;
    v23 = v22;
    if ( *v22 )
      goto LABEL_54;
LABEL_44:
    v26 = (__int64 *)operator new(0x28u);
    v27 = (__int64 *)(v51 + v20 + 16);
    v26[4] = *v27;
    *(_OWORD *)v26 = 0;
    v26[2] = (__int64)v22;
    *v23 = v26;
    if ( *(_QWORD *)v54 )
    {
      v54 = *(__int128 **)v54;
      v26 = *v23;
    }
    sub_4A450((__int64 *)v55, v26);
    ++*((_QWORD *)&v55 + 1);
    v28 = 1;
    if ( (*(_BYTE *)(v51 + v20 + 9) & 1) == 0 )
    {
      v29 = *(_BYTE *)(v51 + v20 + 13);
      v28 = 16;
      if ( v29 != 1 )
      {
        if ( v29 != 2 )
        {
          if ( !(_BYTE)under_debugger )
            interr(1783);
          BUG();
        }
        v28 = 32;
      }
    }
    v30 = pack_dd(v58, (unsigned __int64)v59, v28);
    sub_56350(a1, v58, v30 - v58);
    v31 = v28;
    for ( k = 0; k < v31; ++k )
    {
      v33 = &byte_EB522;
      if ( *(_QWORD *)(*v27 + 8 * k) )
        v33 = *(const char **)(*v27 + 8 * k);
      v34 = strlen(v33);
      sub_56350(a1, v33, v34 + 1);
    }
LABEL_54:
    v18 = v51;
  }
  v35 = pack_dd(v58, (unsigned __int64)v59, v52);
  sub_56350(a1, v58, v35 - v58);
  for ( m = 0; m < v52; ++m )
  {
    v38 = 32 * m;
    v39 = *(const char **)(v51 + 32 * m);
    if ( !v39 )
      v39 = &byte_EB522;
    v40 = strlen(v39);
    sub_56350(a1, v39, v40 + 1);
    v41 = pack_dd(v58, (unsigned __int64)v59, *(_DWORD *)(v51 + v38 + 8));
    sub_56350(a1, v58, v41 - v58);
    v42 = pack_dd(v58, (unsigned __int64)v59, *(unsigned __int8 *)(v51 + v38 + 12));
    sub_56350(a1, v58, v42 - v58);
    v43 = pack_dd(v58, (unsigned __int64)v59, *(unsigned __int8 *)(v51 + v38 + 13));
    sub_56350(a1, v58, v43 - v58);
    v44 = v57;
    if ( !(_QWORD)v57 )
      goto LABEL_66;
    v45 = *(_QWORD *)(v51 + v38 + 16);
    v46 = &v57;
    do
    {
      if ( *(_QWORD *)(v44 + 32) >= v45 )
        v46 = (__int128 *)v44;
      v44 = *(_QWORD *)(v44 + 8LL * (*(_QWORD *)(v44 + 32) < v45));
    }
    while ( v44 );
    if ( v46 != &v57 && v45 >= *((_QWORD *)v46 + 4) )
      v37 = *((_QWORD *)v46 + 5) + 1;
    else
LABEL_66:
      v37 = 0;
    v47 = pack_dd(v58, (unsigned __int64)v59, v37);
    sub_56350(a1, v58, v47 - v58);
    v48 = pack_dq(v58, (unsigned __int64)v60, *(_QWORD *)(v51 + v38 + 24) + 1LL);
    sub_56350(a1, v58, v48 - v58);
  }
  v49 = pack_dd(v58, (unsigned __int64)v59, *((_DWORD *)a2 + 24));
  sub_56350(a1, v58, v49 - v58);
  sub_B5F80((__int64)&v54, (_QWORD *)v55);
  sub_B5FC0((__int64)&v56, (_QWORD *)v57);
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
