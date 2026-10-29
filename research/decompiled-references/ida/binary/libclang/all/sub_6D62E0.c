__int64 __fastcall sub_6D62E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx
  __int64 **v15; // r12
  unsigned int v16; // esi
  __int64 *v17; // rbp
  __int64 **v18; // r13
  char *v19; // r14
  __int64 **v20; // rax
  __int64 **v21; // r15
  __int64 **v22; // rbp
  __int64 *v23; // r15
  __int64 v24; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rsi
  _DWORD *v30; // rdx
  __int64 v31; // rdi
  int v32; // eax
  __int64 **v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 **v37; // r14
  __int64 **v38; // rdx
  __int64 v39; // rax
  __int64 **v40; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v41; // [rsp+0h] [rbp-A8h]
  __int64 v42; // [rsp+8h] [rbp-A0h]
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  __int64 v44; // [rsp+18h] [rbp-90h]
  int v45; // [rsp+20h] [rbp-88h]
  unsigned __int8 v46; // [rsp+24h] [rbp-84h]
  char v47; // [rsp+28h] [rbp-80h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 33 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      return 0;
    v6 = sub_B0D320(v6);
    if ( !v6 )
      return 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 34 > 1 )
  {
    v7 = sub_B0D320(v7);
    if ( *(_BYTE *)(v7 + 19) >> 2 )
      goto LABEL_4;
    return 0;
  }
  if ( !(*(_BYTE *)(v7 + 19) >> 2) )
    return 0;
LABEL_4:
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 || ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) != 0x1E8 )
    return 0;
  v10 = *(_QWORD *)v3;
  v42 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) == 33 )
  {
    v11 = *(_QWORD *)(a3 + 120);
    v12 = v11;
    if ( v11 )
      goto LABEL_12;
LABEL_32:
    v24 = *(_QWORD *)(a3 + 96);
    v25 = *(_QWORD *)(v24 + 88);
    v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v25 & 1) != 0 )
    {
      if ( !v26 )
        return 0;
    }
    else
    {
      if ( v26 <= 3 )
      {
        if ( !v26 )
          return 0;
        goto LABEL_51;
      }
      if ( (v25 & 2) == 0 )
        return 0;
      v27 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      v28 = v27[2275];
      if ( !v28 )
      {
        *(_QWORD *)(v24 + 88) = v24 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v24 & 0xFFFFFFFFFFFFFFFALL) == 0 )
          goto LABEL_48;
LABEL_50:
        v12 = *(_QWORD *)(a3 + 120);
LABEL_51:
        v11 = v12;
        goto LABEL_12;
      }
      v29 = v27[274];
      v27[284] += 24LL;
      v26 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v27[275] >= v26 + 24 && v29 )
        v27[274] = v26 + 24;
      else
        v26 = sub_6A76A0((__int64)(v27 + 274), 24, 3);
      *(_QWORD *)v26 = v28;
      *(_DWORD *)(v26 + 8) = 0;
      v25 = v26 | 5;
      *(_QWORD *)(v26 + 16) = v24;
      *(_QWORD *)(v24 + 88) = v26 | 5;
      LOBYTE(v26) = v26 & 0xFA | 4;
    }
    if ( (v26 & 4) != 0 )
    {
      v30 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v30 )
      {
        v31 = *(_QWORD *)v30;
        v32 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
        if ( v30[2] != v32 )
        {
          v30[2] = v32;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 144LL))(v31, v24);
LABEL_48:
          v11 = *(_QWORD *)(a3 + 120);
          goto LABEL_12;
        }
      }
    }
    goto LABEL_50;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
    return 0;
  v42 = sub_B0D320(v10);
  if ( !v42 )
    return 0;
  v11 = *(_QWORD *)(a3 + 120);
  v12 = v11;
  if ( !v11 )
    goto LABEL_32;
LABEL_12:
  if ( v11 <= 7 )
    return 0;
  ptr = &v47;
  v44 = 8;
  v45 = 0;
  v46 = 1;
  sub_6C0780(a1, a3, (__int64)&ptr);
  if ( HIDWORD(v44) != v45 )
  {
    v13 = sub_6B2FB0(v42);
    v40 = v14;
    v15 = (__int64 **)v13;
    if ( v14 == (__int64 **)v13 )
    {
      v18 = (__int64 **)ptr;
      v16 = v46;
    }
    else
    {
      while ( 1 )
      {
        v16 = v46;
        v17 = *v15;
        v18 = (__int64 **)ptr;
        v19 = v46 ? (char *)ptr + 8 * HIDWORD(v44) : (char *)ptr + 8 * (unsigned int)v44;
        if ( ptr == v19 )
          break;
        v20 = (__int64 **)ptr;
        while ( 1 )
        {
          v21 = v20;
          if ( (unsigned __int64)*v20 < 0xFFFFFFFFFFFFFFFELL )
            break;
          if ( v19 == (char *)++v20 )
            goto LABEL_21;
        }
        if ( v20 == (__int64 **)v19 )
          break;
        result = sub_6D4F10(a1, *v15, *v20);
        if ( !(_BYTE)result )
        {
          while ( 1 )
          {
            v33 = v21 + 1;
            if ( v21 + 1 == (__int64 **)v19 )
              break;
            while ( 1 )
            {
              v21 = v33;
              if ( (unsigned __int64)*v33 < 0xFFFFFFFFFFFFFFFELL )
                break;
              if ( v19 == (char *)++v33 )
                goto LABEL_57;
            }
            if ( v33 == (__int64 **)v19 )
              break;
            result = sub_6D4F10(a1, v17, *v33);
            if ( (_BYTE)result )
              goto LABEL_60;
          }
LABEL_57:
          v16 = v46;
          v18 = (__int64 **)ptr;
          break;
        }
LABEL_60:
        if ( v40 == ++v15 )
        {
LABEL_61:
          LOBYTE(v16) = v46;
          goto LABEL_41;
        }
      }
    }
LABEL_21:
    if ( (_BYTE)v16 )
    {
      v22 = &v18[HIDWORD(v44)];
      result = v16;
      if ( v18 != v22 )
        goto LABEL_23;
      return result;
    }
    v22 = &v18[(unsigned int)v44];
    LOBYTE(result) = 1;
    if ( v22 == v18 )
    {
LABEL_42:
      v41 = result;
      free(ptr);
      return v41;
    }
LABEL_23:
    while ( 1 )
    {
      v23 = *v18;
      if ( (unsigned __int64)*v18 < 0xFFFFFFFFFFFFFFFELL )
        break;
      if ( ++v18 == v22 )
        goto LABEL_25;
    }
    if ( v18 == v22 )
    {
LABEL_25:
      result = 1;
      goto LABEL_41;
    }
    while ( 1 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v42 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v34 + 16) - 34 > 1 )
      {
        v39 = sub_B0D320(v34);
        v36 = v39 + 8 * ((*(_BYTE *)(v39 + 19) >> 2) + (unsigned __int64)((*(_WORD *)(v39 + 18) >> 3) & 0x7F)) + 48;
        v34 = *(_QWORD *)(*(_QWORD *)(v42 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v34 + 16) - 34 > 1 )
          v34 = sub_B0D320(v34);
        v35 = (*(_WORD *)(v34 + 18) >> 3) & 0x7F;
      }
      else
      {
        v35 = (*(_WORD *)(v34 + 18) >> 3) & 0x7F;
        v36 = v34 + 8 * (v35 + (*(_BYTE *)(v34 + 19) >> 2)) + 48;
      }
      v37 = (__int64 **)(v34 + 8 * v35 + 48);
      if ( (__int64 **)v36 == v37 )
        break;
      while ( 1 )
      {
        result = sub_6D4F10(a1, v23, *v37);
        if ( (_BYTE)result )
          break;
        if ( (__int64 **)v36 == ++v37 )
          goto LABEL_61;
      }
      v38 = v18 + 1;
      if ( v18 + 1 == v22 )
        goto LABEL_61;
      v23 = *v38;
      for ( ++v18; (unsigned __int64)*v38 >= 0xFFFFFFFFFFFFFFFELL; v18 = v38 )
      {
        if ( v22 == ++v38 )
          goto LABEL_61;
        v23 = *v38;
      }
      if ( v38 == v22 )
        goto LABEL_61;
    }
  }
  LOBYTE(v16) = v46;
  result = 0;
LABEL_41:
  if ( !(_BYTE)v16 )
    goto LABEL_42;
  return result;
}

