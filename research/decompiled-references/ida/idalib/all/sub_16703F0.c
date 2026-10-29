void __fastcall sub_16703F0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 i; // r15
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int *v14; // rsi
  __int64 v15; // rbx
  signed __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rbp
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r12
  _QWORD *v26; // rbp
  _QWORD *v27; // rbx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-100h]
  __int64 v44; // [rsp+20h] [rbp-E8h]
  __int64 v45; // [rsp+20h] [rbp-E8h]
  __int64 v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v48; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v49[16]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v50; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v51; // [rsp+60h] [rbp-A8h] BYREF
  char v52; // [rsp+B8h] [rbp-50h]
  unsigned int v53; // [rsp+C0h] [rbp-48h]
  char v54; // [rsp+C4h] [rbp-44h]

  v5 = *(_DWORD *)(a1 + 2024);
  if ( v5 )
  {
    v6 = v5;
    v8 = *(_QWORD *)(a1 + 2016);
    v9 = v5;
    for ( i = 144LL * v5 - 144; ; i -= 144 )
    {
      --v9;
      v11 = v8 + i;
      if ( *(_QWORD *)(v8 + i + 8) == a3 )
        break;
      if ( !v9 )
      {
        v12 = a1 + 8;
        if ( a3 )
        {
          sub_168B9F0(v49, v12, a2, 4819, 0);
          v47 = 0;
          v13 = sub_1587D10((__int64)v49, &v47);
          v14 = *(unsigned int **)(a3 + 16);
          v15 = v13;
          v16 = *v14;
          if ( *(_BYTE *)(v13 + 120) )
          {
            sub_AEC220((unsigned __int8 **)(v13 + 32), (_BYTE *)v14 + 16, v16);
          }
          else if ( *(_BYTE *)(v13 + 132) )
          {
            v40 = sub_168B9E0(v13);
            v41 = *(_QWORD *)(v15 + 16);
            if ( v41 )
              v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v41 + 32LL))(*(_QWORD *)(v15 + 16));
            v48 = v41;
            v42 = sub_1587BC0(v40, &v48, v36, v37, v38, v39);
            sub_AEC220((unsigned __int8 **)(*v42 + 32LL * *(unsigned int *)(v15 + 128) + 8), (_BYTE *)v14 + 16, v16);
          }
          sub_15F7200(v49);
        }
        else
        {
          sub_168B9F0(v49, v12, a2, 4819, 0);
          LODWORD(v48) = 1;
          sub_1587D10((__int64)v49, (int *)&v48);
          sub_15F7200(v49);
        }
        return;
      }
    }
    v17 = *(_QWORD *)(v11 + 16);
    v18 = v17 + 56LL * *(unsigned int *)(v11 + 24);
    if ( v17 != v18 )
    {
      v43 = a1 + 8;
      do
      {
        while ( *(_BYTE *)(v17 + 48) )
        {
          v17 += 56;
          if ( v17 == v18 )
            goto LABEL_16;
        }
        sub_168B9F0(v49, v43, *(unsigned int *)(*(_QWORD *)(v17 + 8) + 24LL), 7259, 0);
        if ( v52 )
        {
          sub_AE9DF0(&v51, *(_QWORD *)(v17 + 8), 0x10u);
        }
        else if ( v54 )
        {
          v44 = *(_QWORD *)(v17 + 8);
          v29 = sub_168B9E0(v49);
          v32 = v44;
          v33 = v29;
          v34 = (__int64)v50;
          if ( v50 )
          {
            v46 = v33;
            v34 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v50 + 32LL))(v50, *v50, v33, v44);
            v33 = v46;
            v32 = v44;
          }
          v45 = v32;
          v48 = v34;
          v35 = sub_1587BC0(v33, &v48, v33, v32, v30, v31);
          sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v53 + 8), v45, 0x10u);
        }
        v17 += 56;
        sub_15F7200(v49);
        sub_168B9F0(v49, v43, a2, 6270, 0);
        sub_15F7200(v49);
      }
      while ( v17 != v18 );
LABEL_16:
      v8 = *(_QWORD *)(a1 + 2016);
      v6 = *(unsigned int *)(a1 + 2024);
      v11 = v8 + i;
      v5 = *(_DWORD *)(a1 + 2024);
    }
    v19 = v8 - v11 + 144 * v6 - 144;
    v20 = 0x8E38E38E38E38E39LL * (v19 >> 4);
    if ( v19 > 0 )
    {
      v21 = v11 + 16;
      do
      {
        v22 = *(_DWORD *)(v21 + 128);
        v23 = v21;
        v21 += 144;
        *(_DWORD *)(v21 - 160) = v22;
        *(_QWORD *)(v21 - 152) = *(_QWORD *)(v21 - 8);
        sub_166FDB0(v23, (__int64 *)v21);
        --v20;
      }
      while ( v20 );
      v5 = *(_DWORD *)(a1 + 2024);
      v8 = *(_QWORD *)(a1 + 2016);
    }
    v24 = v5 - 1;
    *(_DWORD *)(a1 + 2024) = v24;
    v25 = v8 + 144 * v24;
    v26 = *(_QWORD **)(v25 + 16);
    v27 = &v26[7 * *(unsigned int *)(v25 + 24)];
    if ( v26 != v27 )
    {
      do
      {
        while ( 1 )
        {
          v27 -= 7;
          v28 = (_QWORD *)v27[2];
          if ( v28 == v27 + 4 )
            break;
          free(v28);
          if ( v26 == v27 )
            goto LABEL_24;
        }
      }
      while ( v26 != v27 );
LABEL_24:
      v27 = *(_QWORD **)(v25 + 16);
    }
    if ( v27 != (_QWORD *)(v25 + 32) )
      free(v27);
  }
  else
  {
    sub_168B9F0(v49, a1 + 8, a2, 4819, 0);
    LODWORD(v48) = 1;
    sub_1587D10((__int64)v49, (int *)&v48);
    sub_15F7200(v49);
  }
}
