__int64 __fastcall sub_6C2C90(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  double v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r12
  _DWORD *v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r12
  unsigned int v16; // ebx
  unsigned int v18; // ecx
  char v19; // al
  __int32 v20; // edx
  unsigned __int64 v21; // rdx
  char v22; // cl
  char v23; // si
  __int64 v24; // rax
  char v25; // cl
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // al
  _DWORD *v34; // rax
  __int64 v35; // rax
  __int64 v37; // [rsp+10h] [rbp-E8h]
  unsigned int v39; // [rsp+20h] [rbp-D8h]
  __int64 v40; // [rsp+20h] [rbp-D8h]
  __int64 v41; // [rsp+20h] [rbp-D8h]
  __int64 v42; // [rsp+28h] [rbp-D0h]
  char v44; // [rsp+47h] [rbp-B1h]
  __int64 v45; // [rsp+48h] [rbp-B0h]
  char v46; // [rsp+5Fh] [rbp-99h] BYREF
  __int64 v47; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-90h]
  __int64 v49; // [rsp+70h] [rbp-88h]
  __int64 v50; // [rsp+78h] [rbp-80h]
  _QWORD v51[4]; // [rsp+80h] [rbp-78h] BYREF
  __m128 v52; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-40h]

  v5 = *(double *)a1;
  v6 = *(__int64 **)(a1 + 8);
  v47 = 0;
  v49 = 1;
  v37 = *(_QWORD *)&v5;
  v7 = *v6;
  v48 = 0;
  v50 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64 *))(v7 + 48))(v6);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), a2);
  v51[0] = 0;
  v10 = v9;
  v11 = a3;
  v51[1] = 0;
  v51[2] = 1;
  v51[3] = 0;
  while ( 1 )
  {
    if ( *(_WORD *)(v11 + 4) || (v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL)) == nullptr )
    {
      if ( v8 != v11 )
        goto LABEL_14;
      goto LABEL_26;
    }
    if ( *v12 != 5 || v12[1] != 6 )
      break;
    if ( !*(_DWORD *)(v11 + 24) )
      goto LABEL_14;
    v44 = 0;
    v18 = 0;
    v45 = 0;
    do
    {
      v39 = v18;
      v42 = *(_QWORD *)(v11 + 8LL * v18 + 32);
      v19 = sub_168D740(v10 + 32, v42);
      if ( v19 )
      {
        if ( v44 )
          goto LABEL_14;
        v45 = v42;
        v44 = v19;
      }
      v18 = v39 + 1;
    }
    while ( v39 + 1 < *(_DWORD *)(v11 + 24) );
    if ( !v45 )
      goto LABEL_14;
    v11 = v45;
  }
  if ( v8 == v11 )
  {
LABEL_26:
    v52 = (__m128)1uLL;
    v53 = 1;
    v54 = 0;
    sub_182CBA0(qword_1C7F2C0, &v53);
    v20 = v52.m128_i32[0];
    v52.m128_i32[0] = v47;
    LODWORD(v47) = v20;
    v21 = v52.m128_u64[1];
    v52.m128_u64[1] = v48;
    v48 = v21;
    v22 = v52.m128_i8[4] & 1;
    LOBYTE(v21) = BYTE4(v47) & 0xFC | v52.m128_i8[4] & 2;
    v52.m128_i8[4] = BYTE4(v47) & 1 | v52.m128_i8[4] & 0xFC | BYTE4(v47) & 2;
    BYTE4(v47) = v22 | v21;
    v23 = BYTE4(v49) & 2;
    LODWORD(v53) = v49;
    v24 = v50;
    v50 = v54;
    v54 = v24;
    LODWORD(v49) = 1;
    v25 = BYTE4(v49) & 1;
    BYTE4(v49) = BYTE4(v49) & 0xFC | BYTE4(v53) & 2;
    BYTE4(v53) = v25 | v23 | BYTE4(v53) & 0xFC;
    sub_25A130((char *)&v52);
    sub_25A130((char *)v51);
    goto LABEL_27;
  }
  if ( *v12 != 5 || v12[1] != 9 )
    goto LABEL_14;
  if ( *(_DWORD *)(v11 + 24) != 2 )
    goto LABEL_9;
  v41 = *(_QWORD *)(v11 + 40);
  v33 = sub_1666AE0(a1 + 16, *(_QWORD *)(v11 + 32), v51, &v52);
  if ( v8 != v41 || !v33 )
  {
    if ( !*(_WORD *)(v11 + 4) )
    {
      v34 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
      if ( v34 )
      {
        if ( *v34 == 5 && v34[1] == 9 )
        {
LABEL_9:
          if ( *(_DWORD *)(v11 + 24) == 2 )
          {
            v13 = *(_QWORD *)(v11 + 32);
            if ( (unsigned __int8)sub_1666AE0(a1 + 16, *(_QWORD *)(v11 + 40), v51, &v46) )
            {
              if ( v8 == v13 )
                goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_14:
    sub_25A130((char *)v51);
LABEL_15:
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_16;
  }
LABEL_12:
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, (int *)v51);
  sub_25A130((char *)v51);
LABEL_27:
  if ( (unsigned __int8)sub_6BFE80(v8) )
  {
    sub_3EC020((__int64)&v52, (__int64)&v47);
    if ( (v52.m128_i8[4] & 1) != 0 || v52.m128_i32[0] != 1 || (v53 & 0x100000000LL) != 0 || (_DWORD)v53 != 1 )
    {
      sub_25A130((char *)&v52);
      goto LABEL_15;
    }
    sub_25A130((char *)&v52);
  }
  sub_3EC020((__int64)&v52, (__int64)&v47);
  if ( (v52.m128_i8[4] & 1) != 0 || v52.m128_i32[0] != 1 || (v53 & 0x100000000LL) != 0 || (_DWORD)v53 != 1 )
  {
    sub_25A130((char *)&v52);
    v52.m128_i8[4] &= 0xFCu;
    BYTE4(v53) &= 0xFCu;
    v52.m128_i32[0] = 0;
    v52.m128_u64[1] = 0;
    LODWORD(v53) = 1;
    v54 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v52, (int *)&v47);
    sub_1831620(qword_1C7F2C0, &v52);
    v29 = *(_QWORD *)(a1 + 24);
    if ( !v29 )
    {
      sub_16669E0(a1 + 16);
      v29 = *(_QWORD *)(a1 + 24);
    }
    sub_166A700(v29, (unsigned int)&v52, 0, v26, v27, v28);
    sub_25A130((char *)&v52);
    v30 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v40 = v30;
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v31 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v14 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    sub_6BFE30(v40, v37);
    v32 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v15 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
  }
  else
  {
    sub_25A130((char *)&v52);
    v35 = sub_15E1B70(*(_QWORD *)(a1 + 16));
    v15 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v14 = 0;
  }
  v52 = _mm_loadh_ps((const double *)a1);
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  sub_14EC390(a1 + 312, v8, v15, &v52);
  sub_14B9B80(a1 + 32, &v52);
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**(_QWORD **)(a1 + 8) + 80LL))(
    *(_QWORD *)(a1 + 8),
    a2,
    v52.m128_u64[0],
    v15);
  v16 = 1;
  sub_6BFE30(v52.m128_i64[0], v52.m128_i64[1]);
LABEL_16:
  sub_6BFE30(v14, v37);
  sub_6BFE30(v15, v37);
  sub_25A130((char *)&v47);
  return v16;
}

