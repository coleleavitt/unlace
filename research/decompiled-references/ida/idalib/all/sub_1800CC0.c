__int64 __fastcall sub_1800CC0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  _QWORD *v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned int i; // ebp
  _BYTE *v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 (__fastcall *v37)(_BYTE *); // rax
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64 *); // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __int64 (__fastcall *v44)(__int64); // rax
  __int64 (__fastcall *v45)(__int64 *); // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v49; // eax
  unsigned int v51; // [rsp+1Ch] [rbp-5Ch]
  __int64 v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+20h] [rbp-58h]
  __int64 v54; // [rsp+28h] [rbp-50h]
  __int64 v55[8]; // [rsp+38h] [rbp-40h] BYREF

  v8 = a4[13];
  v51 = a3;
  v9 = (__int64 *)(v8 + 96);
  if ( !a4[16] )
  {
    sub_7052B0(v9, v8, a3, (__int64)a4, a5, a6);
    i = 0;
    if ( !a4[16] )
      return i;
    v8 = a4[13];
    v9 = (__int64 *)(v8 + 96);
  }
  sub_7052B0(v9, v8, a3, (__int64)a4, a5, a6);
  v14 = a4[16];
  if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
    v15 = sub_B96980(v14);
  else
    v15 = *(_QWORD *)(v14 + 24);
  sub_7052B0((__int64 *)(a4[13] + 96), a4[13], v10, v11, v12, v13);
  v16 = (__int64 *)a4[13];
  v17 = v15 + 24LL * *(unsigned int *)(a4[16] + 16);
  sub_7052B0(v16 + 12, (__int64)v16, v18, v19, v20, v21);
  v26 = a4[16];
  if ( (*(_BYTE *)(v26 + 24) & 1) != 0 )
    v27 = sub_B96980(v26);
  else
    v27 = *(_QWORD *)(v26 + 24);
  for ( i = 0; v27 != v17; v27 += 24 )
  {
    v30 = *(_QWORD *)(**(_QWORD **)(v27 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v30 + 8) & 0xF) != 0 )
      v30 = sub_F64F00(**(_QWORD **)(v27 + 16), (__int64)v16, v22, v23, (__int64)v24);
    v31 = v30 & 0xFFFFFFFFFFFFFFF0LL;
    v32 = *(_QWORD *)v31;
    v33 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v31 + 16LL) - 47;
    if ( (unsigned int)v33 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
      && (v32 = sub_F63050(v32, v16, v33, v23)) != 0 )
    {
      v29 = sub_F63270(v32, (__int64)v16, v33, v23, (__int64)v24, v25);
      if ( !v29 )
        continue;
    }
    else
    {
      v34 = *(_QWORD *)(**(_QWORD **)(v27 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v34 + 8) & 0xF) != 0 )
        v34 = sub_F64F00(**(_QWORD **)(v27 + 16), (__int64)v16, v33, v23, (__int64)v24);
      v35 = sub_F6A860(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v35 )
        continue;
      if ( (*(_BYTE *)(v35 + 17) & 4) == 0 )
        continue;
      v16 = nullptr;
      v55[0] = *(_QWORD *)(v35 + 32);
      v36 = sub_F22BD0(v55, 0);
      v24 = (_QWORD *)v36;
      if ( !v36 )
        continue;
      v29 = *(_BYTE **)(v36 + 48);
      if ( !v29 || (v29[28] & 0x7Fu) - 59 > 2 )
        continue;
      v54 = v36;
      v37 = *(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v29 + 32LL);
      v38 = (char *)v37 == (char *)sub_A01140 ? sub_B70A60((__int64)v29) : v37(v29);
      v52 = v38;
      v16 = (__int64 *)sub_A01140;
      v39 = *(__int64 (__fastcall **)(__int64 *))(*a4 + 32);
      v40 = (char *)v39 == (char *)sub_A01140 ? sub_B70A60((__int64)a4) : v39(a4);
      v24 = (_QWORD *)v54;
      if ( v52 == v40 )
      {
        if ( (*(_BYTE *)(v54 + 28) & 0x7F) != 0x48 )
          continue;
        v41 = *(_QWORD *)(**(_QWORD **)(v27 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v41 + 8) & 0xF) != 0 )
        {
          v41 = sub_F64F00(**(_QWORD **)(v27 + 16), (__int64)sub_A01140, v22, v23, v54);
          v24 = (_QWORD *)v54;
        }
        v16 = (__int64 *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
        v42 = sub_BC5440(v24, v41 & 0xFFFFFFFFFFFFFFF0LL);
        v29 = (_BYTE *)v42;
        if ( !v42 )
          continue;
        v43 = v42;
        v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL);
        v53 = v44 == sub_A01140 ? sub_B70A60(v43) : v44(v43);
        v16 = (__int64 *)sub_A01140;
        v45 = *(__int64 (__fastcall **)(__int64 *))(*a4 + 32);
        v46 = (char *)v45 == (char *)sub_A01140 ? sub_B70A60((__int64)a4) : v45(a4);
        if ( v46 == v53 )
          continue;
      }
    }
    v16 = (__int64 *)a2;
    v47 = sub_B94670((unsigned __int64)(v29 + 64), a2, v22, v23, (__int64)v24, v25);
    if ( v47 )
    {
      while ( 1 )
      {
        v23 = v47 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v47 & 4) == 0 )
          break;
        if ( !v23 || (*(_BYTE *)(*(_QWORD *)v23 + 28LL) & 0x7Fu) - 58 > 9 )
          return 1;
        v47 = *(_QWORD *)(v23 + 8);
        if ( !v47 )
          goto LABEL_41;
      }
      if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 58 <= 9 )
      {
LABEL_41:
        i = 2;
        continue;
      }
      return 1;
    }
    if ( !i )
    {
      v16 = (__int64 *)a2;
      v49 = sub_1800CC0(a1, a2, v51, v29);
      if ( v49 == 1 )
        return 1;
      if ( v49 == 2 )
        i = 2;
    }
  }
  return i;
}
