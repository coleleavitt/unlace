__int64 __fastcall sub_7AB500(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rbp
  __int64 *v14; // r15
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v19; // rax
  __int64 *v20; // r14
  __int64 *v21; // r13
  __int64 *i; // r13
  char *v23; // rcx
  char *v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-88h]
  char *v30; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h]
  _BYTE v33[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  ptr = v33;
  v32 = 0x400000000LL;
  sub_6E77B0((unsigned __int64 *)(v3 + 96), v3);
  v4 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
    v5 = sub_7A2E20(v4);
  else
    v5 = *(_QWORD *)(v4 + 24);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
  v6 = *(_QWORD *)(a2 + 104);
  v28 = v5 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  sub_6E77B0((unsigned __int64 *)(v6 + 96), v6);
  v7 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v7 + 24) & 1) != 0 )
    v8 = sub_7A2E20(v7);
  else
    v8 = *(_QWORD *)(v7 + 24);
  if ( v28 != v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(**(_QWORD **)(v8 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          v10 = *(_QWORD *)(v9 + 8);
          if ( (v10 & 7) != 0 || (v10 & 8) != 0 )
            v9 = sub_B0CF30(**(_QWORD **)(v8 + 16), v6);
          v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v11 + 16LL) == 47 )
            break;
LABEL_18:
          v8 += 24;
          if ( v8 == v28 )
            goto LABEL_19;
        }
        v6 = sub_B14A40(*v11);
        v12 = sub_7A4F50(a1, v6, 0);
        if ( v12 )
          break;
        v12 = sub_7AB500(a1, v6);
        if ( v12 )
          break;
        v8 += 24;
        if ( v8 == v28 )
          goto LABEL_19;
      }
      v13 = (__int64 *)((char *)ptr + 8 * (unsigned int)v32);
      if ( ptr != v13 )
        break;
      v23 = (char *)ptr + 8 * (unsigned int)v32;
      v24 = nullptr;
LABEL_43:
      v6 = HIDWORD(v32);
      LODWORD(v32) = (&v24[(_QWORD)v13] - v23) >> 3;
      v25 = (unsigned int)v32;
      v26 = (unsigned int)v32 + 1LL;
      if ( HIDWORD(v32) < v26 )
      {
        v6 = (__int64)v33;
        sub_25D6060(&ptr, v33, v26, 8);
        v23 = (char *)ptr;
        v25 = (unsigned int)v32;
      }
      *(_QWORD *)&v23[8 * v25] = v12;
      v8 += 24;
      LODWORD(v32) = v32 + 1;
      if ( v8 == v28 )
        goto LABEL_19;
    }
    v14 = (__int64 *)ptr;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        if ( v16 == v12 )
          goto LABEL_18;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
        if ( v15 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16) )
          goto LABEL_18;
      }
      v6 = v12;
      if ( (unsigned __int8)sub_7A1D40(v16, v12) )
        goto LABEL_18;
      ++v14;
    }
    while ( v13 != v14 );
    v13 = (__int64 *)ptr;
    v19 = 8LL * (unsigned int)v32;
    v20 = (__int64 *)((char *)ptr + v19);
    if ( v19 >> 5 )
    {
      v21 = (__int64 *)((char *)ptr + 32 * (v19 >> 5));
      while ( !(unsigned __int8)sub_7A1D40(v12, *v13) )
      {
        if ( (unsigned __int8)sub_7A1D40(v12, v13[1]) )
        {
          ++v13;
          goto LABEL_36;
        }
        if ( (unsigned __int8)sub_7A1D40(v12, v13[2]) )
        {
          v13 += 2;
          goto LABEL_36;
        }
        if ( (unsigned __int8)sub_7A1D40(v12, v13[3]) )
        {
          v13 += 3;
          goto LABEL_36;
        }
        v13 += 4;
        if ( v13 == v21 )
        {
          v27 = (char *)v20 - (char *)v13;
          if ( (char *)v20 - (char *)v13 == 16 )
            goto LABEL_57;
          if ( v27 == 24 )
            goto LABEL_55;
          if ( v27 == 8 )
            goto LABEL_59;
          goto LABEL_53;
        }
      }
      goto LABEL_36;
    }
    if ( v19 != 16 )
    {
      if ( v19 != 24 )
      {
        if ( v19 != 8 )
        {
          v23 = (char *)ptr;
          v24 = nullptr;
          v13 = (__int64 *)((char *)ptr + v19);
          goto LABEL_43;
        }
LABEL_59:
        if ( !(unsigned __int8)sub_7A1D40(v12, *v13) )
        {
LABEL_53:
          v13 = v20;
LABEL_41:
          v23 = (char *)ptr;
          v24 = (char *)((_BYTE *)ptr + 8 * (unsigned int)v32 - (_BYTE *)v20);
          if ( (__int64)v24 <= 8 )
          {
            if ( v24 == byte_8 )
            {
              *v13 = *v20;
              v23 = (char *)ptr;
            }
          }
          else
          {
            v30 = (char *)((_BYTE *)ptr + 8 * (unsigned int)v32 - (_BYTE *)v20);
            memmove(v13, v20, (size_t)v24);
            v23 = (char *)ptr;
            v24 = v30;
          }
          goto LABEL_43;
        }
LABEL_36:
        if ( v13 != v20 )
        {
          for ( i = v13 + 1; i != v20; ++i )
          {
            if ( !(unsigned __int8)sub_7A1D40(v12, *i) )
              *v13++ = *i;
          }
        }
        goto LABEL_41;
      }
LABEL_55:
      if ( (unsigned __int8)sub_7A1D40(v12, *v13) )
        goto LABEL_36;
      ++v13;
    }
LABEL_57:
    if ( (unsigned __int8)sub_7A1D40(v12, *v13) )
      goto LABEL_36;
    ++v13;
    goto LABEL_59;
  }
LABEL_19:
  v17 = 0;
  if ( (_DWORD)v32 == 1 )
    v17 = *(_QWORD *)ptr;
  if ( ptr != v33 )
    free(ptr);
  return v17;
}

