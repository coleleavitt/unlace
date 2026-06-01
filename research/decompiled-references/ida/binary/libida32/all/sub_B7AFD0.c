void __fastcall sub_B7AFD0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // r14
  __int64 v10; // r13
  void **p_ptr; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r13
  _QWORD *v24; // rbx
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdi
  __int64 v48; // r13
  __int64 i; // rbp
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int8 v53; // dl
  int v54; // r15d
  int v55; // eax
  int v56; // r12d
  __int64 v57; // rax
  __int64 v58; // rdi
  unsigned __int64 *v59; // rcx
  char *v60; // rax
  char *v61; // rcx
  char *v62; // rax
  char *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  bool v66; // cc
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned int v71; // [rsp+4h] [rbp-D4h]
  _QWORD *v73; // [rsp+10h] [rbp-C8h]
  int v74; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v75; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v76; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v78; // [rsp+10h] [rbp-C8h]
  int v79; // [rsp+18h] [rbp-C0h]
  __int64 v80; // [rsp+20h] [rbp-B8h]
  void *ptr; // [rsp+40h] [rbp-98h] BYREF
  __int64 v82; // [rsp+48h] [rbp-90h]
  int v83; // [rsp+50h] [rbp-88h]
  char v84; // [rsp+54h] [rbp-84h]
  _BYTE v85[128]; // [rsp+58h] [rbp-80h] BYREF

  v9 = a3;
  v10 = a2;
  p_ptr = (void **)a5;
  v12 = *(_QWORD *)(a2 + 104);
  v71 = a4;
  ptr = v85;
  v82 = 8;
  v83 = 0;
  v84 = 1;
  sub_6E4DB0((__int64 *)(v12 + 96), v12, a3, a4, a5, a6);
  v17 = *(_QWORD *)(v10 + 128);
  if ( (*(_BYTE *)(v17 + 56) & 4) != 0 )
  {
    v70 = sub_B685F0(v10);
    sub_B72B60(v17 + 40, v70);
  }
  v18 = *(_QWORD **)(v17 + 40);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v13, v14, v15, v16);
  v22 = *(_QWORD *)(v10 + 128);
  if ( (*(_BYTE *)(v22 + 56) & 4) != 0 )
  {
    v76 = *(_QWORD *)(v10 + 128);
    v69 = sub_B685F0(v10);
    sub_B72B60(v76 + 40, v69);
    v22 = v76;
  }
  v73 = *(_QWORD **)(v22 + 48);
  if ( v73 != v18 )
  {
    sub_2212C90(&ptr, v85, p_ptr);
    v80 = v10;
    v23 = v18;
    v24 = v73;
    v25 = a7 + 16;
    while ( 1 )
    {
      v26 = sub_B72350(*v23 & 0xFFFFFFFFFFFFFFF8LL, v25);
      v22 = v26;
      if ( *((_BYTE *)p_ptr + 20) )
      {
        v27 = *p_ptr;
        v19 = (unsigned __int64)*p_ptr + 8 * *((unsigned int *)p_ptr + 3);
        if ( *p_ptr == (void *)v19 )
          goto LABEL_50;
        while ( v22 != *v27 )
        {
          if ( (_QWORD *)v19 == ++v27 )
            goto LABEL_50;
        }
LABEL_12:
        if ( v9 )
        {
          v28 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v23 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*v23 & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_BYTE *)(a8 + 20) )
          {
            v29 = *(_QWORD **)a8;
            v21 = *(unsigned int *)(a8 + 12);
            v30 = 8 * v21;
            v25 = *(_QWORD *)a8 + 8 * v21;
            if ( *(_QWORD *)a8 != v25 )
            {
              v22 = *(_QWORD *)a8;
              if ( v28 == *v29 )
              {
LABEL_60:
                v19 = (unsigned __int64)&v29[*(unsigned int *)(a8 + 12)];
                goto LABEL_22;
              }
              while ( 1 )
              {
                v22 += 8LL;
                if ( v25 == v22 )
                  break;
                if ( v28 == *(_QWORD *)v22 )
                  goto LABEL_60;
              }
            }
            if ( (unsigned int)v21 < *(_DWORD *)(a8 + 8) )
            {
              v21 = (unsigned int)(v21 + 1);
              *(_DWORD *)(a8 + 12) = v21;
              *(_QWORD *)v25 = v28;
              v29 = *(_QWORD **)a8;
              v22 = *(_QWORD *)a8 + v30;
              goto LABEL_60;
            }
          }
          v25 = v28;
          v31 = sub_2212A20(a8, v28);
          v29 = *(_QWORD **)a8;
          v22 = v31;
          if ( *(_BYTE *)(a8 + 20) )
            goto LABEL_60;
          v19 = (unsigned __int64)&v29[*(unsigned int *)(a8 + 8)];
LABEL_22:
          if ( v19 != v22 && *(_QWORD *)v22 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v22 += 8LL;
            do
            {
              v32 = (_QWORD *)v22;
              if ( v19 == v22 )
                break;
              v22 += 8LL;
            }
            while ( *v32 >= 0xFFFFFFFFFFFFFFFELL );
          }
        }
        if ( v24 == ++v23 )
          goto LABEL_28;
      }
      else
      {
        v25 = v26;
        v75 = v26;
        v57 = sub_2212830(p_ptr, v26);
        v22 = v75;
        if ( v57 )
          goto LABEL_12;
LABEL_50:
        if ( v84 )
        {
          v25 = (__int64)ptr;
          v21 = HIDWORD(v82);
          v58 = 8LL * HIDWORD(v82);
          v59 = (unsigned __int64 *)((char *)ptr + v58);
          if ( ptr != (char *)ptr + v58 )
          {
            v60 = (char *)ptr;
            if ( v22 == *(_QWORD *)ptr )
              goto LABEL_58;
            while ( 1 )
            {
              v60 += 8;
              if ( v59 == (unsigned __int64 *)v60 )
                break;
              if ( v22 == *(_QWORD *)v60 )
                goto LABEL_58;
            }
          }
          if ( HIDWORD(v82) < (unsigned int)v82 )
          {
            v21 = (unsigned int)++HIDWORD(v82);
            *v59 = v22;
            v25 = (__int64)ptr;
            v60 = (char *)ptr + v58;
LABEL_58:
            v61 = (char *)(v25 + 8LL * HIDWORD(v82));
            goto LABEL_63;
          }
        }
        v60 = (char *)sub_2212A20(&ptr, v22);
        v25 = (__int64)ptr;
        if ( v84 )
          goto LABEL_58;
        v61 = (char *)ptr + 8 * (unsigned int)v82;
LABEL_63:
        if ( v61 != v60 && *(_QWORD *)v60 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v62 = v60 + 8;
          do
          {
            v63 = v62;
            if ( v61 == v62 )
              break;
            v62 += 8;
          }
          while ( *(_QWORD *)v63 >= 0xFFFFFFFFFFFFFFFELL );
        }
        v64 = *v23 & 3LL;
        if ( (_DWORD)v64 == 2 )
        {
          v67 = 3;
        }
        else
        {
          v25 = v71;
          v65 = (unsigned int)v64;
          v66 = (int)v71 <= (int)v64;
          v67 = v71;
          if ( v66 )
            v67 = v65;
        }
        v68 = v67 | *v23 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9 )
        {
          v19 = *(unsigned int *)(a7 + 8);
          if ( v19 + 1 > *(unsigned int *)(a7 + 12) )
          {
            v78 = v67 | *v23 & 0xFFFFFFFFFFFFFFF8LL;
            sub_22134E0(a7, a7 + 16, v19 + 1, 8);
            v19 = *(unsigned int *)(a7 + 8);
            v68 = v78;
          }
          v25 = a7;
          ++v23;
          v22 = *(_QWORD *)a7;
          *(_QWORD *)(*(_QWORD *)a7 + 8 * v19) = v68;
          ++*(_DWORD *)(a7 + 8);
          if ( v24 == v23 )
          {
LABEL_28:
            v10 = v80;
            p_ptr = &ptr;
            break;
          }
        }
        else
        {
          v19 = *(_QWORD *)(a6 + 8);
          v22 = *(_QWORD *)(a6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v19 >= v22 )
          {
            v25 = (__int64)a1;
            v77 = v68;
            sub_B77CC0(a6, a1, 1u, v19, v20, v21);
            v19 = *(_QWORD *)(a6 + 8);
            *(_QWORD *)v19 = v77;
          }
          else
          {
            *(_QWORD *)v19 = v68;
          }
          *(_QWORD *)(a6 + 8) += 8LL;
          if ( v24 == ++v23 )
            goto LABEL_28;
        }
      }
    }
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v22, v19, v20, v21);
  v37 = *(_QWORD *)(v10 + 128);
  if ( (*(_BYTE *)(v37 + 24) & 1) != 0 )
    v38 = sub_B72C40(v37);
  else
    v38 = *(_QWORD *)(v37 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v33, v34, v35, v36);
  v39 = *(_QWORD *)(v10 + 104);
  v40 = v38 + 24LL * *(unsigned int *)(*(_QWORD *)(v10 + 128) + 16LL);
  sub_6E4DB0((__int64 *)(v39 + 96), v39, v41, v42, v43, v44);
  v47 = *(_QWORD *)(v10 + 128);
  if ( (*(_BYTE *)(v47 + 24) & 1) != 0 )
    v48 = sub_B72C40(v47);
  else
    v48 = *(_QWORD *)(v47 + 24);
  if ( v48 != v40 )
  {
    v79 = a6;
    v74 = (int)p_ptr;
    for ( i = v48; i != v40; i += 24 )
    {
      v50 = *(_QWORD *)(**(_QWORD **)(i + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v50 + 8) & 0xF) != 0 )
        v50 = sub_F411C0(**(_QWORD **)(i + 16));
      v51 = *(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v52 = *(_QWORD *)v51;
      if ( *(_BYTE *)(*(_QWORD *)v51 + 16LL) != 48 )
        continue;
      v53 = *(_BYTE *)(i + 12);
      if ( (v53 & 0xC) == 0xC )
      {
        v54 = 3;
        if ( (v53 & 2) == 0 )
        {
          v55 = 0;
          v54 = 0;
LABEL_41:
          v39 = v71;
          if ( (int)v71 > v55 )
            v54 = v71;
        }
      }
      else
      {
        v45 = *(unsigned __int8 *)(i + 12);
        LOBYTE(v45) = v53 >> 2;
        v54 = (v53 >> 2) & 3;
        if ( v54 != 2 )
        {
          v55 = (v53 >> 2) & 3;
          goto LABEL_41;
        }
        v54 = 3;
      }
      v56 = 1;
      if ( !v9 )
        v56 = *(_BYTE *)(i + 12) & 1;
      v39 = sub_F3D1D0(v52, v39, *(_BYTE *)(i + 12) & 1, v45, v46);
      sub_B7AFD0((_DWORD)a1, v39, v56, v54, v74, v79, a7, a8);
    }
  }
  if ( !v84 )
    free(ptr);
}

