__int64 __fastcall sub_A80150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rdx
  __int64 *v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // r14
  __int64 *v28; // r15
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 *v31; // rbp
  __int64 *v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  __int64 *v35; // rdx
  __int64 *v36; // rbp
  __int64 *v37; // r15
  __int64 *v38; // rdx
  char *v39; // rcx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 *v43; // r14
  __int64 v44; // r13
  __int64 *v45; // rax
  __int64 *v46; // [rsp+8h] [rbp-C0h]
  __int64 v47; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v48; // [rsp+8h] [rbp-C0h]
  __int64 *v49; // [rsp+10h] [rbp-B8h]
  __int64 v50; // [rsp+20h] [rbp-A8h]
  __int64 *v51; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v53; // [rsp+38h] [rbp-90h]
  unsigned int v54; // [rsp+40h] [rbp-88h]
  char v55; // [rsp+44h] [rbp-84h]
  __int64 v56; // [rsp+48h] [rbp-80h] BYREF

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 34 )
  {
    v8 = sub_A56C00(v8, (__int64)v5, a3, a4, a5);
    if ( !v8 )
      return 0;
  }
  v9 = sub_A5E7C0(v8, (__int64)v5, a3, a4, a5);
  v13 = *(unsigned __int8 *)(v9 + 19);
  LOBYTE(v13) = (unsigned __int8)v13 >> 2;
  if ( !(_BYTE)v13 )
    return 0;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 13 || ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1E9 )
    return 0;
  v50 = *v5;
  if ( *(_BYTE *)(*v5 + 16) == 34 )
  {
    v16 = *(_QWORD *)(a3 + 120);
    if ( v16 )
      goto LABEL_9;
  }
  else
  {
    v50 = sub_A56C00(*v5, (__int64)v5, v13, v10, v11);
    if ( !v50 )
      return 0;
    v16 = *(_QWORD *)(a3 + 120);
    if ( v16 )
      goto LABEL_9;
  }
  sub_A794E0((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), v13, v10, v11, v12);
  v16 = *(_QWORD *)(a3 + 120);
LABEL_9:
  if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return 0;
  v55 = 1;
  ptr = &v56;
  v53 = 8;
  v54 = 0;
  sub_A798C0(a1, a3, (__int64)&ptr, v10, v11, v12);
  result = 0;
  if ( HIDWORD(v53) != v54 )
  {
    v19 = sub_A5E9B0(v50, a3, v17, v54, v18);
    v46 = v22;
    if ( (__int64 *)v19 != v22 )
    {
      v23 = (__int64 *)v19;
LABEL_13:
      v24 = *v23;
      v25 = ptr;
      if ( v55 )
      {
        v26 = HIDWORD(v53);
        v27 = (__int64 *)((char *)ptr + 8 * HIDWORD(v53));
        if ( ptr == v27 )
          goto LABEL_31;
      }
      else
      {
        v26 = (unsigned int)v53;
        v27 = (__int64 *)((char *)ptr + 8 * (unsigned int)v53);
        if ( ptr == v27 )
          goto LABEL_31;
      }
      v28 = (__int64 *)ptr;
      v29 = *(_QWORD *)ptr + 2LL;
      if ( *(_QWORD *)ptr == -2 || v29 == 1 )
      {
        v30 = (__int64 *)((char *)ptr + 8);
        do
        {
          v28 = v30;
          if ( v27 == v30 )
            break;
          ++v30;
        }
        while ( (unsigned __int64)*v28 >= 0xFFFFFFFFFFFFFFFELL );
        if ( v55 )
          v26 = HIDWORD(v53);
        else
          v26 = (unsigned int)v53;
      }
      v31 = (__int64 *)((char *)ptr + 8 * v26);
      if ( v28 == v31 )
        goto LABEL_31;
      do
      {
        result = sub_A7F390(a1, v24, *v28, v29, v20, v21);
        if ( (_BYTE)result )
        {
          if ( v46 == ++v23 )
            goto LABEL_49;
          goto LABEL_13;
        }
        if ( v28 + 1 != v27 )
        {
          if ( (unsigned __int64)v28[1] < 0xFFFFFFFFFFFFFFFELL )
          {
            ++v28;
            continue;
          }
          v32 = v28 + 2;
          while ( 1 )
          {
            v28 = v32;
            if ( v32 == v27 )
              break;
            ++v32;
            if ( (unsigned __int64)*v28 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_29;
          }
        }
        v28 = v27;
LABEL_29:
        ;
      }
      while ( v31 != v28 );
    }
    v25 = ptr;
LABEL_31:
    v33 = sub_A6EB90((__int64 *)&ptr, v25);
    v36 = v35;
    v37 = (__int64 *)v33;
    v38 = (__int64 *)ptr;
    if ( v55 )
      v39 = (char *)ptr + 8 * HIDWORD(v53);
    else
      v39 = (char *)ptr + 8 * (unsigned int)v53;
    v51 = (__int64 *)v39;
    if ( (char *)v33 == v39 )
    {
LABEL_48:
      result = 1;
    }
    else
    {
      while ( 1 )
      {
        v40 = *v37;
        v41 = sub_A5E9B0(v50, (__int64)v25, (__int64)v38, (__int64)v39, v34);
        v49 = v38;
        if ( (__int64 *)v41 == v38 )
          break;
        v43 = (__int64 *)v41;
        while ( 1 )
        {
          v44 = *v43;
          if ( *v43 )
          {
            if ( v40 )
            {
              if ( v44 == v40 )
                break;
              v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
              if ( v47 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44) )
                break;
            }
          }
          v25 = (_QWORD *)v40;
          if ( (unsigned __int8)sub_A7F1A0(a1, v40, v44, (__int64)v39, v34, v42) )
            break;
          if ( v49 == ++v43 )
            goto LABEL_63;
        }
        if ( v36 == v37 + 1 )
        {
          v37 = v36;
        }
        else if ( (unsigned __int64)v37[1] < 0xFFFFFFFFFFFFFFFELL )
        {
          ++v37;
        }
        else
        {
          v45 = v37 + 2;
          do
          {
            v37 = v45;
            if ( v36 == v45 )
              break;
            ++v45;
          }
          while ( (unsigned __int64)*v37 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v51 == v37 )
          goto LABEL_48;
      }
LABEL_63:
      result = 0;
    }
  }
LABEL_49:
  if ( !v55 )
  {
    v48 = result;
    free(ptr);
    return v48;
  }
  return result;
}
