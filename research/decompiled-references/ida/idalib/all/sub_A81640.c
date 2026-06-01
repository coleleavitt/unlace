__int64 __fastcall sub_A81640(__int64 a1, __int64 a2)
{
  __int64 *v3; // r8
  unsigned int *v4; // rbp
  unsigned int *v5; // r15
  int v6; // r10d
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  unsigned int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  _QWORD *v15; // r8
  char v16; // dl
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-90h]
  _QWORD *v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+28h] [rbp-70h]
  char v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+2Ch] [rbp-6Ch]
  char v24; // [rsp+3Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-50h]
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF

  sub_A5D3A0((__int64)&ptr, a2, *(_QWORD *)(a1 + 2312));
  v3 = (__int64 *)ptr;
  v4 = (unsigned int *)((char *)ptr + 4 * v26);
  if ( v4 == ptr )
  {
    result = 0;
    goto LABEL_21;
  }
  v5 = (unsigned int *)ptr;
  while ( 1 )
  {
    v10 = *v5;
    if ( (int)*v5 <= 0 )
      goto LABEL_11;
    v11 = *(_QWORD *)(a1 + 18360);
    if ( v11 && !*(_BYTE *)(a1 + 18464) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11);
      *(_BYTE *)(a1 + 18464) = 1;
    }
    if ( (unsigned __int8)sub_ED1E40(a1 + 18384) )
      goto LABEL_11;
    v12 = *(_QWORD *)(a1 + 2312);
    if ( v10 >= *(_DWORD *)(v12 + 476) && v10 < *(_DWORD *)(v12 + 480) )
      v6 = *(_DWORD *)(v12 + 472);
    else
      v6 = sub_101D590(*(_QWORD *)(a1 + 2312));
    v24 = 0;
    if ( (unsigned int)(v6 + 1) <= 1 )
      goto LABEL_11;
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)(v12 + 184) + 24LL * (unsigned int)v6;
      goto LABEL_7;
    }
    v13 = (unsigned int)(-2 - v6);
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 320) + 8LL * ((unsigned int)(-2 - v6) >> 6));
    if ( !_bittest64(&v14, v13) )
    {
      v21 = v6;
      v7 = sub_101F930(v12, (unsigned int)v13, &v24);
      v16 = v24;
      v6 = v21;
      goto LABEL_28;
    }
    v15 = (_QWORD *)(*(_QWORD *)(v12 + 272) + 8 * ((unsigned __int64)(int)v13 >> 5));
    if ( *v15 )
      break;
    v23 = v6;
    v20 = (_QWORD *)(*(_QWORD *)(v12 + 272) + 8 * ((unsigned __int64)(int)v13 >> 5));
    v22 = -2 - v6;
    v17 = (_DWORD *)sub_A794A0((__int64 *)(*(_QWORD *)(v12 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    v6 = v23;
    v18 = v17 + 192;
    *v20 = v17;
    do
    {
      *v17 = 0;
      v17 += 6;
      *((_OWORD *)v17 - 1) = 0;
      *((_QWORD *)v17 - 1) = 0;
    }
    while ( v17 != v18 );
    v16 = v24;
    v7 = *v20 + 24LL * (v22 & 0x1F);
LABEL_28:
    if ( !v16 )
      goto LABEL_7;
LABEL_11:
    if ( v4 == ++v5 )
    {
      v3 = (__int64 *)ptr;
      result = 0;
      goto LABEL_21;
    }
  }
  v7 = *v15 + 24LL * ((-2 - (_BYTE)v6) & 0x1F);
LABEL_7:
  if ( !v7 )
    goto LABEL_11;
  v8 = (_QWORD *)sub_ED2B70(a1 + 18384, (unsigned int)v6);
  if ( !v8 )
    goto LABEL_11;
  if ( !v8[5] )
    goto LABEL_11;
  result = sub_A812E0(a1, a2, v10, v8);
  if ( !result )
    goto LABEL_11;
  v3 = (__int64 *)ptr;
LABEL_21:
  if ( v3 != &v27 )
  {
    v19 = result;
    free(v3);
    return v19;
  }
  return result;
}
