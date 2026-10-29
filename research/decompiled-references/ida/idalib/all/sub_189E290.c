__int64 __fastcall sub_189E290(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  char v6; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 *v10; // r14
  __int16 v11; // ax
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // r15d
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // [rsp+8h] [rbp-100h]
  __int64 v40; // [rsp+8h] [rbp-100h]
  char v41; // [rsp+8h] [rbp-100h]
  char v42; // [rsp+10h] [rbp-F8h]
  char v43; // [rsp+1Ch] [rbp-ECh]
  __int64 v44; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v48[200]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = a5;
  v8 = (__int64)a2;
  if ( (_BYTE)a4
    && (((unsigned __int8)((unsigned __int64)a2[7] >> 26) ^ (unsigned __int8)(*(_QWORD *)(a3 + 56) >> 26)) & 0x3F) != 0 )
  {
    if ( !a6 )
      return 0;
    v43 = a6;
    sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *((_DWORD *)a2 + 6), (_BYTE)a5 == 0 ? 6702 : 6697, 0);
    v46 = a2[5];
    v40 = sub_15894B0((__int64)v48, &v46);
    v47 = sub_BA8620((__int64)a2);
    sub_1587DB0(v40, &v47);
    sub_15F7200(v48);
    sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x70u, 0);
    a2 = &v47;
    v47 = sub_BA8620(a3);
    sub_1587DB0((__int64)v48, &v47);
    sub_15F7200(v48);
    a6 = v43;
  }
  else if ( !a6 )
  {
    goto LABEL_13;
  }
  if ( v6 )
  {
    v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v9 = *(_QWORD *)v9;
    if ( (*(_BYTE *)(v9 + 8) & 0x7F) != 0x15 )
    {
      v10 = (__int64 *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF0LL);
      v11 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v9, a4, a5);
      v39 = v11;
      v12 = HIBYTE(v11);
      v16 = sub_F6A600(*v10, (__int64)a2, v13, v14, v15);
      if ( v12 == HIBYTE(v16) && v12 && v39 != (_BYTE)v16 && v39 != 2 && (_BYTE)v16 != 2 && ((_BYTE)v16 != 1 || v39) )
      {
        v42 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v17, HIBYTE(v16), a5);
        v41 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v30, v31, v32);
        sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x83u, 0);
        v33 = *(_DWORD *)(v8 + 60) & 1;
        LOBYTE(v46) = v42;
        BYTE1(v46) = v33;
        v36 = sub_189E1F0((__int64)v48, (unsigned __int16 *)&v46, v34, v35);
        v37 = *(_DWORD *)(a3 + 60) & 1;
        LOBYTE(v47) = v41;
        BYTE1(v47) = v37;
        sub_189E1F0(v36, (unsigned __int16 *)&v47, v37, v38);
        sub_15F7200(v48);
        sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x70u, 0);
        sub_15F7200(v48);
      }
    }
    v18 = *(_QWORD *)(v8 + 80);
    v19 = *(_QWORD *)(a3 + 80);
    v20 = 6698;
    v21 = (_QWORD *)(*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v22 = (_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *v21 == *v22 )
      return 1;
    goto LABEL_17;
  }
LABEL_13:
  v18 = *(_QWORD *)(v8 + 80);
  v19 = *(_QWORD *)(a3 + 80);
  v21 = (_QWORD *)(*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v22 = (_QWORD *)(*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *v21 == *v22 )
    return 1;
  if ( !a6 )
    return 0;
  v20 = 6703;
LABEL_17:
  v24 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  v25 = *v24;
  if ( *(_BYTE *)(*v24 + 16) != 34 )
  {
    v25 = sub_1894090(*v24, v19, (__int64)v22, (__int64)v21);
    if ( !v25 )
      goto LABEL_21;
    v19 = *(_QWORD *)(a3 + 80);
  }
  v26 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v26 + 16) != 34 )
  {
    v26 = sub_1894090(v26, v26, (__int64)v22, (__int64)v21);
    if ( !v26 )
      goto LABEL_21;
  }
  if ( !(unsigned __int8)sub_1894760(*(_QWORD *)(a1 + 248), v26, v25, 0, a5) )
  {
    v20 = (v6 == 0) + 7139;
LABEL_21:
    sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), v20, 0);
    v44 = *(_QWORD *)(v8 + 40);
    v27 = sub_15894B0((__int64)v48, &v44);
    v45 = *(_QWORD *)(a3 + 80);
    v28 = sub_162B6D0(v27, &v45);
    v46 = *(_QWORD *)(v8 + 80);
    v29 = sub_162B6D0(v28, &v46);
    v47 = sub_BA8620(v8);
    sub_1587DB0(v29, &v47);
    sub_15F7200(v48);
    sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), (v6 == 0) + 112, 0);
    v47 = sub_BA8620(a3);
    sub_1587DB0((__int64)v48, &v47);
    sub_15F7200(v48);
  }
  return 0;
}
