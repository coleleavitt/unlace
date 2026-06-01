char __fastcall sub_7190B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char result; // al
  unsigned __int64 v5; // rdx
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  __int64 *v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  void *v20; // r13
  void *v21; // r12
  void *v22; // rbx
  unsigned __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // [rsp+8h] [rbp-160h]
  char v37; // [rsp+8h] [rbp-160h]
  char v38; // [rsp+8h] [rbp-160h]
  void *v39[2]; // [rsp+10h] [rbp-158h] BYREF
  _BYTE v40[128]; // [rsp+20h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v42[184]; // [rsp+B0h] [rbp-B8h] BYREF

  result = sub_6DD500(a1, a2, a3);
  if ( !result )
    return result;
  v5 = *(_QWORD *)(a2 + 72);
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v6 == 65 )
  {
    result = 0;
    if ( v5 <= 7 || *(_QWORD *)(a3 + 72) <= 7u )
      return result;
    if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
    {
      LODWORD(qword_4AD21A0[0]) = 0;
      qword_4AD21A0[1] = 0;
      qword_4AD21A0[3] = 0;
      __cxa_guard_release(&qword_4AD2180);
    }
    v23 = *(_QWORD *)(a3 + 72);
    if ( v23 <= 7 )
    {
      v24 = qword_4AD21A0;
      goto LABEL_38;
    }
    v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
    v25 = *(_QWORD *)(a3 + 72) & 6LL;
    if ( v25 == 2 )
    {
      v31 = v24[9];
      v24 = nullptr;
      if ( v31 )
      {
        v24 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v31 & 6) == 4 )
        {
          if ( v24 )
            goto LABEL_36;
        }
      }
    }
    else if ( v25 == 4 )
    {
LABEL_36:
      v24 = (__int64 *)v24[1];
    }
LABEL_38:
    v26 = v24[1];
    if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
    {
      LODWORD(qword_4AD21A0[0]) = 0;
      qword_4AD21A0[1] = 0;
      qword_4AD21A0[3] = 0;
      __cxa_guard_release(&qword_4AD2180);
    }
    v27 = *(_QWORD *)(a2 + 72);
    if ( v27 <= 7 )
    {
      v28 = qword_4AD21A0;
      return (*(_QWORD *)&byte_8[v28[1] & 0xFFFFFFFFFFFFFFF0LL] | v28[1] & 7) == (*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL]
                                                                                | v26 & 7);
    }
    v28 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
    v29 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v29 == 2 )
    {
      v30 = v28[9];
      v28 = nullptr;
      if ( !v30 )
        return (*(_QWORD *)&byte_8[v28[1] & 0xFFFFFFFFFFFFFFF0LL] | v28[1] & 7) == (*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL]
                                                                                  | v26 & 7);
      v28 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v30 & 6) != 4 || !v28 )
        return (*(_QWORD *)&byte_8[v28[1] & 0xFFFFFFFFFFFFFFF0LL] | v28[1] & 7) == (*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL]
                                                                                  | v26 & 7);
    }
    else if ( v29 != 4 )
    {
      return (*(_QWORD *)&byte_8[v28[1] & 0xFFFFFFFFFFFFFFF0LL] | v28[1] & 7) == (*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL]
                                                                                | v26 & 7);
    }
    v28 = (__int64 *)v28[1];
    return (*(_QWORD *)&byte_8[v28[1] & 0xFFFFFFFFFFFFFFF0LL] | v28[1] & 7) == (*(_QWORD *)&byte_8[v26
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                                              | v26 & 7);
  }
  if ( v6 != 45 )
  {
    result = 0;
    if ( v5 <= 7 || *(_QWORD *)(a3 + 72) <= 7u )
      return result;
    if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
    {
      LODWORD(qword_4AD2120[0]) = 0;
      qword_4AD2120[1] = 0;
      qword_4AD2120[3] = 0;
      __cxa_guard_release(&qword_4AD2108);
    }
    v14 = *(_QWORD *)(a2 + 72);
    if ( v14 <= 7 )
    {
      v15 = qword_4AD2120;
      goto LABEL_27;
    }
    v15 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
    v16 = *(_QWORD *)(a2 + 72) & 6LL;
    if ( v16 == 2 )
    {
      v34 = v15[9];
      v15 = nullptr;
      if ( !v34 || (v15 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF8LL), (v34 & 6) != 4) || !v15 )
      {
LABEL_27:
        if ( !(_BYTE)qword_4AD2108 && __cxa_guard_acquire(&qword_4AD2108) )
        {
          LODWORD(qword_4AD2120[0]) = 0;
          qword_4AD2120[1] = 0;
          qword_4AD2120[3] = 0;
          __cxa_guard_release(&qword_4AD2108);
        }
        v17 = *(_QWORD *)(a3 + 72);
        if ( v17 > 7 )
        {
          v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          v19 = *(_QWORD *)(a3 + 72) & 6LL;
          if ( v19 == 2 )
          {
            v35 = v18[9];
            v18 = nullptr;
            if ( !v35 )
              goto LABEL_31;
            v18 = (__int64 *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v35 & 6) != 4 || !v18 )
              goto LABEL_31;
          }
          else if ( v19 != 4 )
          {
LABEL_31:
            sub_B03900(ptr, v18[1]);
            v20 = ptr[0];
            sub_B03900(ptr, v15[1]);
            v21 = ptr[0];
            v22 = sub_717B10(a1, v20, 0);
            return sub_717B10(a1, v21, 0) == v22;
          }
          v18 = (__int64 *)v18[1];
          goto LABEL_31;
        }
        v18 = qword_4AD2120;
        goto LABEL_31;
      }
    }
    else if ( v16 != 4 )
    {
      goto LABEL_27;
    }
    v15 = (__int64 *)v15[1];
    goto LABEL_27;
  }
  result = 0;
  if ( v5 <= 7 || *(_QWORD *)(a3 + 72) <= 7u )
    return result;
  if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
  {
    LODWORD(qword_4AD2160[0]) = 0;
    qword_4AD2160[1] = 0;
    qword_4AD2160[3] = 0;
    __cxa_guard_release(&qword_4AD2140);
  }
  v7 = *(_QWORD *)(a2 + 72);
  if ( v7 <= 7 )
  {
    v8 = qword_4AD2160;
    goto LABEL_13;
  }
  v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  v9 = *(_QWORD *)(a2 + 72) & 6LL;
  if ( v9 != 2 )
  {
    if ( v9 != 4 )
      goto LABEL_13;
LABEL_68:
    v8 = (__int64 *)v8[1];
    goto LABEL_13;
  }
  v32 = v8[9];
  v8 = nullptr;
  if ( v32 )
  {
    v8 = (__int64 *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v32 & 6) == 4 )
    {
      if ( v8 )
        goto LABEL_68;
    }
  }
LABEL_13:
  v36 = sub_80F040(v8[1]);
  if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
  {
    LODWORD(qword_4AD2160[0]) = 0;
    qword_4AD2160[1] = 0;
    qword_4AD2160[3] = 0;
    __cxa_guard_release(&qword_4AD2140);
  }
  v10 = *(_QWORD *)(a3 + 72);
  if ( v10 <= 7 )
  {
    v11 = qword_4AD2160;
    goto LABEL_17;
  }
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  v12 = *(_QWORD *)(a3 + 72) & 6LL;
  if ( v12 == 2 )
  {
    v33 = v11[9];
    v11 = nullptr;
    if ( !v33 )
      goto LABEL_17;
    v11 = (__int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v33 & 6) != 4 || !v11 )
      goto LABEL_17;
    goto LABEL_72;
  }
  if ( v12 == 4 )
LABEL_72:
    v11 = (__int64 *)v11[1];
LABEL_17:
  v13 = sub_80F040(v11[1]);
  v39[0] = v40;
  ptr[0] = v42;
  v39[1] = (void *)0x2000000000LL;
  ptr[1] = (void *)0x2000000000LL;
  sub_AFCA50(v36, v39, a1, 1, 0);
  sub_AFCA50(v13, ptr, a1, 1, 0);
  result = sub_25ABE00(v39, ptr);
  if ( ptr[0] != v42 )
  {
    v37 = result;
    free(ptr[0]);
    result = v37;
  }
  if ( v39[0] != v40 )
  {
    v38 = result;
    free(v39[0]);
    return v38;
  }
  return result;
}

