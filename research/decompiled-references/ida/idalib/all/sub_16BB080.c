__int64 __fastcall sub_16BB080(__int64 a1, __int64 a2)
{
  int v4; // eax
  char *v5; // rax
  char *v6; // r14
  size_t v7; // rax
  char *v8; // rdi
  size_t v9; // r15
  size_t v10; // rax
  const void *v11; // rsi
  size_t v12; // rbp
  size_t v14; // rax
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  int v16; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall **v17)(); // [rsp+10h] [rbp-78h] BYREF
  int v18; // [rsp+18h] [rbp-70h]
  __int128 v19; // [rsp+20h] [rbp-68h]
  void *dest; // [rsp+30h] [rbp-58h]
  char v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+3Ch] [rbp-4Ch]
  __int64 v23; // [rsp+40h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v23 = a1;
  v17 = &off_2BEBE68;
  v18 = 0;
  v21 = 0;
  v22 = 1;
  dest = nullptr;
  v19 = 0;
  sub_227B8B0(&v17, 0, 0, 0);
  v4 = *(_DWORD *)(a2 + 32);
  v15 = 0;
  v16 = v4;
  v5 = sub_C9D9B0((__int64)&v15);
  if ( !v5 )
    goto LABEL_4;
  v6 = v5;
  v7 = strlen(v5);
  v8 = (char *)dest;
  v9 = v7;
  v10 = *((_QWORD *)&v19 + 1) - (_QWORD)dest;
  if ( v9 > *((_QWORD *)&v19 + 1) - (_QWORD)dest )
  {
    sub_227BF10(&v17, v6, v9);
LABEL_4:
    v8 = (char *)dest;
    v10 = *((_QWORD *)&v19 + 1) - (_QWORD)dest;
    goto LABEL_5;
  }
  if ( !v9 )
  {
LABEL_5:
    v11 = *(const void **)(a2 + 40);
    v12 = *(_QWORD *)(a2 + 48);
    if ( v12 <= v10 )
      goto LABEL_6;
LABEL_11:
    sub_227BF10(&v17, v11, v12);
    goto LABEL_8;
  }
  memcpy(dest, v6, v9);
  v11 = *(const void **)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 48);
  v8 = (char *)dest + v9;
  v14 = *((_QWORD *)&v19 + 1) - ((_QWORD)dest + v9);
  dest = (char *)dest + v9;
  if ( v12 > v14 )
    goto LABEL_11;
LABEL_6:
  if ( v12 )
  {
    memcpy(v8, v11, v12);
    dest = (char *)dest + v12;
  }
LABEL_8:
  v17 = &off_2BEBE68;
  sub_227B7A0(&v17);
  return a1;
}
