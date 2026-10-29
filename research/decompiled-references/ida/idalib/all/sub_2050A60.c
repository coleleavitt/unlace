void __fastcall sub_2050A60(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  _BYTE *v4; // rax
  __int64 v5; // rbp
  _WORD *v6; // rdx
  _BYTE *v7; // rax
  __int64 i; // rbx
  __int64 v9; // rbp
  _WORD *v10; // rdx
  _BYTE *v11; // rax
  _WORD *v12; // rdx
  _BYTE *v13; // rax
  void *v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-50h]
  void *v16; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  v3 = *a1 + 32LL * *((unsigned int *)a1 + 2);
  if ( *a1 == v3 )
    return;
  v15 = *(_DWORD *)(v2 + 8);
  if ( v15 <= 0x40 )
  {
    v14 = *(void **)v2;
    v17 = *(_DWORD *)(v2 + 24);
    if ( v17 <= 0x40 )
      goto LABEL_4;
LABEL_40:
    sub_2205510(&v16);
    v4 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v4 )
      goto LABEL_5;
LABEL_41:
    *v4 = 40;
    v5 = a2;
    ++*(_QWORD *)(a2 + 32);
    goto LABEL_6;
  }
  sub_2205510(&v14);
  v17 = *(_DWORD *)(v2 + 24);
  if ( v17 > 0x40 )
    goto LABEL_40;
LABEL_4:
  v16 = *(void **)(v2 + 16);
  v4 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) != v4 )
    goto LABEL_41;
LABEL_5:
  v5 = sub_227BF10(a2, "(", 1);
LABEL_6:
  sub_220C370(&v14, v5, 1);
  v6 = *(_WORD **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 > 1u )
  {
    *v6 = 8236;
    *(_QWORD *)(v5 + 32) += 2LL;
  }
  else
  {
    v5 = sub_227BF10(v5, ", ", 2);
  }
  sub_220C370(&v16, v5, 1);
  v7 = *(_BYTE **)(v5 + 32);
  if ( *(_BYTE **)(v5 + 24) == v7 )
  {
    sub_227BF10(v5, ")", 1);
  }
  else
  {
    *v7 = 41;
    ++*(_QWORD *)(v5 + 32);
  }
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  for ( i = v2 + 32; v3 != i; i += 32 )
  {
    v12 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 <= 1u )
    {
      sub_227BF10(a2, ", ", 2);
    }
    else
    {
      *v12 = 8236;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    v15 = *(_DWORD *)(i + 8);
    if ( v15 > 0x40 )
      sub_2205510(&v14);
    else
      v14 = *(void **)i;
    v17 = *(_DWORD *)(i + 24);
    if ( v17 > 0x40 )
      sub_2205510(&v16);
    else
      v16 = *(void **)(i + 16);
    v13 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v13 )
    {
      v9 = sub_227BF10(a2, "(", 1);
    }
    else
    {
      *v13 = 40;
      v9 = a2;
      ++*(_QWORD *)(a2 + 32);
    }
    sub_220C370(&v14, v9, 1);
    v10 = *(_WORD **)(v9 + 32);
    if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 1u )
    {
      *v10 = 8236;
      *(_QWORD *)(v9 + 32) += 2LL;
    }
    else
    {
      v9 = sub_227BF10(v9, ", ", 2);
    }
    sub_220C370(&v16, v9, 1);
    v11 = *(_BYTE **)(v9 + 32);
    if ( *(_BYTE **)(v9 + 24) == v11 )
    {
      sub_227BF10(v9, ")", 1);
    }
    else
    {
      *v11 = 41;
      ++*(_QWORD *)(v9 + 32);
    }
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
    if ( v15 > 0x40 )
    {
      if ( v14 )
        operator delete[](v14);
    }
  }
}
