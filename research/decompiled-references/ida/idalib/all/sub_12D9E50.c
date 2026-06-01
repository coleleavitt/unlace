__int64 __fastcall sub_12D9E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  int v7; // r12d
  int v9; // rbx^4
  _QWORD *v10; // rdi
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // r15
  __int64 *v18; // rdi
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+14h] [rbp-44h] BYREF
  unsigned int v25; // [rsp+1Ch] [rbp-3Ch]

  v6 = a4;
  v7 = HIDWORD(a2);
  v9 = HIDWORD(a3);
  v10 = *(_QWORD **)a1;
  LOBYTE(v24) = 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    goto LABEL_9;
  if ( (int)a2 >= 0 )
  {
    v11 = v10[23] + 24LL * (unsigned int)a2;
    goto LABEL_4;
  }
  v15 = (unsigned int)(-2 - a2);
  v16 = *(_QWORD *)(v10[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
  if ( _bittest64(&v16, v15) )
  {
    v17 = (_QWORD *)(v10[34] + 8 * ((unsigned __int64)(int)v15 >> 5));
    if ( *v17 )
    {
      v11 = *v17 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
      goto LABEL_4;
    }
    v18 = (__int64 *)(v10[36] & 0xFFFFFFFFFFFFFFF8LL);
    v19 = *v18;
    v18[10] += 768;
    v20 = (_DWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v18[1] >= (unsigned __int64)(v20 + 192) && v19 )
    {
      *v18 = (__int64)(v20 + 192);
    }
    else
    {
      v23 = v6;
      v20 = (_DWORD *)sub_986170((__int64)v18, 768, 768, 3, v6, a6);
      v6 = v23;
    }
    *v17 = v20;
    v21 = v20 + 192;
    do
    {
      *v20 = 0;
      v20 += 6;
      *((_OWORD *)v20 - 1) = 0;
      *((_QWORD *)v20 - 1) = 0;
    }
    while ( v20 != v21 );
    v10 = *(_QWORD **)a1;
    v12 = v24;
    v11 = *v17 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
  }
  else
  {
    v11 = sub_101F930((__int64)v10, v15, &v24);
    v10 = *(_QWORD **)a1;
    v12 = v24;
    v6 = a4;
  }
  if ( v12 )
    goto LABEL_9;
LABEL_4:
  if ( v11 )
  {
    if ( *(char *)(v11 + 3) >= 0 )
    {
      LODWORD(v11) = *(_DWORD *)v11 & 0x7FFFFFFF;
      v7 = v11 + HIDWORD(a2);
      goto LABEL_10;
    }
LABEL_9:
    LODWORD(v11) = 0;
  }
LABEL_10:
  LODWORD(v24) = v7;
  v13 = *(_QWORD *)(a1 + 8);
  LOBYTE(v25) = 0;
  HIDWORD(v24) = v9 + v11;
  return sub_13DD220(v24, v25, v10, v13, v6);
}
