void __fastcall sub_1890BE0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r14
  int v13; // r12d
  char v14; // r14
  void **v15; // rax
  __int64 *v16; // r8
  __int64 v17; // r9
  void **v18; // rdx
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rax
  void **v35; // rax
  __int64 v36; // rdx
  char v37; // al
  unsigned __int64 *v38; // rax
  __int64 *v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 **v42; // rax
  __int64 **v43; // r14
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // rdi
  size_t v47; // r15
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 *v53; // rax
  __int64 *v54; // [rsp+8h] [rbp-70h] BYREF
  __int64 v55; // [rsp+10h] [rbp-68h] BYREF
  __int64 s; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v57; // [rsp+20h] [rbp-58h]
  char v58; // [rsp+30h] [rbp-48h] BYREF

  v5 = a2;
  if ( !a2 )
    goto LABEL_4;
  if ( *(char *)(a2 + 28) < 0 )
    goto LABEL_4;
  v6 = *a1;
  if ( (*(_BYTE *)(a2 + 83) & 4) == 0 )
    goto LABEL_4;
  if ( (unsigned __int8)(((unsigned __int16)sub_183C740(*(_QWORD *)v6, (_DWORD *)a2) >> 8) - 3) > 1u )
  {
    sub_1890970(*(_QWORD *)v6, **(_QWORD **)(v6 + 16), a2, a3, *(double *)a4.m128_u64);
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v21 = *(_QWORD *)(v6 + 8);
  v22 = *(unsigned int *)(v21 + 8);
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(v21 + 12) )
  {
    sub_2237220(v21, v21 + 16, v22 + 1, 8);
    v22 = *(unsigned int *)(v21 + 8);
  }
  v7 = 1;
  *(_QWORD *)(*(_QWORD *)v21 + 8 * v22) = a2;
  ++*(_DWORD *)(v21 + 8);
LABEL_5:
  if ( (unsigned __int8)sub_B8E180(*(_QWORD *)a1[1] + 64LL) )
    return;
  v12 = sub_183C740(a1[2], (_DWORD *)a2);
  v13 = v12;
  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v24 = sub_B967A0(a2, a2, v8, v9);
    if ( v12 != 6 && v24 != 1 )
    {
      v25 = sub_188A5F0(a1[2], a2, v12, 0, 0, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
      *(_BYTE *)(a2 + 82) = ((_BYTE)v25 << 7) | *(_BYTE *)(a2 + 82) & 0x7F;
      sub_B9C540(*(_QWORD *)a1[1], (_BYTE *)a2, (unsigned int)(v25 << 7), v26, v27, v28);
      v32 = *(_BYTE *)a1[3];
      if ( !v32 )
        v32 = sub_188A5F0(a1[2], a2, v12, 1u, 0, *(double *)a3.m128_u64, *(double *)a4.m128_u64);
      v33 = v32 & 1;
      *(_BYTE *)(a2 + 83) = v33 | *(_BYTE *)(a2 + 83) & 0xFE;
      sub_B9C770(*(_QWORD *)a1[1], a2, v33, v29, v30, v31);
    }
  }
  if ( ((unsigned int)v12 - 1 <= 1 || v12 == 5) && (unsigned __int8)sub_B967A0(a2, a2, v8, v9) )
  {
    v23 = *(_BYTE *)a1[3] & 1;
    *(_BYTE *)(a2 + 83) = v23 | *(_BYTE *)(a2 + 83) & 0xFE;
    sub_B9C770(*(_QWORD *)a1[1], a2, v23, v9, v10, v11);
  }
  if ( *(char *)(a2 + 28) < 0 || (*(_BYTE *)(a2 + 83) & 4) == 0 || (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_14;
  v15 = (void **)sub_B8C3D0(a2, a2, v8, v9, v10, v11);
  v18 = (void **)*v15;
  v19 = (__int64 *)((char *)*v15 + 8 * *((unsigned int *)v15 + 2));
  if ( *v15 >= v19 )
  {
    if ( v18 == (void **)v19 )
      goto LABEL_14;
    if ( *(_WORD *)(*v19 + 36) != 195 )
    {
      v35 = (void **)(v19 + 1);
      while ( v18 != v35 )
      {
        v19 = (__int64 *)*v35++;
        if ( *((_WORD *)v19 + 18) == 195 )
          goto LABEL_49;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v20 = (__int64 *)*v15;
    while ( *(_WORD *)(*v20 + 36) != 195 )
    {
      if ( v19 == ++v20 )
        goto LABEL_14;
    }
    if ( v19 == v20 )
      goto LABEL_14;
  }
LABEL_49:
  v36 = *(_QWORD *)(a1[2] + 232);
  v37 = *(_BYTE *)(a2 + 29) & 1;
  if ( *(_DWORD *)(v36 + 152) > 0xB532B7Fu && *(char *)(a2 + 82) < 0 && (v12 <= 1u || v12 == 5) )
  {
    if ( !v37 )
      goto LABEL_14;
    v42 = (__int64 **)sub_B8C3D0(a2, a2, v36, (__int64)v19, (__int64)v16, v17);
    v16 = *v42;
    v43 = v42;
    v44 = *((unsigned int *)v42 + 2);
    v19 = *v42;
    a2 = (unsigned __int64)&(*v42)[v44];
    v17 = (v44 * 8) >> 5;
    if ( (v44 * 8) >> 5 )
    {
      if ( *(_WORD *)(*v16 + 36) != 195 )
      {
        if ( *(_WORD *)(v16[1] + 36) == 195 )
        {
          v19 = v16 + 1;
        }
        else if ( *(_WORD *)(v16[2] + 36) == 195 )
        {
          v19 = v16 + 2;
        }
        else
        {
          v17 = (__int64)&v16[4 * v17];
          if ( *(_WORD *)(v16[3] + 36) == 195 )
          {
            v19 = v16 + 3;
          }
          else
          {
            while ( 1 )
            {
              if ( (__int64 *)v17 == v19 + 4 )
              {
                v19 = (__int64 *)v17;
                goto LABEL_73;
              }
              v36 = v19[4];
              if ( *(_WORD *)(v36 + 36) == 195 )
              {
                v19 += 4;
                goto LABEL_92;
              }
              v36 = v19[5];
              if ( *(_WORD *)(v36 + 36) == 195 )
                break;
              v36 = v19[6];
              if ( *(_WORD *)(v36 + 36) == 195 )
              {
                v19 += 6;
                goto LABEL_92;
              }
              v36 = v19[7];
              if ( *(_WORD *)(v36 + 36) == 195 )
              {
                v19 += 7;
                goto LABEL_92;
              }
              v19 += 4;
            }
            v19 += 5;
          }
        }
      }
      goto LABEL_92;
    }
LABEL_73:
    v45 = (__int64)(a2 - (_QWORD)v19) >> 3;
    if ( v45 != 2 )
    {
      if ( v45 != 3 )
      {
        if ( v45 != 1 )
        {
LABEL_76:
          v19 = (__int64 *)a2;
LABEL_77:
          v46 = &v16[v44];
          v47 = (size_t)v46 - a2;
          if ( (__int64 *)a2 != v46 )
            v19 = (__int64 *)memmove(v19, (const void *)a2, v47);
          v48 = ((char *)v19 + v47 - (char *)*v43) >> 3;
          *((_DWORD *)v43 + 2) = v48;
          if ( !(_DWORD)v48 )
          {
            *(_BYTE *)(v5 + 29) &= ~1u;
            goto LABEL_14;
          }
          v37 = *(_BYTE *)(v5 + 29) & 1;
          goto LABEL_51;
        }
LABEL_103:
        if ( *(_WORD *)(*v19 + 36) != 195 )
          goto LABEL_76;
LABEL_92:
        if ( (__int64 *)a2 != v19 )
        {
          v53 = v19 + 1;
          if ( (__int64 *)a2 != v19 + 1 )
          {
            do
            {
              v36 = *v53;
              if ( *(_WORD *)(*v53 + 36) != 195 )
                *v19++ = v36;
              ++v53;
            }
            while ( (__int64 *)a2 != v53 );
            v16 = *v43;
          }
        }
        goto LABEL_77;
      }
      if ( *(_WORD *)(*v19 + 36) == 195 )
        goto LABEL_92;
      ++v19;
    }
    if ( *(_WORD *)(*v19 + 36) == 195 )
      goto LABEL_92;
    ++v19;
    goto LABEL_103;
  }
LABEL_51:
  if ( v37 )
  {
    v38 = sub_B8C3D0(v5, a2, v36, (__int64)v19, (__int64)v16, v17);
    v39 = (__int64 *)*v38;
    v40 = *v38 + 8LL * *((unsigned int *)v38 + 2);
    if ( *v38 < v40 )
    {
      v41 = *v38;
      while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 195 )
      {
        v41 += 8LL;
        if ( v40 == v41 )
          goto LABEL_14;
      }
      if ( v40 == v41 )
        goto LABEL_14;
      goto LABEL_88;
    }
    if ( v39 != (__int64 *)v40 )
    {
      if ( *(_WORD *)(*(_QWORD *)v40 + 36LL) != 195 )
      {
        v49 = (__int64 *)(v40 + 8);
        while ( v39 != v49 )
        {
          v50 = *v49++;
          if ( *(_WORD *)(v50 + 36) == 195 )
            goto LABEL_88;
        }
        goto LABEL_14;
      }
LABEL_88:
      v51 = a1[2];
      v52 = *(unsigned int *)(v51 + 3640);
      if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(v51 + 3644) )
      {
        sub_2237220(v51 + 3632, v51 + 3648, v52 + 1, 8);
        v52 = *(unsigned int *)(v51 + 3640);
      }
      *(_QWORD *)(*(_QWORD *)(v51 + 3632) + 8 * v52) = v5;
      ++*(_DWORD *)(v51 + 3640);
    }
  }
LABEL_14:
  v14 = 1;
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x24 )
  {
    v55 = 1;
    memset(&s, 0, 8 * ((unsigned __int64)(&v58 - (char *)&s) >> 3) + 8);
    v34 = a1[1];
    v54 = &v55;
    v14 = sub_1881150((__int64)&v55, *(_QWORD *)(*(_QWORD *)v34 + 48LL) & 0xFFFFFFFFFFFFFFF0LL, &v54);
    if ( (v55 & 1) == 0 )
      operator delete(s, 8LL * v57, 8);
  }
  if ( v13 != 6
    && (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) + 82) & 0x40) == 0
    && (*(_BYTE *)(v5 + 83) & 2) != 0
    && (*(_BYTE *)(v5 + 84) & 3) != 0
    && (unsigned int)sub_B984E0(v5)
    && v14 )
  {
    sub_1885C80((__int64 *)a1[2], (_DWORD *)v5, *(_DWORD *)(v5 + 24), *(double *)a3.m128_u64, a4);
  }
  if ( !v7 )
    sub_18885B0((__int64 *)a1[4], v5);
}
