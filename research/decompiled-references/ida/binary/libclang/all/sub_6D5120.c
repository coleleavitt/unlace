__int64 __fastcall sub_6D5120(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // r12
  _QWORD *v30; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 **v34; // rdx
  __int64 v35; // rax
  __int64 **v36; // rdx
  __int64 **v37; // r13
  __int64 **v38; // r15
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 **v41; // r14
  __int64 *v42; // r13
  __int64 v43; // rax
  __int64 **v44; // rdx
  __int64 **v45; // rcx
  __int64 **v46; // r15
  __int64 **v47; // rax
  __int64 *v48; // r15
  __int64 v49; // rax
  __int64 **v50; // rdx
  __int64 **v51; // r15
  __int64 **v52; // rdx
  __int64 **v53; // r13
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // r9
  _QWORD *v60; // r15
  __int64 v61; // rax
  __int64 **v62; // rdx
  __int64 **v63; // r13
  __int64 **v64; // r15
  _QWORD *v65; // rdx
  __int64 *v66; // [rsp+8h] [rbp-C0h]
  __int64 **v67; // [rsp+8h] [rbp-C0h]
  __int64 *v68; // [rsp+8h] [rbp-C0h]
  _QWORD *v69; // [rsp+8h] [rbp-C0h]
  __int64 *v70; // [rsp+8h] [rbp-C0h]
  __int64 **v71; // [rsp+10h] [rbp-B8h]
  __int64 **v72; // [rsp+10h] [rbp-B8h]
  __int64 *v73; // [rsp+10h] [rbp-B8h]
  bool v74; // [rsp+10h] [rbp-B8h]
  __int64 *v75; // [rsp+10h] [rbp-B8h]
  __int64 **v76; // [rsp+18h] [rbp-B0h]
  __int64 **v77; // [rsp+18h] [rbp-B0h]
  __int64 **v78; // [rsp+18h] [rbp-B0h]
  __int64 **v79; // [rsp+20h] [rbp-A8h]
  __int64 **v80; // [rsp+20h] [rbp-A8h]
  bool v81; // [rsp+2Fh] [rbp-99h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v83; // [rsp+38h] [rbp-90h]
  int v84; // [rsp+40h] [rbp-88h]
  char v85; // [rsp+44h] [rbp-84h]
  char v86; // [rsp+48h] [rbp-80h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 34 > 1 )
    v9 = sub_B0D320(v9);
  if ( !(*(_BYTE *)(v9 + 19) >> 2) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1E8 )
      return 1;
  }
  v11 = *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)v11;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v11 + 16LL) - 34 > 1 )
    v12 = sub_B0D320(v12);
  if ( !(*(_BYTE *)(v12 + 19) >> 2) )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v32 + 16) == 13 && ((*(_WORD *)(v32 + 18) >> 3) & 0x1FF) == 0x1E8 )
      return 1;
  }
  v13 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)v13;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 34 > 1 )
    v14 = sub_B0D320(v14);
  if ( !(*(_BYTE *)(v14 + 19) >> 2) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 0;
  }
  v16 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v16 + 16LL) - 34 > 1 )
    v17 = sub_B0D320(v17);
  if ( *(_BYTE *)(v17 + 19) >> 2 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) == 13 && ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 0;
  }
  v19 = *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v20 = *(_QWORD *)v19;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 34 > 1 )
    v20 = sub_B0D320(v20);
  if ( !(*(_BYTE *)(v20 + 19) >> 2) )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 0;
  }
  v22 = *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v23 = *(_QWORD *)v22;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v22 + 16LL) - 34 > 1 )
    v23 = sub_B0D320(v23);
  if ( *(_BYTE *)(v23 + 19) >> 2 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return 0;
  }
  v81 = sub_6B2F40(a2);
  if ( v81 )
  {
    if ( !(*(_BYTE *)(sub_6B2F10(a3) + 19) >> 2) )
    {
      v25 = sub_6B2F10(a3);
      v26 = sub_6A8100(*(_QWORD *)(v25 + 24));
      if ( !v26 )
        return 1;
      v27 = sub_6B2FB0(a2);
      v29 = v28;
      v30 = (_QWORD *)v27;
      if ( (_QWORD *)v27 == v28 )
        return 1;
      while ( (unsigned __int8)sub_7BC360(v26, *v30, 1, 0) )
      {
        if ( v29 == ++v30 )
          return 1;
      }
      return 0;
    }
    v49 = sub_6B2FB0(a2);
    v80 = v50;
    v77 = (__int64 **)v49;
    if ( (__int64 **)v49 != v50 )
    {
      do
      {
        v68 = *v77;
        v51 = (__int64 **)sub_6B2FB0(a3);
        v53 = v52;
        if ( v51 == v52 )
        {
LABEL_84:
          v56 = sub_6B2F10(a3);
          v55 = sub_6A8100(*(_QWORD *)(v56 + 24));
          if ( !v55 )
            return 0;
          v57 = sub_6B2FB0(a2);
          v69 = v58;
          v59 = v57;
          if ( v58 == (_QWORD *)v57 )
            return 0;
          v74 = 0;
        }
        else
        {
          if ( a4 )
          {
            while ( 1 )
            {
              v73 = *v51;
              if ( (unsigned __int8)sub_6D4F10(a1, v68, *v51) || (unsigned __int8)sub_6D4F10(a1, v73, v68) )
                break;
              if ( v53 == ++v51 )
                goto LABEL_84;
            }
          }
          else
          {
            while ( !(unsigned __int8)sub_6D4F10(a1, v68, *v51) )
            {
              if ( v53 == ++v51 )
                goto LABEL_84;
            }
          }
          v54 = sub_6B2F10(a3);
          v55 = sub_6A8100(*(_QWORD *)(v54 + 24));
          if ( !v55 )
            goto LABEL_78;
          v59 = sub_6B2FB0(a2);
          v69 = v65;
          v74 = v81;
          if ( v65 == (_QWORD *)v59 )
            goto LABEL_78;
        }
        v60 = (_QWORD *)v59;
        while ( !(unsigned __int8)sub_7BC360(v55, *v60, 1, 0) )
        {
          if ( v69 == ++v60 )
          {
            if ( v74 )
              break;
            return 0;
          }
        }
LABEL_78:
        ++v77;
      }
      while ( v80 != v77 );
    }
    return 1;
  }
  if ( !sub_B0E700(a2) )
    return 0;
  v33 = sub_6B2FB0(a2);
  v79 = v34;
  if ( (__int64 **)v33 != v34 )
  {
    if ( a4 )
    {
      v78 = (__int64 **)v33;
      while ( 1 )
      {
        v70 = *v78;
        v61 = sub_6B2FB0(a3);
        v63 = v62;
        if ( v62 == (__int64 **)v61 )
          break;
        v64 = (__int64 **)v61;
        while ( 1 )
        {
          v75 = *v64;
          if ( (unsigned __int8)sub_6D4F10(a1, v70, *v64) || (unsigned __int8)sub_6D4F10(a1, v75, v70) )
            break;
          if ( v63 == ++v64 )
            return 0;
        }
        if ( v79 == ++v78 )
          goto LABEL_49;
      }
    }
    else
    {
      v71 = (__int64 **)v33;
      while ( 1 )
      {
        v66 = *v71;
        v35 = sub_6B2FB0(a3);
        v37 = v36;
        if ( v36 == (__int64 **)v35 )
          break;
        v38 = (__int64 **)v35;
        while ( !(unsigned __int8)sub_6D4F10(a1, v66, *v38) )
        {
          if ( v37 == ++v38 )
            return 0;
        }
        if ( v79 == ++v71 )
          goto LABEL_49;
      }
    }
    return 0;
  }
LABEL_49:
  v39 = sub_6B2F10(a2);
  v40 = sub_6A8100(*(_QWORD *)(v39 + 24));
  if ( !v40 )
    return 1;
  v83 = 8;
  ptr = &v86;
  v84 = 0;
  v85 = 1;
  sub_6C0780(a1, v40, (__int64)&ptr);
  if ( HIDWORD(v83) != v84 || *(_BYTE *)(sub_6B2F10(a2) + 19) >> 2 )
  {
    v41 = (__int64 **)ptr;
    if ( v85 )
    {
      v67 = (__int64 **)((char *)ptr + 8 * HIDWORD(v83));
      if ( ptr != v67 )
        goto LABEL_53;
    }
    else
    {
      v67 = (__int64 **)((char *)ptr + 8 * (unsigned int)v83);
      if ( ptr != v67 )
      {
LABEL_53:
        while ( 1 )
        {
          v42 = *v41;
          if ( (unsigned __int64)*v41 < 0xFFFFFFFFFFFFFFFELL )
            break;
          if ( v67 == ++v41 )
            goto LABEL_55;
        }
        while ( v67 != v41 )
        {
          v43 = sub_6B2FB0(a3);
          v72 = v44;
          v45 = (__int64 **)v43;
          if ( v44 == (__int64 **)v43 )
            goto LABEL_101;
          if ( a4 )
          {
            while ( 1 )
            {
              v48 = *v45;
              v76 = v45;
              if ( (unsigned __int8)sub_6D4F10(a1, v42, *v45) || (unsigned __int8)sub_6D4F10(a1, v48, v42) )
                break;
              v45 = v76 + 1;
              if ( v72 == v76 + 1 )
                goto LABEL_101;
            }
          }
          else
          {
            v46 = (__int64 **)v43;
            while ( !(unsigned __int8)sub_6D4F10(a1, v42, *v46) )
            {
              if ( v72 == ++v46 )
                goto LABEL_101;
            }
          }
          v47 = v41 + 1;
          if ( v67 == v41 + 1 )
            break;
          while ( 1 )
          {
            v42 = *v47;
            v41 = v47;
            if ( (unsigned __int64)*v47 < 0xFFFFFFFFFFFFFFFELL )
              break;
            if ( v67 == ++v47 )
              goto LABEL_55;
          }
        }
LABEL_55:
        if ( v85 )
          return 1;
      }
      free(ptr);
    }
    return 1;
  }
LABEL_101:
  if ( v85 )
    return 0;
  free(ptr);
  return 0;
}

