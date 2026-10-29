__int64 __fastcall sub_100E000(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // r13
  unsigned __int64 v6; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // r13
  unsigned int v11; // ebp
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // r15
  char v16; // dl
  __int64 *v17; // rdi
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v22; // [rsp+8h] [rbp-70h]
  _QWORD v23[13]; // [rsp+10h] [rbp-68h] BYREF

  v21 = a1;
  v22 = a2;
  v2 = sub_101B6F0(&v21);
  v5 = v22;
  LOBYTE(v23[0]) = 0;
  v6 = HIDWORD(v2);
  v7 = HIDWORD(v2);
  if ( (unsigned int)(v2 + 1) <= 1 )
    goto LABEL_7;
  if ( (v2 & 0x80000000) != 0LL )
  {
    v13 = (unsigned int)(-2 - v2);
    v14 = *(_QWORD *)(v22[40] + 8LL * ((unsigned int)(-2 - v2) >> 6));
    if ( _bittest64(&v14, v13) )
    {
      v15 = (_QWORD *)(v22[34] + 8 * ((unsigned __int64)(int)v13 >> 5));
      if ( *v15 )
      {
        v8 = *v15 + 24 * (v13 & 0x1F);
        goto LABEL_4;
      }
      v17 = (__int64 *)(v22[36] & 0xFFFFFFFFFFFFFFF8LL);
      v18 = *v17;
      v17[10] += 768;
      v19 = (_DWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v17[1] >= (unsigned __int64)(v19 + 192) && v18 )
        *v17 = (__int64)(v19 + 192);
      else
        v19 = (_DWORD *)sub_986170((__int64)v17, 768, 768, 3, v3, v4);
      *v15 = v19;
      v20 = v19 + 192;
      do
      {
        *v19 = 0;
        v19 += 6;
        *((_OWORD *)v19 - 1) = 0;
        *((_QWORD *)v19 - 1) = 0;
      }
      while ( v19 != v20 );
      v16 = v23[0];
      v8 = *v15 + 24 * (v13 & 0x1F);
    }
    else
    {
      v8 = sub_101F930(v22, (unsigned int)v13, v23);
      v16 = v23[0];
    }
    if ( v16 )
      goto LABEL_7;
    goto LABEL_4;
  }
  v8 = v22[23] + 24LL * (unsigned int)v2;
LABEL_4:
  if ( v8 && *(char *)(v8 + 3) >= 0 )
    sub_101D9A0(v23, *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL, v5[1], v5[2], 0);
LABEL_7:
  v9 = v6 + 1 - sub_101B470(&v21, 0);
  if ( (unsigned int)v6 <= v9 )
  {
    return 1;
  }
  else
  {
    v10 = v23[0];
    v11 = 1;
    do
    {
      ++v11;
      v9 += sub_2218990(*(unsigned __int8 *)(v10 + v9));
    }
    while ( v7 > v9 );
  }
  return v11;
}
