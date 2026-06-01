__int64 __fastcall sub_6D58F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // r12
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // dl
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 v42; // rbx
  char v43; // dl
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  unsigned __int8 v57; // al
  unsigned __int8 v58; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v59; // [rsp+10h] [rbp-58h] BYREF
  __int64 v60; // [rsp+18h] [rbp-50h] BYREF
  __m128i v61; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v62; // [rsp+30h] [rbp-38h]
  __int64 v63; // [rsp+38h] [rbp-30h]

  v4 = a3;
  v59 = a3;
  v63 = a1;
  v60 = a2;
  v62 = &v60;
  v7 = *(_BYTE *)(a3 + 16);
  v8 = a3;
  v58 = a4;
  v61 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v58, (__m128i)(unsigned __int64)&v59);
  if ( v7 == 33 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
    goto LABEL_11;
  v8 = sub_B0D320(a3);
  if ( v8 )
  {
LABEL_2:
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 > 1 )
    {
      v9 = sub_B0D320(v9);
      if ( *(_BYTE *)(v9 + 19) >> 2 )
        goto LABEL_4;
    }
    else if ( *(_BYTE *)(v9 + 19) >> 2 )
    {
      goto LABEL_4;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E8 )
      return 1;
  }
LABEL_4:
  v7 = *(_BYTE *)(a3 + 16);
  if ( v7 == 33 )
  {
    v10 = a3;
LABEL_6:
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 34 > 1 )
    {
      v11 = sub_B0D320(v11);
      if ( !(*(_BYTE *)(v11 + 19) >> 2) )
        goto LABEL_8;
    }
    else if ( !(*(_BYTE *)(v11 + 19) >> 2) )
    {
LABEL_8:
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) == 13 && ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) == 0x1E9 )
        return 1;
    }
LABEL_10:
    v7 = *(_BYTE *)(a3 + 16);
    goto LABEL_11;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v10 = sub_B0D320(a3);
    if ( !v10 )
      goto LABEL_10;
    goto LABEL_6;
  }
LABEL_11:
  if ( v7 == 41
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 && (v4 = sub_B0D320(a3)) != 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 1;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v60 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 34 > 1 )
    v16 = sub_B0D320(v16);
  if ( !(*(_BYTE *)(v16 + 19) >> 2) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1E8 )
      return 1;
  }
  v18 = v60;
  v19 = *(_BYTE *)(v60 + 16);
  v20 = v60;
  v21 = v60;
  if ( v19 == 33 )
    goto LABEL_33;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
    goto LABEL_44;
  v21 = sub_B0D320(v60);
  if ( v21 )
  {
LABEL_33:
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 34 > 1 )
      v22 = sub_B0D320(v22);
    if ( !(*(_BYTE *)(v22 + 19) >> 2) )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) == 0x1E8 )
        goto LABEL_69;
    }
  }
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 == 33 )
  {
    v24 = v18;
    goto LABEL_40;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v24 = sub_B0D320(v18);
    if ( !v24 )
    {
LABEL_43:
      v19 = *(_BYTE *)(v18 + 16);
      goto LABEL_44;
    }
LABEL_40:
    v25 = sub_6B2F10(v24);
    a2 = *(unsigned __int8 *)(v25 + 19);
    LOBYTE(a2) = (unsigned __int8)a2 >> 2;
    if ( !(_BYTE)a2 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v26 + 16) == 13 && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1E9 )
      {
LABEL_69:
        v42 = v59;
        v43 = *(_BYTE *)(v59 + 16);
        v44 = v59;
        v45 = v59;
        if ( v43 == 33 )
          goto LABEL_70;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          goto LABEL_87;
        v45 = sub_B0D320(v59);
        if ( v45 )
        {
LABEL_70:
          v46 = *(_QWORD *)(*(_QWORD *)(v45 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v46 + 16) - 34 > 1 )
            v46 = sub_B0D320(v46);
          if ( !(*(_BYTE *)(v46 + 19) >> 2) )
          {
            v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v47 + 16) == 13 && ((*(_WORD *)(v47 + 18) >> 3) & 0x1FF) == 0x1E8 )
              goto LABEL_75;
          }
        }
        v43 = *(_BYTE *)(v42 + 16);
        if ( v43 == 33 )
        {
          v49 = v42;
        }
        else
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          {
LABEL_87:
            if ( v43 != 41
              && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41
               || (v44 = sub_B0D320(v42)) == 0)
              || (v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL),
                  *(_BYTE *)(v52 + 16) != 13)
              || ((*(_WORD *)(v52 + 18) >> 3) & 0x1FF) != 0x1EA )
            {
              v53 = *(_QWORD *)(*(_QWORD *)(v59 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(v53 + 16) - 34 > 1 )
                v53 = sub_B0D320(v53);
              v48 = 0;
              if ( *(_BYTE *)(v53 + 19) >> 2 )
              {
                v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v54 + 16) == 13 )
                  v48 = ((*(_WORD *)(v54 + 18) >> 3) & 0x1FF) == 488;
              }
              return sub_6D6220(&v61, v48);
            }
            goto LABEL_75;
          }
          v49 = sub_B0D320(v42);
          if ( !v49 )
          {
LABEL_86:
            v43 = *(_BYTE *)(v42 + 16);
            goto LABEL_87;
          }
        }
        v50 = *(_QWORD *)(*(_QWORD *)(v49 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v50 + 16) - 34 > 1 )
          v50 = sub_B0D320(v50);
        if ( !(*(_BYTE *)(v50 + 19) >> 2) )
        {
          v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v51 + 16) == 13 && ((*(_WORD *)(v51 + 18) >> 3) & 0x1FF) == 0x1E9 )
          {
LABEL_75:
            v48 = 1;
            return sub_6D6220(&v61, v48);
          }
        }
        goto LABEL_86;
      }
    }
    goto LABEL_43;
  }
LABEL_44:
  if ( v19 == 41
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 && (v20 = sub_B0D320(v18)) != 0 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v27 + 16) == 13 && ((*(_WORD *)(v27 + 18) >> 3) & 0x1FF) == 0x1EA )
      goto LABEL_69;
  }
  v28 = *(_QWORD *)(*(_QWORD *)(v60 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v28 + 16) - 34 > 1 )
    v28 = sub_B0D320(v28);
  if ( *(_BYTE *)(v28 + 19) >> 2 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v29 + 16) == 13 && ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) == 0x1E8 )
      goto LABEL_101;
  }
  v30 = *(_QWORD *)(v59 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v31 = *(_QWORD *)v30;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v30 + 16LL) - 34 > 1 )
    v31 = sub_B0D320(v31);
  if ( *(_BYTE *)(v31 + 19) >> 2 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v32 + 16) == 13 && ((*(_WORD *)(v32 + 18) >> 3) & 0x1FF) == 0x1E8 )
    {
LABEL_101:
      v55 = v60;
      v56 = v59;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 107LL) & 0x40) == 0 )
      {
        if ( !v58 )
        {
          v55 = v59;
          v56 = v60;
        }
        v57 = sub_6D5120(a1, v55, v56, 0);
        return sub_6D6220(&v61, v57);
      }
      v48 = 1;
      if ( !(unsigned __int8)sub_6D5120(a1, v60, v59, 0) )
      {
        v48 = 0;
        if ( !v58 )
          v48 = (unsigned __int8)sub_6D5120(a1, v59, v60, 0);
      }
      return sub_6D6220(&v61, v48);
    }
  }
  v33 = sub_B0E700(v60);
  v34 = sub_B0E700(v59);
  v35 = v34;
  if ( !v33 || !v34 )
    return 0;
  if ( v33 == v34 )
    return 1;
  v36 = sub_B07AF0(v33);
  v37 = sub_B07AF0(v35);
  if ( v37 )
  {
    while ( v36 != v37 )
    {
      v38 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 32LL))(v36, a2);
      if ( v38 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37) )
        break;
      v37 = sub_7BACE0(v37);
      if ( !v37 )
        goto LABEL_64;
    }
    v48 = v58;
    return sub_6D6220(&v61, v48);
  }
LABEL_64:
  v39 = sub_B07AF0(v35);
  v40 = sub_B07AF0(v33);
  if ( !v40 )
    return 0;
  while ( v39 != v40 )
  {
    v41 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 32LL))(v39, a2);
    if ( v41 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40) )
      break;
    v40 = sub_7BACE0(v40);
    if ( !v40 )
      return 0;
  }
  return sub_6D6220(&v61, v58 ^ 1u);
}

