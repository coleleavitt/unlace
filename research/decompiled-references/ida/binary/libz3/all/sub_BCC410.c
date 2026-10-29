__int64 __fastcall sub_BCC410(_DWORD *a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  __int64 *v5; // rbx
  _DWORD *v8; // rax
  _DWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax
  void *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r12
  void *v21; // r15
  int v22; // eax
  void *v23; // rbx
  size_t v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r12
  _DWORD *v28; // r10
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // ecx
  char v34; // r8
  __int64 v35; // rcx
  char v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r12
  void *v41; // rbp
  __int64 v42; // rsi
  void *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  void *v46; // r12
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  unsigned int v56; // [rsp+0h] [rbp-168h]
  __int64 *v57; // [rsp+8h] [rbp-160h]
  unsigned __int8 v58; // [rsp+27h] [rbp-141h]
  __int64 v59; // [rsp+28h] [rbp-140h]
  void *v60; // [rsp+28h] [rbp-140h]
  _DWORD *v61; // [rsp+30h] [rbp-138h]
  _DWORD *v62; // [rsp+30h] [rbp-138h]
  __int64 *v63; // [rsp+38h] [rbp-130h]
  _DWORD *v64; // [rsp+40h] [rbp-128h]
  _QWORD v65[2]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v66[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v67; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v68; // [rsp+78h] [rbp-F0h]
  __int64 v69; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v70; // [rsp+88h] [rbp-E0h]
  void *v71; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+98h] [rbp-D0h]
  _BYTE v73[64]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v74; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-80h]
  __int64 v76; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-70h]

  v5 = *(__int64 **)(a2 + 8);
  v65[0] = 0;
  v71 = v73;
  v65[1] = 0;
  v66[0] = 1;
  v66[1] = 0;
  v72 = 0x1000000000LL;
  if ( !v5 || (v57 = &v5[*((unsigned int *)v5 - 1)], v57 == v5) )
  {
    v58 = 1;
    goto LABEL_39;
  }
  v58 = 1;
  do
  {
    while ( 1 )
    {
      v16 = *v5;
      v17 = a1[436];
      if ( *(_WORD *)(*v5 + 4) )
      {
        v74 = &v76;
        v9 = a1 + 432;
        v75 = 0x1000000000LL;
        if ( *(_WORD *)(v16 + 4) )
          goto LABEL_8;
        v8 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
        if ( !v8 || v17 != *v8 )
          goto LABEL_8;
LABEL_22:
        if ( v8[1] == 1 )
          goto LABEL_13;
        goto LABEL_8;
      }
      v8 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( !v8 )
      {
        v74 = &v76;
        v9 = a1 + 432;
        v75 = 0x1000000000LL;
        goto LABEL_8;
      }
      if ( v17 == *v8 && !v8[1] )
      {
        v74 = &dword_0 + 1;
        v75 = 0;
        v76 = 1;
        v77 = 0;
        sub_182CBA0(qword_1C7F2C0, &v76);
        v50 = *a3;
        BYTE4(v76) &= ~1u;
        LODWORD(v76) = 1;
        if ( !v50 || (v51 = *(unsigned int *)(v50 - 4), (_DWORD)v51 == *(_DWORD *)(v50 - 8)) )
        {
          sub_53D790(a3);
          v50 = *a3;
          v51 = *(unsigned int *)(*a3 - 4);
        }
        v52 = v50 + 32 * v51;
        *(_DWORD *)v52 = (_DWORD)v74;
        *(_BYTE *)(v52 + 4) = BYTE4(v74) & 3 | *(_BYTE *)(v52 + 4) & 0xFC;
        v53 = v75;
        v75 = 0;
        *(_QWORD *)(v52 + 8) = v53;
        *(_DWORD *)(v52 + 16) = v76;
        *(_BYTE *)(v52 + 20) = BYTE4(v76) & 3 | *(_BYTE *)(v52 + 20) & 0xFC;
        v54 = v77;
        v77 = 0;
        *(_QWORD *)(v52 + 24) = v54;
        ++*(_DWORD *)(v50 - 4);
        sub_25A130((char *)&v74);
        goto LABEL_17;
      }
      v74 = &v76;
      v9 = a1 + 432;
      v75 = 0x1000000000LL;
      if ( !*(_WORD *)(v16 + 4) && v17 == *v8 )
        goto LABEL_22;
LABEL_8:
      if ( (unsigned __int8)sub_163BAA0(v9, v16, &v74) && !(_DWORD)v75 )
      {
        if ( v74 != &v76 && v74 )
          sub_186B220(v74);
LABEL_13:
        v67 = 0;
        v68 = 0;
        v69 = 1;
        v70 = 0;
        sub_182CBA0(qword_1C7F2C0, &v69);
        v10 = *a3;
        BYTE4(v69) &= ~1u;
        LODWORD(v69) = 1;
        if ( v10 )
        {
          v11 = *(unsigned int *)(v10 - 4);
          if ( (_DWORD)v11 == *(_DWORD *)(v10 - 8) )
          {
            v56 = (unsigned int)(3 * v11 + 1) >> 1;
            v25 = 32 * v56 + 8;
            if ( 32 * (int)v11 + 8 >= (unsigned int)v25 || (unsigned int)v11 >= (unsigned int)(3 * v11 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_154526((__int64 *)&v74, "Overflow encountered when expanding vector", v4);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v74);
              sub_233E40((__int64)&v74);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = sub_186B270(v25);
            v27 = *a3;
            v28 = (_DWORD *)v26;
            v10 = v26 + 8;
            if ( *a3 )
            {
              v29 = *(unsigned int *)(v27 - 4);
              v30 = v26 + 8;
              *(_DWORD *)(v26 + 4) = v29;
              v31 = v27;
              v32 = v27 + 32 * v29;
              if ( v27 != v32 )
              {
                do
                {
                  v33 = *(_DWORD *)v31;
                  v34 = *(_BYTE *)(v31 + 4);
                  v31 += 32;
                  v30 += 32;
                  *(_DWORD *)(v30 - 32) = v33;
                  *(_BYTE *)(v30 - 28) = v34 & 3 | *(_BYTE *)(v30 - 28) & 0xFC;
                  v35 = *(_QWORD *)(v31 - 24);
                  *(_QWORD *)(v31 - 24) = 0;
                  *(_QWORD *)(v30 - 24) = v35;
                  v36 = *(_BYTE *)(v31 - 12);
                  *(_DWORD *)(v30 - 16) = *(_DWORD *)(v31 - 16);
                  *(_BYTE *)(v30 - 12) = v36 & 3 | *(_BYTE *)(v30 - 12) & 0xFC;
                  v37 = *(_QWORD *)(v31 - 8);
                  *(_QWORD *)(v31 - 8) = 0;
                  *(_QWORD *)(v30 - 8) = v37;
                }
                while ( v31 != v32 );
              }
              v38 = *(unsigned int *)(v27 - 4);
              if ( (_DWORD)v38 )
              {
                v59 = v10;
                v61 = v28;
                v64 = a1;
                v63 = v5;
                v39 = v27;
                v40 = v27 + 32 * v38;
                do
                {
                  v41 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v39);
                  v42 = v39 + 16;
                  v39 += 32;
                  sub_182CBA0(v41, v42);
                }
                while ( v39 != v40 );
                v10 = v59;
                v28 = v61;
                v5 = v63;
                a1 = v64;
                v27 = *a3;
              }
              v62 = v28;
              sub_186B220((void *)(v27 - 8));
              v28 = v62;
              v12 = (_QWORD *)(v10 + 32LL * (unsigned int)v62[1]);
            }
            else
            {
              *(_DWORD *)(v26 + 4) = 0;
              v12 = (_QWORD *)(v26 + 8);
            }
            *a3 = v10;
            *v28 = v56;
          }
          else
          {
            v12 = (_QWORD *)(v10 + 32 * v11);
          }
        }
        else
        {
          v55 = (_QWORD *)sub_186B270(0x48u);
          v10 = (__int64)(v55 + 1);
          *v55 = 2;
          *a3 = (__int64)(v55 + 1);
          v12 = v55 + 1;
        }
        v13 = qword_1C7F2C0;
        *(_DWORD *)v12 = v67;
        *((_BYTE *)v12 + 4) = BYTE4(v67) & 3 | *((_BYTE *)v12 + 4) & 0xFC;
        v14 = v68;
        v68 = 0;
        v12[1] = v14;
        *((_DWORD *)v12 + 4) = v69;
        *((_BYTE *)v12 + 20) = BYTE4(v69) & 3 | *((_BYTE *)v12 + 20) & 0xFC;
        v15 = v70;
        v70 = 0;
        v12[3] = v15;
        ++*(_DWORD *)(v10 - 4);
        sub_182CBA0(v13, &v67);
        sub_182CBA0(v13, &v69);
        goto LABEL_17;
      }
      if ( v74 != &v76 && v74 )
        sub_186B220(v74);
      if ( (unsigned __int8)sub_163BAA0(v9, v16, &v71) )
      {
        v74 = nullptr;
        v75 = 0;
        v76 = 1;
        v43 = qword_1C7F2C0;
        v77 = 0;
        if ( (int)v72 < 0 )
        {
          v60 = qword_1C7F2C0;
          sub_1830C40(qword_1C7F2C0, &v74, (unsigned int)v72);
          v43 = v60;
        }
        else
        {
          LODWORD(v74) = v72;
        }
        sub_182CBA0(v43, &v76);
        v44 = *a3;
        BYTE4(v76) &= ~1u;
        LODWORD(v76) = 1;
        if ( !v44 || (v45 = *(unsigned int *)(v44 - 4), (_DWORD)v45 == *(_DWORD *)(v44 - 8)) )
        {
          sub_53D790(a3);
          v44 = *a3;
          v45 = *(unsigned int *)(*a3 - 4);
        }
        v46 = qword_1C7F2C0;
        v47 = v44 + 32 * v45;
        *(_DWORD *)v47 = (_DWORD)v74;
        *(_BYTE *)(v47 + 4) = BYTE4(v74) & 3 | *(_BYTE *)(v47 + 4) & 0xFC;
        v48 = v75;
        v75 = 0;
        *(_QWORD *)(v47 + 8) = v48;
        *(_DWORD *)(v47 + 16) = v76;
        *(_BYTE *)(v47 + 20) = BYTE4(v76) & 3 | *(_BYTE *)(v47 + 20) & 0xFC;
        v49 = v77;
        v77 = 0;
        *(_QWORD *)(v47 + 24) = v49;
        ++*(_DWORD *)(v44 - 4);
        sub_182CBA0(v46, &v74);
        sub_182CBA0(v46, &v76);
        goto LABEL_17;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, _QWORD *))(*(_QWORD *)a1 + 416LL))(a1, v16, v65) )
        break;
      sub_BBB240((__int64)a1, (unsigned int *)v16);
      v58 = 0;
LABEL_17:
      if ( v57 == ++v5 )
        goto LABEL_36;
    }
    v18 = *a3;
    if ( !*a3 || (v19 = *(unsigned int *)(v18 - 4), (_DWORD)v19 == *(_DWORD *)(v18 - 8)) )
    {
      sub_53D790(a3);
      v18 = *a3;
      v19 = *(unsigned int *)(*a3 - 4);
    }
    v20 = 32 * v19 + v18;
    *(_QWORD *)v20 = 0;
    *(_QWORD *)(v20 + 8) = 0;
    v21 = qword_1C7F2C0;
    *(_QWORD *)(v20 + 16) = 1;
    *(_QWORD *)(v20 + 24) = 0;
    if ( (v65[0] & 0x100000000LL) != 0 )
      sub_182C690(v21, v20, v65);
    else
      *(_DWORD *)v20 = v65[0];
    if ( (v66[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v21, v20 + 16, v66);
    }
    else
    {
      v22 = v66[0];
      *(_BYTE *)(v20 + 20) &= ~1u;
      *(_DWORD *)(v20 + 16) = v22;
    }
    ++v5;
    ++*(_DWORD *)(*a3 - 4);
  }
  while ( v57 != v5 );
LABEL_36:
  if ( v71 != v73 && v71 )
    sub_186B220(v71);
LABEL_39:
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v65);
  sub_182CBA0(v23, v66);
  return v58;
}

