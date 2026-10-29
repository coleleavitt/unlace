// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_EE5AB0(__int64 a1, char *a2, char a3)
{
  __int64 *v4; // r12
  bool v5; // zf
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  char *v17; // r12
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  unsigned __int64 v27; // r13
  char v28; // bl
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // esi
  char *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 *v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // [rsp+8h] [rbp-70h]
  bool v47; // [rsp+17h] [rbp-61h]
  __int64 v48; // [rsp+20h] [rbp-58h]
  char *v49; // [rsp+28h] [rbp-50h] BYREF
  __int64 v50; // [rsp+30h] [rbp-48h] BYREF
  __int64 v51[8]; // [rsp+38h] [rbp-40h] BYREF

  v49 = a2;
  if ( a3 )
  {
    v4 = (__int64 *)(a1 + 848);
    v5 = (unsigned __int8)sub_ED63D0((__int64 *)(a1 + 848), (__int64 *)&v49, &v50) == 0;
    v7 = (_QWORD *)v50;
    if ( !v5 )
    {
      v8 = *(_QWORD *)(v50 + 8);
      v9 = (__int64 *)(v50 + 8);
      if ( v8 )
        return v8;
      goto LABEL_23;
    }
    v36 = *(_DWORD *)(a1 + 856);
    v51[0] = v50;
    v37 = (unsigned int)(v36 + 1);
    v38 = *(unsigned int *)(a1 + 864);
    v39 = (unsigned int)(4 * v37);
    v40 = 2 * v38;
    if ( (unsigned int)v39 < 3 * (int)v38 )
    {
      if ( (int)v38 - *(_DWORD *)(a1 + 860) - (int)v37 > (unsigned int)v38 >> 3 )
      {
LABEL_20:
        v5 = *v7 == -4096;
        *(_DWORD *)(a1 + 856) = v37;
        if ( !v5 )
          --*(_DWORD *)(a1 + 860);
        v41 = v49;
        v7[1] = 0;
        v9 = v7 + 1;
        *v7 = v41;
LABEL_23:
        v42 = sub_9C3B30((__int64 *)(a1 + 752), 80, 3u);
        v16 = v42 + 32;
        v8 = v42;
        *(_QWORD *)(v42 + 16) = v42 + 32;
        *(_QWORD *)(v42 + 24) = 0x400000000LL;
        *v9 = v42;
        goto LABEL_6;
      }
      v40 = *(_DWORD *)(a1 + 864);
    }
    sub_ED7940((__int64)v4, v40, v37, v38, v39, v6);
    sub_ED63D0(v4, (__int64 *)&v49, v51);
    LODWORD(v37) = *(_DWORD *)(a1 + 856) + 1;
    v7 = (_QWORD *)v51[0];
    goto LABEL_20;
  }
  v11 = sub_9C3B30((__int64 *)(a1 + 752), 80, 3u);
  v16 = v11 + 32;
  v8 = v11;
  *(_QWORD *)(v11 + 16) = v11 + 32;
  *(_QWORD *)(v11 + 24) = 0x400000000LL;
LABEL_6:
  v17 = v49;
  *(_BYTE *)(v8 + 8) = a3;
  *(_OWORD *)(v8 + 64) = 0;
  *(_QWORD *)v8 = v17;
  v18 = *((__int64 **)v17 + 13);
  sub_7052B0(v18 + 12, (__int64)v18, v12, v13, v14, v15);
  if ( *(_DWORD *)(*((_QWORD *)v17 + 16) + 20LL)
    && (v18 = (__int64 *)v49,
        v43 = *(_QWORD *)(sub_EDE580(*(_QWORD *)a1, v49, v19, v20, v21, v22)[9] + 48LL),
        (v43 & 4) != 0) )
  {
    v18 = v51;
    v46 = v43 & 0xFFFFFFFFFFFFFFF8LL;
    v51[0] = v43 & 0xFFFFFFFFFFFFFFF8LL;
    v44 = sub_ED6490((__int64 *)(a1 + 848), v51);
    if ( !v44 || (v23 = v44[1]) == 0 )
    {
      v24 = sub_A7A590((__int64)v49, (__int64)v51, v19, v20, v21, v22);
      v47 = 1;
      v26 = v45;
      if ( v24 == v45 )
        goto LABEL_14;
      goto LABEL_10;
    }
    if ( *(_QWORD *)(v23 + 72) )
    {
      v46 = 0;
    }
    else
    {
      *(_QWORD *)(v8 + 64) = v23;
      *(_QWORD *)(v23 + 72) = v8;
    }
  }
  else
  {
    v46 = 0;
    v23 = 0;
  }
  v24 = sub_A7A590((__int64)v49, (__int64)v18, v19, v20, v21, v22);
  v26 = v25;
  if ( v24 == v25 )
    return v8;
  v47 = v23 == 0;
LABEL_10:
  v27 = v24;
  do
  {
    v28 = *(_BYTE *)(v27 + 12);
    v29 = sub_ED6580(*(__int64 **)(v27 + 16));
    v30 = sub_F63270(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL));
    v31 = sub_EE5AB0(a1, v30, v28 & 1);
    v32 = *(unsigned int *)(v8 + 24);
    if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 28) )
    {
      v48 = v31;
      sub_2237220(v8 + 16, v16, v32 + 1, 8);
      v32 = *(unsigned int *)(v8 + 24);
      v33 = *(_QWORD *)(v8 + 16);
      v31 = v48;
    }
    else
    {
      v33 = *(_QWORD *)(v8 + 16);
    }
    v27 += 24LL;
    *(_QWORD *)(v33 + 8 * v32) = v31;
    ++*(_DWORD *)(v8 + 24);
  }
  while ( v26 != v27 );
LABEL_14:
  if ( v46 && v47 )
  {
    v51[0] = v46;
    v34 = sub_ED6490((__int64 *)(a1 + 848), v51);
    if ( !v34 )
    {
      *(_QWORD *)(v8 + 64) = 0;
      qword_48 = v8;
      BUG();
    }
    v35 = v34[1];
    *(_QWORD *)(v8 + 64) = v35;
    *(_QWORD *)(v35 + 72) = v8;
  }
  return v8;
}
