_QWORD *__fastcall sub_1E0E760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  _QWORD *result; // rax
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  void **v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  char v17; // cl
  __int64 v18; // rdi
  char v19; // si
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rdx
  void *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  void *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+8h] [rbp-240h]
  __int64 v34; // [rsp+10h] [rbp-238h]
  __int64 v35; // [rsp+18h] [rbp-230h]
  int v36; // [rsp+20h] [rbp-228h]
  int v37; // [rsp+24h] [rbp-224h]
  _BYTE v38[16]; // [rsp+30h] [rbp-218h] BYREF
  _BYTE v39[40]; // [rsp+40h] [rbp-208h] BYREF
  __int64 v40; // [rsp+68h] [rbp-1E0h]
  void *v41; // [rsp+80h] [rbp-1C8h] BYREF
  int v42; // [rsp+88h] [rbp-1C0h]
  _DWORD v43[25]; // [rsp+90h] [rbp-1B8h] BYREF
  char v44; // [rsp+F4h] [rbp-154h]
  void *ptr; // [rsp+100h] [rbp-148h] BYREF
  __int64 v46; // [rsp+108h] [rbp-140h]
  __int64 v47; // [rsp+110h] [rbp-138h] BYREF
  __int128 v48; // [rsp+118h] [rbp-130h]
  __int64 v49; // [rsp+128h] [rbp-120h]
  int v50; // [rsp+170h] [rbp-D8h]
  char v51; // [rsp+174h] [rbp-D4h]
  __int64 v52; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+188h] [rbp-C0h]
  void *v54; // [rsp+190h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+198h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+1A8h] [rbp-A0h]
  _QWORD v57[2]; // [rsp+1D0h] [rbp-78h] BYREF
  _QWORD v58[2]; // [rsp+1E0h] [rbp-68h] BYREF
  __int16 v59; // [rsp+1F0h] [rbp-58h]
  char v60; // [rsp+1F2h] [rbp-56h]
  __int64 v61; // [rsp+1F8h] [rbp-50h]
  unsigned int v62; // [rsp+200h] [rbp-48h]
  char v63; // [rsp+204h] [rbp-44h]

  result = (_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (_QWORD *)*result;
  if ( *(_BYTE *)(*result + 16LL) != 26 )
  {
    result = (_QWORD *)sub_F63050(*result, a2, a3, a4);
    v9 = result;
  }
  if ( ((*((_BYTE *)v9 + 19) >> 1) & 0xF) == 0xA )
  {
    sub_1DC3A30((__int64)v38, a1, a2, a3, 0);
    if ( v38[8] )
    {
      LODWORD(v52) = 0;
      v53 = 0;
      v54 = nullptr;
      v55 = 0;
      v56 = 0;
      sub_18B3150(a1, a3, &v52);
      return (_QWORD *)sub_1DBADA0(v38);
    }
    if ( v38[9] )
    {
      sub_168B9F0((__int64)&v52, (__int64 *)(a1 + 8), a2, 0xE98u, 0);
      if ( (_BYTE)v61 )
      {
        sub_AE9DF0((unsigned __int8 **)&v55 + 1, a3, 0xAu);
      }
      else if ( v63 )
      {
        v30 = sub_168B9E0(&v52);
        v31 = v54;
        if ( v54 )
          v31 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v54 + 32LL))(v54);
        ptr = v31;
        v32 = sub_1587BC0(v30, (__int64 *)&ptr, v26, v27, v28, v29);
        sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v62 + 8), a3, 0xAu);
      }
      sub_15F7200(&v52);
      LODWORD(v52) = 0;
      v53 = 0;
      v54 = nullptr;
      v55 = 0;
      v56 = 0;
      sub_18B3150(a1, a3, &v52);
      return (_QWORD *)sub_1DBADA0(v38);
    }
    v10 = *(_QWORD *)(a1 + 544);
    v11 = *(_QWORD *)(a1 + 9944);
    v52 = a1;
    *(_QWORD *)(a1 + 9944) = 0;
    v34 = v10;
    v12 = *(_QWORD *)(a1 + 512);
    v40 = v11;
    v35 = v12;
    LODWORD(v12) = *(_DWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 544) = a3 + 72;
    v36 = v12;
    LODWORD(v12) = *(_DWORD *)(a1 + 2632);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    LODWORD(v11) = *(_DWORD *)(a1 + 3688);
    *(_QWORD *)(a1 + 512) = 0;
    v37 = v12;
    v53 = 1;
    *(_DWORD *)(a1 + 2632) = v11;
    v13 = &v54;
    do
    {
      *v13 = (void *)-4096LL;
      v13 += 2;
    }
    while ( v13 != v57 );
    v60 = 0;
    v57[0] = v58;
    v14 = *(_QWORD *)(a1 + 11280);
    *(_QWORD *)(a1 + 11280) = &v52;
    v58[1] = v14;
    v59 = 0;
    v15 = *(_QWORD *)(a3 + 16);
    v57[1] = 0x100000000LL;
    LOBYTE(v47) = 0;
    v61 = 0;
    v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v15 & 4) != 0 )
      v16 = (_QWORD *)v16[1];
    sub_1DBA4B0((__int64)&v41, a1, a3, v16, 0, 1, (__int64)ptr, v46, v47, 0, 0, 0, 0);
    v17 = *((_BYTE *)v9 + 19);
    v33 = 0;
    if ( (((unsigned __int8)v17 >> 1) & 0xF) == 0xA )
    {
      v18 = 8LL * *((unsigned __int16 *)v9 + 11) + 48;
      v19 = BYTE3(v9[2]);
      v20 = (v19 & 0x40) != 0;
      v21 = ((unsigned __int64)v9 + v18 + ((v19 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 0x40) != 0 )
        v20 += (*(_BYTE *)((((unsigned __int64)v9 + v18 + ((v17 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v33 = *(_QWORD *)(v21 + 8 * v20 + 8);
    }
    if ( (unsigned __int8)sub_1E03DC0(a1, a3, v33, (__int64)&v52, (__int64)&v41, a5, a6) )
    {
      LODWORD(ptr) = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      sub_18B3150(a1, a3, &ptr);
      v25 = v41;
      if ( v41 == v43 )
      {
LABEL_23:
        sub_1CB3BA0((__int64)&v52);
        if ( v34 )
        {
          *(_QWORD *)(a1 + 544) = v34;
          *(_QWORD *)(a1 + 512) = v35;
          *(_QWORD *)(a1 + 9944) = v40;
          *(_DWORD *)(a1 + 80) = v36;
          *(_DWORD *)(a1 + 2632) = v37;
        }
        return (_QWORD *)sub_1DBADA0(v38);
      }
    }
    else
    {
      ptr = &v47;
      v46 = 0x400000000LL;
      if ( v42 )
        sub_1744960((__int64 *)&ptr, (__int64 *)&v41);
      v50 = v43[24];
      v51 = v44;
      sub_1A2F130((__int64)v39, a1, a3, (__int64)&ptr, (__int64)&v52, 0);
      if ( ptr != &v47 )
        free(ptr);
      v23 = (__int64 *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v24 = *v23;
      if ( *(_BYTE *)(*v23 + 16) != 26 )
        v24 = sub_F63050(*v23, a1, v24, v22);
      sub_1DE2C90(a1, a3, v24, (__int64)&v41);
      sub_146B590((__int64)v39);
      v25 = v41;
      if ( v41 == v43 )
        goto LABEL_23;
    }
    free(v25);
    goto LABEL_23;
  }
  return result;
}
