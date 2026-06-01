__int64 __fastcall sub_6DEF50(_QWORD *a1, unsigned __int64 a2, char *a3, __int64 a4, _BYTE *a5, char a6)
{
  unsigned __int64 v6; // r14
  __int64 v10; // rdi
  unsigned __int8 v11; // al
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // r14
  unsigned __int16 v15; // r8
  __int16 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  int v19; // r15d
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  signed __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  char *v24; // r8
  char v25; // cl
  unsigned int v26; // r15d
  unsigned __int16 v27; // ax
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // rax
  char *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+8h] [rbp-A0h]
  _BYTE *v48; // [rsp+10h] [rbp-98h]
  _BYTE *v49; // [rsp+10h] [rbp-98h]
  _BYTE *v50; // [rsp+10h] [rbp-98h]
  char v51; // [rsp+10h] [rbp-98h]
  _BYTE *v52; // [rsp+10h] [rbp-98h]
  int v53; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v55; // [rsp+28h] [rbp-80h]
  _BYTE v56[120]; // [rsp+30h] [rbp-78h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  *a5 = 0;
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(v10 + 16);
  if ( v11 == 36 )
    return sub_6DF480(a1, *(_QWORD *)(v10 + 40));
  if ( v11 != 33 || a6 != 1 )
  {
    if ( (unsigned int)v11 - 34 <= 1 )
      return sub_6DE400(
               a1,
               *(_QWORD *)(v10 + 24),
               (char *)(v10 + 48),
               (void **)((*(_WORD *)(v10 + 18) >> 3) & 0x7F),
               a3,
               a4,
               *(_BYTE *)(v10 + 20) & 1);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v13 - 34) <= 1 )
      return sub_6DE400(a1, a2, nullptr, nullptr, a3, a4, 0);
    if ( v11 == 33 )
      goto LABEL_21;
    if ( (_BYTE)v13 != 33 )
      goto LABEL_40;
    v48 = a5;
    v36 = sub_B0D320(v10);
    a5 = v48;
    v10 = v36;
    if ( v36 )
    {
LABEL_21:
      v29 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v29 + 16) - 34 > 1 )
      {
        v50 = a5;
        v41 = sub_B0D320(v29);
        a5 = v50;
        v29 = v41;
      }
      if ( !(*(_BYTE *)(v29 + 19) >> 2) )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) == 0x1E8 )
        {
          v31 = *(_QWORD *)v6;
          if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 33 )
            v31 = sub_B0D320(v31);
          v32 = *(_QWORD *)(*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v32 + 16) - 34 > 1 )
            v32 = sub_B0D320(v32);
          v33 = sub_B0DBD0(v32);
          v34 = a1[2372];
LABEL_31:
          v35 = sub_6DE400(a1, v34, nullptr, nullptr, a3, a4, v33);
          return sub_6C94F0((__int64)a1, v35);
        }
      }
    }
    v37 = *(_QWORD *)v6;
    if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) == 33
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
      && (v52 = a5, v46 = sub_B0D320(v37), a5 = v52, (v37 = v46) != 0) )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v38 + 16) - 34 > 1 )
      {
        v49 = a5;
        v39 = sub_B0D320(v38);
        a5 = v49;
        v38 = v39;
      }
      if ( !(*(_BYTE *)(v38 + 19) >> 2) )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v40 + 16) == 13 && ((*(_WORD *)(v40 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
          v44 = *(_QWORD *)v6;
          if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) != 33 )
            v44 = sub_B0D320(v44);
          v45 = sub_6B2F10(v44);
          v33 = sub_B0DBD0(v45);
          v34 = a1[2373];
          goto LABEL_31;
        }
      }
    }
LABEL_40:
    *a5 = 1;
    return a2;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 34 > 1 )
    v14 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL));
  v15 = *(_WORD *)(v14 + 18);
  ptr = v56;
  v55 = 0x800000000LL;
  v16 = (v15 >> 3) & 0x7F;
  v17 = *(_BYTE *)(v14 + 19) >> 2;
  v18 = 8 * v17;
  v19 = *(_BYTE *)(v14 + 19) >> 2;
  if ( v17 > 8 )
  {
    v53 = 8 * v17;
    v51 = v16;
    sub_25D6060(&ptr, v56, *(_BYTE *)(v14 + 19) >> 2, 8);
    LOBYTE(v16) = v51;
    LODWORD(v18) = v53;
    v42 = (char *)ptr + 8 * (unsigned int)v55;
LABEL_42:
    v43 = (char *)(v14 + 8LL * (unsigned __int8)v16 + 48);
    if ( (unsigned int)v18 >= 8 )
    {
      *(_QWORD *)v42 = *(_QWORD *)v43;
      *(_QWORD *)&v42[(unsigned int)v18 - 8] = *(_QWORD *)&v43[(unsigned int)v18 - 8];
      qmemcpy(
        (void *)((unsigned __int64)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v43 - &v42[-((unsigned __int64)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
        8LL * (((unsigned int)v18 + (_DWORD)v42 - (((_DWORD)v42 + 8) & 0xFFFFFFF8)) >> 3));
    }
    else if ( (_DWORD)v18 )
    {
      *v42 = *v43;
    }
    v21 = HIDWORD(v55);
    LODWORD(v18) = v19 + v55;
    v20 = (unsigned int)(v19 + v55);
    goto LABEL_14;
  }
  v20 = 0;
  v21 = 8;
  if ( v18 )
  {
    v42 = v56;
    goto LABEL_42;
  }
LABEL_14:
  v22 = 8 * a4;
  LODWORD(v55) = v18;
  v23 = (v22 >> 3) + v20;
  if ( v21 < v23 )
  {
    sub_25D6060(&ptr, v56, v23, 8);
    v20 = (unsigned int)v55;
  }
  v24 = (char *)ptr;
  if ( v22 )
  {
    memcpy((char *)ptr + 8 * v20, a3, v22);
    v24 = (char *)ptr;
    LODWORD(v20) = v55;
  }
  v25 = *(_BYTE *)(v14 + 20);
  v26 = v20 + (v22 >> 3);
  v27 = *(_WORD *)(v14 + 18);
  LODWORD(v55) = v26;
  v28 = sub_6DE400(a1, *(_QWORD *)(v14 + 24), (char *)(v14 + 48), (void **)((v27 >> 3) & 0x7F), v24, v26, v25 & 1);
  result = sub_6C94F0((__int64)a1, v28);
  if ( ptr != v56 )
  {
    v47 = result;
    free(ptr);
    return v47;
  }
  return result;
}

