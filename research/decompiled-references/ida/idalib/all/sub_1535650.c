__int64 __fastcall sub_1535650(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned int v6; // r13d
  int v7; // r12d
  _DWORD *v8; // rax
  unsigned int v9; // r13d
  const char *v10; // rax
  const char *v11; // rdi
  __int64 v12; // rax
  const char *v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  char v18; // dl
  _QWORD *v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // rcx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  _BYTE v24[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) + 32LL);
  v4 = sub_1021A20(a1, a2, nullptr);
  if ( !v4 || v3 == 1 )
    return v4;
  v6 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFFu) >= *(_DWORD *)(a1 + 476) && v6 < *(_DWORD *)(a1 + 480) )
    v7 = *(_DWORD *)(a1 + 472);
  else
    v7 = sub_101D590(a1, v6);
  v24[0] = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_22;
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v7);
    goto LABEL_9;
  }
  v16 = (unsigned int)(-2 - v7);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( !_bittest64(&v17, v16) )
  {
    v8 = (_DWORD *)sub_101F930(a1, v16, v24);
    v18 = v24[0];
    goto LABEL_21;
  }
  v19 = (_QWORD *)(*(_QWORD *)(a1 + 272) + 8 * ((unsigned __int64)(int)v16 >> 5));
  if ( !*v19 )
  {
    v20 = (__int64 *)(*(_QWORD *)(a1 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v21 = *v20;
    v20[10] += 768;
    v22 = (_DWORD *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v20[1] >= (unsigned __int64)(v22 + 192) && v21 )
    {
      *v20 = (__int64)(v22 + 192);
    }
    else
    {
      v22 = (_DWORD *)sub_986170((__int64)v20, 768, 768, 3, v16, v5);
      LOBYTE(v16) = -2 - v7;
    }
    *v19 = v22;
    v23 = v22 + 192;
    do
    {
      *v22 = 0;
      v22 += 6;
      *((_OWORD *)v22 - 1) = 0;
      *((_QWORD *)v22 - 1) = 0;
    }
    while ( v22 != v23 );
    v18 = v24[0];
    v8 = (_DWORD *)(*v19 + 24 * (v16 & 0x1F));
LABEL_21:
    if ( v18 )
      goto LABEL_22;
    goto LABEL_9;
  }
  v8 = (_DWORD *)(*v19 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
LABEL_9:
  if ( v8 )
  {
    v9 = v6 - (*v8 & 0x7FFFFFFF);
    goto LABEL_11;
  }
LABEL_22:
  v9 = 0;
  v7 = 0;
LABEL_11:
  v10 = sub_10202B0((__int64 *)a1, v7, v24);
  if ( v24[0] )
  {
    return 0;
  }
  else
  {
    v11 = &v10[v9];
    v12 = v4 - 1;
    v13 = &v11[-v12];
    if ( v11 == &v11[-v12] )
    {
      return 1;
    }
    else
    {
      v14 = 0;
      do
      {
        while ( *v13 != 9 )
        {
          ++v13;
          ++v14;
          if ( v11 == v13 )
            return v14 + 1;
        }
        ++v13;
        v14 = v3 + v14 - v14 % v3;
      }
      while ( v11 != v13 );
      return v14 + 1;
    }
  }
}
