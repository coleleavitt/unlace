__int64 *__fastcall sub_1F54330(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  int v11; // eax
  __int64 (__fastcall *v12)(_QWORD *); // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  char *v17; // rdx
  __int64 v18; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD **)(a3 + 48);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  v10 = sub_B88050(v7);
  v11 = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( (unsigned int)(v11 - 59) <= 2 )
  {
    v12 = *(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL);
    if ( (char *)v12 == (char *)sub_A01140 )
      v16 = sub_B70A60((__int64)v6);
    else
      v16 = v12(v6);
    v17 = *(char **)(v5 + 128);
    v18 = *(_QWORD *)(v16 + 128);
    if ( !v17 )
      goto LABEL_7;
    if ( v18 )
    {
      sub_1F3F870(a1, v16, v17, v13, v14, v15);
      v18 = *(_QWORD *)(v16 + 128);
LABEL_7:
      *(_QWORD *)(v5 + 128) = v18;
      if ( !a4 )
        v10 = 0;
      return sub_1F3D930(a1, (unsigned __int64 *)(v5 + 96), (__int64)v6, v10);
    }
    *(_QWORD *)(v16 + 128) = v17;
    v20 = *a1;
    if ( !*(_BYTE *)(*a1 + 4028) )
      goto LABEL_21;
    v21 = *(_QWORD **)(v20 + 4008);
    v22 = *(unsigned int *)(v20 + 4020);
    v23 = &v21[v22];
    if ( v21 != v23 )
    {
      v24 = *(_QWORD **)(v20 + 4008);
      if ( v5 == *v21 )
        goto LABEL_35;
      do
      {
        if ( v23 == ++v24 )
          break;
      }
      while ( v5 != *v24 );
    }
    if ( (unsigned int)v22 < *(_DWORD *)(v20 + 4016) )
    {
      *(_DWORD *)(v20 + 4020) = v22 + 1;
      *v23 = v5;
      v21 = *(_QWORD **)(v20 + 4008);
      v24 = &v21[v22];
    }
    else
    {
LABEL_21:
      v28 = *a1;
      v24 = (_QWORD *)sub_2236760(v20 + 4008, v5);
      v20 = v28;
      v21 = *(_QWORD **)(v28 + 4008);
      if ( !*(_BYTE *)(v28 + 4028) )
      {
        v25 = &v21[*(unsigned int *)(v28 + 4016)];
        goto LABEL_23;
      }
    }
LABEL_35:
    v25 = &v21[*(unsigned int *)(v20 + 4020)];
LABEL_23:
    if ( v24 != v25 && *v24 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v26 = v24 + 1;
      do
      {
        v27 = v26;
        if ( v26 == v25 )
          break;
        ++v26;
      }
      while ( *v27 >= 0xFFFFFFFFFFFFFFFELL );
    }
    v18 = *(_QWORD *)(v16 + 128);
    goto LABEL_7;
  }
  if ( (unsigned int)(v11 - 34) > 5 )
  {
    if ( (unsigned int)(v11 - 40) > 6 )
    {
      if ( !a4 )
        v10 = 0;
      return sub_1F3D810(a1, v5 + 64, v6, v10, v8, v9);
    }
    else
    {
      if ( !a4 )
        v10 = 0;
      return sub_1F3D610(a1, (unsigned __int64 *)(v5 + 72), (__int64)v6, v10);
    }
  }
  else
  {
    if ( !a4 )
      v10 = 0;
    return sub_1F3D710(a1, (unsigned __int64 *)(v5 + 104), (__int64)v6, v10);
  }
}
