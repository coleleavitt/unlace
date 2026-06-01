__int64 __fastcall sub_6DA980(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // eax
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // r14
  __int64 v13; // r14
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ecx
  __int64 *v22; // r11
  __int64 *v23; // rax
  __int64 *v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r15
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdi
  bool v34; // zf
  unsigned __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // r14
  __int64 *v38; // rax
  unsigned int v39; // ecx
  __int64 *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r10
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  int v46; // [rsp-8h] [rbp-148h]
  int v47; // [rsp+0h] [rbp-140h]
  int v48; // [rsp+0h] [rbp-140h]
  int v49; // [rsp+8h] [rbp-138h]
  int v50; // [rsp+8h] [rbp-138h]
  __int64 v51; // [rsp+10h] [rbp-130h]
  int v52; // [rsp+10h] [rbp-130h]
  __int64 v53; // [rsp+10h] [rbp-130h]
  int v54[2]; // [rsp+18h] [rbp-128h]
  int v55; // [rsp+18h] [rbp-128h]
  int v56[2]; // [rsp+18h] [rbp-128h]
  int v57; // [rsp+20h] [rbp-120h]
  int v58; // [rsp+20h] [rbp-120h]
  int v59; // [rsp+28h] [rbp-118h]
  char v60; // [rsp+28h] [rbp-118h]
  __int64 v61; // [rsp+28h] [rbp-118h]
  char v62; // [rsp+30h] [rbp-110h]
  int v63; // [rsp+30h] [rbp-110h]
  __int64 *v64; // [rsp+30h] [rbp-110h]
  int v65; // [rsp+38h] [rbp-108h]
  int v66; // [rsp+38h] [rbp-108h]
  int v67[2]; // [rsp+38h] [rbp-108h]
  int v68; // [rsp+40h] [rbp-100h]
  void *v70; // [rsp+48h] [rbp-F8h]
  __int64 v71; // [rsp+48h] [rbp-F8h]
  int v72[2]; // [rsp+50h] [rbp-F0h]
  int v73[2]; // [rsp+50h] [rbp-F0h]
  __int64 v74; // [rsp+58h] [rbp-E8h]
  int v75; // [rsp+58h] [rbp-E8h]
  int v76; // [rsp+60h] [rbp-E0h]
  unsigned int v77; // [rsp+64h] [rbp-DCh] BYREF
  _QWORD *v78; // [rsp+68h] [rbp-D8h] BYREF
  __m128 v79; // [rsp+70h] [rbp-D0h] BYREF
  void *ptr; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+88h] [rbp-B8h]
  __int64 v82; // [rsp+90h] [rbp-B0h] BYREF
  int v83; // [rsp+98h] [rbp-A8h]
  int v84; // [rsp+A0h] [rbp-A0h]
  void *v85; // [rsp+A8h] [rbp-98h]
  int v86; // [rsp+B0h] [rbp-90h]
  __int64 v87; // [rsp+B8h] [rbp-88h]

  v77 = 0;
  v78 = nullptr;
  v5 = sub_6D9B60(a1, a2, &v77, a3, 1u, (unsigned __int64 *)&v78);
  v6 = v78;
  v7 = v5;
  if ( !(_BYTE)v5 )
  {
    if ( !v78 )
      return v7;
    goto LABEL_14;
  }
  if ( !v78 )
    return 0;
  v8 = *((_DWORD *)v78 - 1);
  if ( v8 == 1 )
  {
    v51 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(
                       *(_QWORD *)(a1 + 24),
                       v77);
    *(_QWORD *)v54 = *(_QWORD *)(a1 + 8);
    if ( *v6 )
      v13 = *(unsigned int *)(*v6 - 4LL);
    else
      v13 = 0;
    v65 = sub_15D1F10(v51);
    sub_180C5A0(&ptr, "B");
    v14 = sub_15E3D10(
            v54[0],
            (int)&ptr,
            (int)&qword_18D6CD0,
            0,
            0,
            v65,
            1,
            v46,
            v47,
            v49,
            v51,
            v54[0],
            v57,
            v59,
            v62,
            v65,
            (int)&v78,
            a4,
            (int)&ptr,
            a1,
            v76,
            (int)v78,
            v79.m128_i32[0],
            v79.m128_i32[2],
            (int)ptr,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
    v17 = sub_15DC610(v55, v14, 0, 0, v15, v16, v48, v50, v52, v55, v58, v60, v63, v66, v68, v70);
    v61 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v82 = v17;
    v18 = &v82;
    ptr = &v82;
    v81 = 0x1000000001LL;
    if ( (_DWORD)v13 )
    {
      v19 = 8 * v13;
      v20 = 0;
      LODWORD(v13) = 16;
      *(_QWORD *)v72 = v19;
      do
      {
        v21 = v8;
        v22 = (__int64 *)(v20 + *v6);
        if ( v8 >= (unsigned int)v13 )
        {
          v13 = (unsigned int)(2 * v13);
          *(_QWORD *)v67 = v20 + *v6;
          v23 = (__int64 *)sub_186B270(8 * v13);
          v21 = v81;
          v24 = (__int64 *)ptr;
          v18 = v23;
          v22 = *(__int64 **)v67;
          if ( (_DWORD)v81 )
          {
            if ( (unsigned int)(v81 - 1) <= 2 || v23 == (__int64 *)((char *)ptr + 8) )
            {
              v35 = 0;
              v36 = 8LL * (unsigned int)v81;
              do
              {
                v18[v35 / 8] = v24[v35 / 8];
                v35 += 8LL;
              }
              while ( v35 != v36 );
            }
            else
            {
              v25 = 0;
              v26 = 16LL * ((unsigned int)v81 >> 1);
              do
              {
                *(__m128i *)&v18[v25 / 8] = _mm_loadu_si128((const __m128i *)&v24[v25 / 8]);
                v25 += 16LL;
              }
              while ( v25 != v26 );
              if ( (v21 & 1) != 0 )
                v18[v21 & 0xFFFFFFFE] = v24[v21 & 0xFFFFFFFE];
            }
          }
          if ( v24 != &v82 && v24 )
          {
            v64 = v18;
            sub_186B220(v24);
            v22 = *(__int64 **)v67;
            v18 = v64;
            v21 = v81;
          }
          ptr = v18;
          HIDWORD(v81) = v13;
        }
        v8 = v21 + 1;
        v20 += 8;
        v18[v21] = *v22;
        LODWORD(v81) = v21 + 1;
      }
      while ( *(_QWORD *)v72 != v20 );
      if ( v8 >= (unsigned int)v13 )
      {
        v37 = (unsigned int)(2 * v13);
        v38 = (__int64 *)sub_186B270(8 * v37);
        v39 = v81;
        v40 = (__int64 *)ptr;
        v18 = v38;
        if ( (_DWORD)v81 )
        {
          if ( (unsigned int)(v81 - 1) <= 2 || v38 == (__int64 *)((char *)ptr + 8) )
          {
            v44 = 0;
            v45 = 8LL * (unsigned int)v81;
            do
            {
              v18[v44 / 8] = v40[v44 / 8];
              v44 += 8LL;
            }
            while ( v45 != v44 );
          }
          else
          {
            v41 = 0;
            v42 = 16LL * ((unsigned int)v81 >> 1);
            do
            {
              *(__m128i *)&v18[v41 / 8] = _mm_loadu_si128((const __m128i *)&v40[v41 / 8]);
              v41 += 16LL;
            }
            while ( v42 != v41 );
            if ( (v39 & 1) != 0 )
              v18[v39 & 0xFFFFFFFE] = v40[v39 & 0xFFFFFFFE];
          }
        }
        if ( v40 && v40 != &v82 )
        {
          *(_QWORD *)v73 = v18;
          sub_186B220(v40);
          v18 = *(__int64 **)v73;
          v39 = v81;
        }
        v43 = v39;
        ptr = v18;
        v27 = v39 + 1;
        HIDWORD(v81) = v37;
        v28 = v43;
      }
      else
      {
        v27 = v21 + 2;
        v28 = v8;
      }
    }
    else
    {
      v27 = 2;
      v28 = 1;
    }
    v18[v28] = a3;
    LODWORD(v81) = v27;
    v29 = sub_15E1AF0(*(_QWORD *)(v74 + 8));
    v30 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v79 = _mm_loadh_ps((const double *)(v74 + 8));
    if ( v71 )
      ++*(_DWORD *)(v71 + 8);
    v31 = v74;
    sub_14EC390(v74 + 32, v53, v29, &v79);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v31 + 24) + 88LL))(*(_QWORD *)(v31 + 24), v61);
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**(_QWORD **)(v31 + 24) + 80LL))(
      *(_QWORD *)(v31 + 24),
      v77,
      v79.m128_u64[0],
      v30);
    v32 = v79.m128_u64[0];
    if ( v79.m128_u64[0] )
    {
      v33 = v79.m128_u64[1];
      v34 = (*(_DWORD *)(v79.m128_u64[0] + 8))-- == 1;
      if ( v34 )
        sub_15D7BC0(v33, v32);
    }
    if ( ptr != &v82 && ptr )
      sub_186B220(ptr);
    if ( v30 )
    {
      v34 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v34 )
        sub_15D7BC0(*(_QWORD *)v56, v30);
    }
    if ( v61 )
    {
      v75 = *(_DWORD *)(v61 + 8);
      *(_DWORD *)(v61 + 8) = v75 - 1;
      if ( v75 == 1 )
        sub_15D7BC0(*(_QWORD *)v56, v61);
    }
LABEL_14:
    v8 = *((_DWORD *)v6 - 1);
    goto LABEL_5;
  }
  v7 = 0;
LABEL_5:
  if ( v8 )
  {
    v9 = v6;
    v10 = &v6[v8];
    do
    {
      while ( *v9 )
      {
        v11 = v9 + 1;
        sub_186B220((void *)(*v9 - 8LL));
        v9 = v11;
        if ( v10 == v11 )
          goto LABEL_9;
      }
      ++v9;
    }
    while ( v10 != v9 );
  }
LABEL_9:
  sub_186B220(v6 - 1);
  return v7;
}

