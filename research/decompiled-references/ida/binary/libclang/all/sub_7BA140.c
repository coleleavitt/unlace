void __fastcall sub_7BA140(__int64 a1, __int64 **a2, unsigned int a3, _QWORD *a4)
{
  __int64 **v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 **v10; // rcx
  __int64 *v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 **v15; // rcx
  __int64 v16; // rbp
  __int64 **v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  const void *v27; // r15
  size_t v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  _BYTE *v32; // r14
  unsigned int v33; // ebp
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r13
  char *v37; // rdi
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r13
  char *v42; // rdi
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 **v45; // [rsp+0h] [rbp-98h]
  size_t v46; // [rsp+0h] [rbp-98h]
  void *src; // [rsp+10h] [rbp-88h] BYREF
  __int64 v48; // [rsp+18h] [rbp-80h]
  _BYTE v49[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v8 = *(_QWORD *)(a1 + 120);
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( !*(_DWORD *)(v9 + 48) && !*(_DWORD *)(v9 + 24) )
  {
    *(_QWORD *)(v9 + 40) = 0;
    if ( (_DWORD)v7 )
    {
      v40 = a4[274];
      v41 = 8LL * (unsigned int)v7;
      a4[284] += v41;
      v42 = (char *)((v40 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( a4[275] >= (unsigned __int64)&v42[v41] && v40 )
        a4[274] = &v42[v41];
      else
        v42 = (char *)sub_7B4EB0((__int64)(a4 + 274), 8LL * (unsigned int)v7, 3);
      *(_QWORD *)(v9 + 40) = v42;
      *(_DWORD *)(v9 + 48) = v7;
      memcpy(v42, a2, 8LL * (unsigned int)v7);
    }
    return;
  }
  src = v49;
  v48 = 0x800000000LL;
  if ( !(_DWORD)v7 )
    return;
  v10 = &a2[v7];
  v11 = *a2;
  v45 = v10;
  if ( !v8 )
    goto LABEL_19;
LABEL_7:
  if ( v8 <= 7 )
    goto LABEL_25;
LABEL_8:
  v12 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v13 = *(unsigned int *)(v12 + 48);
    v14 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (_DWORD)v13 )
    {
      v15 = *(__int64 ***)(v12 + 40);
      v16 = (__int64)&v15[v13];
      goto LABEL_11;
    }
    goto LABEL_58;
  }
  sub_7B7DB0(a1);
  v8 = *(_QWORD *)(a1 + 120);
  v14 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v38 = *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( !(_DWORD)v38 )
  {
    if ( v8 )
    {
      if ( v8 <= 7 )
      {
        while ( 1 )
        {
LABEL_25:
          v20 = (unsigned int)v48;
          v21 = (unsigned int)v48 + 1LL;
          if ( HIDWORD(v48) < v21 )
          {
            sub_25D6060(&src, v49, v21, 8);
            v20 = (unsigned int)v48;
          }
          ++v4;
          *((_QWORD *)src + v20) = v11;
          LODWORD(v48) = v48 + 1;
          if ( v4 == v45 )
            goto LABEL_28;
LABEL_18:
          v8 = *(_QWORD *)(a1 + 120);
          v11 = *v4;
          if ( v8 )
            goto LABEL_7;
LABEL_19:
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v8 = *(_QWORD *)(a1 + 120);
          if ( v8 > 7 )
            goto LABEL_8;
LABEL_20:
          if ( !v8 )
          {
            sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
            v8 = *(_QWORD *)(a1 + 120);
            if ( v8 > 7 )
            {
              v16 = 0;
              v18 = v8 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
                goto LABEL_53;
              goto LABEL_23;
            }
          }
        }
      }
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v8 = *(_QWORD *)(a1 + 120);
      v14 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v8 <= 7 )
        goto LABEL_20;
    }
LABEL_58:
    if ( (*(_BYTE *)(v14 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v8 = *(_QWORD *)(a1 + 120);
      v16 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( !v8 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v8 = *(_QWORD *)(a1 + 120);
      }
      v15 = nullptr;
      if ( v8 <= 7 )
        goto LABEL_13;
    }
    else
    {
      v16 = *(_QWORD *)(v14 + 16) + 8LL * *(unsigned int *)(v14 + 24);
    }
    goto LABEL_52;
  }
  v15 = *(__int64 ***)(v14 + 40);
  v16 = (__int64)&v15[v38];
  if ( !v8 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v8 = *(_QWORD *)(a1 + 120);
    if ( v8 <= 7 )
      goto LABEL_65;
LABEL_52:
    v18 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
LABEL_53:
      if ( *(_DWORD *)(v18 + 48) )
      {
LABEL_24:
        v15 = *(__int64 ***)(v18 + 40);
        if ( (__int64 **)v16 == v15 )
          goto LABEL_25;
        goto LABEL_14;
      }
      v39 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v39 + 72) & 1) == 0 )
        goto LABEL_55;
      goto LABEL_64;
    }
    goto LABEL_23;
  }
LABEL_11:
  if ( v8 <= 7 )
  {
LABEL_65:
    v15 = nullptr;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v14 + 72) & 1) == 0 )
    goto LABEL_13;
LABEL_23:
  sub_7B7DB0(a1);
  v19 = *(_QWORD *)(a1 + 120);
  v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_DWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
    goto LABEL_24;
  if ( !v19 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v19 = *(_QWORD *)(a1 + 120);
  }
  v15 = nullptr;
  if ( v19 > 7 )
  {
    v39 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v39 + 72) & 1) == 0 )
    {
LABEL_55:
      v15 = *(__int64 ***)(v39 + 16);
      goto LABEL_13;
    }
LABEL_64:
    sub_7B7DB0(a1);
    v39 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_55;
  }
LABEL_13:
  if ( (__int64 **)v16 == v15 )
    goto LABEL_25;
LABEL_14:
  v17 = v15;
  while ( !(unsigned __int8)sub_6D4F10((__int64)a4, v11, *v17) )
  {
    if ( (__int64 **)v16 == ++v17 )
      goto LABEL_25;
  }
  if ( ++v4 != v45 )
    goto LABEL_18;
LABEL_28:
  if ( (_DWORD)v48 )
  {
    v22 = *(_QWORD *)(a1 + 120);
    if ( v22 )
    {
      if ( v22 <= 7 )
      {
        LODWORD(v30) = v48;
        if ( HIDWORD(v48) < (unsigned int)v48 )
        {
          v31 = (unsigned int)v48;
          LODWORD(v29) = 0;
          v28 = 0;
          v25 = 0;
          v27 = nullptr;
          goto LABEL_84;
        }
LABEL_103:
        v32 = src;
        LODWORD(v29) = 0;
        goto LABEL_41;
      }
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v22 = *(_QWORD *)(a1 + 120);
      if ( v22 <= 7 )
      {
LABEL_86:
        if ( !v22 )
        {
          v25 = 0;
LABEL_88:
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v22 = *(_QWORD *)(a1 + 120);
LABEL_92:
          if ( v22 <= 7 )
            goto LABEL_98;
          v26 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
          {
LABEL_35:
            if ( *(_DWORD *)(v26 + 48) )
            {
LABEL_36:
              v27 = *(const void **)(v26 + 40);
              v28 = v25 - (_QWORD)v27;
              v29 = (v25 - (__int64)v27) >> 3;
              goto LABEL_37;
            }
LABEL_99:
            v44 = v22 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_BYTE *)(v44 + 72) & 1) != 0 )
            {
              sub_7B7DB0(a1);
              v44 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v27 = *(const void **)(v44 + 16);
            v28 = v25 - (_QWORD)v27;
            v29 = (v25 - (__int64)v27) >> 3;
LABEL_37:
            v30 = (unsigned int)v48;
            v31 = (unsigned int)v48 + v29;
            if ( HIDWORD(v48) >= v31 )
            {
LABEL_38:
              v32 = src;
              if ( (const void *)v25 != v27 )
              {
                memcpy((char *)src + 8 * v30, v27, v28);
                v32 = src;
                LODWORD(v30) = v48;
              }
              v22 = *(_QWORD *)(a1 + 120);
              goto LABEL_41;
            }
LABEL_84:
            v46 = v28;
            sub_25D6060(&src, v49, v31, 8);
            v30 = (unsigned int)v48;
            v28 = v46;
            goto LABEL_38;
          }
LABEL_94:
          sub_7B7DB0(a1);
          v22 = *(_QWORD *)(a1 + 120);
          v26 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_DWORD *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
            goto LABEL_36;
          if ( !v22 )
          {
            sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
            v22 = *(_QWORD *)(a1 + 120);
          }
          if ( v22 > 7 )
            goto LABEL_99;
LABEL_98:
          v28 = v25;
          v27 = nullptr;
          v29 = v25 >> 3;
          goto LABEL_37;
        }
        LODWORD(v30) = v48;
        if ( HIDWORD(v48) < (unsigned int)v48 )
        {
          LODWORD(v29) = 0;
          sub_25D6060(&src, v49, (unsigned int)v48, 8);
          LODWORD(v30) = v48;
          v32 = src;
          v22 = *(_QWORD *)(a1 + 120);
          goto LABEL_41;
        }
        goto LABEL_103;
      }
    }
    v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
      v24 = *(unsigned int *)(v23 + 48);
      if ( (_DWORD)v24 )
      {
        v25 = *(_QWORD *)(v23 + 40) + 8 * v24;
        goto LABEL_34;
      }
      goto LABEL_81;
    }
    sub_7B7DB0(a1);
    v22 = *(_QWORD *)(a1 + 120);
    v43 = *(unsigned int *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)v43 )
    {
      v25 = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 40) + 8 * v43;
      goto LABEL_91;
    }
    if ( v22 )
    {
      if ( v22 > 7 )
        goto LABEL_81;
      v31 = (unsigned int)v48;
      LODWORD(v30) = v48;
      if ( HIDWORD(v48) < (unsigned int)v48 )
      {
        LODWORD(v29) = 0;
        v28 = 0;
        v25 = 0;
        v27 = nullptr;
        goto LABEL_84;
      }
      v32 = src;
      LODWORD(v29) = 0;
LABEL_41:
      v33 = v29 + v30;
      LODWORD(v48) = v29 + v30;
      v34 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 40) = 0;
      if ( v33 )
      {
        v35 = a4[274];
        v36 = 8LL * v33;
        a4[284] += v36;
        v37 = (char *)((v35 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( a4[275] >= (unsigned __int64)&v37[v36] && v35 )
          a4[274] = &v37[v36];
        else
          v37 = (char *)sub_7B4EB0((__int64)(a4 + 274), 8LL * v33, 3);
        *(_QWORD *)(v34 + 40) = v37;
        *(_DWORD *)(v34 + 48) = v33;
        memcpy(v37, v32, 8LL * v33);
        v32 = src;
      }
      if ( v32 != v49 )
        free(v32);
      return;
    }
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v22 = *(_QWORD *)(a1 + 120);
    if ( v22 > 7 )
    {
LABEL_81:
      if ( (*(_BYTE *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      {
        v25 = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 16)
            + 8LL * *(unsigned int *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 24);
LABEL_34:
        v26 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
          goto LABEL_35;
        goto LABEL_94;
      }
      sub_7B7DB0(a1);
      v22 = *(_QWORD *)(a1 + 120);
      v25 = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 8LL * *(unsigned int *)((v22 & 0xFFFFFFFFFFFFFFF8LL) + 24);
LABEL_91:
      if ( v22 )
        goto LABEL_92;
      goto LABEL_88;
    }
    goto LABEL_86;
  }
  if ( src != v49 )
    free(src);
}

