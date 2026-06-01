__int64 __fastcall sub_CAC970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbp
  unsigned int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // r15d
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // [rsp+0h] [rbp-168h]
  __int64 v36; // [rsp+0h] [rbp-168h]
  unsigned int v37; // [rsp+0h] [rbp-168h]
  unsigned int v38; // [rsp+8h] [rbp-160h]
  __int64 v39; // [rsp+8h] [rbp-160h]
  void *v40[2]; // [rsp+10h] [rbp-158h] BYREF
  _BYTE v41[64]; // [rsp+20h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v43[248]; // [rsp+70h] [rbp-F8h] BYREF

  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v6 = *(_QWORD *)(v6 + 40);
  if ( *(_BYTE *)(a1 + 586) )
    return (unsigned int)sub_CA89D0(a1, v6, a3, a4, a5);
  v7 = *(unsigned __int8 *)(a1 + 584);
  if ( (_BYTE)v7 )
    return (unsigned int)sub_CA37C0(a1, v6, a3, a4, a5);
  v8 = sub_C8D6A0(a1, v6);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = v8;
  v11 = HIDWORD(v8);
  if ( (v9 & 4) != 0 && (unsigned int)sub_B75F80(v9 & 0xFFFFFFFFFFFFFFF8LL) == 3 )
  {
    v18 = sub_E0AD60(*(_QWORD *)(a1 + 496), a2);
    if ( BYTE4(v18) )
    {
      v19 = *(_QWORD *)(a2 + 16);
      v20 = 0;
      if ( v19 && (v19 & 4) != 0 )
        v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_BYTE)v11 )
      {
        v38 = v18;
        v36 = v20;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
        {
          ptr[0] = (void *)(a2 | 4);
          if ( (unsigned __int8)sub_C85D40((_QWORD *)a1, v10, v38, v36, (__int64 *)ptr) )
          {
            ptr[0] = (void *)(a2 | 4);
            return (unsigned int)sub_C80E30(a1, v38, (__int64 *)ptr);
          }
        }
      }
      else
      {
        v37 = v18;
        v39 = v20;
        if ( (unsigned __int8)sub_C8F7B0((_QWORD *)a1, v6) )
        {
          ptr[0] = (void *)(a2 | 4);
          if ( (unsigned __int8)sub_C80E30(a1, v37, (__int64 *)ptr) )
          {
            if ( (unsigned __int8)sub_C9FC20(a1, v6, v32, v33, v34) )
            {
              ptr[0] = (void *)(a2 | 4);
              return (unsigned int)sub_C85E60((_QWORD *)a1, v39, (__int64 *)ptr);
            }
          }
        }
      }
    }
    return v7;
  }
  if ( (_BYTE)v11 )
  {
    v12 = *(_QWORD *)(v6 + 8);
    v13 = 1;
    if ( (v12 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a2 + 16);
      v15 = 0;
      if ( (v14 & 4) == 0 )
      {
LABEL_10:
        ptr[0] = (void *)(a2 | 2);
        v35 = sub_C9B2B0(a1, (__int64 *)ptr, v10, v13, v15, 1, 0);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
        {
          ptr[0] = (void *)(a2 | 4);
          if ( (unsigned __int8)sub_C81650(a1, v10, v35, (__int64 *)ptr) )
          {
            ptr[0] = (void *)(a2 | 4);
            return (unsigned int)sub_C80E60(a1, v35, (__int64 *)ptr);
          }
        }
        return v7;
      }
    }
    else
    {
      v15 = 0;
      v17 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
      v14 = *(_QWORD *)(a2 + 16);
      v13 = v17 & 1;
      if ( (v14 & 4) == 0 )
        goto LABEL_10;
    }
    v15 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_C8F7B0((_QWORD *)a1, v6) )
  {
    v22 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v22 = *(_QWORD *)(v22 + 40);
    v40[0] = v41;
    ptr[0] = v43;
    v40[1] = (void *)0x800000000LL;
    ptr[1] = (void *)0x800000000LL;
    v23 = sub_BD34A0(v22, (unsigned __int64)v40, (__int64)ptr, (unsigned __int64)v43, v21);
    if ( ptr[0] != v43 )
      free(ptr[0]);
    if ( v40[0] != v41 )
      free(v40[0]);
    v24 = *(_QWORD *)(a2 + 16);
    v25 = 0;
    if ( (v24 & 4) != 0 )
      v25 = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    v26 = *(_QWORD *)(v23 + 8);
    ptr[0] = (void *)(a2 | 2);
    v27 = sub_C986D0(a1, (__int64 *)ptr, v26, v25, 1, 0);
    v28 = v27;
    v7 = HIDWORD(v27);
    if ( BYTE4(v27) )
    {
      sub_C8AF10(a1 + 600, 2, (unsigned int)v27);
      ptr[0] = (void *)(a2 | 4);
      v7 = sub_C80E60(a1, v28, (__int64 *)ptr);
      if ( (_BYTE)v7 )
      {
        v7 = sub_C9FC20(a1, v6, v29, v30, v31);
        if ( (_BYTE)v7 )
        {
          ptr[0] = (void *)(a2 | 4);
          v7 = sub_C7D470(a1, (__int64 *)ptr);
        }
      }
      --*(_DWORD *)(a1 + 608);
    }
  }
  return v7;
}

