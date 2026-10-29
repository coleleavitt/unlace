void __fastcall sub_19A5ED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  _BYTE *v21; // r8
  _BYTE *v22; // r15
  int v23; // ebx
  __int64 v24; // rbp
  __int16 v25; // ax
  int v26; // ecx
  _BYTE *v27; // rax
  char v28; // dl
  __int64 v29; // r14
  __int64 v30; // r8
  __int64 v31; // r13
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  int *v35; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // [rsp+18h] [rbp-140h]
  _QWORD *v48; // [rsp+20h] [rbp-138h] BYREF
  __int64 v49; // [rsp+28h] [rbp-130h]
  __int64 v50; // [rsp+30h] [rbp-128h] BYREF
  __int64 v51; // [rsp+38h] [rbp-120h] BYREF
  char v52; // [rsp+4Fh] [rbp-109h] BYREF
  _QWORD *v53; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v55[8]; // [rsp+60h] [rbp-F8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-B0h]
  int v58; // [rsp+B0h] [rbp-A8h] BYREF
  int v59; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 *v60; // [rsp+C0h] [rbp-98h]
  __int64 v61; // [rsp+C8h] [rbp-90h]
  __int128 v62; // [rsp+D0h] [rbp-88h]
  __int64 v63; // [rsp+E0h] [rbp-78h]
  __int64 v64; // [rsp+E8h] [rbp-70h]
  int v65; // [rsp+F0h] [rbp-68h]
  __int64 v66; // [rsp+F8h] [rbp-60h]
  __int64 v67; // [rsp+100h] [rbp-58h]
  __int64 v68; // [rsp+108h] [rbp-50h]
  __int64 v69; // [rsp+110h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 248);
  v51 = a2;
  v8 = *(_QWORD *)(v7 + 2264);
  v50 = a3;
  v48 = (_QWORD *)a4;
  v9 = *(_QWORD *)(v8 + 80);
  v49 = a5;
  v10 = sub_704780((__int64 *)(v9 + 72), v9, a3, a4, a5, a6);
  v14 = (int *)v51;
  v15 = (__int64)(v10 + 5);
  if ( v10 )
    v10 += 5;
  v53 = v10;
  v16 = sub_B94670((unsigned __int64)v10, v51, v15, v11, v12, v13);
  if ( !v16 )
  {
LABEL_12:
    v25 = sub_A64670(*(_QWORD *)(a1 + 248), 0, 0, 1);
    WORD1(ptr) &= 0xF000u;
    LOWORD(ptr) = v25;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = nullptr;
    v61 = 0;
    v62 = 0u;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v54 = 0;
    if ( (v51 & 7) == 6 )
    {
      v26 = *(_DWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
      v27 = *(_BYTE **)(a1 + 232);
      v28 = v27[1] & 0x10;
      if ( v26 == 1 || v26 == 3 )
      {
        v52 = 1;
        if ( !v28 )
        {
          v40 = *(_QWORD *)(a1 + 248);
          v41 = sub_183D2D0(a1);
          v45 = *(_QWORD *)(v41 + 48);
          if ( v45 )
            v46 = v45 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v46 = sub_A7AA70(v40, v41, 0, v42, v43, v44);
          v54 = v46;
          v60 = &v54;
          v27 = *(_BYTE **)(a1 + 232);
          v59 = 2;
          v61 = 1;
        }
        if ( (v27[105] & 0x10) != 0 )
          v59 = 1;
        goto LABEL_41;
      }
      v52 = 0;
    }
    else
    {
      v27 = *(_BYTE **)(a1 + 232);
      v52 = 0;
      v28 = v27[1] & 0x10;
    }
    v60 = nullptr;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v59 = v28 == 0 ? 1 : 5;
LABEL_41:
    v55[0] = a1;
    v55[1] = &v50;
    v55[2] = &v48;
    v55[4] = &v53;
    v55[5] = &v51;
    v55[3] = &ptr;
    v55[6] = &v52;
    if ( (v27[60] & 0x10) != 0 )
    {
      v38 = sub_B32290(*(_QWORD *)(a1 + 248), 0, 0);
      sub_19A5B20((__int64)v55, v38);
      v39 = sub_B32320(*(_QWORD *)(a1 + 248), 0, 0);
      sub_19A5B20((__int64)v55, v39);
    }
    else
    {
      sub_19A5B20((__int64)v55, 0);
    }
    return;
  }
  v19 = v16;
  while ( 1 )
  {
    v20 = v19;
    v21 = (_BYTE *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
    v22 = v21;
    v23 = (v20 >> 2) & 1;
    if ( v23 )
    {
      if ( !v21 )
        goto LABEL_12;
      v24 = *(_QWORD *)v21;
      if ( (*(_BYTE *)(*(_QWORD *)v21 + 28LL) & 0x7Fu) - 34 > 5 )
        goto LABEL_11;
    }
    else
    {
      if ( (v21[28] & 0x7Fu) - 34 > 5 )
        goto LABEL_12;
      v24 = (__int64)v21;
    }
    if ( (unsigned int)sub_B76070(v24, (__int64)v14, v17, v18) == v49 )
      break;
LABEL_9:
    if ( !v23 || !v22 )
      goto LABEL_12;
LABEL_11:
    v19 = *((_QWORD *)v22 + 1);
    if ( !v19 )
      goto LABEL_12;
  }
  ptr = &v58;
  v57 = 0x300000000LL;
  v29 = *(_QWORD *)(v24 + 120);
  v31 = v29 + 8LL * (unsigned int)sub_B76070(v24, (__int64)v14, (__int64)&v58, v18);
  if ( v31 == v29 )
  {
    v34 = (unsigned int)v57;
  }
  else
  {
    do
    {
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v32 + 8) & 0xF) != 0 )
        v32 = sub_F64F00(*(_QWORD *)(*(_QWORD *)v29 + 48LL), (__int64)v14, v17, v18, v30);
      v18 = HIDWORD(v57);
      v33 = (unsigned int)v57 + 1LL;
      if ( v33 > HIDWORD(v57) )
      {
        v14 = &v58;
        v47 = *(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL];
        sub_2237220(&ptr, &v58, v33, 8);
        v17 = (unsigned int)v57;
        *((_QWORD *)ptr + (unsigned int)v57) = v47;
      }
      else
      {
        v17 = (__int64)ptr;
        *((_QWORD *)ptr + (unsigned int)v57) = *(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL];
      }
      v29 += 8;
      v34 = (unsigned int)(v57 + 1);
      LODWORD(v57) = v57 + 1;
    }
    while ( v31 != v29 );
  }
  v35 = (int *)ptr;
  if ( v49 != v34 )
    goto LABEL_35;
  v18 = (__int64)ptr + 8 * v34;
  if ( (void *)v18 == ptr )
    goto LABEL_31;
  v17 = (__int64)v48;
  if ( *(_QWORD *)ptr != *v48 )
  {
LABEL_35:
    if ( ptr != &v58 )
      free(ptr);
    goto LABEL_9;
  }
  v36 = ptr;
  while ( 1 )
  {
    ++v36;
    v17 += 8;
    if ( (_QWORD *)v18 == v36 )
      break;
    v14 = *(int **)v17;
    if ( *v36 != *(_QWORD *)v17 )
      goto LABEL_35;
  }
LABEL_31:
  v37 = *(_QWORD *)(v24 + 8);
  if ( (v37 & 6) != 0 )
    *(_QWORD *)(v24 + 8) = v37 & 0xFFFFFFFFFFFFFFF8LL | 1;
  if ( v35 != &v58 )
    free(v35);
}
