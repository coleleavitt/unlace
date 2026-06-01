__int64 __fastcall sub_BF5A90(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  _QWORD *v7; // rax
  unsigned __int8 (*v8)(void); // rdx
  __int64 (*v9)(); // rdx
  __int64 v10; // rdx
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r13
  unsigned int v15; // r12d
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rbp
  _QWORD *v26; // rbx
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned int *v29; // r13
  bool v30; // r14
  _QWORD *v31; // r15
  bool v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // [rsp+8h] [rbp-50h]
  _QWORD *v45; // [rsp+18h] [rbp-40h] BYREF

  v7 = (_QWORD *)*a1;
  v45 = a1;
  v8 = (unsigned __int8 (*)(void))v7[27];
  if ( (char *)v8 != (char *)sub_BC58E0 )
  {
    if ( !v8() )
      return 0;
    a1 = v45;
    v7 = (_QWORD *)*v45;
  }
  v9 = (__int64 (*)())v7[145];
  if ( v9 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))v9)(a1, a2) )
      return 0;
    a1 = v45;
    v7 = (_QWORD *)*v45;
  }
  v10 = v7[147];
  if ( (__int64 (*)())v10 != sub_BC5A80 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))v10)(a1, a2) )
      return 0;
    a1 = v45;
    v7 = (_QWORD *)*v45;
  }
  v11 = (__int64 (*)())v7[149];
  if ( v11 != sub_BC5AA0 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))v11)(a1, a2) )
    return 0;
  v12 = a2[14];
  if ( v12 )
  {
    v10 = *(unsigned int *)(v12 + 8);
    v13 = (_QWORD *)(v12 + 16);
    v14 = v12 + 8 * v10 + 16;
    if ( v12 + 16 != v14 )
    {
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v45 + 824LL))(v45, *v13) )
      {
        if ( (_QWORD *)v14 == ++v13 )
          goto LABEL_12;
      }
      return 0;
    }
  }
LABEL_12:
  v17 = a2[15];
  if ( v17 )
  {
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_21;
  }
  else
  {
    sub_A794E0((__int64 *)(a2[12] + 88), a2[12], v10, a4, a5, a6);
    v17 = a2[15];
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( v17 )
        goto LABEL_21;
      goto LABEL_46;
    }
  }
  if ( (*(_BYTE *)(v18 + 72) & 1) != 0 )
  {
    sub_BA8900((__int64)a2);
    v17 = a2[15];
    v18 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( !v18 )
      goto LABEL_18;
    goto LABEL_16;
  }
  v18 = *(_QWORD *)(v18 + 8);
  if ( v18 )
  {
LABEL_16:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, unsigned __int64))(*v45 + 136LL))(
            v45,
            *(_QWORD *)v18,
            v18 + 8) )
      return 0;
    v17 = a2[15];
LABEL_18:
    if ( v17 )
      goto LABEL_19;
LABEL_46:
    sub_A794E0((__int64 *)(a2[12] + 88), a2[12], v18, v19, v20, v21);
    v17 = a2[15];
  }
LABEL_19:
  v22 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) != 0 && a2 == *(__int64 **)v22 )
  {
    if ( (*(_BYTE *)(v22 + 72) & 1) != 0 )
    {
      sub_BA8900((__int64)a2);
      v17 = a2[15];
      v35 = *(unsigned int *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      v36 = *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 32);
      v27 = v36 + 4 * v35;
      if ( !v17 )
      {
        sub_A794E0((__int64 *)(a2[12] + 88), a2[12], v36, v35, v33, v34);
        v40 = a2[15];
        v28 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v40 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          if ( v40 )
            goto LABEL_21;
          v29 = nullptr;
          goto LABEL_59;
        }
LABEL_32:
        if ( (*(_BYTE *)(v28 + 72) & 1) == 0 )
        {
          v29 = *(unsigned int **)(v28 + 32);
          goto LABEL_34;
        }
        sub_BA8900((__int64)a2);
        v40 = a2[15];
        v28 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = *(unsigned int **)((v40 & 0xFFFFFFFFFFFFFFF8LL) + 32);
        if ( v40 )
        {
LABEL_34:
          v30 = v27 == (_QWORD)v29;
          if ( !v28 )
            goto LABEL_21;
          goto LABEL_35;
        }
LABEL_59:
        sub_A794E0((__int64 *)(a2[12] + 88), a2[12], v40, v37, v38, v39);
        v30 = v29 == (unsigned int *)v27;
        v28 = a2[15] & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v28 )
        {
          if ( a2[15] )
            goto LABEL_21;
          v44 = 0;
          goto LABEL_62;
        }
LABEL_35:
        if ( (*(_BYTE *)(v28 + 72) & 1) == 0 )
        {
          v44 = *(_QWORD *)(v28 + 16) + 8LL * *(unsigned int *)(v28 + 24);
          goto LABEL_37;
        }
        sub_BA8900((__int64)a2);
        v28 = a2[15] & 0xFFFFFFFFFFFFFFF8LL;
        v41 = *(_QWORD *)(v28 + 16) + 8LL * *(unsigned int *)(v28 + 24);
        v44 = v41;
        if ( a2[15] )
        {
LABEL_63:
          if ( !v28 )
          {
            v31 = nullptr;
            v32 = v44 == 0 || v30;
            goto LABEL_40;
          }
LABEL_37:
          if ( (*(_BYTE *)(v28 + 72) & 1) != 0 )
          {
            sub_BA8900((__int64)a2);
            v28 = a2[15] & 0xFFFFFFFFFFFFFFF8LL;
          }
          v31 = *(_QWORD **)(v28 + 16);
          v32 = v31 == (_QWORD *)v44 || v30;
LABEL_40:
          if ( !v32 )
          {
            while ( 1 )
            {
              v6 = *v29 | v6 & 0xFFFFFFFF00000000LL;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, unsigned __int64))(*v45 + 144LL))(
                      v45,
                      *v31,
                      v6) )
                return 0;
              ++v29;
              ++v31;
              if ( v29 == (unsigned int *)v27 || v31 == (_QWORD *)v44 )
                goto LABEL_21;
            }
          }
          goto LABEL_21;
        }
LABEL_62:
        sub_A794E0((__int64 *)(a2[12] + 88), a2[12], 0, v41, v42, v43);
        v28 = a2[15] & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_63;
      }
    }
    else
    {
      v27 = *(_QWORD *)(v22 + 32) + 4LL * *(unsigned int *)(v22 + 24);
    }
    v28 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v28 )
      goto LABEL_21;
    goto LABEL_32;
  }
LABEL_21:
  v15 = sub_BCF900(&v45, (__int64)(a2 + 6));
  if ( (_BYTE)v15 )
  {
    v23 = sub_9C8850((__int64)a2);
    v25 = v24;
    v26 = (_QWORD *)v23;
    if ( (_QWORD *)v23 == v24 )
      return v15;
    while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v45 + 32LL))(v45, *v26) )
    {
      if ( v25 == ++v26 )
        return v15;
    }
  }
  return 0;
}
