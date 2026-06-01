__int64 __fastcall sub_12D67E0(__int64 *a1, int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  __int64 result; // rax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r13d
  int v19; // r14d
  int *v20; // rax
  int v21; // eax
  _DWORD *v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // r13d
  _DWORD *i; // rdi
  unsigned int v26; // r8d
  __int64 v27; // rdi
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  _QWORD *v30; // r8
  char v31; // dl
  __int64 *v32; // rdi
  __int64 v33; // rcx
  _DWORD *v34; // rax
  _DWORD *v35; // rdx
  _QWORD *v36; // [rsp+0h] [rbp-58h]
  int v37[4]; // [rsp+Ch] [rbp-4Ch] BYREF
  char v38[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v37[0] = a2;
  if ( !a2 )
    return 0;
  v5 = a2;
  v8 = *a1;
  if ( a2 < 0 )
  {
    v5 = sub_1021B90(v8, a2);
    v8 = *a1;
  }
  v9 = sub_13DC0F0(v5, v8, a1[1]);
  v10 = (unsigned int)v37[0];
  *a4 = v37[0] + v9;
  if ( (int)v10 < 0 )
    sub_13DBFA0(v10, *a1, a1[1], v37);
  v11 = *a1;
  v12 = sub_1021F00(*a1, v37[0]);
  v37[0] = v12;
  if ( v12 >= 0 )
  {
    if ( !v12 )
      goto LABEL_8;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_13DBFA0((unsigned int)v12, *a1, a1[1], v37) )
    return 0;
  v12 = v37[0];
  if ( v37[0] )
  {
LABEL_11:
    v16 = sub_1021680(v11, v12);
    if ( v16 && v16 != 3 )
      return 0;
  }
LABEL_8:
  v13 = sub_13DC060((unsigned int)v37[0], 0, *a1, a1[1]);
  v37[0] = v13;
  if ( !v13 )
    return 0;
  v17 = v13 & 0x7FFFFFFF;
  v18 = v17;
  if ( v17 < *(_DWORD *)(v11 + 476) || v17 >= *(_DWORD *)(v11 + 480) )
    v19 = sub_101D590(v11, v17);
  else
    v19 = *(_DWORD *)(v11 + 472);
  v38[0] = 0;
  if ( (unsigned int)(v19 + 1) <= 1 )
    return 0;
  if ( v19 >= 0 )
  {
    v20 = (int *)(*(_QWORD *)(v11 + 184) + 24LL * (unsigned int)v19);
    goto LABEL_20;
  }
  v28 = (unsigned int)(-2 - v19);
  v29 = *(_QWORD *)(*(_QWORD *)(v11 + 320) + 8LL * ((unsigned int)(-2 - v19) >> 6));
  if ( _bittest64(&v29, v28) )
  {
    v30 = (_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * ((unsigned __int64)(int)v28 >> 5));
    if ( *v30 )
    {
      v20 = (int *)(*v30 + 24LL * ((-2 - (_BYTE)v19) & 0x1F));
      goto LABEL_20;
    }
    v32 = (__int64 *)(*(_QWORD *)(v11 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v33 = *v32;
    v32[10] += 768;
    v34 = (_DWORD *)((v33 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v32[1] >= (unsigned __int64)(v34 + 192) && v33 )
    {
      *v32 = (__int64)(v34 + 192);
    }
    else
    {
      v36 = v30;
      v34 = (_DWORD *)sub_986170((__int64)v32, 768, 768, 3, (__int64)v30, v14);
      v30 = v36;
    }
    *v30 = v34;
    v35 = v34 + 192;
    do
    {
      *v34 = 0;
      v34 += 6;
      *((_OWORD *)v34 - 1) = 0;
      *((_QWORD *)v34 - 1) = 0;
    }
    while ( v34 != v35 );
    v31 = v38[0];
    v20 = (int *)(*v30 + 24LL * ((-2 - (_BYTE)v19) & 0x1F));
  }
  else
  {
    v20 = (int *)sub_101F930(v11, v28, v38);
    v31 = v38[0];
  }
  if ( v31 )
    return 0;
LABEL_20:
  if ( !v20 )
    return 0;
  v21 = *v20;
  v22 = (_DWORD *)a1[5];
  *(_DWORD *)a3 = v19;
  v23 = (unsigned int)v37[0];
  v24 = v18 - (v21 & 0x7FFFFFFF);
  *(_DWORD *)(a3 + 4) = v24;
  for ( i = &v22[14 * *((unsigned int *)a1 + 12)]; i != v22; v22 += 14 )
  {
    if ( *v22 == 2 && v19 == v22[7] )
    {
      v26 = v22[8];
      if ( v24 > v26 && v24 < v22[11] + v26 )
        return 0;
    }
  }
  v27 = a1[3];
  result = 1;
  if ( v27 )
    return sub_12D96F0(v27, v23, *(_QWORD *)a3);
  return result;
}
