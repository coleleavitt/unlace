__int64 __fastcall sub_1425D00(__int64 a1, unsigned int *a2, unsigned int *a3, char a4, char a5, __m128i a6, double a7)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  const char *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  __int64 v17; // rax
  char v18; // bp
  char v19; // dl
  __int64 *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rbp
  __int64 result; // rax
  int v27; // ecx
  int v30; // [rsp+20h] [rbp-78h] BYREF
  __int64 v31; // [rsp+28h] [rbp-70h]
  __int16 v32; // [rsp+30h] [rbp-68h]
  _QWORD v33[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h]

  ++*(_DWORD *)(a1 + 2312);
  v9 = *a2;
  sub_141B710(a1, (__int64)&v30, 0, nullptr, a6, a7);
  if ( v32 == 2 )
    return sub_1424590(a1, *a3, (unsigned int)v9, 0, 0, 0, a6, a7);
  if ( (unsigned __int16)(v32 - 7) <= 0xCu || v32 == 1 )
    BUG();
  v10 = v31;
  if ( *(char *)(v31 + 4) < 0 )
  {
    sub_145FA90(a1, &v30);
    if ( (*(_BYTE *)(v10 + 5) & 1) == 0 )
      goto LABEL_6;
  }
  else if ( (*(_BYTE *)(v31 + 5) & 1) == 0 )
  {
    goto LABEL_6;
  }
  if ( !sub_1021600(*(_QWORD *)(a1 + 88), v30) )
    sub_145FEC0(a1, &v30);
LABEL_6:
  v11 = "ifndef";
  if ( !a4 )
    v11 = "ifdef";
  v12 = 0;
  sub_1421C50(a1, (__int64)v11, 0);
  if ( (unsigned __int16)(v32 - 7) > 0xCu && v32 != 1 )
    v12 = v31;
  sub_1423DB0((__int64)v33, (_QWORD *)a1, v12, v13, v14, v15);
  if ( v34 )
  {
    v16 = *(__int64 **)(*(_QWORD *)(v33[1] + 8 * v34 - 8) + 16LL);
    goto LABEL_11;
  }
  if ( (v33[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v20 = sub_13F1C60((__int64 *)(v33[0] & 0xFFFFFFFFFFFFFFF8LL));
    v16 = v20;
    if ( v20 )
    {
      v16 = (__int64 *)v20[2];
LABEL_11:
      v17 = *(_QWORD *)(a1 + 1120);
      v18 = v16 == nullptr;
      if ( *(_DWORD *)(v17 + 72) )
        goto LABEL_24;
      goto LABEL_12;
    }
    v17 = *(_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(v17 + 72) )
    {
      v18 = 1;
      goto LABEL_12;
    }
LABEL_43:
    v18 = 1;
    goto LABEL_26;
  }
  v17 = *(_QWORD *)(a1 + 1120);
  if ( *(_DWORD *)(v17 + 72) )
    goto LABEL_43;
  v18 = 1;
  v16 = nullptr;
LABEL_12:
  v19 = v18 & (a5 ^ 1);
  if ( v19 )
  {
    if ( *(_QWORD *)(v17 + 40) )
    {
      a6 = 0;
      v18 &= a5 ^ 1;
      *(_WORD *)(v17 + 32) = 1;
      *(_OWORD *)(v17 + 40) = 0;
    }
    else
    {
      v18 = *(_BYTE *)(v17 + 34);
      if ( v18 )
      {
        a6 = 0;
        *(_WORD *)(v17 + 32) = 1;
        *(_OWORD *)(v17 + 40) = 0;
      }
      else
      {
        v27 = v30;
        *(_QWORD *)(v17 + 40) = v12;
        v18 = v19;
        *(_WORD *)(v17 + 32) = 257;
        *(_DWORD *)(v17 + 56) = v27;
      }
    }
    goto LABEL_26;
  }
  a6 = 0;
  *(_WORD *)(v17 + 32) = 1;
  *(_OWORD *)(v17 + 40) = 0;
LABEL_24:
  if ( v16 )
    sub_14420E0(a1);
LABEL_26:
  v21 = *(__int64 **)(a1 + 1192);
  if ( v21 )
  {
    v22 = *v21;
    if ( !a4 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, int *, _QWORD *))(v22 + 320))(v21, (unsigned int)v9, &v30, v33);
      v23 = *(_QWORD *)(a1 + 40);
      v24 = *(_BYTE *)(v23 + 313);
      if ( !v24 )
        goto LABEL_30;
LABEL_40:
      v24 = sub_1021600(*(_QWORD *)(a1 + 88), v9);
      v23 = *(_QWORD *)(a1 + 40);
      goto LABEL_30;
    }
    (*(void (__fastcall **)(__int64 *, _QWORD, int *, _QWORD *))(v22 + 344))(v21, (unsigned int)v9, &v30, v33);
  }
  v23 = *(_QWORD *)(a1 + 40);
  v24 = *(_BYTE *)(v23 + 313);
  if ( v24 )
    goto LABEL_40;
LABEL_30:
  if ( *(_BYTE *)(v23 + 234) && v18 )
  {
    v25 = *(_QWORD *)(a1 + 1120);
    goto LABEL_35;
  }
  if ( v18 != a4 && !v24 )
    return sub_1424590(a1, *a3, (unsigned int)v9, 0, 0, 0, a6, a7);
  v25 = *(_QWORD *)(a1 + 1120);
  v9 |= 0x10000000000uLL;
LABEL_35:
  result = *(unsigned int *)(v25 + 72);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v25 + 76) )
  {
    sub_2237220(v25 + 64, v25 + 80, result + 1, 8);
    result = *(unsigned int *)(v25 + 72);
  }
  *(_QWORD *)(*(_QWORD *)(v25 + 64) + 8 * result) = v9;
  ++*(_DWORD *)(v25 + 72);
  return result;
}
