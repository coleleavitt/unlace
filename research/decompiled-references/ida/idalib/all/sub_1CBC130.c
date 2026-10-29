unsigned __int64 __fastcall sub_1CBC130(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned __int64 v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+10h] [rbp-E8h]
  __int64 v42[2]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v44[25]; // [rsp+30h] [rbp-C8h] BYREF

  v40[0] = a3;
  v42[0] = a2;
  v40[1] = a4;
  v5 = sub_F6CCB0(v40, a5);
  v8 = 0;
  v9 = v5;
  if ( (v40[0] & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v40[0] & 0xFFFFFFFFFFFFFFF0LL));
  v10 = v8 | v40[0] & 7;
  v11 = (__int64 *)(v42[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_QWORD *)&byte_8[v42[0] & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v20 = v42[0] & 7
        | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v42[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v42[0] & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    a2 = (unsigned int)v20 >> 9;
    if ( (unsigned int)v20 >> 9 && (unsigned int)v10 >> 9 && (_DWORD)a2 != (unsigned int)v10 >> 9 )
    {
      sub_168B9F0((__int64)v44, (__int64 *)(*a1 + 8LL), v9, 0xB91u, 0);
      v43 = v40[0];
      v21 = sub_162B6D0((__int64)v44, &v43);
      sub_1605D30(v21, v42);
      sub_15F7200(v44);
      return 0;
    }
    if ( !HIDWORD(v10) )
      goto LABEL_5;
    if ( HIDWORD(v20) )
    {
      sub_168B9F0((__int64)v44, (__int64 *)(*a1 + 8LL), v9, 0x130Eu, 0);
      v43 = v40[0];
      sub_162B6D0((__int64)v44, &v43);
      sub_15F7200(v44);
      return 0;
    }
  }
  else if ( !HIDWORD(v10) )
  {
LABEL_5:
    v12 = *v11;
    LODWORD(v13) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_6;
  }
  v12 = *v11;
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(*v11 + 17) & 4) != 0 )
  {
LABEL_6:
    if ( (unsigned int)(v13 - 25) <= 1 )
      return sub_A70E70(*(_QWORD *)(*a1 + 248LL), v42[0], (unsigned int)v10 >> 9);
    v13 = (unsigned int)(v13 - 43);
    if ( (unsigned int)v13 <= 1 )
    {
      if ( (v10 & 2) == 0 )
        return v42[0];
      v10 = 2;
      return sub_1E62D40(*a1, v42[0], v9, v10, 0);
    }
LABEL_27:
    if ( (v10 & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v42[0], v9, v10, 0);
    if ( sub_F6ACC0(v12, a2, v13, (__int64)v11, v6) )
    {
      v22 = (_QWORD *)(v42[0] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v22 = (_QWORD *)(v42[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v42[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        goto LABEL_42;
    }
    v23 = v22[1];
    if ( (v23 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v23 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v42[0], v9, v10, 0);
    v24 = *v22;
    if ( *(_BYTE *)(*v22 + 16LL) == 16 )
    {
      v25 = *(_QWORD *)(v24 + 24);
      if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v24 + 17) & 4) != 0 )
      {
        v44[0] = *(_QWORD *)(v24 + 24);
        v26 = *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v26 & 8) != 0 )
        {
          v34 = v25 & 7
              | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
              | *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
          v35 = *a1;
          v41 = v34;
          v36 = *(_QWORD *)(v35 + 248);
          v26 = v34 & 0xFFFFFFFFFFFFFE3FLL;
          v37 = sub_6D5440(v44);
          v27 = v37;
          if ( (v41 & 0xFFFFFFFFFFFFFE38LL) != 0 )
          {
            v38 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
            v39 = v26 | v37 & 7;
            if ( (v37 & 8) != 0 )
            {
              v39 |= *(__int64 *)((char *)&qword_18 + (v37 & 0xFFFFFFFFFFFFFFF0LL));
              v38 = (_QWORD *)*v38;
            }
            v28 = sub_A70C40(v36, (__int64)v38, v39);
            goto LABEL_38;
          }
        }
        else
        {
          LODWORD(v26) = ((unsigned __int8)v26 | (unsigned __int8)v25) & 7;
          v27 = sub_6D5440(v44);
        }
        v28 = v27 & 0xFFFFFFFFFFFFFFF8LL | v27 & 7 | (unsigned int)v26;
LABEL_38:
        v29 = *a1;
        v44[0] = v28;
        v42[0] = sub_AB5840(
                   *(_QWORD *)(v29 + 248),
                   v28,
                   (*(_BYTE *)(v24 + 18) >> 3) & 3,
                   (*(_BYTE *)(v24 + 17) & 4) != 0,
                   0,
                   *(__int64 **)(v24 + 32),
                   v24 + 48,
                   *(unsigned int *)(v24 + 20));
        return sub_1E62D40(*a1, v42[0], v9, v10, 0);
      }
    }
    sub_168B9F0((__int64)v44, (__int64 *)(*a1 + 8LL), v9, 0xC48u, 0);
    sub_1605D30((__int64)v44, v42);
    sub_15F7200(v44);
LABEL_42:
    v10 &= 0xFFFFFFFFFFFFFE3FLL;
    return sub_1E62D40(*a1, v42[0], v9, v10, 0);
  }
  if ( (_BYTE)v13 == 42 )
    goto LABEL_27;
  v15 = *(_QWORD *)(*a1 + 248LL);
  v16 = *v11;
  if ( *(_BYTE *)(v12 + 16) == 34 )
    goto LABEL_11;
  if ( (_BYTE)v13 != 34 )
    goto LABEL_52;
  v16 = sub_F63050(*v11, a2, v13, v11);
  if ( v16 )
  {
LABEL_11:
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 35;
    if ( (unsigned int)v18 > 1 )
      v17 = sub_F63050(v17, a2, v18, v11);
    v13 = *(unsigned __int8 *)(v17 + 19);
    LOBYTE(v13) = (unsigned __int8)v13 >> 2;
    if ( !(_BYTE)v13 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_16;
    }
  }
  if ( *(_BYTE *)(v12 + 16) == 34 )
  {
    v30 = v12;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      goto LABEL_52;
    v30 = sub_F63050(v12, a2, v13, v11);
    if ( !v30 )
      goto LABEL_52;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v32 = (unsigned int)*(unsigned __int8 *)(v31 + 16) - 35;
  if ( (unsigned int)v32 > 1 )
    v31 = sub_F63050(v31, a2, v32, v11);
  v13 = *(unsigned __int8 *)(v31 + 19);
  LOBYTE(v13) = (unsigned __int8)v13 >> 2;
  if ( (_BYTE)v13 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v33 + 16) == 13 && ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1EA )
      goto LABEL_16;
  }
LABEL_52:
  a2 = v15;
  if ( sub_F61990(v12, v15, v13, (__int64)v11, v6, v7) )
  {
LABEL_16:
    v12 = *(_QWORD *)(v42[0] & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(v13) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_6;
  }
  sub_168B9F0((__int64)v44, (__int64 *)(*a1 + 8LL), v9, 0x130Du, 0);
  sub_1605D30((__int64)v44, v42);
  sub_15F7200(v44);
  return 0;
}
