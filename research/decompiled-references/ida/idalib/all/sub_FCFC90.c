__int64 __fastcall sub_FCFC90(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ebx
  signed int v9; // ebp
  _DWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  char v20; // dl
  _QWORD *v21; // r15
  __int64 *v22; // rdi
  __int64 v23; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // rdx
  _BYTE v26[57]; // [rsp+1h] [rbp-39h] BYREF

  if ( !a1[5] )
    return a1[6];
  v8 = a3 & 0x7FFFFFFF;
  if ( (a3 & 0x7FFFFFFFu) >= *(_DWORD *)(a2 + 476) && v8 < *(_DWORD *)(a2 + 480) )
    v9 = *(_DWORD *)(a2 + 472);
  else
    v9 = sub_101D590(a2);
  v26[0] = 0;
  if ( (unsigned int)(v9 + 1) <= 1 )
    goto LABEL_20;
  if ( v9 >= 0 )
  {
    v10 = (_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL * (unsigned int)v9);
    goto LABEL_9;
  }
  v18 = (unsigned int)(-2 - v9);
  v19 = *(_QWORD *)(*(_QWORD *)(a2 + 320) + 8LL * ((unsigned int)(-2 - v9) >> 6));
  if ( _bittest64(&v19, v18) )
  {
    v21 = (_QWORD *)(*(_QWORD *)(a2 + 272) + 8 * ((unsigned __int64)(int)v18 >> 5));
    if ( *v21 )
    {
      v10 = (_DWORD *)(*v21 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
      goto LABEL_9;
    }
    v22 = (__int64 *)(*(_QWORD *)(a2 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v23 = *v22;
    v22[10] += 768;
    v24 = (_DWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v22[1] >= (unsigned __int64)(v24 + 192) && v23 )
      *v22 = (__int64)(v24 + 192);
    else
      v24 = (_DWORD *)sub_986170((__int64)v22, 768, 768, 3, a5, a6);
    *v21 = v24;
    v25 = v24 + 192;
    do
    {
      *v24 = 0;
      v24 += 6;
      *((_OWORD *)v24 - 1) = 0;
      *((_QWORD *)v24 - 1) = 0;
    }
    while ( v24 != v25 );
    v20 = v26[0];
    v10 = (_DWORD *)(*v21 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
  }
  else
  {
    v10 = (_DWORD *)sub_101F930(a2, (unsigned int)v18, v26);
    v20 = v26[0];
  }
  if ( v20 )
    goto LABEL_20;
LABEL_9:
  if ( !v10 )
  {
LABEL_20:
    v11 = 0;
    v9 = 0;
    goto LABEL_11;
  }
  v11 = v8 - (*v10 & 0x7FFFFFFF);
LABEL_11:
  v12 = sub_FCEE90(a1, a2, v9);
  v13 = *(_QWORD *)(v12 + 16);
  v14 = 16LL * *(unsigned int *)(v12 + 24);
  v15 = v14 >> 4;
  if ( v14 )
  {
    do
    {
      while ( 1 )
      {
        v16 = v15 >> 1;
        v17 = v13 + 16 * (v15 >> 1);
        if ( *(_DWORD *)(v17 + 8) > v11 )
          break;
        v13 = v17 + 16;
        v15 = v15 - v16 - 1;
        if ( v15 <= 0 )
          return *(_QWORD *)(v13 - 16);
      }
      v15 >>= 1;
    }
    while ( v16 );
  }
  return *(_QWORD *)(v13 - 16);
}
