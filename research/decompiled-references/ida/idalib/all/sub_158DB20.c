bool __fastcall sub_158DB20(__int64 a1, void **a2, _WORD **a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v7; // r15
  _WORD *v10; // rbx
  char v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  char v25; // al
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rbx
  size_t v29; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rbx
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  char v48; // si
  __int64 v49; // rdx
  void **v50; // rsi
  __int64 v51; // rax
  int v52; // r14d
  __int64 v53; // r13
  bool v54; // zf
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 *v62; // [rsp+0h] [rbp-148h] BYREF
  unsigned int v63; // [rsp+Ch] [rbp-13Ch]
  __int64 v64; // [rsp+10h] [rbp-138h] BYREF
  __int64 v65; // [rsp+18h] [rbp-130h] BYREF
  void *v66; // [rsp+20h] [rbp-128h] BYREF
  __int64 v67; // [rsp+28h] [rbp-120h]
  void *v68; // [rsp+40h] [rbp-108h] BYREF
  char v69; // [rsp+48h] [rbp-100h]
  _WORD *v70; // [rsp+50h] [rbp-F8h]
  void *v71; // [rsp+58h] [rbp-F0h]
  _BYTE v72[24]; // [rsp+68h] [rbp-E0h] BYREF
  _OWORD v73[12]; // [rsp+80h] [rbp-C8h] BYREF

  v7 = (__int64)a2;
  v10 = *a3;
  if ( (**a3 & 0x1FF) != 0x47 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)a2[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11 )
    {
      if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
      {
LABEL_22:
        v20 = a1 + 8;
        v36 = sub_BFB2C0((__int64)v10);
        sub_168B9F0(v73, a1 + 8, v36, 7480, 0);
        v68 = a2[5];
        v37 = sub_15894B0((__int64)v73, (__int64 *)&v68);
        LOWORD(v38) = 0;
        v39 = *(_QWORD *)&byte_8[(unsigned __int64)a2[6] & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v39 & 8) != 0 )
          v38 = *(__int64 *)((char *)&qword_18 + (v39 & 0xFFFFFFFFFFFFFFF0LL));
        a2 = &v66;
        LOBYTE(v66) = (v38 & 0x1C0) != 0;
        sub_1588420(v37, (unsigned __int8 *)&v66);
        sub_15F7200(v73);
LABEL_7:
        v24 = *(_QWORD *)&byte_8[*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        v25 = v24 | *(_QWORD *)(v7 + 48);
        v26 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = v26 | v25 & 7;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 11 )
        {
          if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
            goto LABEL_9;
          v31 = sub_B8C3D0(v7, (__int64)a2, v26, v21, v22, v23);
          v32 = *v31;
          v33 = *v31 + 8LL * *((unsigned int *)v31 + 2);
          if ( *v31 >= v33 )
          {
            if ( v32 == v33 )
            {
LABEL_9:
              sub_168B9F0(v73, v20, *(unsigned int *)(v7 + 24), 5810, 0);
              v66 = *(void **)(v7 + 40);
              v28 = sub_15894B0((__int64)v73, (__int64 *)&v66);
              v29 = j__strlen("__block ");
              sub_9EC740((__int64)&v68, *(_DWORD *)(v7 + 24), "__block ", v29, 0);
              sub_1589170(v28, &v68);
              if ( v71 != v72 )
                operator delete(v71);
              goto LABEL_11;
            }
            while ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 148 )
            {
              v33 += 8LL;
              if ( v32 == v33 )
                goto LABEL_9;
            }
          }
          else
          {
            v34 = *v31;
            while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 148 )
            {
              v34 += 8LL;
              if ( v33 == v34 )
                goto LABEL_9;
            }
            if ( v33 == v34 )
              goto LABEL_9;
          }
        }
        if ( !sub_B73640(v7)
          && (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7) >> 32) & 0x80000000) == 0LL )
        {
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          v62 = (__int64 *)&v66;
          v63 = sub_15F0EF0(a1, HIDWORD(v40), 0);
          sub_19E9430(&v66, a1, v27, v63);
          if ( v67 )
          {
            sub_168B9F0(v73, v20, v63, 6464, 0);
            v65 = *(_QWORD *)(v7 + 40);
            v41 = sub_15894B0((__int64)v73, &v65);
            sub_9EC740((__int64)&v68, v63, v66, v67, 0);
            sub_1589170(v41, &v68);
            if ( v71 != v72 )
              operator delete(v71);
            sub_15F7200(v73);
            if ( v66 != v62 + 2 )
              operator delete(v66);
            return *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL) != 0;
          }
          if ( v66 != v62 + 2 )
            operator delete(v66);
        }
        v35 = sub_B73090(v7);
        sub_168B9F0(v73, v20, v35, 6462, 0);
        v68 = *(void **)(v7 + 40);
        sub_15894B0((__int64)v73, (__int64 *)&v68);
LABEL_11:
        sub_15F7200(v73);
        return *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL) != 0;
      }
      v42 = sub_B8C3D0((__int64)a2, (__int64)a2, (__int64)a3, a4, a5, a6);
      v43 = *v42;
      v44 = *v42 + 8LL * *((unsigned int *)v42 + 2);
      if ( *v42 >= v44 )
      {
        if ( v43 == v44 )
          goto LABEL_22;
        while ( *(_WORD *)(*(_QWORD *)v44 + 36LL) != 148 )
        {
          v44 += 8LL;
          if ( v43 == v44 )
            goto LABEL_22;
        }
      }
      else
      {
        v45 = *v42;
        while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 148 )
        {
          v45 += 8LL;
          if ( v44 == v45 )
            goto LABEL_22;
        }
        if ( v44 == v45 )
          goto LABEL_22;
      }
    }
    sub_158C750(a1, (__int64 *)a2, (__int64)a3, 1u, *(double *)a7.m128_u64);
    v20 = a1 + 8;
    goto LABEL_7;
  }
  v11 = a4;
  v12 = sub_B73640((__int64)a2);
  v17 = v12;
  if ( !v12 )
  {
    v20 = a1 + 8;
LABEL_6:
    a2 = (void **)v7;
    sub_158C750(a1, (__int64 *)v7, (__int64)a3, 0, *(double *)a7.m128_u64);
    goto LABEL_7;
  }
  if ( v11 || (_WORD *)sub_BFBAE0(v12) != v10 )
  {
    v18 = *(_QWORD *)(a1 + 248);
    v19 = v17;
    v69 = 0;
    v70 = v10;
    v20 = a1 + 8;
    v68 = (void *)v18;
    sub_157F500((__int64)&v68, v19, v13, v14, v15, v16);
    if ( v69 )
    {
      if ( (*(_QWORD *)v10 & 0x80000LL) != 0 )
      {
        v46 = *((_QWORD *)v10 + 4);
        if ( v46 )
        {
          v62 = *((__int64 **)v10 + 5);
          a7 = _mm_loadh_ps((const double *)&v62);
          v73[0] = a7;
          v47 = *(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v47 )
          {
            *(_QWORD *)&v73[0] = v47;
            v48 = 0;
            while ( (*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v48 = v69;
              v47 = *(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v48 )
              *(_QWORD *)&v73[0] = v47;
          }
          v49 = (unsigned int)sub_E90530((__int64 *)v73);
        }
        else
        {
          v49 = 0;
        }
      }
      else
      {
        v49 = *((unsigned int *)v10 + 1);
      }
      sub_168B9F0(v73, a1 + 8, v49, 7483, 0);
      v50 = (void **)&v64;
      v64 = *(_QWORD *)(v7 + 40);
      v51 = sub_15894B0((__int64)v73, &v64);
      v52 = *(_DWORD *)(v7 + 24);
      v53 = v51;
      if ( *(_BYTE *)(v51 + 120) )
      {
        LODWORD(v66) = *(_DWORD *)(v7 + 24);
        v50 = &v66;
        HIDWORD(v66) = v52;
        LOBYTE(v67) = 1;
        v62 = (__int64 *)&v66;
        sub_AEC610((__int64 *)(v51 + 32), (__int64 *)&v66);
      }
      else
      {
        v54 = *(_BYTE *)(v51 + 132) == 0;
        v62 = (__int64 *)&v66;
        if ( !v54 )
        {
          v59 = sub_168B9E0(v51);
          v60 = *(_QWORD *)(v53 + 16);
          if ( v60 )
            v60 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v60 + 32LL))(*(_QWORD *)(v53 + 16));
          v65 = v60;
          v61 = *sub_1587BC0(v59, &v65, v55, v56, v57, v58) + 32LL * *(unsigned int *)(v53 + 128);
          LODWORD(v66) = v52;
          v50 = &v66;
          HIDWORD(v66) = v52;
          LOBYTE(v67) = 1;
          v62 = (__int64 *)&v66;
          sub_AEC610((__int64 *)(v61 + 8), (__int64 *)&v66);
        }
      }
      v66 = (void *)sub_EEC8C0((unsigned __int64)v10, (__int64)v50, *(double *)a7.m128_u64);
      sub_1587DB0(v53, v62);
      goto LABEL_11;
    }
    goto LABEL_6;
  }
  return 0;
}
