void __fastcall sub_7ABBD0(_QWORD *a1, __int64 a2, char a3, int a4, void **p_ptr, _QWORD *a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r13
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  __int64 v16; // r10
  __int64 v17; // rdx
  _QWORD *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 *v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // r10
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int8 v40; // r12
  int v41; // eax
  int v42; // ecx
  int v43; // ebp
  int v44; // eax
  _QWORD *v45; // rax
  __int64 *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int8 v56; // dl
  int v57; // eax
  int v58; // ecx
  int v59; // r12d
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // [rsp-8h] [rbp-D0h]
  __int64 v67; // [rsp+10h] [rbp-B8h]
  __int64 v68; // [rsp+10h] [rbp-B8h]
  _QWORD *v69; // [rsp+10h] [rbp-B8h]
  __int64 v70; // [rsp+10h] [rbp-B8h]
  __int64 v71; // [rsp+10h] [rbp-B8h]
  int v72; // [rsp+10h] [rbp-B8h]
  __int64 v73; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+10h] [rbp-B8h]
  __int64 v77; // [rsp+20h] [rbp-A8h]
  __int64 v78; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v80; // [rsp+38h] [rbp-90h]
  int v81; // [rsp+40h] [rbp-88h]
  char v82; // [rsp+44h] [rbp-84h]
  _BYTE v83[128]; // [rsp+48h] [rbp-80h] BYREF

  v10 = a4;
  v12 = *(_QWORD *)(a2 + 104);
  v67 = a2;
  ptr = v83;
  v80 = 8;
  v81 = 0;
  v82 = 1;
  sub_6E77B0((unsigned __int64 *)(v12 + 96), v12);
  v13 = v67;
  v14 = *(_QWORD *)(v67 + 128);
  if ( (*(_BYTE *)(v14 + 56) & 4) != 0 )
  {
    v63 = sub_798D40(v67);
    sub_7A2D50(v14 + 40, v63);
    v13 = v67;
  }
  v15 = *(_QWORD **)(v14 + 40);
  v68 = v13;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104));
  v16 = v68;
  v17 = *(_QWORD *)(v68 + 128);
  if ( (*(_BYTE *)(v17 + 56) & 4) != 0 )
  {
    v60 = v68;
    v77 = v68;
    v73 = *(_QWORD *)(v68 + 128);
    v61 = sub_798D40(v60);
    sub_7A2D50(v73 + 40, v61);
    v16 = v77;
    v17 = v73;
  }
  v69 = *(_QWORD **)(v17 + 48);
  if ( v69 != v15 )
  {
    v78 = v16;
    sub_25D57D0(&ptr, v83, p_ptr);
    v18 = v69;
    while ( 1 )
    {
      v19 = sub_7A21F0(*v15 & 0xFFFFFFFFFFFFFFF8LL);
      v20 = v19;
      if ( *((_BYTE *)p_ptr + 20) )
        break;
      v20 = v19;
      if ( sub_25D5370(p_ptr, v19) )
      {
LABEL_12:
        if ( a3 )
        {
          v23 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(*v15 & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_BYTE *)(a8 + 20) )
          {
            v24 = *(__int64 **)a8;
            v25 = *(unsigned int *)(a8 + 12);
            v26 = (__int64 *)(*(_QWORD *)a8 + 8 * v25);
            if ( *(__int64 **)a8 != v26 )
            {
              while ( v23 != *v24 )
              {
                if ( v26 == ++v24 )
                  goto LABEL_56;
              }
              goto LABEL_18;
            }
LABEL_56:
            if ( (unsigned int)v25 >= *(_DWORD *)(a8 + 8) )
              goto LABEL_57;
            ++v15;
            *(_DWORD *)(a8 + 12) = v25 + 1;
            *v26 = v23;
            if ( v18 == v15 )
              goto LABEL_19;
          }
          else
          {
LABEL_57:
            ++v15;
            sub_25D5540(a8, v23);
            if ( v18 == v15 )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_18:
          if ( v18 == ++v15 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_42:
        if ( !v82 )
          goto LABEL_59;
        v45 = ptr;
        v46 = (__int64 *)((char *)ptr + 8 * HIDWORD(v80));
        if ( ptr != v46 )
        {
          while ( v20 != *v45 )
          {
            if ( v46 == ++v45 )
              goto LABEL_81;
          }
          goto LABEL_47;
        }
LABEL_81:
        if ( HIDWORD(v80) < (unsigned int)v80 )
        {
          ++HIDWORD(v80);
          *v46 = v20;
        }
        else
        {
LABEL_59:
          sub_25D5540(&ptr, v20);
        }
LABEL_47:
        v47 = *v15 & 3LL;
        v48 = (int)v47;
        if ( (int)v10 >= (int)v47 )
          v48 = v10;
        if ( (_DWORD)v47 == 2 )
          v48 = 3;
        v49 = *v15 & 0xFFFFFFFFFFFFFFF8LL | v48;
        if ( a3 )
        {
          v50 = *(unsigned int *)(a7 + 8);
          if ( *(unsigned int *)(a7 + 12) < (unsigned __int64)(v50 + 1) )
          {
            v75 = v49;
            sub_25D6060(a7, a7 + 16, v50 + 1, 8);
            v50 = *(unsigned int *)(a7 + 8);
            v49 = v75;
          }
          ++v15;
          *(_QWORD *)(*(_QWORD *)a7 + 8 * v50) = v49;
          ++*(_DWORD *)(a7 + 8);
          if ( v18 == v15 )
          {
LABEL_19:
            v16 = v78;
            p_ptr = &ptr;
            goto LABEL_20;
          }
        }
        else
        {
          v51 = (unsigned __int64 *)a6[1];
          if ( (unsigned __int64)v51 >= (a6[2] & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v74 = v49;
            sub_7A96A0(a6, a1, 1u);
            *(_QWORD *)a6[1] = v74;
          }
          else
          {
            *v51 = v49;
          }
          a6[1] += 8LL;
          if ( v18 == ++v15 )
            goto LABEL_19;
        }
      }
    }
    v21 = *p_ptr;
    v22 = (__int64)*p_ptr + 8 * *((unsigned int *)p_ptr + 3);
    if ( *p_ptr == (void *)v22 )
      goto LABEL_42;
    while ( v20 != *v21 )
    {
      if ( (_QWORD *)v22 == ++v21 )
        goto LABEL_42;
    }
    goto LABEL_12;
  }
LABEL_20:
  v70 = v16;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v16 + 104) + 96LL), *(_QWORD *)(v16 + 104));
  v27 = v70;
  v28 = *(_QWORD *)(v70 + 128);
  if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
  {
    v62 = sub_7A2E20(v28);
    v27 = v70;
    v29 = v62;
  }
  else
  {
    v29 = *(_QWORD *)(v28 + 24);
  }
  v71 = v27;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104));
  v30 = *(_QWORD *)(v71 + 104);
  v31 = v29 + 24LL * *(unsigned int *)(*(_QWORD *)(v71 + 128) + 16LL);
  sub_6E77B0((unsigned __int64 *)(v30 + 96), v30);
  v32 = *(_QWORD *)(v71 + 128);
  if ( (*(_BYTE *)(v32 + 24) & 1) != 0 )
    v33 = sub_7A2E20(v32);
  else
    v33 = *(_QWORD *)(v32 + 24);
  if ( v31 == v33 )
  {
LABEL_39:
    if ( v82 )
      return;
LABEL_77:
    free(ptr);
    return;
  }
  v34 = v33;
  if ( !a3 )
  {
    v72 = (int)p_ptr;
    do
    {
      v35 = *(_QWORD *)(**(_QWORD **)(v34 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v36 = *(_QWORD *)(v35 + 8);
      if ( (v36 & 7) != 0 || (v36 & 8) != 0 )
        v37 = sub_B0CF30(**(_QWORD **)(v34 + 16), v30) & 0xFFFFFFFFFFFFFFF0LL;
      else
        v37 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      v38 = *(_QWORD *)(*(_QWORD *)v37 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v39 = *(_QWORD *)v38;
      if ( *(_BYTE *)(*(_QWORD *)v38 + 16LL) == 47 )
      {
        v40 = *(_BYTE *)(v34 + 12);
        v41 = v40 & 2;
        if ( (~v40 & 0xC) != 0 )
          v41 = (v40 >> 2) & 3;
        v42 = v10;
        v43 = 3;
        if ( v41 >= (int)v10 )
          v42 = v41;
        if ( v41 != 2 )
          v43 = v42;
        v44 = sub_B14A40(v39);
        sub_7ABBD0((_DWORD)a1, v44, v40 & 1, v43, v72, (_DWORD)a6, a7, a8);
        v30 = v64;
      }
      v34 += 24;
    }
    while ( v31 != v34 );
    goto LABEL_39;
  }
  do
  {
    v52 = *(_QWORD *)(**(_QWORD **)(v34 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v53 = *(_QWORD *)(v52 + 8);
    if ( (v53 & 7) != 0 || (v53 & 8) != 0 )
      v52 = sub_B0CF30(**(_QWORD **)(v34 + 16), v30);
    v54 = *(_QWORD *)(*(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v55 = *(_QWORD *)v54;
    if ( *(_BYTE *)(*(_QWORD *)v54 + 16LL) == 47 )
    {
      v56 = *(_BYTE *)(v34 + 12);
      v57 = (v56 >> 2) & 3;
      if ( (~v56 & 0xC) == 0 )
        v57 = v56 & 2;
      v58 = v57;
      v59 = 3;
      if ( (int)v10 >= v57 )
        v58 = v10;
      if ( v57 != 2 )
        v59 = v58;
      v30 = sub_B14A40(v55);
      sub_7ABBD0((_DWORD)a1, v30, 1, v59, (_DWORD)p_ptr, (_DWORD)a6, a7, a8);
    }
    v34 += 24;
  }
  while ( v31 != v34 );
  if ( !v82 )
    goto LABEL_77;
}

