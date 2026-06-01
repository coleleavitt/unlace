__int64 __fastcall sub_C13430(__int64 *a1, __int64 a2, __m128i *a3)
{
  unsigned int v3; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  signed int v16; // r12d
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  signed int v19; // edx
  __int64 v20; // rcx
  int v21; // r15d
  unsigned __int64 v22; // rbp
  __int64 v23; // r15
  __int64 (*v24)(); // rax
  __int64 (*v25)(); // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 (*v39)(); // rdx
  __int64 v40; // rdi
  __int64 (*v41)(); // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // al
  unsigned int v46; // r8d
  unsigned __int64 v47; // rcx
  void **v48; // rax
  unsigned int v49; // eax
  void **v50; // rbx
  void **v51; // rdi
  void **v52; // r12
  __int64 v53; // r15
  __int64 v54; // r14
  __int64 v55; // [rsp+0h] [rbp-228h]
  __int64 v56; // [rsp+0h] [rbp-228h]
  __int64 v57; // [rsp+0h] [rbp-228h]
  __int64 v58; // [rsp+8h] [rbp-220h]
  bool v59; // [rsp+16h] [rbp-212h]
  unsigned __int8 v60; // [rsp+16h] [rbp-212h]
  bool v61; // [rsp+17h] [rbp-211h]
  __int64 v62; // [rsp+18h] [rbp-210h] BYREF
  __int64 v63; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int64 v64; // [rsp+28h] [rbp-200h] BYREF
  unsigned __int64 v65; // [rsp+30h] [rbp-1F8h] BYREF
  signed int v66; // [rsp+38h] [rbp-1F0h]
  bool v67; // [rsp+40h] [rbp-1E8h]
  __int64 *v68[6]; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v69; // [rsp+80h] [rbp-1A8h] BYREF
  void *v70[3]; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-188h]
  __int64 v72; // [rsp+A8h] [rbp-180h] BYREF
  void *v73[2]; // [rsp+128h] [rbp-100h] BYREF
  int v74; // [rsp+138h] [rbp-F0h]
  char v75; // [rsp+13Ch] [rbp-ECh]
  _QWORD v76[5]; // [rsp+140h] [rbp-E8h] BYREF
  void *ptr; // [rsp+168h] [rbp-C0h]
  __int64 v78; // [rsp+170h] [rbp-B8h]
  _DWORD v79[26]; // [rsp+178h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+1E0h] [rbp-48h]
  __int16 v81; // [rsp+1E8h] [rbp-40h]
  char v82; // [rsp+1EAh] [rbp-3Eh]

  v62 = a2;
  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v3 = a3[8].m128i_i8[0] & 1;
  if ( (a3[8].m128i_i8[0] & 1) != 0 && (*(_BYTE *)(a2 + 1) & 6) == 0 )
    return v3;
  if ( !(unsigned __int8)sub_C0F160((__int64)a1, (_DWORD *)a2, a3, 6u, 1) )
    return 0;
  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  sub_C0BF20((__int64)&v65, (__int64)a1, a2, a3);
  v61 = v67;
  if ( !v67 )
    return 0;
  if ( (unsigned __int8)sub_F43600(*(_QWORD *)(*(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v46 = v66;
    v47 = v65;
    return (unsigned int)sub_C03020((__int64)a1, v62, (__int64)a3, v47, v46);
  }
  v7 = sub_F43FF0(*(_QWORD *)(**(_QWORD **)(v62 + 24) & 0xFFFFFFFFFFFFFFF0LL));
  v8 = a1[2];
  v63 = v7;
  v13 = sub_A56C90(v8, v7, v9, v10, v11, v12);
  v16 = a3[3].m128i_i32[2];
  v17 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL];
  v68[1] = (__int64 *)a3;
  v68[2] = a1;
  v68[3] = (__int64 *)&v65;
  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v17 | (unsigned __int8)v13) & 7;
  v19 = v66;
  v64 = v18;
  v68[0] = &v62;
  v68[4] = &v63;
  v68[5] = (__int64 *)&v64;
  if ( v16 < v66 )
  {
LABEL_62:
    v69 = 0;
    v70[2] = nullptr;
    v71 = 1;
    v70[1] = v70;
    v70[0] = v70;
    v48 = (void **)&v72;
    do
    {
      *v48 = nullptr;
      v48 += 2;
    }
    while ( v73 != v48 );
    v73[0] = v76;
    ptr = v79;
    v81 = 257;
    v73[1] = &byte_4;
    v74 = 0;
    v75 = 1;
    v76[4] = 0;
    v78 = 0x400000000LL;
    v79[24] = 0;
    v80 = 0;
    v82 = 0;
    if ( !(unsigned __int8)sub_B4C7F0(v65, v63, (__int64)&v69)
      || (LOBYTE(v49) = sub_B42070((__int64)&v69, v64), v3 = v49, (_BYTE)v49)
      || *((_DWORD *)v70[0] + 32) )
    {
      v3 = sub_C0CBF0(v68, (__int64)&v69);
    }
    else
    {
      v60 = sub_C03020((__int64)a1, v62, (__int64)a3, v65, v66);
      if ( v60 )
      {
        v53 = *((_QWORD *)v70[0] + 2);
        v54 = v53 + 24LL * *((unsigned int *)v70[0] + 6);
        if ( v53 == v54 )
        {
LABEL_86:
          v3 = v60;
        }
        else
        {
          while ( (unsigned __int8)sub_C0A1C0((__int64)a1, v62, (__int64)a3, *(_QWORD *)(v53 + 8), *(_QWORD *)v53) )
          {
            v53 += 24;
            if ( v54 == v53 )
              goto LABEL_86;
          }
        }
      }
    }
    if ( ptr != v79 )
      free(ptr);
    if ( !v75 )
      free(v73[0]);
    if ( (v71 & 1) == 0 )
      operator delete();
    v50 = (void **)v70[0];
    if ( v70[0] != v70 )
    {
      while ( 1 )
      {
        v51 = (void **)v50[2];
        v52 = (void **)*v50;
        if ( v51 == v50 + 4 )
        {
          operator delete(v50);
          if ( v52 == v70 )
            return v3;
        }
        else
        {
          free(v51);
          operator delete(v50);
          if ( v52 == v70 )
            return v3;
        }
        v50 = v52;
      }
    }
    return v3;
  }
  while ( 1 )
  {
    if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v16 )
    {
      v22 = sub_F3F530(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
    }
    else
    {
      v20 = (unsigned int)(v16 - 1);
      v21 = v16 - 1;
      v22 = *(_QWORD *)(a3[3].m128i_i64[0] + 8 * v20) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v22 )
      {
        v59 = v61;
        goto LABEL_24;
      }
      if ( (*(_BYTE *)((*(_QWORD *)(a3[3].m128i_i64[0] + 8 * v20) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 > 2 )
      {
        v22 = 0;
        v59 = v61;
        goto LABEL_24;
      }
    }
    v23 = v63;
    v59 = v22 == 0 || v63 == 0;
    if ( v59 )
    {
      v19 = v66;
      v59 = v22 == 0;
      v21 = v16 - 1;
    }
    else
    {
      if ( v63 == v22
        || ((v24 = *(__int64 (**)())(*(_QWORD *)v22 + 32LL), v24 != sub_9DD400)
          ? (v55 = ((__int64 (__fastcall *)(unsigned __int64))v24)(v22))
          : (v55 = sub_B4CD20(v22)),
            (v25 = *(__int64 (**)())(*(_QWORD *)v23 + 32LL), v25 != sub_9DD400)
          ? (v26 = ((__int64 (__fastcall *)(__int64))v25)(v23))
          : (v26 = sub_B4CD20(v23)),
            v55 == v26) )
      {
        v46 = v16;
        v47 = v22;
        return (unsigned int)sub_C03020((__int64)a1, v62, (__int64)a3, v47, v46);
      }
      v19 = v66;
      v21 = v16 - 1;
    }
LABEL_24:
    if ( v19 < v16 )
      break;
LABEL_12:
    v16 = v21;
    if ( v21 < v19 )
      goto LABEL_62;
  }
  if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v21 )
  {
    v28 = sub_F3F530(*(_QWORD *)(a3[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
  }
  else
  {
    v27 = (unsigned int)(v16 - 2);
    v28 = *(_QWORD *)(a3[3].m128i_i64[0] + 8 * v27) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v28 || (*(_BYTE *)((*(_QWORD *)(a3[3].m128i_i64[0] + 8 * v27) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 > 2 )
      BUG();
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v28 + 104) + 96LL), *(_QWORD *)(v28 + 104), v27, v20, v14, v15);
  v32 = *(_QWORD *)(v28 + 128);
  if ( (*(_BYTE *)(v32 + 24) & 1) != 0 )
    v33 = sub_B72C40(v32);
  else
    v33 = *(_QWORD *)(v32 + 24);
  v56 = v33;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v28 + 104) + 96LL), *(_QWORD *)(v28 + 104), v33, v29, v30, v31);
  v58 = v56 + 24LL * *(unsigned int *)(*(_QWORD *)(v28 + 128) + 16LL);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v28 + 104) + 96LL), *(_QWORD *)(v28 + 104), v56, v34, v35, v36);
  v37 = *(_QWORD *)(v28 + 128);
  if ( (*(_BYTE *)(v37 + 24) & 1) != 0 )
    v38 = sub_B72C40(v37);
  else
    v38 = *(_QWORD *)(v37 + 24);
  if ( v58 == v38 )
LABEL_89:
    BUG();
  while ( 2 )
  {
    v43 = *(_QWORD *)(**(_QWORD **)(v38 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v43 + 8) & 0xF) != 0 )
      v43 = sub_F411C0(**(_QWORD **)(v38 + 16));
    v44 = sub_F3F530(*(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v44 || v59 )
    {
LABEL_38:
      v38 += 24;
      if ( v38 == v58 )
        goto LABEL_89;
      continue;
    }
    break;
  }
  if ( v44 != v22 )
  {
    v39 = *(__int64 (**)())(*(_QWORD *)v44 + 32LL);
    if ( v39 == sub_9DD400 )
    {
      v40 = v22;
      v57 = sub_B4CD20(v44);
      v41 = *(__int64 (**)())(*(_QWORD *)v22 + 32LL);
      if ( v41 == sub_9DD400 )
      {
LABEL_36:
        v42 = sub_B4CD20(v40);
        goto LABEL_37;
      }
    }
    else
    {
      v40 = v22;
      v57 = ((__int64 (__fastcall *)(__int64))v39)(v44);
      v41 = *(__int64 (**)())(*(_QWORD *)v22 + 32LL);
      if ( v41 == sub_9DD400 )
        goto LABEL_36;
    }
    v42 = ((__int64 (__fastcall *)(__int64))v41)(v40);
LABEL_37:
    if ( v57 == v42 )
      goto LABEL_44;
    goto LABEL_38;
  }
LABEL_44:
  v45 = *(_BYTE *)(v38 + 12);
  if ( (v45 & 0xC) == 0xC )
  {
    if ( (v45 & 2) != 0 )
      return (unsigned int)sub_C0CBF0(v68, 0);
LABEL_46:
    v19 = v66;
    goto LABEL_12;
  }
  if ( (v45 & 0xC) == 0 )
    goto LABEL_46;
  return (unsigned int)sub_C0CBF0(v68, 0);
}

