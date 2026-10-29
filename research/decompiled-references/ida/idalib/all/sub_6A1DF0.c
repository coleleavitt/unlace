unsigned __int64 __fastcall sub_6A1DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r13
  __int64 i; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // dl
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  bool v20; // dl
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // al
  unsigned __int64 v25; // r15
  bool v27; // al
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  bool v30; // cf
  bool v31; // cf
  void *v32; // r13
  unsigned __int64 v33; // r12
  void **v34; // rbx
  __int64 v35; // rbp
  void *v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+18h] [rbp-A0h]
  void *v48; // [rsp+28h] [rbp-90h]
  unsigned __int64 v49; // [rsp+30h] [rbp-88h]
  void *v50; // [rsp+50h] [rbp-68h]
  unsigned __int64 v51; // [rsp+58h] [rbp-60h]
  unsigned __int64 v52; // [rsp+68h] [rbp-50h]
  char v53; // [rsp+71h] [rbp-47h]
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v8 = (a3 - 1) / 2;
  v54 = __readfsqword(0x28u);
  if ( a2 < v8 )
  {
    for ( i = a2; ; i = v14 )
    {
      v14 = 2 * (i + 1);
      v15 = 208 * (i + 1);
      v16 = a1 + v15 - 104;
      v17 = a1 + v15;
      v11 = **(_QWORD **)v17;
      v12 = **(_QWORD **)v16;
      if ( v11 == -1 )
      {
        if ( v12 != -1 )
          goto LABEL_8;
      }
      else if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
      {
        if ( v12 == -1 )
          goto LABEL_16;
        v11 &= ~1uLL;
        v12 &= ~1uLL;
        if ( v12 != v11 )
          goto LABEL_19;
      }
      else
      {
        if ( v12 == -1 )
          goto LABEL_16;
        if ( v12 != v11 )
        {
LABEL_19:
          v20 = v11 < v12;
          goto LABEL_15;
        }
      }
      v13 = *(_BYTE *)(v17 + 97);
      if ( (v13 == 1) != (*(_BYTE *)(v16 + 97) == 1) )
        break;
      v18 = *(_QWORD *)(*(_QWORD *)v17 + 8LL);
      v19 = *(_QWORD *)(*(_QWORD *)v16 + 8LL);
      if ( v18 != v19 )
      {
        v20 = v19 < v18;
        goto LABEL_15;
      }
      if ( v13 != 1 )
      {
        if ( v13 != 2 || (v44 = *(_QWORD *)(v16 + 32), v31 = *(_QWORD *)(v17 + 32) < v44, *(_QWORD *)(v17 + 32) == v44) )
          v31 = v17 < v16;
        goto LABEL_55;
      }
      v41 = *(_QWORD *)(v17 + 32);
      v42 = *(_QWORD *)(v16 + 32);
      if ( v41 == v42 )
        goto LABEL_75;
      if ( !v41 )
        goto LABEL_16;
      if ( v42 )
      {
LABEL_75:
        v43 = *(_QWORD *)(v17 + 72);
        v31 = v43 < *(_QWORD *)(v16 + 72);
        if ( v43 == *(_QWORD *)(v16 + 72) )
        {
          if ( v43 )
          {
            v20 = **(_QWORD **)(v17 + 64) < **(_QWORD **)(v16 + 64);
            goto LABEL_15;
          }
          v31 = *(_QWORD *)(v17 + 88) < *(_QWORD *)(v16 + 88);
        }
LABEL_55:
        v20 = v31;
LABEL_15:
        if ( !v20 )
          goto LABEL_8;
LABEL_16:
        --v14;
        v17 = a1 + 104 * v14;
      }
LABEL_8:
      sub_698F60(a1 + 104 * i, v17);
      if ( v14 >= v8 )
        goto LABEL_21;
    }
    if ( v13 != 1 )
      goto LABEL_8;
    goto LABEL_16;
  }
  v14 = a2;
LABEL_21:
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v14 )
  {
    v39 = a1 + 208 * (v14 + 1) - 104;
    v40 = 13 * v14;
    v14 = 2 * (v14 + 1) - 1;
    sub_698F60(a1 + 8 * v40, v39);
  }
  ptr = nullptr;
  v53 = 0;
  v47 = 0;
  sub_698F60((__int64)&ptr, a4);
  v21 = (v14 - 1) / 2;
  if ( v14 > a2 )
  {
    while ( 1 )
    {
      v25 = a1 + 104 * v21;
      v23 = *(_QWORD *)ptr;
      v22 = **(_QWORD **)v25;
      if ( v22 == -1 )
      {
        if ( v23 != -1 )
          goto LABEL_35;
      }
      else if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
      {
        if ( v23 == -1 )
          goto LABEL_31;
        v22 &= ~1uLL;
        v23 &= ~1uLL;
        if ( v23 != v22 )
          goto LABEL_43;
      }
      else
      {
        if ( v23 == -1 )
          goto LABEL_31;
        if ( v23 != v22 )
        {
LABEL_43:
          v27 = v22 < v23;
          goto LABEL_46;
        }
      }
      v24 = *(_BYTE *)(v25 + 97);
      if ( (v24 == 1) != (v53 == 1) )
      {
        if ( v24 != 1 )
          goto LABEL_35;
        goto LABEL_31;
      }
      v28 = *(_QWORD *)(*(_QWORD *)v25 + 8LL);
      v29 = *((_QWORD *)ptr + 1);
      if ( v28 != v29 )
      {
        v27 = v29 < v28;
        goto LABEL_46;
      }
      if ( v24 != 1 )
        break;
      v37 = *(_QWORD *)(v25 + 32);
      if ( v37 != v49 )
      {
        if ( !v37 )
          goto LABEL_31;
        if ( !v49 )
          goto LABEL_35;
      }
      v38 = *(_QWORD *)(v25 + 72);
      v30 = v38 < v51;
      if ( v38 != v51 )
        goto LABEL_51;
      if ( !v38 )
      {
        v30 = *(_QWORD *)(v25 + 88) < v52;
LABEL_51:
        v27 = v30;
        goto LABEL_46;
      }
      v27 = **(_QWORD **)(v25 + 64) < *(_QWORD *)v50;
LABEL_46:
      if ( !v27 )
        goto LABEL_35;
LABEL_31:
      sub_698F60(a1 + 104 * v14, a1 + 104 * v21);
      v14 = v21;
      if ( a2 >= v21 )
        goto LABEL_36;
      v21 = (v21 - 1) / 2;
    }
    if ( v24 != 2 || (v30 = *(_QWORD *)(v25 + 32) < v49, *(_QWORD *)(v25 + 32) == v49) )
      v30 = v25 < (unsigned __int64)&ptr;
    goto LABEL_51;
  }
LABEL_35:
  v25 = a1 + 104 * v14;
LABEL_36:
  sub_698F60(v25, (__int64)&ptr);
  if ( v53 == 2 )
  {
    v32 = v48;
    if ( v48 )
    {
      v33 = v49;
      v34 = (void **)v48;
      v35 = 0;
      if ( v49 )
      {
        do
        {
          v36 = *v34;
          if ( *v34 )
          {
            v34[1] = nullptr;
            qfree(v36);
          }
          ++v35;
          v34 += 7;
        }
        while ( v33 != v35 );
      }
      qfree(v32);
    }
  }
  else if ( v53 == 1 )
  {
    if ( v50 )
      qfree(v50);
    if ( v48 )
      qfree(v48);
  }
  if ( ptr )
    qfree(ptr);
  return v54 - __readfsqword(0x28u);
}
