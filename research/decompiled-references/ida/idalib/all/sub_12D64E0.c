__int64 __fastcall sub_12D64E0(__int64 *a1, int a2, __int64 a3)
{
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // r14d
  int *v11; // rax
  int v12; // eax
  _DWORD *v13; // rcx
  __int64 v14; // rsi
  unsigned int v15; // ebx
  _DWORD *i; // rdi
  unsigned int v17; // r8d
  __int64 result; // rax
  int v19; // eax
  __int64 v20; // rdi
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // r8
  char v24; // dl
  __int64 *v25; // rdi
  __int64 v26; // rcx
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  _QWORD *v29; // [rsp+0h] [rbp-58h]
  int v30[4]; // [rsp+Ch] [rbp-4Ch] BYREF
  char v31[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v30[0] = a2;
  if ( !a2 )
    return 0;
  v5 = *a1;
  if ( a2 < 0 )
  {
    sub_13D1460((unsigned int)a2, *a1, a1[1], v30);
    v5 = *a1;
  }
  v6 = sub_1021F00(v5, v30[0]);
  v30[0] = v6;
  if ( v6 >= 0 )
  {
    if ( !v6 )
      goto LABEL_6;
LABEL_22:
    v19 = sub_1021680(v5, v6);
    if ( v19 && v19 != 3 )
      return 0;
    v8 = v30[0] & 0x7FFFFFFF;
    v9 = v30[0] & 0x7FFFFFFF;
    if ( (v30[0] & 0x7FFFFFFFu) < *(_DWORD *)(v5 + 476) )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)sub_13D1460((unsigned int)v6, *a1, a1[1], v30) )
    return 0;
  v6 = v30[0];
  if ( v30[0] )
    goto LABEL_22;
LABEL_6:
  v8 = v6 & 0x7FFFFFFF;
  v9 = v8;
  if ( v8 < *(_DWORD *)(v5 + 476) )
  {
LABEL_8:
    v10 = sub_101D590(v5, v9);
    goto LABEL_9;
  }
LABEL_7:
  if ( v8 >= *(_DWORD *)(v5 + 480) )
    goto LABEL_8;
  v10 = *(_DWORD *)(v5 + 472);
LABEL_9:
  v31[0] = 0;
  if ( (unsigned int)(v10 + 1) <= 1 )
    return 0;
  if ( v10 >= 0 )
  {
    v11 = (int *)(*(_QWORD *)(v5 + 184) + 24LL * (unsigned int)v10);
    goto LABEL_12;
  }
  v21 = (unsigned int)(-2 - v10);
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
  if ( _bittest64(&v22, v21) )
  {
    v23 = (_QWORD *)(*(_QWORD *)(v5 + 272) + 8 * ((unsigned __int64)(int)v21 >> 5));
    if ( *v23 )
    {
      v11 = (int *)(*v23 + 24LL * ((-2 - (_BYTE)v10) & 0x1F));
      goto LABEL_12;
    }
    v25 = (__int64 *)(*(_QWORD *)(v5 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v26 = *v25;
    v25[10] += 768;
    v27 = (_DWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v25[1] >= (unsigned __int64)(v27 + 192) && v26 )
    {
      *v25 = (__int64)(v27 + 192);
    }
    else
    {
      v29 = v23;
      v27 = (_DWORD *)sub_986170((__int64)v25, 768, 768, 3, (__int64)v23, v7);
      v23 = v29;
    }
    *v23 = v27;
    v28 = v27 + 192;
    do
    {
      *v27 = 0;
      v27 += 6;
      *((_OWORD *)v27 - 1) = 0;
      *((_QWORD *)v27 - 1) = 0;
    }
    while ( v27 != v28 );
    v24 = v31[0];
    v11 = (int *)(*v23 + 24LL * ((-2 - (_BYTE)v10) & 0x1F));
  }
  else
  {
    v11 = (int *)sub_101F930(v5, v21, v31);
    v24 = v31[0];
  }
  if ( v24 )
    return 0;
LABEL_12:
  if ( !v11 )
    return 0;
  v12 = *v11;
  v13 = (_DWORD *)a1[5];
  *(_DWORD *)a3 = v10;
  v14 = (unsigned int)v30[0];
  v15 = v9 - (v12 & 0x7FFFFFFF);
  *(_DWORD *)(a3 + 4) = v15;
  for ( i = &v13[14 * *((unsigned int *)a1 + 12)]; i != v13; v13 += 14 )
  {
    if ( *v13 == 2 && v10 == v13[7] )
    {
      v17 = v13[8];
      if ( v15 > v17 && v15 < v13[11] + v17 )
        return 0;
    }
  }
  v20 = a1[3];
  result = 1;
  if ( v20 )
    return sub_12D96F0(v20, v14, *(_QWORD *)a3);
  return result;
}
