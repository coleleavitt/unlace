__int64 __fastcall sub_60E5C0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // r14d
  unsigned __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 tinfo_size; // rax
  unsigned __int64 v17; // r13
  char v18; // al
  unsigned int v19; // r9d
  int v20; // edx
  int v21; // r10d
  __int64 v22; // rsi
  char v23; // al
  int v24; // r10d
  int v25; // ebp
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v29; // al
  int v30; // eax
  int v31; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 *v32; // [rsp+18h] [rbp-60h]
  unsigned int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+24h] [rbp-54h]
  int v35; // [rsp+24h] [rbp-54h]
  int v36; // [rsp+24h] [rbp-54h]
  int v37; // [rsp+24h] [rbp-54h]
  unsigned int v38; // [rsp+24h] [rbp-54h]
  int v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+28h] [rbp-50h]
  unsigned int v41; // [rsp+2Ch] [rbp-4Ch]
  int v42; // [rsp+2Ch] [rbp-4Ch]
  int v43; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v6 = sub_565920(a1);
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
  v32 = sub_5CAA10((__int64)a1, a2);
  if ( !v32 )
    return 0;
  v11 = *(_QWORD *)(a3 + 8);
  if ( !v11 )
    goto LABEL_33;
  v12 = 0;
  v11 = 0;
  v31 = 2 * v6;
  v13 = 0;
  v33 = -1;
  do
  {
    v14 = *(_QWORD *)a3 + 80 * v13;
    if ( *(_DWORD *)v14 != 1 )
      goto LABEL_13;
    v15 = *(_QWORD *)(v14 + 8);
    if ( (int)v15 >= 0 && (v33 == -1 || v33 > (unsigned int)v15) )
      v33 = v15 & -v6;
    tinfo_size = get_tinfo_size(&v43, *(_QWORD *)(v14 + 64), 0);
    if ( tinfo_size == -1 )
      return 0;
    v17 = tinfo_size + v11;
    v18 = *(_BYTE *)(a3 + 88);
    v19 = v18 & 0xF0;
    if ( (v18 & 0xF0) == 0xC0 )
      v19 = *(_DWORD *)(a3 + 28);
    if ( v19 > 0x10 )
    {
      v20 = v43;
      v21 = v43 - 1;
      if ( (v43 & (v43 - 1)) != 0 )
        goto LABEL_63;
      if ( v31 >= v43 )
      {
        if ( v6 > v43 )
          goto LABEL_25;
        goto LABEL_36;
      }
      goto LABEL_46;
    }
    v27 = getinf(99);
    v20 = v43;
    v19 = v27;
    v21 = v43 - 1;
    if ( ((v43 - 1) & v43) != 0 )
    {
LABEL_63:
      if ( !under_debugger )
        interr(2858);
      BUG();
    }
    if ( v43 <= v31 )
    {
      if ( v43 < v6 )
      {
        if ( v27 > 0x10 )
        {
LABEL_25:
          if ( v19 == 176 || v19 == 256 )
          {
            v24 = v20 - 1;
            goto LABEL_30;
          }
          goto LABEL_27;
        }
LABEL_43:
        v36 = v20;
        v28 = getinf(99);
        v20 = v36;
        v19 = v28;
        goto LABEL_25;
      }
      if ( v27 > 0x10 )
      {
LABEL_36:
        if ( v19 == 176 || v19 == 256 )
        {
LABEL_29:
          v24 = v6 - 1;
          v20 = v6;
          goto LABEL_30;
        }
        goto LABEL_38;
      }
LABEL_35:
      v35 = v20;
      v26 = getinf(99);
      v20 = v35;
      v19 = v26;
      goto LABEL_36;
    }
    if ( v27 <= 0x10 )
    {
      v42 = v43 - 1;
      v40 = v43;
      v38 = v27;
      v30 = getinf(99);
      if ( v30 != 176 && v30 != 256 )
      {
        v19 = v38;
        v20 = v40;
        v21 = v42;
        goto LABEL_48;
      }
      v20 = 2 * v6;
      if ( v6 > v31 )
        goto LABEL_51;
      goto LABEL_35;
    }
LABEL_46:
    if ( v19 == 256 || v19 == 176 )
    {
      v20 = 2 * v6;
      if ( v6 <= v31 )
        v20 = v6;
      v24 = v20 - 1;
      goto LABEL_30;
    }
LABEL_48:
    v39 = v21;
    v37 = v20;
    v41 = v19;
    v29 = getinf_flag(67, 512);
    v20 = v37;
    v24 = v39;
    if ( v29 )
      goto LABEL_30;
    if ( v6 > v31 )
    {
      if ( v41 > 0x10 )
      {
        v20 = 2 * v6;
LABEL_27:
        v34 = v20;
        v22 = 2;
        goto LABEL_28;
      }
LABEL_51:
      v20 = 2 * v6;
      goto LABEL_43;
    }
    v20 = 2 * v6;
    if ( v41 <= 0x10 )
      goto LABEL_35;
LABEL_38:
    v34 = v20;
    v22 = 4;
LABEL_28:
    v23 = getinf_flag(67, v22);
    v20 = v34;
    v24 = v34 - 1;
    if ( !v23 )
      goto LABEL_29;
LABEL_30:
    v11 = (v17 + v24) & -v20;
LABEL_13:
    v13 = ++v12;
  }
  while ( (unsigned __int64)v12 < *(_QWORD *)(a3 + 8) );
  if ( v33 == -1
    || (v25 = *((unsigned __int16 *)v32 + 20), (unsigned int)sub_5B7840((__int64)a1, (__int64)v32) + v25 >= v33) )
  {
LABEL_33:
    LOBYTE(v3) = v11 < v32[6];
  }
  return v3;
}
