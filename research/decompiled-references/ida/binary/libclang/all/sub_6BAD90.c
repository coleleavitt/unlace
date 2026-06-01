__int64 __fastcall sub_6BAD90(_QWORD *a1, __int64 a2, const void *a3, size_t a4)
{
  size_t v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rbp
  char *v10; // rdx
  void *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r12
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // r13
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  v7 = (unsigned int)sub_B1E8D0(a2);
  v8 = a1[274];
  a1[284] += v7 + 8;
  v9 = (_QWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v10 = (char *)v9 + v7 + 8;
  if ( a1[275] >= (unsigned __int64)v10 && v8 )
    a1[274] = v10;
  else
    v9 = (_QWORD *)sub_6A76A0((__int64)(a1 + 274), v7 + 8, 3);
  *v9 = a2;
  v11 = memset(v9 + 1, 0, v7);
  sub_B1D320(a1, *v9, v11, 0);
  v12 = sub_600210(a1[2168], a3, a4);
  v13 = *(_QWORD *)(a1[264] + 80LL);
  v14 = *(_QWORD *)(v13 + 72);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) == 0 )
  {
    if ( v15 <= 3 )
      goto LABEL_8;
    v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v15 & 2) == 0 )
    {
LABEL_11:
      v18 = v16 + 40;
      goto LABEL_12;
    }
    v20 = *(_QWORD *)(v16 + 18200);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v16 + 2192);
      *(_QWORD *)(v16 + 2272) += 24LL;
      v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v16 + 2200) >= v22 + 24 && v21 )
      {
        *(_QWORD *)(v16 + 2192) = v22 + 24;
      }
      else
      {
        v26 = v12;
        v22 = sub_6A76A0(v16 + 2192, 24, 3);
        v12 = v26;
      }
      *(_QWORD *)v22 = v20;
      *(_DWORD *)(v22 + 8) = 0;
      *(_QWORD *)(v22 + 16) = v13;
      *(_QWORD *)(v13 + 72) = v22 | 5;
      v16 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      v17 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_7;
    }
    v15 = v13 & 0xFFFFFFFFFFFFFFFALL;
    v14 = v13 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v13 + 72) = v14;
  }
  if ( v15 )
  {
    v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = v16;
    if ( (v15 & 4) == 0 )
    {
LABEL_18:
      if ( !v16 )
      {
        v18 = 0;
        goto LABEL_12;
      }
      goto LABEL_11;
    }
LABEL_7:
    if ( !v16 )
      goto LABEL_8;
    v23 = *(_QWORD *)v16;
    v24 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
    if ( *(_DWORD *)(v16 + 8) != v24 )
    {
      *(_DWORD *)(v16 + 8) = v24;
      v25 = v12;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 144LL))(v23, v13);
      v12 = v25;
    }
    v16 = *(_QWORD *)(v17 + 16);
    goto LABEL_18;
  }
LABEL_8:
  v18 = 0;
LABEL_12:
  result = sub_784B70(a1, v18, 0, 0, v12, v9);
  *(_BYTE *)(result + 29) |= 2u;
  return result;
}

