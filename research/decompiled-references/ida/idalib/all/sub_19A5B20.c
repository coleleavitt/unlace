void __fastcall sub_19A5B20(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ecx
  char v5; // r14
  __int64 v6; // rbp
  void *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  char v13; // al
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdx
  __int64 **v21; // rax
  __int64 v22; // rbp
  __int64 *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  const void *v51; // [rsp+10h] [rbp-88h]
  unsigned __int64 v52; // [rsp+18h] [rbp-80h]
  __int64 v53; // [rsp+18h] [rbp-80h]
  __int64 v54; // [rsp+20h] [rbp-78h] BYREF
  int v55; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v57; // [rsp+38h] [rbp-60h]
  _QWORD v58[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = sub_A73610(
         *(_QWORD *)(*(_QWORD *)a1 + 248LL),
         **(_QWORD **)(a1 + 8),
         **(__int64 ***)(a1 + 16),
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
         *(const __m128i **)(a1 + 24),
         0);
  v55 = 0;
  v54 = 0;
  v3 = v2;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 224LL);
  if ( ((v4 >> 3) & 7) == 7 )
  {
    v5 = 1;
    if ( (v4 & 0x104) != 0 )
      goto LABEL_3;
  }
  else
  {
    v5 = 1;
    if ( ((v4 >> 3) & 7) != 1 )
      goto LABEL_3;
  }
  v5 = 1;
  if ( (unsigned __int8)v4 >> 6 != 3 )
  {
    if ( (unsigned __int8)v4 >> 6 )
      goto LABEL_3;
    v49 = v4 & 0x100;
    goto LABEL_29;
  }
  v49 = v4 & 0x100;
  if ( !v49 )
LABEL_29:
    v5 = v49 != 0;
LABEL_3:
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  v7 = **(void ***)(a1 + 40);
  v8 = **(_QWORD **)(a1 + 32);
  LODWORD(v57) = 0;
  ptr = v7;
  sub_B85890(v58, (__int64)v7);
  v9 = sub_B7CBC0(v6, v8, 0, (__int64 *)&ptr, v3, 0, 0, v5, 0, 1, 0, (__int64)&v54);
  *(_BYTE *)(v9 + 29) |= 2u;
  v10 = *(_QWORD *)(v9 + 8);
  if ( (v10 & 6) != 0 )
    *(_QWORD *)(v9 + 8) = v10 & 0xFFFFFFFFFFFFFFF8LL | 1;
  v11 = *(_QWORD **)a1;
  if ( **(_BYTE **)(a1 + 48) )
  {
    v12 = v11[29];
    if ( (*(_BYTE *)(v12 + 105) & 0x10) != 0 && !*(_BYTE *)(v12 + 817) )
    {
      v44 = sub_B32EC0(v11[31], ((unsigned __int64)*(unsigned int *)(v9 + 24) << 32) | *(unsigned int *)(v9 + 24), 0);
      sub_B8CC60(v9, v44, v45, v46, v47, v48);
      v11 = *(_QWORD **)a1;
    }
  }
  if ( v11[1367] )
  {
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL | 3;
    v11 = *(_QWORD **)a1;
    *(_QWORD *)(v9 - 8) = *(_QWORD *)(*(_QWORD *)a1 + 10936LL);
  }
  v13 = (*(_BYTE *)(v11[29] + 206LL) >> 4) & 7;
  if ( v13 != 3 )
  {
    v14 = 1;
    if ( v13 )
      v14 = 2 * (v13 == 1);
    v15 = sub_B31EA0(v11[31], v14, 0, 0);
    sub_B8CC60(v9, v15, v16, v17, v18, v19);
  }
  v20 = v58;
  v57 = 0x300000000LL;
  v21 = *(__int64 ***)(a1 + 16);
  ptr = v58;
  v22 = (__int64)&(*v21)[(_QWORD)v21[1]];
  if ( *v21 == (__int64 *)v22 )
  {
    v27 = 0;
  }
  else
  {
    v23 = *v21;
    do
    {
      v24 = sub_B74530(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v9 + 72, 0, 0, 0, *v23, 0, 0, 0);
      v25 = (unsigned int)v57;
      v26 = (unsigned int)v57 + 1LL;
      if ( v26 > HIDWORD(v57) )
      {
        v53 = v24;
        sub_2237220(&ptr, v58, v26, 8);
        v25 = (unsigned int)v57;
        v24 = v53;
      }
      ++v23;
      *((_QWORD *)ptr + v25) = v24;
      v20 = ptr;
      v27 = (unsigned int)(v57 + 1);
      v28 = *((_QWORD *)ptr + v27 - 1);
      LODWORD(v57) = v57 + 1;
      *(_BYTE *)(v28 + 29) |= 2u;
    }
    while ( (__int64 *)v22 != v23 );
  }
  v52 = v27;
  v51 = v20;
  v29 = sub_B8C330(v9);
  sub_B7C440(v9, v29, v51, v52);
  if ( a2 )
    sub_B8CC60(v9, a2, v30, v31, v32, v33);
  sub_17A5F50(*(_QWORD *)a1, v9);
  v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 2264LL) + 80LL);
  v39 = sub_704780((__int64 *)(v34 + 72), v34, v35, v36, v37, v38);
  sub_B94AD0((__m128i *)(v39 + 5), v9, v40, v41, v42, v43);
  sub_15C1C30(*(_QWORD *)a1 + 2608LL, (char *)v9, **(_QWORD **)(a1 + 40));
  if ( ptr != v58 )
    free(ptr);
}
