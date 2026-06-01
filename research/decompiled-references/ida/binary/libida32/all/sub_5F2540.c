__int64 __fastcall sub_5F2540(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // r15d
  unsigned __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // r14d
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  __int64 tinfo_size; // rax
  int v18; // r10d
  char v19; // al
  unsigned int v20; // edx
  int v21; // r8d
  __int64 v22; // rsi
  char v23; // al
  int v24; // ebp
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v29; // al
  int v30; // eax
  int v31; // [rsp+8h] [rbp-70h]
  int v32; // [rsp+8h] [rbp-70h]
  unsigned __int64 v33; // [rsp+8h] [rbp-70h]
  int v34; // [rsp+8h] [rbp-70h]
  int v35; // [rsp+8h] [rbp-70h]
  int v36; // [rsp+8h] [rbp-70h]
  int v37; // [rsp+8h] [rbp-70h]
  int v38; // [rsp+14h] [rbp-64h]
  unsigned int *v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+28h] [rbp-50h]
  int v41; // [rsp+28h] [rbp-50h]
  int v42; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+28h] [rbp-50h]
  int v44; // [rsp+28h] [rbp-50h]
  unsigned int v45; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v46; // [rsp+2Ch] [rbp-4Ch]
  int v47; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v6 = sub_54C1C0(a1);
  LOBYTE(v3) = a2 != -1 && v6 != -1;
  if ( !(_BYTE)v3 || (getinf(57) & 0xF) != 6 )
    return 0;
  v8 = *(_QWORD *)(a3 + 8);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0;
    while ( !*(_DWORD *)(*(_QWORD *)a3 + 80 * v10) )
    {
      v10 = ++v9;
      if ( v9 >= v8 )
        return 0;
    }
  }
  v39 = sub_5AFCE0((__int64)a1, a2);
  if ( !v39 )
    return 0;
  v11 = *(_QWORD *)(a3 + 8);
  if ( !v11 )
    goto LABEL_33;
  v12 = 0;
  v11 = 0;
  v38 = 2 * v6;
  v13 = -1;
  v14 = 0;
  do
  {
    v15 = *(_QWORD *)a3 + 80 * v14;
    if ( *(_DWORD *)v15 != 1 )
      goto LABEL_13;
    v16 = *(_DWORD *)(v15 + 8);
    if ( v16 >= 0 && (v13 == -1 || v16 < v13) )
      v13 = v16 & -v6;
    v31 = v11;
    tinfo_size = get_tinfo_size(&v47, *(_QWORD *)(v15 + 64), 0);
    if ( tinfo_size == -1 )
      return 0;
    v18 = tinfo_size + v31;
    v19 = *(_BYTE *)(a3 + 88);
    v20 = v19 & 0xF0;
    if ( (v19 & 0xF0) == 0xC0 )
      v20 = *(_DWORD *)(a3 + 28);
    if ( v20 > 0x10 )
    {
      v21 = v47;
      if ( (v47 & (v47 - 1)) != 0 )
        goto LABEL_62;
      if ( v38 >= v47 )
      {
        if ( v6 > v47 )
          goto LABEL_25;
        goto LABEL_36;
      }
      goto LABEL_45;
    }
    v35 = v18;
    v27 = getinf(99);
    v21 = v47;
    v18 = v35;
    v20 = v27;
    if ( (v47 & (v47 - 1)) != 0 )
    {
LABEL_62:
      if ( !under_debugger )
        interr(2858);
      BUG();
    }
    if ( v47 <= v38 )
    {
      if ( v47 < v6 )
      {
        if ( v27 > 0x10 )
        {
LABEL_25:
          if ( v20 == 176 || v20 == 256 )
            goto LABEL_30;
          goto LABEL_27;
        }
LABEL_43:
        v42 = v21;
        v36 = v18;
        v28 = getinf(99);
        v21 = v42;
        v18 = v36;
        v20 = v28;
        goto LABEL_25;
      }
      if ( v27 > 0x10 )
      {
LABEL_36:
        if ( v20 == 176 || v20 == 256 )
        {
LABEL_29:
          v21 = v6;
          goto LABEL_30;
        }
        goto LABEL_38;
      }
LABEL_35:
      v41 = v21;
      v34 = v18;
      v26 = getinf(99);
      v21 = v41;
      v18 = v34;
      v20 = v26;
      goto LABEL_36;
    }
    if ( v27 <= 0x10 )
    {
      v46 = v27;
      v44 = v47;
      v30 = getinf(99);
      v18 = v35;
      if ( v30 != 176 && v30 != 256 )
      {
        v21 = v44;
        v20 = v46;
        goto LABEL_47;
      }
      v21 = 2 * v6;
      if ( v6 > v38 )
        goto LABEL_50;
      goto LABEL_35;
    }
LABEL_45:
    if ( v20 == 256 || v20 == 176 )
    {
      v21 = 2 * v6;
      if ( v6 <= v38 )
        v21 = v6;
      goto LABEL_30;
    }
LABEL_47:
    v43 = v21;
    v37 = v18;
    v45 = v20;
    v29 = getinf_flag(67, 512);
    v18 = v37;
    v21 = v43;
    if ( v29 )
      goto LABEL_30;
    if ( v6 > v38 )
    {
      if ( v45 > 0x10 )
      {
        v21 = 2 * v6;
LABEL_27:
        v40 = v21;
        v22 = 2;
        v32 = v18;
        goto LABEL_28;
      }
LABEL_50:
      v21 = 2 * v6;
      goto LABEL_43;
    }
    v21 = 2 * v6;
    if ( v45 <= 0x10 )
      goto LABEL_35;
LABEL_38:
    v40 = v21;
    v22 = 4;
    v32 = v18;
LABEL_28:
    v23 = getinf_flag(67, v22);
    v18 = v32;
    v21 = v40;
    if ( !v23 )
      goto LABEL_29;
LABEL_30:
    v11 = (v18 + v21 - 1) & -v21;
LABEL_13:
    v14 = ++v12;
  }
  while ( (unsigned __int64)v12 < *(_QWORD *)(a3 + 8) );
  if ( v13 == -1
    || (v33 = v11,
        v24 = *((unsigned __int16 *)v39 + 12),
        v25 = sub_59D650((__int64)a1, (__int64)v39),
        v11 = v33,
        v25 + v24 >= v13) )
  {
LABEL_33:
    LOBYTE(v3) = v11 < v39[7];
  }
  return v3;
}

