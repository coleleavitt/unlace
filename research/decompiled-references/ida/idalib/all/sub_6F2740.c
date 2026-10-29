unsigned __int64 __fastcall sub_6F2740(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int *v3; // r14
  size_t v4; // r13
  const char *v5; // rax
  bool v6; // zf
  unsigned __int8 *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  void **v11; // rbp
  unsigned __int64 v12; // rax
  void **v13; // r12
  void **v14; // rbx
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rbx
  __int64 v18; // rax
  void *v19; // rax
  unsigned __int8 *v20; // rbx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  void **v23; // r12
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  unsigned __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r13
  __int64 v33; // rbp
  void *v34; // rdi
  __int64 v35; // rdx
  unsigned __int8 *v36; // rax
  unsigned __int8 *v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // eax
  unsigned __int8 *v40; // rax
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // r13
  __int64 v45; // rbp
  void *v46; // rdi
  const char *v47; // [rsp+0h] [rbp-D8h] BYREF
  const char *v48; // [rsp+8h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+18h] [rbp-C0h]
  __int16 v51; // [rsp+20h] [rbp-B8h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+38h] [rbp-A0h]
  void *v54; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-80h]
  __int64 v56; // [rsp+60h] [rbp-78h]
  void *v57; // [rsp+70h] [rbp-68h]
  _QWORD v58[2]; // [rsp+80h] [rbp-58h] BYREF
  __int16 v59; // [rsp+90h] [rbp-48h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  sub_14634E0(a2, &v49);
  if ( v51 == 2 )
  {
    v18 = *(_QWORD *)(a1 + 40);
    v48 = &byte_22F0C30;
    if ( *(_QWORD *)(v18 + 544) )
    {
      (*(void (__fastcall **)(__int64, const char **))(v18 + 552))(v18 + 528, &v48);
      return v60 - __readfsqword(0x28u);
    }
    goto LABEL_81;
  }
  if ( v51 == 5 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(unsigned int **)(v50 + 16);
    v4 = *v3;
    v53 = 0;
    ptr = nullptr;
    if ( v4
      && (v19 = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1),
          *(_QWORD *)&v53 = v4 + 1,
          ptr = v19,
          memmove(v19, v3 + 4, v4),
          *((_BYTE *)ptr + v4) = 0,
          (_QWORD)v53) )
    {
      v5 = (const char *)ptr;
    }
    else
    {
      v5 = haystack;
    }
    v6 = *(_QWORD *)(v2 + 544) == 0;
    v47 = v5;
    if ( !v6 )
    {
      (*(void (__fastcall **)(__int64, const char **))(v2 + 552))(v2 + 528, &v47);
      if ( ptr )
      {
        *(_QWORD *)&v53 = 0;
        qfree(ptr);
      }
      sub_14634E0(a2, &v49);
      if ( v51 != 2 )
      {
        sub_FC70B0(&v54, *(_QWORD *)(a2 + 48), v49, 2202);
        v20 = (unsigned __int8 *)v54;
        if ( !v54 )
        {
          v38 = v55;
          v39 = *(_DWORD *)(v55 + 14976);
          if ( v39 )
          {
            v42 = (unsigned int)(v39 - 1);
            *(_DWORD *)(v55 + 14976) = v42;
            v20 = *(unsigned __int8 **)(v38 + 8 * v42 + 14848);
            v43 = *((unsigned int *)v20 + 134);
            *v20 = 0;
            v44 = *((_QWORD *)v20 + 66);
            *((_DWORD *)v20 + 106) = 0;
            v45 = v44 + (v43 << 6);
            while ( v44 != v45 )
            {
              while ( 1 )
              {
                v45 -= 64;
                v46 = *(void **)(v45 + 24);
                if ( v46 == (void *)(v45 + 40) )
                  break;
                operator delete(v46, *(_QWORD *)(v45 + 40) + 1LL);
                if ( v44 == v45 )
                  goto LABEL_80;
              }
            }
LABEL_80:
            *((_DWORD *)v20 + 134) = 0;
          }
          else
          {
            v20 = (unsigned __int8 *)operator new(0x3A0u);
            *v20 = 0;
            v40 = v20 + 96;
            do
            {
              v41 = v40 + 16;
              *((_QWORD *)v40 + 1) = 0;
              v40 += 32;
              *((_QWORD *)v40 - 4) = v41;
              *(v40 - 16) = 0;
            }
            while ( v20 + 416 != v40 );
            *((_QWORD *)v20 + 52) = v20 + 432;
            *((_QWORD *)v20 + 53) = 0x800000000LL;
            *((_QWORD *)v20 + 66) = v20 + 544;
            *((_QWORD *)v20 + 67) = 0x600000000LL;
          }
          v54 = v20;
        }
        v20[*v20 + 1] = 1;
        v21 = v54;
        v22 = *(unsigned __int8 *)v54;
        *(_BYTE *)v54 = v22 + 1;
        v21[v22 + 2] = "tilib-group";
        if ( (_BYTE)v59 )
        {
          sub_FC7790(v56, &v54, HIBYTE(v59));
          v56 = 0;
          v59 = 0;
        }
        if ( v57 != v58 )
          operator delete(v57, v58[0] + 1LL);
        v11 = (void **)v54;
        if ( v54 )
        {
          v12 = v55;
          if ( v55 )
          {
            if ( (unsigned __int64)v54 >= v55 && v55 + 14848 >= (unsigned __int64)v54 )
            {
LABEL_66:
              v35 = *(unsigned int *)(v12 + 14976);
              *(_DWORD *)(v12 + 14976) = v35 + 1;
              *(_QWORD *)(v12 + 8 * v35 + 14848) = v11;
              return v60 - __readfsqword(0x28u);
            }
            v23 = *((void ***)v54 + 66);
            v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v54 + 134)];
            if ( v23 != v24 )
            {
              do
              {
                v24 -= 8;
                v25 = (void **)v24[3];
                if ( v25 != v24 + 5 )
                  operator delete(v25, (unsigned __int64)v24[5] + 1);
              }
              while ( v23 != v24 );
              v24 = (void **)v11[66];
            }
            if ( v24 != v11 + 68 )
              free(v24);
            v26 = (void **)v11[52];
            if ( v26 != v11 + 54 )
              free(v26);
            v27 = v11 + 52;
            do
            {
              v27 -= 4;
              if ( *v27 != v27 + 2 )
                operator delete(*v27, (unsigned __int64)v27[2] + 1);
            }
            while ( v27 != v11 + 12 );
            goto LABEL_32;
          }
        }
      }
      return v60 - __readfsqword(0x28u);
    }
LABEL_81:
    std::__throw_bad_function_call();
  }
  sub_FC70B0(&v54, *(_QWORD *)(a2 + 48), v49, 2189);
  v8 = (unsigned __int8 *)v54;
  if ( !v54 )
  {
    v28 = v55;
    v29 = *(_DWORD *)(v55 + 14976);
    if ( v29 )
    {
      v30 = (unsigned int)(v29 - 1);
      *(_DWORD *)(v55 + 14976) = v30;
      v8 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
      v31 = *((unsigned int *)v8 + 134);
      *v8 = 0;
      v32 = *((_QWORD *)v8 + 66);
      *((_DWORD *)v8 + 106) = 0;
      v33 = v32 + (v31 << 6);
      while ( v32 != v33 )
      {
        while ( 1 )
        {
          v33 -= 64;
          v34 = *(void **)(v33 + 24);
          if ( v34 == (void *)(v33 + 40) )
            break;
          operator delete(v34, *(_QWORD *)(v33 + 40) + 1LL);
          if ( v32 == v33 )
            goto LABEL_64;
        }
      }
LABEL_64:
      *((_DWORD *)v8 + 134) = 0;
    }
    else
    {
      v8 = (unsigned __int8 *)operator new(0x3A0u);
      *v8 = 0;
      v36 = v8 + 96;
      do
      {
        v37 = v36 + 16;
        *((_QWORD *)v36 + 1) = 0;
        v36 += 32;
        *((_QWORD *)v36 - 4) = v37;
        *(v36 - 16) = 0;
      }
      while ( v8 + 416 != v36 );
      *((_QWORD *)v8 + 52) = v8 + 432;
      *((_QWORD *)v8 + 53) = 0x800000000LL;
      *((_QWORD *)v8 + 66) = v8 + 544;
      *((_QWORD *)v8 + 67) = 0x600000000LL;
    }
    v54 = v8;
  }
  v8[*v8 + 1] = 1;
  v9 = v54;
  v10 = *(unsigned __int8 *)v54;
  *(_BYTE *)v54 = v10 + 1;
  v9[v10 + 2] = "GROUP";
  if ( (_BYTE)v59 )
  {
    sub_FC7790(v56, &v54, HIBYTE(v59));
    v56 = 0;
    v59 = 0;
  }
  if ( v57 != v58 )
    operator delete(v57, v58[0] + 1LL);
  v11 = (void **)v54;
  if ( v54 )
  {
    v12 = v55;
    if ( v55 )
    {
      if ( (unsigned __int64)v54 >= v55 && v55 + 14848 >= (unsigned __int64)v54 )
        goto LABEL_66;
      v13 = *((void ***)v54 + 66);
      v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v54 + 134)];
      if ( v13 != v14 )
      {
        do
        {
          v14 -= 8;
          v15 = (void **)v14[3];
          if ( v15 != v14 + 5 )
            operator delete(v15, (unsigned __int64)v14[5] + 1);
        }
        while ( v13 != v14 );
        v14 = (void **)v11[66];
      }
      if ( v14 != v11 + 68 )
        free(v14);
      v16 = (void **)v11[52];
      if ( v16 != v11 + 54 )
        free(v16);
      v17 = v11 + 48;
      do
      {
        if ( *v17 != v17 + 2 )
          operator delete(*v17, (unsigned __int64)v17[2] + 1);
        v17 -= 4;
      }
      while ( v17 != v11 + 8 );
LABEL_32:
      operator delete(v11, 0x3A0u);
    }
  }
  return v60 - __readfsqword(0x28u);
}
