void __fastcall sub_1EDD750(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r9
  int v4; // r12d
  _DWORD *v5; // rax
  bool v6; // zf
  __int64 v7; // r9
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 *v14; // r12
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 *v18; // r14
  char *v19; // r15
  char *v20; // rbx
  __int64 v21; // rdx
  char *v22; // r12
  char *v23; // rbx
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // esi
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // esi
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-D0h] BYREF
  __int64 *v43; // [rsp+10h] [rbp-C8h] BYREF
  __int64 *v44; // [rsp+18h] [rbp-C0h] BYREF
  _QWORD v45[2]; // [rsp+20h] [rbp-B8h] BYREF
  int v46; // [rsp+30h] [rbp-A8h]
  __int64 v47; // [rsp+34h] [rbp-A4h]
  __int16 v48; // [rsp+3Ch] [rbp-9Ch]
  void *v49; // [rsp+40h] [rbp-98h]
  __int64 v50; // [rsp+48h] [rbp-90h]
  _BYTE v51[32]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+78h] [rbp-60h]
  _BYTE v54[88]; // [rsp+80h] [rbp-58h] BYREF

  v2 = (__int64 *)(a1 + 4944);
  v42 = a2;
  if ( (unsigned __int8)sub_19D29B0((__int64 *)(a1 + 4944), &v42, &v44) )
  {
    v4 = *((_DWORD *)v44 + 2);
    v5 = v44 + 1;
    goto LABEL_3;
  }
  v37 = v44;
  v38 = (unsigned int)(*(_DWORD *)(a1 + 4952) + 1);
  v39 = *(unsigned int *)(a1 + 4960);
  v45[0] = v44;
  v40 = (unsigned int)(4 * v38);
  if ( (unsigned int)v40 >= 3 * (int)v39 )
  {
    sub_18ACB90((__int64)v2, 2 * v39, v38, v39, v40, v3);
LABEL_40:
    sub_19D29B0(v2, &v42, v45);
    LODWORD(v38) = *(_DWORD *)(a1 + 4952) + 1;
    v37 = (__int64 *)v45[0];
    goto LABEL_32;
  }
  if ( (int)v39 - *(_DWORD *)(a1 + 4956) - (int)v38 <= (unsigned int)v39 >> 3 )
  {
    sub_18ACB90((__int64)v2, v39, v38, v39, v40, v3);
    goto LABEL_40;
  }
LABEL_32:
  *(_DWORD *)(a1 + 4952) = v38;
  if ( *v37 != -1 )
    --*(_DWORD *)(a1 + 4956);
  v41 = v42;
  *((_DWORD *)v37 + 2) = 0;
  v4 = 0;
  v5 = v37 + 1;
  *((_QWORD *)v5 - 1) = v41;
LABEL_3:
  *v5 = *(_DWORD *)(a1 + 36);
  v6 = (unsigned __int8)sub_1EB1680((__int64 *)(a1 + 4968), &v42, &v44) == 0;
  v8 = v44;
  if ( !v6 )
    goto LABEL_4;
  v31 = *(_DWORD *)(a1 + 4976);
  v45[0] = v44;
  v32 = (unsigned int)(v31 + 1);
  v33 = *(unsigned int *)(a1 + 4984);
  v34 = (unsigned int)(4 * v32);
  v35 = 2 * v33;
  if ( (unsigned int)v34 >= 3 * (int)v33 )
    goto LABEL_36;
  if ( (int)v33 - *(_DWORD *)(a1 + 4980) - (int)v32 <= (unsigned int)v33 >> 3 )
  {
    v35 = *(_DWORD *)(a1 + 4984);
LABEL_36:
    sub_1EDB000(a1 + 4968, v35, v32, v33, v34, v7);
    sub_1EB1680((__int64 *)(a1 + 4968), &v42, v45);
    LODWORD(v32) = *(_DWORD *)(a1 + 4976) + 1;
    v8 = (__int64 *)v45[0];
  }
  *(_DWORD *)(a1 + 4976) = v32;
  if ( *v8 != -1 )
    --*(_DWORD *)(a1 + 4980);
  v36 = v42;
  *((_BYTE *)v8 + 8) = 0;
  *v8 = v36;
LABEL_4:
  *((_BYTE *)v8 + 8) = 0;
  v9 = v42;
  ++*(_DWORD *)(a1 + 9344);
  v45[1] = v9;
  v48 = 0;
  v49 = v51;
  ptr = v54;
  v50 = 0x400000000LL;
  v53 = 0x400000000LL;
  v45[0] = a1;
  v46 = v4;
  v47 = 0;
  sub_1FDD8F0(a1 + 160, sub_1EE3C80, v45, 0);
  if ( (unsigned int)v53 | (unsigned int)v50 )
  {
    v10 = *(_QWORD *)(a1 + 128);
    ++*(_DWORD *)(a1 + 9348);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 736);
      v6 = (unsigned __int8)sub_1895990((__int64 *)(v11 + 64), &v42, &v43) == 0;
      v13 = v43;
      if ( !v6 )
      {
        v14 = v43 + 1;
        v15 = v43[3] & 0xFFFFFFFFFFFFFFFBLL;
        v16 = v43[4] & 0xFFFFFFFFFFFFFFF9LL;
        v17 = v43[2] & 0xFFFFFFFFFFFFFFF9LL;
LABEL_8:
        v18 = v14 + 2;
        v14[1] = v17 | (2LL * (unsigned int)v47);
        *v14 = (4LL * (unsigned __int8)v48) | *v14 & 0xFFFFFFFFFFFFFFFBLL;
        v14[3] = v16 | (2LL * HIDWORD(v47));
        v14[2] = v15 | (4LL * HIBYTE(v48));
        v19 = (char *)v49;
        v20 = (char *)v49 + 8 * (unsigned int)v50;
        if ( v20 != v49 )
        {
          do
          {
            v21 = *((_QWORD *)v20 - 1);
            v20 -= 8;
            sub_1896550(*(_QWORD *)(v10 + 736), v14, v21);
          }
          while ( v20 != v19 );
        }
        v22 = (char *)ptr;
        v23 = (char *)ptr + 8 * (unsigned int)v53;
        if ( v23 != ptr )
        {
          do
          {
            v24 = *((_QWORD *)v23 - 1);
            v23 -= 8;
            sub_1896550(*(_QWORD *)(v10 + 736), v18, v24);
          }
          while ( v23 != v22 );
          v22 = (char *)ptr;
        }
        if ( v22 != v54 )
          free(v22);
        goto LABEL_15;
      }
      v25 = *(_DWORD *)(v11 + 72);
      v44 = v43;
      v26 = (unsigned int)(v25 + 1);
      v27 = *(unsigned int *)(v11 + 80);
      v28 = (unsigned int)(4 * v26);
      v29 = 2 * v27;
      if ( (unsigned int)v28 < 3 * (int)v27 )
      {
        if ( (int)v27 - *(_DWORD *)(v11 + 76) - (int)v26 > (unsigned int)v27 >> 3 )
        {
LABEL_22:
          *(_DWORD *)(v11 + 72) = v26;
          if ( *v13 != -1 )
            --*(_DWORD *)(v11 + 76);
          v13[1] = 0;
          v14 = v13 + 1;
          v16 = 0;
          v15 = 0;
          v30 = v42;
          v13[2] = 0;
          v13[3] = 0;
          *v13 = v30;
          v13[4] = 0;
          v17 = 0;
          goto LABEL_8;
        }
        v29 = *(_DWORD *)(v11 + 80);
      }
      sub_18988F0(v11 + 64, v29, v26, v27, v28, v12);
      sub_1895990((__int64 *)(v11 + 64), &v42, &v44);
      LODWORD(v26) = *(_DWORD *)(v11 + 72) + 1;
      v13 = v44;
      goto LABEL_22;
    }
  }
  if ( ptr != v54 )
    free(ptr);
LABEL_15:
  if ( v49 != v51 )
    free(v49);
}
