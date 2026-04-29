__int64 __fastcall sub_DB510(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5, _QWORD *a6, char a7)
{
  __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v30; // r15
  __int64 v31; // rbp
  char v32; // al
  void *v33; // rax
  const void *v34; // rsi
  __int64 v35; // [rsp+18h] [rbp-E8h]
  __int64 n; // [rsp+20h] [rbp-E0h]
  _QWORD v37[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h]
  _UNKNOWN **v40; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+84h] [rbp-7Ch]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  void *v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  char v50; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v51; // [rsp+C0h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v42 = a2;
  v40 = nullptr;
  LOBYTE(v43) = 5;
  v44 = a3;
  v45 = -1;
  LOBYTE(v46) = 1;
  v10 = *a5;
  v41 = 0;
  v11 = (_QWORD *)sub_100930(v10 + 24LL * (int)a4, &v40);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( !v11 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 72LL) != a4 )
    {
      if ( !under_debugger )
        sub_37DDE0(50081);
      BUG();
    }
    return 0;
  }
  v12 = v11[1];
  if ( v12 && (int)v12 > 0 )
  {
    v30 = 0;
    v31 = 4LL * (unsigned int)(v12 - 1) + 4;
    while ( (unsigned __int8)sub_DAC20((_QWORD *)a1, a4, *(_DWORD *)(*v11 + v30), (__int64)v11) )
    {
      v30 += 4;
      if ( v30 == v31 )
        goto LABEL_5;
    }
    if ( !a7 )
      return 1;
  }
LABEL_5:
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
  if ( v13 == a4 )
    return 0;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = sub_D6D40(v14, a4, v13, (__int64)a6);
  v19 = v15;
  if ( v15 )
  {
    if ( v15 == -1 && (*(_BYTE *)(a1 + 356) & 4) != 0 )
      return v19;
    return 1;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( a4 >= *(_DWORD *)(v20 + 64) )
    sub_D6750(v14, a4, v16, v17, v18);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8LL * a4);
  v22 = sub_124C90(v21, (_DWORD)a6, *(_QWORD *)(v21 + 56), 0, 0, 0, 8449);
  if ( !v22 )
    return 0;
  if ( *(_DWORD *)v22 == 61 || (unsigned int)(*(_DWORD *)v22 - 56) <= 1 && *(_BYTE *)(v22 + 64) == 8 )
    return 1;
  v41 = 0u;
  v40 = &off_4AF838;
  v42 = 0;
  v43 = 0;
  LOBYTE(v44) = 0;
  v46 = v21;
  sub_5FC80(&v47, (__int64)a6);
  v26 = a6[3];
  v48 = nullptr;
  v49 = 0;
  if ( v26 )
  {
    v35 = v26;
    n = 16 * v26;
    v33 = (void *)qalloc_or_throw(16 * v26);
    v34 = (const void *)a6[2];
    v48 = v33;
    *((_QWORD *)&v49 + 1) = v35;
    memcpy(v33, v34, n);
    v26 = v35;
    *(_QWORD *)&v49 = v35;
  }
  v50 = 0;
  sub_11A440(v22, &v40, v23, v24, v26, v25);
  if ( v50 && (_QWORD)v49 )
  {
LABEL_22:
    v19 = 1;
  }
  else if ( !a7 )
  {
    v27 = *(_QWORD *)(v22 + 8);
    if ( v27 )
    {
      while ( 1 )
      {
        sub_1201C0(v37, v21, v27, 0);
        if ( (unsigned __int8)sub_60400(v37, a6) )
          break;
        v32 = sub_313370(&v38, a6 + 2);
        v28 = v38;
        if ( v32 )
        {
          if ( !v38 )
          {
LABEL_21:
            qfree(v37[0]);
            goto LABEL_22;
          }
LABEL_20:
          v39 = 0;
          qfree(v28);
          goto LABEL_21;
        }
        if ( v38 )
        {
          v39 = 0;
          qfree(v38);
        }
        qfree(v37[0]);
        v27 = *(_QWORD *)(v27 + 8);
        if ( !v27 )
          goto LABEL_23;
      }
      v28 = v38;
      if ( !v38 )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
LABEL_23:
  v40 = &off_4AF838;
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  qfree(v47);
  return v19;
}
