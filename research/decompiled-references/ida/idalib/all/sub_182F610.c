__int64 __fastcall sub_182F610(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  char *v6; // rbx
  char *v7; // r13
  int v8; // r14d
  unsigned __int64 v9; // r15
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r13d
  size_t v15; // rax
  size_t v16; // r8
  __int64 v17; // r9
  int v18; // eax
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rbx
  char *v22; // rbx
  char v24; // al
  _QWORD *v25; // r14
  void **v26; // r15
  void **v27; // r14
  size_t v28; // rax
  char *v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  _WORD *v35; // rdx
  __int64 v36; // rdi
  __int64 (*v37)(); // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // r8
  __int64 v48; // r9
  void *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbp
  __int64 v64; // r8
  __int64 v65; // r9
  void *v66; // rax
  _QWORD *v67; // rax
  char v68; // [rsp+1Dh] [rbp-28Bh]
  char v69; // [rsp+1Eh] [rbp-28Ah]
  char v70; // [rsp+1Fh] [rbp-289h]
  __int64 v71; // [rsp+30h] [rbp-278h]
  size_t v72; // [rsp+38h] [rbp-270h]
  _QWORD v73[2]; // [rsp+40h] [rbp-268h] BYREF
  int v74; // [rsp+54h] [rbp-254h] BYREF
  int v75; // [rsp+58h] [rbp-250h] BYREF
  int v76; // [rsp+5Ch] [rbp-24Ch] BYREF
  void *v77; // [rsp+60h] [rbp-248h] BYREF
  _QWORD *v78; // [rsp+68h] [rbp-240h]
  unsigned int v79[4]; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v80; // [rsp+D0h] [rbp-1D8h]
  unsigned __int8 *v81[11]; // [rsp+E0h] [rbp-1C8h] BYREF
  char v82; // [rsp+138h] [rbp-170h]
  unsigned int v83; // [rsp+140h] [rbp-168h]
  char v84; // [rsp+144h] [rbp-164h]
  void *v85; // [rsp+150h] [rbp-158h] BYREF
  __int64 v86; // [rsp+158h] [rbp-150h]
  _BYTE v87[128]; // [rsp+160h] [rbp-148h] BYREF
  void *ptr; // [rsp+1E0h] [rbp-C8h] BYREF
  unsigned __int64 v89; // [rsp+1E8h] [rbp-C0h]
  _BYTE v90[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v73[0] = a3;
  v85 = v87;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
  v73[1] = a4;
  LODWORD(v5) = *(_DWORD *)(v5 + 248);
  v86 = 0x800000000LL;
  if ( (unsigned int)(v5 - 27) <= 1 )
  {
    v89 = 0x800000000LL;
    ptr = v90;
    sub_22476F0(v73, &ptr, 59, 0xFFFFFFFFLL, 1);
    v6 = (char *)ptr;
    v7 = (char *)ptr + 16 * (unsigned int)v89;
    if ( ptr == v7 )
    {
      v14 = 0;
      goto LABEL_28;
    }
    v68 = 0;
    v8 = 0;
    v70 = 0;
    v69 = 0;
    while ( 1 )
    {
      v9 = *((_QWORD *)v6 + 1);
      if ( v9 > 5 && **(_DWORD **)v6 == 1751347809 && *(_WORD *)(*(_QWORD *)v6 + 4LL) == 11069 )
      {
        v24 = v68;
        if ( (_BYTE)v8 )
          v24 = v8;
        v68 = v24;
        (*(void (__fastcall **)(void **, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 496LL))(
          &v77,
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
          *(_QWORD *)v6,
          *((_QWORD *)v6 + 1));
        v25 = v78;
        if ( v78 == v77 || v25 != sub_1804070(v77, (__int64)v78, a1) )
        {
          sub_168B9F0((__int64)v79, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
          v76 = 0;
          v58 = sub_1815F20((__int64)v79, &v76);
          v75 = 0;
          v59 = sub_1815FD0(v58, &v75);
          v60 = sub_1682BA0(v59, (__int64)v6);
          v74 = 2;
          v14 = *(unsigned __int8 *)(sub_1816080(v60, &v74) + 120);
          sub_15F7200(v79);
          sub_9B4A30((void ***)&v77);
          v6 = (char *)ptr;
          goto LABEL_28;
        }
        v26 = (void **)v78;
        v27 = (void **)v77;
        if ( v78 != v77 )
        {
          do
          {
            while ( *v27 != v27 + 2 )
            {
              operator delete(*v27);
              v27 += 4;
              if ( v26 == v27 )
                goto LABEL_42;
            }
            v27 += 4;
          }
          while ( v26 != v27 );
LABEL_42:
          v27 = (void **)v77;
        }
        if ( v27 )
          operator delete(v27);
        v8 = 1;
      }
      else
      {
        v10 = j__strlen("default");
        if ( v10 > v9 || v10 && memcmp(*(const void **)v6, "default", v10) )
        {
          v15 = j__strlen("priority=");
          v16 = v15;
          if ( v15 > v9
            || (v17 = *(_QWORD *)v6, v15)
            && (v71 = *(_QWORD *)v6,
                v72 = v15,
                v18 = memcmp(*(const void **)v6, "priority=", v15),
                v17 = v71,
                v16 = v72,
                v18) )
          {
            sub_168B9F0((__int64)v79, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
            LODWORD(v77) = 0;
            v41 = sub_1815F20((__int64)v79, (int *)&v77);
            v76 = 0;
            v42 = sub_1815FD0(v41, &v76);
            v43 = sub_1682BA0(v42, (__int64)v6);
            v75 = 2;
            v14 = *(unsigned __int8 *)(sub_1816080(v43, &v75) + 120);
            sub_15F7200(v79);
            v6 = (char *)ptr;
            goto LABEL_28;
          }
          *(_QWORD *)v6 = v17 + v16;
          *((_QWORD *)v6 + 1) = v9 - v16;
          v19 = v68;
          if ( v70 )
            v19 = v70;
          v68 = v19;
          if ( (unsigned __int8)sub_2247970(v17 + v16, *((_QWORD *)v6 + 1), 0, v79) || *(_QWORD *)v79 != v79[0] )
          {
            sub_168B9F0((__int64)v79, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
            if ( v82 )
            {
              sub_AE9DF0(v81, 0, 2u);
            }
            else
            {
              if ( !v84 )
                goto LABEL_25;
              v46 = sub_168B9E0(v79);
              v49 = v80;
              if ( v80 )
                v49 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v80 + 32LL))(v80);
              v77 = v49;
              v50 = sub_1587BC0(v46, (__int64 *)&v77, v44, v45, v47, v48);
              sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v83 + 8), 0, 2u);
            }
            if ( v82 )
            {
              sub_AE9DF0(v81, 0, 2u);
            }
            else if ( v84 )
            {
              v63 = sub_168B9E0(v79);
              v66 = v80;
              if ( v80 )
                v66 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v80 + 32LL))(v80);
              v77 = v66;
              v67 = sub_1587BC0(v63, (__int64 *)&v77, v61, v62, v64, v65);
              sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v83 + 8), 0, 2u);
            }
LABEL_25:
            v20 = sub_1682BA0((__int64)v79, (__int64)v6);
            v21 = v20;
            if ( *(_BYTE *)(v20 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v20 + 32), 2, 2u);
              v14 = *(unsigned __int8 *)(v21 + 120);
            }
            else
            {
              v14 = *(unsigned __int8 *)(v20 + 132);
              if ( (_BYTE)v14 )
              {
                v53 = sub_168B9E0((_QWORD *)v20);
                v56 = *(void **)(v21 + 16);
                if ( v56 )
                  v56 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v56 + 32LL))(*(_QWORD *)(v21 + 16));
                v77 = v56;
                v57 = sub_1587BC0(v53, (__int64 *)&v77, v51, v52, v54, v55);
                sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * *(unsigned int *)(v21 + 128) + 8), 2, 2u);
                v14 = *(unsigned __int8 *)(v21 + 120);
              }
            }
            sub_15F7200(v79);
            v6 = (char *)ptr;
LABEL_28:
            if ( v6 != v90 )
              free(v6);
LABEL_30:
            v22 = (char *)v85;
            goto LABEL_31;
          }
          v70 = 1;
        }
        else if ( v69 )
        {
          v68 = v69;
        }
        else
        {
          v69 = 1;
        }
      }
      v6 += 16;
      if ( v7 == v6 )
      {
        if ( (unsigned __int8)v8 | (unsigned __int8)v70 && v69
          || v68
          || (v6 = (char *)ptr, v14 = v8 ^ 1, LOBYTE(v14) = v70 & (v8 ^ 1), (_BYTE)v14) )
        {
          sub_168B9F0((__int64)v79, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
          LODWORD(v77) = 0;
          v11 = sub_1815F20((__int64)v79, (int *)&v77);
          v76 = 0;
          v12 = sub_1815FD0(v11, &v76);
          v13 = sub_1682BA0(v12, (__int64)v73);
          v75 = 2;
          v14 = *(unsigned __int8 *)(sub_1816080(v13, &v75) + 120);
          sub_15F7200(v79);
          v6 = (char *)ptr;
        }
        goto LABEL_28;
      }
    }
  }
  v28 = j__strlen("+");
  sub_22471D0(v73, &v85, "+", v28, 0xFFFFFFFFLL, 1);
  v29 = (char *)v85;
  v22 = (char *)v85 + 16 * (unsigned int)v86;
  if ( v85 == v22 )
  {
    v14 = 0;
  }
  else
  {
    do
    {
      v30 = sub_2246FB0(v29, asc_22E1692, 6, 0);
      v31 = *((_QWORD *)v29 + 1);
      v32 = 0;
      if ( v30 < v31 )
      {
        v32 = v31 - v30;
        v31 = v30;
      }
      ptr = (void *)(*(_QWORD *)v29 + v31);
      v89 = v32;
      v33 = sub_2247130(&ptr, asc_22E1692, 6, -1) + 1;
      if ( v33 > v89 )
        v33 = v89;
      v34 = v89 - v32 + v33;
      if ( v34 > v89 )
        v34 = v89;
      v35 = ptr;
      *((_QWORD *)v29 + 1) = v34;
      *(_QWORD *)v29 = v35;
      if ( v34 != 7 || *(_DWORD *)v35 != 1634100580 || v35[2] != 27765 || *((_BYTE *)v35 + 6) != 116 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
        v37 = *(__int64 (**)())(*(_QWORD *)v36 + 616LL);
        if ( v37 == sub_102BAA0
          || !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v37)(v36, *(_QWORD *)v29, *((_QWORD *)v29 + 1)) )
        {
          sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
          v79[0] = 0;
          v38 = sub_1815F20((__int64)&ptr, (int *)v79);
          LODWORD(v77) = 0;
          v39 = sub_1815FD0(v38, (int *)&v77);
          v40 = sub_1682BA0(v39, (__int64)v29);
          v76 = 2;
          v14 = *(unsigned __int8 *)(sub_1816080(v40, &v76) + 120);
          sub_15F7200(&ptr);
          goto LABEL_30;
        }
      }
      v29 += 16;
    }
    while ( v22 != v29 );
    v22 = (char *)v85;
    v14 = 0;
  }
LABEL_31:
  if ( v22 != v87 )
    free(v22);
  return v14;
}
