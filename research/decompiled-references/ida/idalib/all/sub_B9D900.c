__int64 __fastcall sub_B9D900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 *v28; // rbp
  __int64 *v29; // r14
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 *i; // r13
  char *v39; // rcx
  char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-90h]
  char *v44; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v46; // [rsp+38h] [rbp-60h]
  _BYTE v47[88]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a2 + 104);
  ptr = v47;
  v46 = 0x400000000LL;
  sub_7052B0((__int64 *)(v7 + 96), v7, a3, a4, a5, a6);
  v12 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
    v13 = sub_B96980(v12);
  else
    v13 = *(_QWORD *)(v12 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v8, v9, v10, v11);
  v14 = *(__int64 **)(a2 + 104);
  v42 = v13 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_7052B0(v14 + 12, (__int64)v14, v15, v16, v17, v18);
  v22 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v22 + 24) & 1) != 0 )
    v23 = sub_B96980(v22);
  else
    v23 = *(_QWORD *)(v22 + 24);
  while ( v23 != v42 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(**(_QWORD **)(v23 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v24 + 8) & 0xF) != 0 )
          v24 = sub_F64F00(**(_QWORD **)(v23 + 16));
        v25 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v25 + 16LL) == 48 )
          break;
LABEL_17:
        v23 += 24;
        if ( v23 == v42 )
          goto LABEL_18;
      }
      v14 = (__int64 *)sub_F60F10(*v25, v14, v19, v20, v21);
      v26 = sub_B97A50(a1, (__int64)v14, 0);
      if ( v26 )
        break;
      v26 = sub_B9D900(a1, v14);
      if ( v26 )
        break;
      v23 += 24;
      if ( v23 == v42 )
        goto LABEL_18;
    }
    v20 = ptr;
    v27 = 8LL * (unsigned int)v46;
    v28 = (__int64 *)((char *)ptr + v27);
    if ( ptr != (char *)ptr + v27 )
    {
      v29 = (__int64 *)ptr;
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          if ( v31 == v26 )
            goto LABEL_17;
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
          if ( v30 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31) )
            goto LABEL_17;
        }
        v14 = (__int64 *)v26;
        if ( (unsigned __int8)sub_B95E20(v31, v26) )
          goto LABEL_17;
        if ( v28 == ++v29 )
        {
          v28 = (__int64 *)ptr;
          v27 = 8LL * (unsigned int)v46;
          v34 = (__int64 *)((char *)ptr + v27);
          goto LABEL_29;
        }
      }
    }
    v34 = (__int64 *)((char *)ptr + v27);
LABEL_29:
    v35 = v27 >> 3;
    v36 = v27 >> 5;
    if ( v36 )
    {
      v37 = &v28[4 * v36];
      while ( !(unsigned __int8)sub_B95E20(v26, *v28) )
      {
        if ( (unsigned __int8)sub_B95E20(v26, v28[1]) )
        {
          ++v28;
          break;
        }
        if ( (unsigned __int8)sub_B95E20(v26, v28[2]) )
        {
          v28 += 2;
          break;
        }
        if ( (unsigned __int8)sub_B95E20(v26, v28[3]) )
        {
          v28 += 3;
          break;
        }
        v28 += 4;
        if ( v37 == v28 )
        {
          v35 = v34 - v28;
          goto LABEL_48;
        }
      }
LABEL_36:
      if ( v28 != v34 )
      {
        for ( i = v28 + 1; i != v34; ++i )
        {
          if ( !(unsigned __int8)sub_B95E20(v26, *i) )
            *v28++ = *i;
        }
      }
      goto LABEL_41;
    }
LABEL_48:
    if ( v35 != 2 )
    {
      if ( v35 != 3 )
      {
        if ( v35 != 1 )
          goto LABEL_51;
        goto LABEL_60;
      }
      if ( (unsigned __int8)sub_B95E20(v26, *v28) )
        goto LABEL_36;
      ++v28;
    }
    if ( (unsigned __int8)sub_B95E20(v26, *v28) )
      goto LABEL_36;
    ++v28;
LABEL_60:
    if ( (unsigned __int8)sub_B95E20(v26, *v28) )
      goto LABEL_36;
LABEL_51:
    v28 = v34;
LABEL_41:
    v14 = (__int64 *)ptr;
    v39 = (char *)((_BYTE *)ptr + 8 * (unsigned int)v46 - (_BYTE *)v34);
    if ( (char *)ptr + 8 * (unsigned int)v46 != (char *)v34 )
    {
      v44 = (char *)((_BYTE *)ptr + 8 * (unsigned int)v46 - (_BYTE *)v34);
      memmove(v28, v34, (size_t)v44);
      v14 = (__int64 *)ptr;
      v39 = v44;
    }
    v40 = &v39[(_QWORD)v28];
    v20 = (void *)HIDWORD(v46);
    LODWORD(v46) = (v40 - (char *)v14) >> 3;
    v41 = (unsigned int)v46;
    v19 = (unsigned int)v46 + 1LL;
    if ( v19 > HIDWORD(v46) )
    {
      sub_2237220(&ptr, v47, v19, 8);
      v14 = (__int64 *)ptr;
      v41 = (unsigned int)v46;
    }
    v14[v41] = v26;
    v23 += 24;
    LODWORD(v46) = v46 + 1;
  }
LABEL_18:
  v32 = 0;
  if ( (_DWORD)v46 == 1 )
    v32 = *(_QWORD *)ptr;
  if ( ptr != v47 )
    free(ptr);
  return v32;
}
