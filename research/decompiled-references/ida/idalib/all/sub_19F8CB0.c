__int64 __fastcall sub_19F8CB0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebp
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r12
  __int64 *v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned int v42; // eax
  _QWORD *v43; // rax

  LOBYTE(v3) = sub_F64A40(a1[6], a2);
  if ( (_BYTE)v3 )
    return 1;
  v10 = a1[13];
  v8 = v3;
  sub_7052B0((__int64 *)(v10 + 96), v10, v4, v5, v6, v7);
  if ( (*(_BYTE *)(a1[16] + 1) & 2) != 0 )
    return 1;
  v19 = sub_B7E900((__int64)a1, v10, v11, v12, v13, v14);
  if ( v19 )
  {
LABEL_6:
    v20 = (__int64 *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( sub_19F7E80(*v20, v10, v15, v16) )
      return 1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v43 = sub_F63270(*v20, v10, v15, v16, v17, v18);
      if ( (unsigned __int8)sub_19F8CB0(v43) )
        return 1;
    }
    while ( 1 )
    {
      v21 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v19 = v21;
      if ( !v21 )
        break;
      if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_6;
    }
  }
  sub_7052B0((__int64 *)(a1[13] + 96), a1[13], v15, v16, v17, v18);
  v26 = a1[16];
  if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
    v27 = sub_B96980(v26);
  else
    v27 = *(_QWORD *)(v26 + 24);
  sub_7052B0((__int64 *)(a1[13] + 96), a1[13], v22, v23, v24, v25);
  v28 = a1[13];
  v29 = v27 + 24LL * *(unsigned int *)(a1[16] + 16);
  sub_7052B0((__int64 *)(v28 + 96), v28, v30, v31, v32, v33);
  v38 = a1[16];
  if ( (*(_BYTE *)(v38 + 24) & 1) != 0 )
    v39 = sub_B96980(v38);
  else
    v39 = *(_QWORD *)(v38 + 24);
  if ( v39 != v29 )
  {
    while ( 1 )
    {
      v40 = *(_QWORD *)(**(_QWORD **)(v39 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v40 + 8) & 0xF) != 0 )
        v40 = sub_F64F00(**(_QWORD **)(v39 + 16), v28, v34, v35, v36);
      v41 = sub_F63270(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL), v28, v34, v35, v36, v37);
      v42 = sub_19F8CB0(v41);
      if ( (_BYTE)v42 )
        break;
      v39 += 24;
      if ( v39 == v29 )
        return v8;
    }
    return v42;
  }
  return v8;
}
