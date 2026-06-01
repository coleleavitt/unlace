__int64 __fastcall sub_18979A0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rbx
  _QWORD *v17; // r12
  _QWORD *v18; // rdx
  char v19; // r15
  _QWORD *v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // [rsp+8h] [rbp-190h]
  __int64 v49; // [rsp+8h] [rbp-190h]
  unsigned __int64 v50; // [rsp+18h] [rbp-180h]
  __int64 *v51; // [rsp+20h] [rbp-178h]
  unsigned __int64 v52; // [rsp+30h] [rbp-168h]
  char v53; // [rsp+38h] [rbp-160h]
  __int64 *v54; // [rsp+38h] [rbp-160h]
  __int64 v55; // [rsp+48h] [rbp-150h]
  __int64 v56; // [rsp+48h] [rbp-150h]
  unsigned __int64 v57; // [rsp+48h] [rbp-150h]
  unsigned __int64 v58; // [rsp+48h] [rbp-150h]
  __int64 v59; // [rsp+50h] [rbp-148h]
  __int64 v60; // [rsp+50h] [rbp-148h]
  __int64 v61[2]; // [rsp+58h] [rbp-140h] BYREF
  __int64 v62; // [rsp+68h] [rbp-130h] BYREF
  void *v63; // [rsp+70h] [rbp-128h] BYREF
  void *v64; // [rsp+78h] [rbp-120h]
  void *v65[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v66; // [rsp+90h] [rbp-108h] BYREF
  void *v67; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-F0h]
  __int64 v69; // [rsp+B0h] [rbp-E8h] BYREF
  void *v70; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-D0h]
  _BYTE v72[64]; // [rsp+D0h] [rbp-C8h] BYREF
  __m128 ptr; // [rsp+110h] [rbp-88h] BYREF
  _BYTE v74[120]; // [rsp+120h] [rbp-78h] BYREF

  v61[0] = a2;
  v52 = a3;
  v4 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = sub_FDE930(v61);
  v51 = v4;
  v70 = v72;
  v71 = 0x800000000LL;
  if ( !v4 )
  {
    v53 = 0;
    v48 = 0;
    goto LABEL_5;
  }
  v9 = *v4;
  v10 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    return v10;
  v11 = sub_F67AB0(v9, a2, v5, v6, v8);
  v10 = v11;
  if ( v11 )
  {
    v53 = 0;
    v48 = 0;
    v52 = sub_F67A50(v11, a2, v12, v13, v14) & 0xFFFFFFFFFFFFFFF0LL;
    v51 = (__int64 *)v52;
    goto LABEL_5;
  }
  v34 = *v51;
  if ( *(_BYTE *)(*v51 + 16) == 34 || (v34 = sub_1894090(*v51, a2, v12, v13)) != 0 )
  {
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = (unsigned int)*(unsigned __int8 *)(v35 + 16) - 35;
    if ( (unsigned int)v36 > 1 )
      v35 = sub_F63050(v35, a2, v36, v13);
    v37 = *(unsigned __int8 *)(v35 + 19);
    LOBYTE(v37) = (unsigned __int8)v37 >> 2;
    if ( !(_BYTE)v37 )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v38 + 16) == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1E9 )
        goto LABEL_80;
    }
  }
  v39 = *v51;
  if ( *(_BYTE *)(*v51 + 16) == 34 )
    goto LABEL_83;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
  {
LABEL_97:
    v39 = sub_1894090(v39, a2, v37, v13);
    if ( !v39 )
      goto LABEL_98;
    goto LABEL_89;
  }
  v39 = sub_F63050(v39, a2, v37, v13);
  if ( v39 )
  {
LABEL_83:
    v40 = *(_QWORD *)(*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v41 = (unsigned int)*(unsigned __int8 *)(v40 + 16) - 35;
    if ( (unsigned int)v41 > 1 )
      v40 = sub_F63050(v40, a2, v41, v13);
    v37 = *(unsigned __int8 *)(v40 + 19);
    LOBYTE(v37) = (unsigned __int8)v37 >> 2;
    if ( (_BYTE)v37 )
    {
      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v42 + 16) == 13 && ((*(_WORD *)(v42 + 18) >> 3) & 0x1FF) == 0x1E9 )
      {
LABEL_80:
        v53 = 0;
        v48 = 1;
        goto LABEL_5;
      }
    }
  }
  v39 = *v51;
  if ( *(_BYTE *)(*v51 + 16) != 34 )
    goto LABEL_97;
LABEL_89:
  v43 = sub_A5E7C0(v39, a2, v37, v13, v14);
  v37 = *(unsigned __int8 *)(v43 + 19);
  LOBYTE(v37) = (unsigned __int8)v37 >> 2;
  if ( !(_BYTE)v37 )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v44 + 16) == 13 && ((*(_WORD *)(v44 + 18) >> 3) & 0x1FF) == 0x1EA )
    {
LABEL_92:
      v53 = 1;
      v48 = 0;
LABEL_5:
      v15 = (_QWORD *)a1[8];
      if ( *((_DWORD *)a1 + 18) )
        sub_171EC50(&ptr, v15, &v15[5 * *((unsigned int *)a1 + 20)], (__int64)(a1 + 8), 0);
      else
        sub_171EC50(
          &ptr,
          &v15[5 * *((unsigned int *)a1 + 20)],
          &v15[5 * *((unsigned int *)a1 + 20)],
          (__int64)(a1 + 8),
          1);
      v16 = ptr.m128_u64[1];
      v17 = (_QWORD *)ptr.m128_u64[0];
      v18 = (_QWORD *)(a1[8] + 40LL * *((unsigned int *)a1 + 20));
      sub_171EC50(&ptr, v18, v18, (__int64)(a1 + 8), 1);
      v50 = ptr.m128_u64[0];
      if ( v17 == (_QWORD *)ptr.m128_u64[0] )
      {
LABEL_43:
        ptr.m128_u64[0] = (unsigned __int64)v74;
        ptr.m128_u64[1] = 0x800000000LL;
        if ( (_DWORD)v71 )
        {
          v30 = 0;
          v49 = 8LL * (unsigned int)(v71 - 1) + 8;
          do
          {
            while ( 1 )
            {
              v31 = *(_QWORD *)((char *)v70 + v30);
              sub_FDEB80((__int64)v65, v61);
              v63 = v65[0];
              v64 = v65[1];
              v62 = *(_QWORD *)(v31 + 40);
              sub_FDEB80((__int64)&v67, &v62);
              if ( ((_DWORD)v68 == (_DWORD)v64 || (unsigned __int64)v64 >= (int)abs32(v68 - (_DWORD)v64))
                && (unsigned int)sub_2246430(&v63, v67, v68, 1, 1) <= 1 )
              {
                v33 = 0;
                ptr.m128_i32[2] = 0;
                if ( !ptr.m128_i32[3] )
                {
                  sub_2237220(&ptr, v74, 1, 8);
                  v33 = 8LL * ptr.m128_u32[2];
                }
                *(_QWORD *)(ptr.m128_u64[0] + v33) = v31;
                ++ptr.m128_i32[2];
              }
              if ( v67 != &v69 )
                operator delete(v67);
              if ( v65[0] == &v66 )
                break;
              operator delete(v65[0]);
              v30 += 8;
              if ( v30 == v49 )
                goto LABEL_52;
            }
            v30 += 8;
          }
          while ( v30 != v49 );
LABEL_52:
          v10 = 0;
          if ( ptr.m128_i32[2] == 1 )
            v10 = *(_QWORD *)ptr.m128_u64[0];
          if ( (_BYTE *)ptr.m128_u64[0] != v74 )
            free((void *)ptr.m128_u64[0]);
        }
        else
        {
          v10 = 0;
        }
        goto LABEL_56;
      }
      v19 = v53;
      v54 = a1;
      while ( 1 )
      {
        v20 = v17 + 1;
        if ( v17 != (_QWORD *)-8LL )
          break;
LABEL_23:
        v24 = v17 + 3;
        if ( v17 != (_QWORD *)-24LL )
        {
          while ( 1 )
          {
            if ( (*v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              goto LABEL_25;
            ptr.m128_u64[0] = *(_QWORD *)((*v24 & 0xFFFFFFFFFFFFFFF8LL) + 40);
            if ( (unsigned int)sub_FDE930((__int64 *)&ptr) != v7 )
              goto LABEL_25;
            v25 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v25 + 40) == v61[0] )
              goto LABEL_25;
            if ( v19 )
              goto LABEL_34;
            if ( v48 )
              goto LABEL_25;
            if ( !v51 )
            {
LABEL_34:
              v26 = (unsigned int)v71;
              v27 = (unsigned int)v71 + 1LL;
              if ( v27 > HIDWORD(v71) )
              {
                v57 = v25;
                sub_2237220(&v70, v72, v27, 8);
                v26 = (unsigned int)v71;
                v25 = v57;
              }
              *((_QWORD *)v70 + v26) = v25;
              LODWORD(v71) = v71 + 1;
              v24 = (_QWORD *)(v24[1] & 0xFFFFFFFFFFFFFFF8LL);
              if ( !v24 )
                break;
            }
            else
            {
              v60 = *v54;
              v56 = *(_QWORD *)(v25 + 40);
              if ( sub_19D01C0(*(_QWORD *)(*v54 + 736), v56, v52, 1) || sub_19D01C0(*(_QWORD *)(v60 + 736), v56, v52, 0) )
              {
                v25 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
                goto LABEL_34;
              }
LABEL_25:
              v24 = (_QWORD *)(v24[1] & 0xFFFFFFFFFFFFFFF8LL);
              if ( !v24 )
                break;
            }
          }
        }
        v28 = v17 + 5;
        if ( (_QWORD *)v16 == v17 + 5 )
        {
          v17 = (_QWORD *)v16;
          if ( v50 == v16 )
            goto LABEL_43;
        }
        else if ( v17[5] < 0xFFFFFFFFFFFFFFFELL )
        {
          v17 += 5;
          if ( (_QWORD *)v50 == v28 )
            goto LABEL_43;
        }
        else
        {
          v29 = v17 + 10;
          do
          {
            v17 = v29;
            if ( (_QWORD *)v16 == v29 )
              break;
            v29 += 5;
          }
          while ( *v17 >= 0xFFFFFFFFFFFFFFFELL );
          if ( (_QWORD *)v50 == v17 )
            goto LABEL_43;
        }
      }
      while ( 1 )
      {
        if ( (*v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_11;
        ptr.m128_u64[0] = *(_QWORD *)((*v20 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        if ( (unsigned int)sub_FDE930((__int64 *)&ptr) != v7 )
          goto LABEL_11;
        v21 = *v20 & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v21 + 40) == v61[0] )
          goto LABEL_11;
        if ( v48 )
          goto LABEL_20;
        if ( v19 )
          goto LABEL_11;
        if ( !v51 )
        {
LABEL_20:
          v22 = (unsigned int)v71;
          v23 = (unsigned int)v71 + 1LL;
          if ( v23 > HIDWORD(v71) )
          {
            v58 = v21;
            sub_2237220(&v70, v72, v23, 8);
            v22 = (unsigned int)v71;
            v21 = v58;
          }
          *((_QWORD *)v70 + v22) = v21;
          LODWORD(v71) = v71 + 1;
          v20 = (_QWORD *)(v20[1] & 0xFFFFFFFFFFFFFFF8LL);
          if ( !v20 )
            goto LABEL_23;
        }
        else
        {
          v59 = *v54;
          v55 = *(_QWORD *)(v21 + 40);
          if ( sub_19D01C0(*(_QWORD *)(*v54 + 736), v55, v52, 1) || sub_19D01C0(*(_QWORD *)(v59 + 736), v55, v52, 0) )
          {
            v21 = *v20 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_20;
          }
LABEL_11:
          v20 = (_QWORD *)(v20[1] & 0xFFFFFFFFFFFFFFF8LL);
          if ( !v20 )
            goto LABEL_23;
        }
      }
    }
  }
LABEL_98:
  v45 = *v51;
  if ( *(_BYTE *)(*v51 + 16) == 34 || (v45 = sub_1894090(v45, a2, v37, v13)) != 0 )
  {
    v46 = sub_A5E7C0(v45, a2, v37, v13, v14);
    if ( *(_BYTE *)(v46 + 19) >> 2 )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v47 + 16) == 13 && ((*(_WORD *)(v47 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_92;
    }
  }
LABEL_56:
  if ( v70 != v72 )
    free(v70);
  return v10;
}
