__int64 __fastcall sub_9B8F80(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // cl
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  void *v31; // r12
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  char *v38; // rcx
  __int64 v39; // rdi
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  unsigned int v47; // esi
  __int64 v48; // r14
  __int64 v49; // rax
  char *v50; // rdi
  __int64 v51; // r9
  int v52; // [rsp-8h] [rbp-188h]
  int v53; // [rsp+0h] [rbp-180h]
  char *v54; // [rsp+8h] [rbp-178h]
  char *v55; // [rsp+10h] [rbp-170h]
  void *v56; // [rsp+18h] [rbp-168h]
  __int64 v57; // [rsp+20h] [rbp-160h]
  _DWORD *v58; // [rsp+28h] [rbp-158h]
  _DWORD *v59; // [rsp+30h] [rbp-150h]
  _DWORD *v60; // [rsp+38h] [rbp-148h]
  __int64 v61; // [rsp+40h] [rbp-140h]
  _QWORD *v62; // [rsp+48h] [rbp-138h]
  __int64 v63; // [rsp+48h] [rbp-138h]
  __int64 v64; // [rsp+50h] [rbp-130h]
  __int64 v65; // [rsp+58h] [rbp-128h]
  unsigned int *v66; // [rsp+60h] [rbp-120h]
  __int64 v67; // [rsp+68h] [rbp-118h]
  __int64 v68; // [rsp+70h] [rbp-110h]
  char v70; // [rsp+78h] [rbp-108h]
  struct _Unwind_Exception *v71; // [rsp+78h] [rbp-108h]
  struct _Unwind_Exception *v72; // [rsp+78h] [rbp-108h]
  __int64 v73; // [rsp+80h] [rbp-100h] BYREF
  __int64 v74; // [rsp+88h] [rbp-F8h]
  unsigned int *v75; // [rsp+90h] [rbp-F0h] BYREF
  __int64 v76; // [rsp+98h] [rbp-E8h]
  _QWORD v77[4]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD v78[2]; // [rsp+C0h] [rbp-C0h] BYREF
  _QWORD v79[2]; // [rsp+D0h] [rbp-B0h] BYREF
  __int64 v80[2]; // [rsp+E0h] [rbp-A0h] BYREF
  _QWORD v81[2]; // [rsp+F0h] [rbp-90h] BYREF
  void *ptr; // [rsp+100h] [rbp-80h] BYREF
  __int64 v83; // [rsp+108h] [rbp-78h]
  _QWORD v84[14]; // [rsp+110h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v65 = a1 + 408;
  result = sub_993370(a1 + 408, a3);
  if ( !(_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 408);
    v73 = 0;
    v56 = (void *)v6;
    v74 = v6;
    v75 = nullptr;
    v76 = v6;
    v8 = sub_15E1B70(v7);
    v61 = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    v9 = sub_15E1B70(*(_QWORD *)(a1 + 408));
    v68 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v10 = sub_993400(v65, 0);
    v67 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v11 = sub_993400(v65, 1u);
    v57 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v12 = *(_QWORD *)(a1 + 24);
    sub_15E1B70(*(_QWORD *)(a1 + 408));
    sub_15E1B70(*(_QWORD *)(a1 + 408));
    sub_15E1BF0(v12);
    v13 = sub_15E1B70(*(_QWORD *)(a1 + 408));
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_98B270(v73, v74);
    v15 = v4 + 7456;
    v73 = v14;
    sub_14B9B80(v4 + 7456, &v73);
    v16 = sub_15E1B70(*(_QWORD *)(a1 + 24));
    v64 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    sub_15E1B70(*(_QWORD *)(a1 + 408));
    v17 = sub_15E1B70(*(_QWORD *)(a1 + 408));
    v66 = (unsigned int *)v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    sub_98B270(0, (__int64)v56);
    v18 = sub_15E1B70(*(_QWORD *)(a1 + 24));
    v58 = (_DWORD *)v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    v19 = sub_15E1B70(*(_QWORD *)(a1 + 408));
    v59 = (_DWORD *)v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v20 = sub_15E1B70(*(_QWORD *)(a1 + 408));
    v60 = (_DWORD *)v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    sub_993F50(a1, v64, v58, 0);
    sub_993F50(a1, v64, v59, 0);
    v21 = 1;
    if ( !*(_WORD *)(v73 + 4) )
    {
      v32 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
      if ( v32 )
      {
        if ( *v32 == 5 )
          v21 = v32[1] != 0;
      }
    }
    sub_993F50(a1, v64, v60, v21);
    v77[0] = 0;
    v77[1] = 0;
    v77[2] = 1;
    v77[3] = 0;
    v22 = sub_966570(a1, a2);
    v23 = sub_966570(a1, v66);
    sub_8E1D30(a1 + 568, v23, v22);
    if ( v66 != v75 )
    {
      sub_98B270((__int64)v75, v76);
      v75 = v66;
      if ( v66 )
        ++v66[2];
    }
    sub_14B9B80(v15, &v75);
    if ( v66 != v75 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      v25 = sub_15E1B70(v24);
      v26 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      sub_B6F780(*(_QWORD *)(a1 + 16));
      LODWORD(ptr) = sub_B645B0(*(_QWORD *)(a1 + 16), v26);
      sub_9936C0(*(_QWORD *)(a1 + 16), (unsigned int)ptr >> 1);
      sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&ptr, 0, 0, 1);
      v62 = sub_966570(a1, v75);
      v27 = sub_966570(a1, v66);
      sub_8E1D30(a1 + 568, v27, v62);
      sub_98B270(v26, v24);
    }
    if ( (unsigned __int8)sub_993370(v65, (__int64)a2) )
    {
      v34 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 24));
      sub_993F50(a1, v64, v34, 1);
      v35 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 24));
      sub_993F50(a1, v64, v35, 1);
    }
    else if ( *(_WORD *)(a3 + 4) || (v33 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr || *v33 != 5 || v33[1] )
    {
      v28 = *(_QWORD *)(a1 + 24);
      v29 = *(_QWORD *)(a1 + 408);
      ptr = nullptr;
      v83 = v28;
      sub_15E1B70(v29);
      sub_15E1B70(*(_QWORD *)(a1 + 408));
      v30 = sub_15E1B70(*(_QWORD *)(a1 + 408));
      v31 = (void *)v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_98B270((__int64)ptr, v83);
      ptr = v31;
      sub_14B9B80(v15, &ptr);
      sub_993F50(a1, v64, ptr, 0);
      sub_98B270((__int64)ptr, v83);
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 400) + 89LL) )
    {
      if ( (unsigned __int8)sub_1666AE0(v65, a3, v77, &ptr) )
      {
        if ( SLODWORD(v77[0]) > 0 )
        {
          ptr = &byte_8;
          v83 = 0;
          v84[0] = 1;
          v84[1] = 0;
          v54 = (char *)v84;
          sub_182CBA0(qword_1C7F2C0, v84);
          BYTE4(v84[0]) &= ~1u;
          LODWORD(v84[0]) = 1;
          v70 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v77, (__int64)&ptr);
          sub_25A130((char *)&ptr);
          if ( v70 )
          {
            v78[0] = 0;
            v78[1] = 0;
            v79[0] = 1;
            v79[1] = 0;
            sub_182CBA0(qword_1C7F2C0, v79);
            ptr = v84;
            v36 = 0;
            BYTE4(v79[0]) &= ~1u;
            v83 = 0x1000000000LL;
            v37 = *(_QWORD *)(a1 + 24);
            LODWORD(v79[0]) = 1;
            v63 = v37;
            while ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v78, (__int64)v77) )
            {
              v43 = *(_QWORD *)(a1 + 416);
              v71 = *(struct _Unwind_Exception **)(a1 + 24);
              if ( !v43 )
              {
                sub_16669E0(v65);
                v43 = *(_QWORD *)(a1 + 416);
              }
              sub_166A700(v43, (unsigned int)v78, 1, v40, v41, v42);
              v44 = sub_15E1B70((int)v71);
              v72 = (struct _Unwind_Exception *)v44;
              if ( v44 )
                ++*(_DWORD *)(v44 + 8);
              sub_98B270(v36, v63);
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
              {
                v80[0] = 0;
                sub_966750(a1, (int)v72, -1, 0, 0, -1, (__int64 ***)v80, v52, v53, (int)v54, (int)v55, v56);
                if ( v80[0] )
                  sub_186B220((void *)(v80[0] - 8));
              }
              sub_B6F780(*(_QWORD *)(a1 + 16));
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 912LL) )
                std::operator<<<std::char_traits<char>>();
              v45 = sub_B645B0(*(_QWORD *)(a1 + 16), v72);
              v46 = (unsigned int)v83;
              v47 = v45;
              if ( (unsigned int)v83 < HIDWORD(v83) )
              {
                v38 = (char *)ptr;
              }
              else
              {
                LODWORD(v55) = v45;
                v48 = (unsigned int)(2 * HIDWORD(v83));
                v38 = (char *)sub_186B270(4 * v48);
                v49 = 0;
                v50 = (char *)ptr;
                v47 = (unsigned int)v55;
                v46 = (unsigned int)v83;
                v51 = 4LL * (unsigned int)v83;
                if ( (_DWORD)v83 )
                {
                  do
                  {
                    *(_DWORD *)&v38[v49] = *(_DWORD *)&v50[v49];
                    v49 += 4;
                  }
                  while ( v51 != v49 );
                }
                if ( v50 != v54 )
                {
                  if ( v50 )
                  {
                    v55 = v38;
                    sub_186B220(v50);
                    v46 = (unsigned int)v83;
                    v38 = v55;
                  }
                }
                ptr = v38;
                HIDWORD(v83) = v48;
              }
              *(_DWORD *)&v38[4 * v46] = v47;
              v39 = *(_QWORD *)(a1 + 16);
              LODWORD(v83) = v83 + 1;
              sub_9936C0(v39, v47 >> 1);
              v80[0] = 1;
              v80[1] = 0;
              v81[0] = 1;
              v81[1] = 0;
              sub_182CBA0(qword_1C7F2C0, v81);
              BYTE4(v81[0]) &= ~1u;
              LODWORD(v81[0]) = 1;
              sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v78, (__int64)v80, (__int64)v78);
              sub_25A130((char *)v80);
              v36 = (__int64)v72;
            }
            sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v83, (_DWORD)ptr, 0, 0, 1);
            sub_98B270(v36, v63);
            if ( ptr != v54 && ptr )
              sub_186B220(ptr);
            sub_25A130((char *)v78);
          }
        }
      }
    }
    sub_25A130((char *)v77);
    sub_98B270((__int64)v75, v76);
    sub_98B270((__int64)v66, (__int64)v56);
    sub_98B270((__int64)v60, (__int64)v56);
    sub_98B270((__int64)v59, (__int64)v56);
    sub_98B270((__int64)v58, (__int64)v56);
    sub_98B270(v64, (__int64)v56);
    sub_98B270(v57, (__int64)v56);
    sub_98B270(v73, v74);
    sub_98B270(v67, (__int64)v56);
    sub_98B270(v68, (__int64)v56);
    return sub_98B270(v61, (__int64)v56);
  }
  return result;
}

