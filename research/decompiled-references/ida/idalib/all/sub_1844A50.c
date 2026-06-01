__int64 __fastcall sub_1844A50(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        const char *a4,
        _QWORD **a5,
        __int64 *a6)
{
  __int64 *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  _QWORD *v17; // r8
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // r13
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rdi
  char v24; // al
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  size_t v36; // rdx
  __int64 v37; // rbp
  unsigned __int64 v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rax
  size_t v41; // rdx
  __int64 v42; // r9
  size_t v43; // rax
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r13
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-68h]
  __int64 v54; // [rsp+0h] [rbp-68h]
  __int64 v55; // [rsp+0h] [rbp-68h]
  _QWORD *v56; // [rsp+8h] [rbp-60h]
  _QWORD *v57; // [rsp+10h] [rbp-58h]
  _QWORD *v58; // [rsp+10h] [rbp-58h]
  __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(a1 + 4168) & 1) == 0 && !*(_QWORD *)(a1 + 4168) )
    return 0;
  v11 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = sub_F6A870(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, (__int64)a3, (__int64)a4, (__int64)a5);
  if ( !v12 )
  {
    v23 = *v11;
    v12 = *(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(_BYTE *)(v12 + 16);
    if ( v24 != 29 )
    {
      if ( v24 != 48 )
        goto LABEL_20;
      v55 = *(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v25 = sub_F60F10(v55, a2, v12, (__int64)v13, v14, v15);
      a2 = (unsigned __int64)v25;
      if ( (*((_BYTE *)v25 + 28) & 0x7Fu) - 60 > 1 )
      {
        v33 = sub_F60F10(v55, (__int64)v25, v55, v26, v27, v28);
        if ( !a6 )
          return 0;
        goto LABEL_21;
      }
      v13 = (_QWORD *)sub_BBF290((__int64)v25);
      v54 = *(_QWORD *)(a2 + 168) + 8LL;
      if ( v13 )
        goto LABEL_6;
      goto LABEL_19;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v12 )
    {
LABEL_20:
      v33 = sub_F631C0(v23, a2, v12, (__int64)v13, v14, v15);
      if ( !a6 )
        return 0;
LABEL_21:
      if ( (v33 || (v33 = sub_F631C0(*v11, a2, v29, v30, v31, v32)) != nullptr) && sub_B8EC80((__int64)v33) )
      {
        v34 = v33[5];
        if ( (v34 & 7) == 0 )
        {
          v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v34 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v36 = 0;
            v37 = *(_QWORD *)(a1 + 240) + 552LL;
            if ( a4 )
              v36 = j__strlen(a4);
            if ( sub_6F3470(v37, a4, v36) == v35 )
            {
              *a6 = (__int64)v33;
              return 0;
            }
          }
        }
      }
      return 0;
    }
  }
  a2 = 0;
  v53 = v12;
  v60[0] = *(_QWORD *)(v12 + 32);
  v16 = sub_F22BD0(v60, 0);
  v12 = v53;
  v13 = (_QWORD *)v16;
  if ( !v16 || (a2 = v53 + 48, v54 = v53 + 48, (*(_BYTE *)(v16 + 28) & 0x7F) != 0x48) )
  {
LABEL_19:
    v23 = *v11;
    goto LABEL_20;
  }
LABEL_6:
  v17 = *a5;
  if ( !*a5 )
  {
    v39 = v13[6];
    v40 = *(_QWORD *)(a1 + 240);
    if ( (*(_QWORD *)(v39 + 40) & 7) == 0 )
      v17 = (_QWORD *)(*(_QWORD *)(v39 + 40) & 0xFFFFFFFFFFFFFFF8LL);
    v41 = 0;
    v42 = v40 + 552;
    if ( a4 )
    {
      v59 = v40 + 552;
      v57 = v13;
      v56 = v17;
      v43 = j__strlen(a4);
      v42 = v59;
      v13 = v57;
      v17 = v56;
      v41 = v43;
    }
    v58 = v13;
    if ( (_QWORD *)sub_6F3470(v42, a4, v41) != v17 )
      return 0;
    v44 = sub_183D350(a1);
    a2 = sub_B8DFE0(v39);
    if ( !(unsigned __int8)sub_B92160(v44 + 48, a2, v45, v46, v47, v48) )
      return 0;
    v49 = v58[7];
    if ( (unsigned int)sub_BBD6F0(v49) != 1
      || (v50 = *(_QWORD *)(v49 + 24), (*(_BYTE *)(v50 + 28) & 0x7F) != 0x43)
      || (unsigned __int8)sub_B8BE90(v50) )
    {
      if ( a6 )
        *a6 = v39;
      return 0;
    }
    v13 = v58;
    *a5 = v58;
    v17 = v58;
  }
  v18 = *(__int64 (__fastcall **)(__int64))(*v13 + 32LL);
  if ( v18 == sub_6EE8F0 )
  {
    v19 = v13[9];
  }
  else
  {
    v51 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64))v18)(v13, a2, v12);
    v17 = *a5;
    v19 = v51;
  }
  v20 = *(__int64 (__fastcall **)(__int64))(*v17 + 32LL);
  if ( v20 == sub_6EE8F0 )
    v21 = v17[9];
  else
    v21 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64))v20)(v17, a2, v12);
  if ( v19 != v21 )
    return 0;
  result = 1;
  if ( a3 )
  {
    v38 = *(_QWORD *)(v54 + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
    {
      if ( sub_F6ACC0(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL), a2, v12, (__int64)v13, (__int64)v17) )
      {
        v52 = *(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v52 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v52 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
          v38 = sub_A70F20(*(_QWORD *)(a1 + 248), v38, 128);
      }
    }
    *a3 = v38;
    return 1;
  }
  return result;
}
