void __fastcall sub_18C7EB0(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rdx
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+8h] [rbp-30h]

  v4 = sub_B79D10(a1[31], a1[68], a2);
  if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
  {
    sub_15F1C20((__int64)a1, a3, v4);
    v8 = v4;
    sub_B94AD0((__m128i *)a1[68], v4, v17, v18, v19, v20);
    if ( a3 )
    {
      if ( !v4 )
        goto LABEL_10;
      goto LABEL_7;
    }
    if ( !v4 )
    {
LABEL_14:
      a1[68] = v4;
      goto LABEL_11;
    }
LABEL_13:
    v4 += 40;
    goto LABEL_14;
  }
  v5 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    v5 = (_QWORD *)*v5;
  sub_1A2F990(&v21, a1, v5);
  v6 = v21;
  if ( v22 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, v4);
    *(_QWORD *)(v4 + 120) = v6;
    *(_DWORD *)(v4 + 116) = v7;
  }
  sub_15F1C20((__int64)a1, a3, v4);
  v8 = v4;
  sub_B94AD0((__m128i *)a1[68], v4, v9, v10, v11, v12);
  if ( !a3 )
    goto LABEL_13;
LABEL_7:
  v4 += 40;
LABEL_10:
  v8 = a3;
  sub_17A2E00((__int64)a1, a3, v4);
LABEL_11:
  *(_BYTE *)(sub_15F24E0((__int64)a1, v8, v13, v14, v15, v16) + 1464) = 1;
  sub_18C79E0((__int64)a1, 6, 4);
}
