__int64 __fastcall sub_1460430(__int64 a1, int a2, unsigned int a3)
{
  int v4; // ebx
  __int64 v5; // r15
  unsigned int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rbx
  char v10; // dl
  const char *v11; // rax
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r8
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  _QWORD *v19; // [rsp+8h] [rbp-50h]
  char v20; // [rsp+17h] [rbp-41h] BYREF
  _BYTE v21[64]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 88);
  if ( a2 < 0 )
    v4 = sub_1021B90(*(_QWORD *)(a1 + 88), a2);
  v6 = v4 & 0x7FFFFFFF;
  if ( v6 >= *(_DWORD *)(v5 + 476) && v6 < *(_DWORD *)(v5 + 480) )
    v7 = *(_DWORD *)(v5 + 472);
  else
    v7 = sub_101D590(v5, v6);
  v21[0] = 0;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_13;
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(*(_QWORD *)(v5 + 184) + 24LL * (unsigned int)v7);
    goto LABEL_9;
  }
  v14 = (unsigned int)(-2 - v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 320) + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( !_bittest64(&v15, v14) )
  {
    v8 = (_DWORD *)sub_101F930(v5, v14, v21);
    v10 = v21[0];
    goto LABEL_12;
  }
  v16 = (_QWORD *)(*(_QWORD *)(v5 + 272) + 8 * ((unsigned __int64)(int)v14 >> 5));
  if ( !*v16 )
  {
    v19 = (_QWORD *)(*(_QWORD *)(v5 + 272) + 8 * ((unsigned __int64)(int)v14 >> 5));
    v17 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v5 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    v18 = v17 + 192;
    *v19 = v17;
    do
    {
      *v17 = 0;
      v17 += 6;
      *((_OWORD *)v17 - 1) = 0;
      *((_QWORD *)v17 - 1) = 0;
    }
    while ( v17 != v18 );
    v10 = v21[0];
    v8 = (_DWORD *)(*v19 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
LABEL_12:
    if ( v10 )
      goto LABEL_13;
    goto LABEL_9;
  }
  v8 = (_DWORD *)(*v16 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
LABEL_9:
  if ( v8 )
  {
    v9 = v6 - (*v8 & 0x7FFFFFFF);
    goto LABEL_14;
  }
LABEL_13:
  v9 = 0;
  v7 = 0;
LABEL_14:
  v20 = 0;
  v11 = sub_10202B0((__int64 *)v5, v7, &v20);
  if ( v20 )
    return 0;
  v13 = sub_1466280(*(_QWORD *)(a1 + 96), &v11[v9], a3, v21);
  return sub_1020960(v5, v13, a2, a2 + a3);
}
