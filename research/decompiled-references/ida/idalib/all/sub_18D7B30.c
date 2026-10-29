unsigned __int64 __fastcall sub_18D7B30(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 *v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  unsigned int v43; // [rsp+1Ch] [rbp-12Ch]
  __int64 v44; // [rsp+20h] [rbp-128h]
  __int64 v45; // [rsp+20h] [rbp-128h]
  __int64 v46; // [rsp+28h] [rbp-120h]
  __int64 v47; // [rsp+38h] [rbp-110h] BYREF
  __int128 v48; // [rsp+40h] [rbp-108h] BYREF
  __int128 ptr; // [rsp+50h] [rbp-F8h]
  __int128 v50; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v51[200]; // [rsp+80h] [rbp-C8h] BYREF

  v10 = sub_19A27D0(a1);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v21 = sub_F68450(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v7, v8, v9);
    v18 = sub_F63270(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v22, v23, v24, v25);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 544);
    if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 35 > 3 || v11 == 72 )
      return 0;
    v14 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
    v17 = (v14 & 4) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL) : v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v17 )
      return 0;
    v18 = (__int64 *)(v17 - 64);
  }
  if ( !v18 )
    return 0;
  if ( !v18[16] )
  {
    sub_7052B0((__int64 *)(v18[13] + 96), v18[13], v12, v13, v15, v16);
    if ( !v18[16] )
      return 0;
  }
  if ( !(unsigned __int8)sub_B96D40((__int64)v18) )
    return 0;
  v43 = *(_DWORD *)(a3 + 8);
  sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v43, 0x1653u, 0);
  v47 = *(_QWORD *)a3;
  v26 = sub_15894B0((__int64)v51, &v47);
  if ( *(_BYTE *)(v26 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v26 + 32), (__int64)v18, 0xAu);
  }
  else if ( *(_BYTE *)(v26 + 132) )
  {
    v44 = v26;
    v34 = sub_168B9E0((_QWORD *)v26);
    v37 = v44;
    v38 = v34;
    v39 = *(_QWORD *)(v44 + 16);
    if ( v39 )
    {
      v46 = v38;
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
      v38 = v46;
      v37 = v44;
    }
    v45 = v37;
    *(_QWORD *)&v48 = v39;
    v40 = sub_1587BC0(v38, (__int64 *)&v48, v37, v38, v35, v36);
    sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * *(unsigned int *)(v45 + 128) + 8), (__int64)v18, 0xAu);
  }
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    sub_9EC740((__int64)&v48, v43, "this->", 6, 0);
    sub_1589170((__int64)v51, &v48);
    if ( *((__int128 **)&ptr + 1) != (__int128 *)((char *)&v50 + 8) )
      operator delete(*((void **)&ptr + 1));
    v19 = sub_C99C70(a2, 0, v10, 1, 0, a4, 0, 0, 0, *(_OWORD *)a3, *(_QWORD *)(a3 + 16), a5);
  }
  else
  {
    v48 = 0;
    ptr = 0;
    v50 = 0;
    v27 = sub_E91A00(a2, 0, v18[6]);
    sub_15AB890((__int64 *)&v48, a2, (__int64)v27, ((unsigned __int64)v43 << 32) | v43);
    v32 = sub_15AB9E0((__int64)&v48, a2, v28, v29, v30, v31);
    v19 = sub_C98B50(a2, v32, v33, a4, (const __m128i *)a3, a5);
    if ( HIDWORD(ptr) )
      free((void *)ptr);
  }
  sub_15F7200(v51);
  return v19;
}
