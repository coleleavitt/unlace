__int64 __fastcall sub_70A720(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // r13
  __int64 *v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rax
  char v29; // si
  __int64 v30; // r13
  char *v31; // rax
  char *v32; // r14
  __int64 v33; // rdi
  char *v34; // r15
  char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 *v44; // r14
  __int64 v45; // rax
  __int64 *v46; // [rsp+0h] [rbp-B8h]
  __int64 v48; // [rsp+10h] [rbp-A8h]
  __int64 *v49; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int64 v51; // [rsp+28h] [rbp-90h]
  int v52; // [rsp+30h] [rbp-88h]
  char v53; // [rsp+34h] [rbp-84h]
  char v54; // [rsp+38h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v48 = a2;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    v6 = *(unsigned __int8 *)(v5 + 16);
    if ( (unsigned int)(v6 - 34) <= 1 )
    {
      if ( (_BYTE)v6 == 35 )
        goto LABEL_4;
      goto LABEL_23;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      break;
    v15 = sub_B0D320(v5);
    v5 = v15;
    if ( !v15 )
      break;
    if ( *(_BYTE *)(v15 + 16) == 35 )
    {
LABEL_4:
      v7 = sub_B07AF0(v5);
      goto LABEL_5;
    }
LABEL_23:
    v4 = *(_QWORD *)(v5 + 24);
  }
  v7 = 0;
LABEL_5:
  v8 = *(_QWORD *)(a3 + 24);
  while ( 2 )
  {
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(unsigned __int8 *)(v9 + 16);
    if ( (unsigned int)(v10 - 34) <= 1 )
    {
      if ( (_BYTE)v10 == 35 )
        goto LABEL_8;
LABEL_19:
      v8 = *(_QWORD *)(v9 + 24);
      continue;
    }
    break;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
    return 0;
  v14 = sub_B0D320(v9);
  v9 = v14;
  if ( !v14 )
    return 0;
  if ( *(_BYTE *)(v14 + 16) != 35 )
    goto LABEL_19;
LABEL_8:
  v11 = sub_B07AF0(v9);
  if ( !v11 )
    return 0;
  while ( v7 != v11 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    if ( v12 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11) )
      break;
    v11 = sub_7BACE0(v11);
    if ( !v11 )
      return 0;
  }
  if ( *(_BYTE *)(a2 + 19) >> 2 )
  {
    v22 = *(_QWORD *)(a3 + 24);
    v51 = 8;
    ptr = &v54;
    v52 = 0;
    v53 = 1;
    a2 = sub_6A8100(v22);
    sub_6C0780((__int64)a1, a2, (__int64)&ptr);
    v23 = (*(_WORD *)(a3 + 18) & 0x3F8) + 48LL;
    v24 = 8LL * (*(_BYTE *)(a3 + 19) >> 2);
    v25 = (__int64 *)(a3 + v23);
    v26 = (__int64 *)(a3 + v23 + v24);
    if ( v24 )
    {
      do
      {
        a2 = *v25++;
        sub_6C0780((__int64)a1, a2, (__int64)&ptr);
      }
      while ( v26 != v25 );
    }
    if ( HIDWORD(v51) == v52 )
    {
LABEL_51:
      v29 = v53;
    }
    else
    {
      v27 = (*(_WORD *)(v48 + 18) & 0x3F8) + 48LL;
      v28 = 8LL * (*(_BYTE *)(v48 + 19) >> 2);
      v49 = (__int64 *)(v48 + v27 + v28);
      v46 = (__int64 *)(v27 + v48);
      if ( !v28 )
      {
LABEL_58:
        if ( !v53 )
          free(ptr);
        goto LABEL_14;
      }
      while ( 1 )
      {
        v29 = v53;
        v30 = *v46;
        v31 = (char *)ptr;
        if ( v53 )
          v32 = (char *)ptr + 8 * HIDWORD(v51);
        else
          v32 = (char *)ptr + 8 * (unsigned int)v51;
        if ( ptr == v32 )
          goto LABEL_52;
        v33 = *(_QWORD *)ptr;
        v34 = (char *)ptr;
        if ( *(_QWORD *)ptr >= 0xFFFFFFFFFFFFFFFELL )
          break;
LABEL_44:
        if ( v32 == v31 )
          goto LABEL_52;
        while ( 1 )
        {
          a2 = *(_QWORD *)(v30 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v30 + 40) & 7) != 0 )
            a2 = 0;
          if ( sub_7BD2D0(v33, a2) )
            break;
          v35 = v34 + 8;
          if ( v34 + 8 != v32 )
          {
            while ( 1 )
            {
              v33 = *(_QWORD *)v35;
              v34 = v35;
              if ( *(_QWORD *)v35 < 0xFFFFFFFFFFFFFFFELL )
                break;
              v35 += 8;
              if ( v32 == v35 )
                goto LABEL_51;
            }
            if ( v35 != v32 )
              continue;
          }
          goto LABEL_51;
        }
        if ( v49 == ++v46 )
          goto LABEL_58;
      }
      while ( 1 )
      {
        v31 += 8;
        if ( v32 == v31 )
          break;
        v33 = *(_QWORD *)v31;
        v34 = v31;
        if ( *(_QWORD *)v31 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_44;
      }
    }
LABEL_52:
    if ( !v29 )
    {
      free(ptr);
      return 0;
    }
    return 0;
  }
LABEL_14:
  if ( !(unsigned __int8)sub_B0DC30(v48) )
    return 1;
  while ( 2 )
  {
    v16 = *(_QWORD *)(a3 + 24);
    while ( 2 )
    {
      v17 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
      v18 = *(unsigned __int8 *)(v17 + 16);
      if ( (unsigned int)(v18 - 34) <= 1 )
      {
        if ( (_BYTE)v18 == 35 )
          goto LABEL_27;
LABEL_63:
        v16 = *(_QWORD *)(v17 + 24);
        continue;
      }
      break;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1
      || (v36 = sub_B0D320(v17), (v17 = v36) == 0) )
    {
LABEL_30:
      v21 = *(_QWORD *)(a3 + 32);
      if ( (v21 & 8) == 0 )
      {
        sub_B128A0(a3);
        v21 = *(_QWORD *)(a3 + 32);
      }
      a3 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(a3 + 16) - 34 > 1 )
        a3 = sub_B0D320(a3);
      continue;
    }
    break;
  }
  if ( *(_BYTE *)(v36 + 16) != 35 )
    goto LABEL_63;
LABEL_27:
  v19 = sub_B07AF0(v17);
  if ( !v19 )
    goto LABEL_30;
  if ( v7 != v19 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    if ( v20 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) )
      goto LABEL_30;
  }
  if ( !(unsigned __int8)sub_B0DC30(a3) )
    return 1;
  v38 = (__int64 *)sub_B0DCB0(a3, a2, v37);
  v40 = v39;
  v41 = sub_B0DCB0(v48, a2, v39);
  v43 = v42;
  v44 = (__int64 *)v41;
  v45 = sub_6A8100(*(_QWORD *)(v48 + 24));
  return sub_70A5C0(a1, v45, v44, v43, v38, v40);
}

