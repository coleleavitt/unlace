__int64 __fastcall sub_57B5A0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned __int8 a5)
{
  unsigned int v5; // r13d
  void *v8; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  struct __class_type_info *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  char v17; // dl
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rbx
  void *v26; // rbx
  void *v27; // rax
  void *v28; // r13
  void *v29; // rax
  void *v30; // r15
  void *v31; // r13
  _QWORD *v32; // rax
  __int64 *v33; // rbx
  int v34; // eax
  void *v35; // rbx
  void *v36; // rsi
  unsigned int v37; // r13d
  void *v38; // rbx
  void *v39; // rax
  struct __class_type_info *lpdtype; // [rsp+8h] [rbp-60h]
  char v42; // [rsp+17h] [rbp-51h]
  __int64 *v43[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = a4;
  v10 = a3[1];
  if ( a1 != a2[1] )
  {
    if ( a1 != v10 )
      return 0;
    goto LABEL_8;
  }
  if ( a1 != v10 )
    return 0;
  if ( !a4 )
  {
    v35 = sub_5790D0(a3);
    v36 = sub_5790D0(a2);
    if ( !sub_5791C0(a1, (__int64)v36, (__int64)v35) )
    {
      v11 = sub_186B270(0x20u);
      goto LABEL_32;
    }
    v37 = a5;
    v11 = sub_186B270(0x28u);
LABEL_38:
    v38 = sub_5790D0(a3);
    v39 = sub_5790D0(a2);
    sub_57E7C0(v11, v39, v38, v8, v37);
    return v11;
  }
  if ( a4[1] == a1 )
  {
    v26 = sub_5790D0(a3);
    v27 = sub_5790D0(a2);
    if ( !sub_5791C0(a1, (__int64)v27, (__int64)v26)
      || (v28 = __dynamic_cast(
                  v8,
                  (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                  (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                  0),
          v29 = sub_5790D0(a2),
          !sub_5791C0(a1, (__int64)v29, (__int64)v28)) )
    {
      v11 = sub_186B270(0x20u);
      v8 = __dynamic_cast(
             v8,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
             0);
LABEL_32:
      v30 = sub_5790D0(a3);
      v31 = sub_5790D0(a2);
      *(_OWORD *)(v11 + 16) = 0;
      *(_QWORD *)v11 = &off_1C51678;
      *(_BYTE *)(v11 + 8) = a5;
      v32 = (_QWORD *)sub_186B270(0x18u);
      v32[1] = v31;
      v33 = v32 + 1;
      v32[2] = v30;
      *v32 = 0x200000002LL;
      if ( v8 )
      {
        v43[0] = v32 + 1;
        sub_583220(v43);
        v33 = v43[0];
        v34 = *((_DWORD *)v43[0] - 1);
        v43[0][v34] = (__int64)v8;
        *((_DWORD *)v33 - 1) = v34 + 1;
      }
      v43[0] = v33;
      sub_5797F0(v43, (__int64 *)(v11 + 16));
      sub_186B220(v33 - 1);
      return v11;
    }
    v11 = sub_186B270(0x28u);
    v37 = a5;
    v8 = __dynamic_cast(
           v8,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
           0);
    goto LABEL_38;
  }
LABEL_8:
  v13 = (struct __class_type_info *)sub_5790D0(a3);
  v14 = *((_QWORD *)v13 + 4);
  if ( !v14 )
    return 0;
  v15 = *(unsigned int *)(v14 - 4);
  if ( !(_DWORD)v15 )
    return 0;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = v16;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8 * v16) + 8LL) + 32LL) != 4 )
      break;
    v42 = v17;
    lpdtype = v13;
    v19 = sub_596A60();
    v13 = lpdtype;
    v17 = v42;
    v20 = *(_QWORD *)(v19 + 56);
    v21 = *(_QWORD *)(v19 + 16);
    if ( !v20 )
    {
      if ( !v21 )
        goto LABEL_19;
LABEL_17:
      v22 = *(_DWORD *)(v21 - 4);
      goto LABEL_18;
    }
    LODWORD(v20) = *(_DWORD *)(v20 - 4);
    if ( v21 )
      goto LABEL_17;
    v22 = 0;
LABEL_18:
    if ( (_DWORD)v20 != v22 )
      break;
LABEL_19:
    ++v16;
    v18 = v5;
    if ( v16 == v15 )
      goto LABEL_20;
LABEL_13:
    v14 = *((_QWORD *)v13 + 4);
    v5 = v18;
  }
  if ( v17 )
    return 0;
  ++v16;
  v17 = 1;
  if ( v16 != v15 )
    goto LABEL_13;
LABEL_20:
  if ( v17 )
  {
    v23 = *(_QWORD *)(a1 + 24);
    v24 = *(_QWORD *)(*((_QWORD *)v13 + 4) + 8LL * v18);
    v25 = a5 ? sub_4C49F0(v23, (__int64)a2, v24, (__int64)v8) : sub_4C4940(v23, (__int64)a2, v24, (__int64)v8);
    if ( v25 )
    {
      v11 = sub_186B270(0x18u);
      *(_QWORD *)v11 = &off_1C516A0;
      *(_DWORD *)(v11 + 8) = v18;
      *(_QWORD *)(v11 + 16) = v25;
      return v11;
    }
  }
  return 0;
}

