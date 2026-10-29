__int64 __fastcall sub_1DE2580(
        __int64 *a1,
        unsigned __int64 p_ptr,
        _DWORD *a3,
        __int64 *a4,
        _BYTE *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _DWORD *v9; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 *v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  void *v35; // rbp
  unsigned __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rdi
  unsigned int v39; // eax
  char v40; // al
  __int64 v41; // r12
  int v42; // ebp
  __int64 v43; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  void *v48; // r12
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // ebp
  unsigned int v52; // eax
  __int64 v53; // r12
  int v54; // r14d
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  unsigned int v59; // eax
  char v60; // dl
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // r8
  char v65; // dl
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // r8
  char v68; // al
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // [rsp-10h] [rbp-D8h]
  unsigned __int64 v72; // [rsp-8h] [rbp-D0h]
  unsigned int v73; // [rsp+Ch] [rbp-BCh]
  void **v74; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+18h] [rbp-B0h]
  void **v77; // [rsp+30h] [rbp-98h]
  _DWORD *v78; // [rsp+40h] [rbp-88h]
  __int64 v79; // [rsp+48h] [rbp-80h]
  char v80; // [rsp+52h] [rbp-76h] BYREF
  char v81; // [rsp+53h] [rbp-75h] BYREF
  unsigned int v82; // [rsp+54h] [rbp-74h] BYREF
  __int64 v83; // [rsp+58h] [rbp-70h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v85; // [rsp+68h] [rbp-60h]
  _BYTE v86[88]; // [rsp+70h] [rbp-58h] BYREF

  v9 = a3;
  v11 = *a3;
  v73 = p_ptr;
  v12 = (unsigned int)(*a3 - 6);
  if ( (unsigned int)v12 > 2 )
    goto LABEL_18;
  v13 = *((_QWORD *)v9 + 5);
  if ( v13 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v14 = (__int64 *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v15 = *v14;
    if ( *(_BYTE *)(*v14 + 16) == 26 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      v17 = v16 >> 24;
      if ( (v16 & 0x1000000) == 0 )
      {
LABEL_6:
        if ( *(_BYTE *)(v15 + 16) == 26
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
          && sub_F63050(v15, p_ptr, v12, v16) )
        {
          v18 = *(_BYTE *)(v15 + 18) >> 5;
        }
        else
        {
          v18 = 0;
        }
LABEL_8:
        v19 = *(_QWORD *)(sub_B8C1B0(v13 + 72) + 16);
        v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v19 & 4) != 0 )
          v20 = (_QWORD *)*v20;
        if ( v20 )
          v20 -= 8;
        v21 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      v15 = sub_F63050(*v14, p_ptr, v12, a4);
      v16 = *(_QWORD *)(v15 + 16);
      v17 = v16 >> 24;
      if ( (v16 & 0x1000000) == 0 )
        goto LABEL_6;
    }
    v60 = v17;
    v61 = *(unsigned __int16 *)(v15 + 22);
    v62 = (v17 & 0x40) != 0;
    v63 = 8 * v61 + 48;
    v64 = v15 + v63 + ((v60 >> 5) & 4) + 7;
    v65 = *(_BYTE *)(v15 + 19);
    v66 = v64 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v65 & 0x40) != 0 )
      v62 += (*(_BYTE *)(((v15 + v63 + ((v65 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v67 = v66 + 8 * v62;
    v68 = ((unsigned __int8)v65 >> 1) & 0xF;
    if ( v68 != 2 )
      __asm { jmp     rdx }
    v70 = v67 + 8LL * (*(_WORD *)((v15 + ((v65 >> 5) & 4) + v63 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    if ( (v16 & 0x20000000) != 0 )
      v70 += v61;
    v18 = *(_QWORD *)((v70 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    goto LABEL_8;
  }
  v18 = 0;
  v21 = 0;
  v20 = nullptr;
LABEL_13:
  sub_19A2CD0((__int64)&ptr, *a1, (__int64)v20, v18, v21, a6);
  v22 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v27 = sub_1DC71F0(a1, *((_QWORD *)v9 + 3), v23, v24, v25, v26, a7, a8);
  if ( v27 == (unsigned __int16 *)((char *)&dword_0 + 1)
    || (v28 = *a1,
        p_ptr = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL,
        LODWORD(v83) = *v9,
        v29 = sub_18B0290(v28, (_DWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFELL), &v83, *(double *)a7.m128_u64),
        v29 == 1) )
  {
    sub_190D5E0(v22, a7);
    sub_19A2DA0((__int64 *)&ptr);
    return 1;
  }
  v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
  v31 = v83;
  if ( *((_QWORD *)v9 + 3) != v30 || *v9 != (_DWORD)v83 )
    *a5 = 1;
  *((_QWORD *)v9 + 3) = v30;
  *v9 = v31;
  sub_190D5E0(v22, a7);
  sub_19A2DA0((__int64 *)&ptr);
  v11 = *v9;
LABEL_18:
  if ( v11 == 2 )
  {
    v32 = *((_QWORD *)v9 + 1);
    v33 = *((_QWORD *)v9 + 2);
    v34 = v32 + 8 * v33;
    v77 = (void **)v34;
    if ( v32 != v34 )
    {
      v74 = *((void ***)v9 + 1);
      v78 = v9;
      do
      {
        v35 = *v74;
        v36 = (unsigned __int64)*v74 & 0xFFFFFFFFFFFFFFF0LL;
        v37 = *(_QWORD *)v36;
        if ( *(_BYTE *)(*(_QWORD *)v36 + 16LL) == 38
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38
          && (v37 = sub_F63050(v37, p_ptr, v33, v34)) != 0 )
        {
          v38 = *a1;
          *a5 = 1;
          ptr = v86;
          v85 = 0x200000000LL;
          sub_1E4C960(v38, *(_QWORD *)(v37 + 32));
          v39 = *(_DWORD *)(v37 + 20);
          v80 = 0;
          v81 = 0;
          v82 = v39;
          p_ptr = v73;
          v40 = sub_1DDBB60(
                  a1,
                  v73,
                  0,
                  (__int64)ptr,
                  (unsigned int)v85,
                  (__int64)&v80,
                  a7,
                  a8,
                  (__int64)&v81,
                  (__int64)&v82);
          v33 = v71;
          v34 = v72;
          if ( v40 )
            goto LABEL_26;
          if ( v80 )
          {
            if ( v82 != 1 )
            {
              v51 = 0;
              while ( 1 )
              {
                v53 = *a1;
                ++v51;
                v54 = *(_DWORD *)(*a1 + 12632);
                *(_DWORD *)(*a1 + 12632) = v51;
                v83 = (__int64)sub_1DD1AB0((__int64)a1, *(_QWORD *)(v37 + 32), a7, a8);
                if ( (v83 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                  break;
                p_ptr = (unsigned __int64)&v83;
                if ( (unsigned __int8)sub_18B53F0(*a1, &v83, ((unsigned __int64)v73 << 32) | v73, v55, v56, v57) )
                  break;
                v58 = *((unsigned int *)a4 + 2);
                v34 = *((unsigned int *)a4 + 3);
                if ( v58 + 1 <= v34 )
                {
                  v33 = *a4;
                  *(_QWORD *)(*a4 + 8 * v58) = v83;
                  v52 = v82;
                  ++*((_DWORD *)a4 + 2);
                  *(_DWORD *)(v53 + 12632) = v54;
                  if ( v52 - 1 == v51 )
                    goto LABEL_61;
                }
                else
                {
                  p_ptr = (unsigned __int64)(a4 + 2);
                  v79 = v83;
                  sub_2237220(a4, a4 + 2, v58 + 1, 8);
                  v33 = *((unsigned int *)a4 + 2);
                  *(_QWORD *)(*a4 + 8 * v33) = v79;
                  v59 = v82;
                  ++*((_DWORD *)a4 + 2);
                  *(_DWORD *)(v53 + 12632) = v54;
                  if ( v51 == v59 - 1 )
                    goto LABEL_61;
                }
              }
              *(_DWORD *)(v53 + 12632) = v54;
              goto LABEL_26;
            }
          }
          else
          {
            v41 = *a1;
            v42 = *(_DWORD *)(*a1 + 12632);
            *(_DWORD *)(*a1 + 12632) = 0;
            v43 = (__int64)sub_1DD1AB0((__int64)a1, *(_QWORD *)(v37 + 32), a7, a8);
            if ( (v43 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            {
              *(_DWORD *)(v41 + 12632) = v42;
LABEL_26:
              if ( ptr != v86 )
                free(ptr);
              return 1;
            }
            v69 = sub_A781D0(*(_QWORD *)(*a1 + 248), v43, v82);
            v34 = *((unsigned int *)a4 + 2);
            p_ptr = *((unsigned int *)a4 + 3);
            if ( v34 + 1 > p_ptr )
            {
              p_ptr = (unsigned __int64)(a4 + 2);
              v75 = v69;
              sub_2237220(a4, a4 + 2, v34 + 1, 8);
              v34 = *((unsigned int *)a4 + 2);
              v69 = v75;
            }
            v33 = *a4;
            *(_QWORD *)(*a4 + 8 * v34) = v69;
            ++*((_DWORD *)a4 + 2);
            *(_DWORD *)(v41 + 12632) = v42;
          }
LABEL_61:
          if ( ptr != v86 )
            free(ptr);
        }
        else
        {
          ptr = sub_1DD1AB0((__int64)a1, (__int64)v35, a7, a8);
          if ( ((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            return 1;
          p_ptr = (unsigned __int64)&ptr;
          if ( (unsigned __int8)sub_18B53F0(*a1, (__int64 *)&ptr, ((unsigned __int64)v73 << 32) | v73, v45, v46, v47) )
            return 1;
          v48 = ptr;
          if ( v35 != ptr )
            *a5 = 1;
          v49 = *((unsigned int *)a4 + 2);
          v34 = *((unsigned int *)a4 + 3);
          if ( v49 + 1 > v34 )
          {
            p_ptr = (unsigned __int64)(a4 + 2);
            sub_2237220(a4, a4 + 2, v49 + 1, 8);
            v49 = *((unsigned int *)a4 + 2);
          }
          v33 = *a4;
          *(_QWORD *)(*a4 + 8 * v49) = v48;
          ++*((_DWORD *)a4 + 2);
        }
        ++v74;
      }
      while ( v77 != v74 );
      v9 = v78;
    }
    v50 = *((unsigned int *)a4 + 2);
    *((_QWORD *)v9 + 1) = *a4;
    *((_QWORD *)v9 + 2) = v50;
    if ( !v50 )
      *v9 = 1;
  }
  return 0;
}
