__int64 __fastcall sub_CB96C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // rdi
  char v11; // al
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // ebp
  __int64 v19; // r8
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rdi
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // r15
  unsigned int v38; // ebp
  __int64 v39; // r8
  unsigned int v40; // r12d
  unsigned int v41; // eax
  int v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  _QWORD v44[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = sub_CE6180(*(_QWORD *)(a1 + 1264), v3);
  v8 = HIDWORD(v4);
  if ( BYTE4(v4) )
    return (unsigned int)sub_CB6350(a1, (unsigned int)v4, v3, a2, v7);
  v9 = HIDWORD(v4);
  v10 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v11 == 48 )
  {
    v21 = sub_F63240(v10, v3, v5, v6, v7);
    v23 = v21;
    if ( *(char *)(v21 + 28) < 0 )
      return v9;
    if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 59 > 2 )
      goto LABEL_33;
    v24 = *(_QWORD *)(v21 + 104);
    v25 = *(_QWORD *)(v24 + 96);
    v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v25 & 1) == 0 )
    {
      v27 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v25 & 2) == 0 )
          goto LABEL_32;
        v28 = v27[2295];
        v29 = v24 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v28 )
        {
          v30 = v27[294];
          v27[304] += 24LL;
          v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v27[295] >= v31 + 24 && v30 )
          {
            v27[294] = v31 + 24;
            v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v43 = v28;
            v32 = sub_986170((__int64)(v27 + 294), 24, 24, 3, v28, v22);
            v28 = v43;
            v31 = v32 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v32 = v28;
          v29 = v31 | 4;
          *(_DWORD *)(v32 + 8) = 0;
          *(_QWORD *)(v32 + 16) = v24;
        }
        v26 = v29 & 0xFFFFFFFFFFFFFFFELL;
        v25 = v26 | 1;
        *(_QWORD *)(v24 + 96) = v26 | 1;
      }
    }
    if ( v26 )
    {
      if ( (v26 & 4) != 0 )
      {
        v33 = (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v33 )
        {
          v34 = *(_QWORD *)v33;
          v35 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
          if ( v33[2] != v35 )
          {
            v33[2] = v35;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, v24);
          }
        }
      }
    }
LABEL_32:
    if ( *(_DWORD *)(*(_QWORD *)(v23 + 128) + 20LL) )
      return v9;
LABEL_33:
    v36 = sub_CB4AE0(a1, v3);
    if ( v36 )
      return (unsigned int)sub_CB6A10(a1, v36, a2);
    return v9;
  }
  if ( v11 == 5 )
    return 1;
  if ( (unsigned __int8)(v11 - 2) <= 4u )
    return (unsigned int)sub_CB6760(a1, v3, a2);
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 14 )
  {
    v13 = sub_CAEAD0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v3, v5, v6);
    if ( !v13 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
      if ( (unsigned int)v16 > 1 )
      {
        v15 = sub_CAEB00(v15, v3, v16, v14);
        if ( !v15 )
          return v9;
      }
      v17 = *(_QWORD *)(v15 + 32);
      v18 = 0;
      v42 = *(_DWORD *)(v15 + 20);
      v20 = sub_CB4CA0(a1, v17);
      if ( v42 )
      {
        while ( (unsigned __int8)sub_CB6350(a1, v20, v17, a2, v19) )
        {
          v44[0] = a2 | 4;
          if ( !(unsigned __int8)sub_D19550(a1, v20, v18, v44) )
            break;
          if ( ++v18 == v42 )
            return 1;
        }
        return v9;
      }
      return 1;
    }
  }
  v37 = *(_QWORD *)(v13 + 32);
  v38 = 0;
  v40 = sub_CB4CA0(a1, v37);
  while ( (unsigned __int8)sub_CB6350(a1, v40, v37, a2, v39) )
  {
    v44[0] = a2 | 4;
    v41 = sub_D19550(a1, v40, v38, v44);
    if ( !(_BYTE)v41 )
      break;
    if ( v38 == 1 )
      return v41;
    v38 = 1;
  }
  return (unsigned int)v8;
}
