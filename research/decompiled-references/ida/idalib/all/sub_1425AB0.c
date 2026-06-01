void __fastcall sub_1425AB0(__int64 a1, _DWORD *a2, unsigned int *a3, char a4, __m128i a5, double a6)
{
  __int64 v10; // rax
  char v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v21[24]; // [rsp+10h] [rbp-68h] BYREF
  char v22; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+29h] [rbp-4Fh]
  __int64 v24; // [rsp+2Ch] [rbp-4Ch]

  ++*(_DWORD *)(a1 + 2312);
  v20 = 0;
  sub_1436030(v21, a1, &v20, 1);
  v10 = *(_QWORD *)(a1 + 1120);
  v11 = v22;
  if ( !v10 )
    goto LABEL_11;
  v12 = (unsigned int)*a2;
  if ( *(_DWORD *)(v10 + 72) )
    goto LABEL_3;
  if ( a4 || (v15 = v20) == 0 || !v22 )
  {
    a5 = 0;
    *(_WORD *)(v10 + 32) = 1;
    *(_OWORD *)(v10 + 40) = 0;
LABEL_3:
    v13 = *(_QWORD *)(a1 + 1192);
    if ( !v13 )
      goto LABEL_6;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v13 + 304LL))(
      v13,
      v12,
      v24,
      (unsigned int)(v11 != 0) + 1);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v10 + 40) || *(_BYTE *)(v10 + 34) )
  {
    a5 = 0;
    *(_WORD *)(v10 + 32) = 1;
    *(_OWORD *)(v10 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(v10 + 56) = v12;
    v12 = (unsigned int)*a2;
    *(_WORD *)(v10 + 32) = 257;
    *(_QWORD *)(v10 + 40) = v15;
  }
  v16 = *(_QWORD *)(a1 + 1192);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 304LL))(v16, v12, v24, 2);
LABEL_5:
    LODWORD(v12) = *a2;
  }
LABEL_6:
  v14 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v14 + 313) )
  {
LABEL_7:
    if ( !*(_BYTE *)(v14 + 234) || !v23 )
    {
      if ( !v11 )
      {
        sub_1424590(a1, *a3, (unsigned int)v12, 0, 0, 0, a5, a6);
        goto LABEL_11;
      }
      goto LABEL_22;
    }
LABEL_28:
    v17 = *(_QWORD *)(a1 + 1120);
    v18 = (unsigned int)v12;
    goto LABEL_23;
  }
  if ( !sub_1021600(*(_QWORD *)(a1 + 88), v12) )
  {
    v14 = *(_QWORD *)(a1 + 40);
    LODWORD(v12) = *a2;
    goto LABEL_7;
  }
  LODWORD(v12) = *a2;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) && v23 )
    goto LABEL_28;
LABEL_22:
  v17 = *(_QWORD *)(a1 + 1120);
  v18 = (unsigned int)v12 | 0x10000000000LL;
LABEL_23:
  v19 = *(unsigned int *)(v17 + 72);
  if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 76) )
  {
    sub_2237220(v17 + 64, v17 + 80, v19 + 1, 8);
    v19 = *(unsigned int *)(v17 + 72);
  }
  *(_QWORD *)(*(_QWORD *)(v17 + 64) + 8 * v19) = v18;
  ++*(_DWORD *)(v17 + 72);
LABEL_11:
  sub_98E4B0((__int64)v21);
}
