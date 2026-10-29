__int64 __fastcall sub_183B1D0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v16; // r15
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+18h] [rbp-2030h] BYREF
  _WORD v26[2]; // [rsp+20h] [rbp-2028h] BYREF
  int v27; // [rsp+24h] [rbp-2024h]
  unsigned int v28; // [rsp+28h] [rbp-2020h]
  unsigned int v29; // [rsp+2Ch] [rbp-201Ch]
  int v30; // [rsp+30h] [rbp-2018h] BYREF
  __int64 v31; // [rsp+38h] [rbp-2010h]
  unsigned __int64 v32; // [rsp+40h] [rbp-2008h]
  int v33; // [rsp+48h] [rbp-2000h]
  unsigned __int64 v34; // [rsp+50h] [rbp-1FF8h]
  _QWORD v35[1021]; // [rsp+60h] [rbp-1FE8h] BYREF

  v25 = a3;
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(unsigned int *)(a2 + 24);
  if ( (unsigned __int8)sub_1E63CF0(a1, v9, v8, 1, 5261) )
    return 1;
  v16 = *(_QWORD **)(a1 + 248);
  v35[0] = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(v16[290] + 107LL) & 4) != 0 && (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v17 = sub_B8C3D0(a2, v9, v10, v11, v12, v13);
    v18 = *v17;
    v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
    if ( v18 < v19 )
    {
      v20 = v18;
      while ( 1 )
      {
        v18 = v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 99 )
          break;
        v20 += 8LL;
        if ( v19 == v20 )
          goto LABEL_10;
      }
LABEL_18:
      v21 = 4LL * (v18 != v19);
      goto LABEL_11;
    }
    if ( v18 != v19 )
    {
      while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 99 )
      {
        v19 += 8LL;
        if ( v18 == v19 )
          goto LABEL_10;
      }
      goto LABEL_18;
    }
  }
LABEL_10:
  v21 = 0;
LABEL_11:
  v33 = 0;
  v30 = 1;
  v31 = 0;
  v22 = sub_6D5440(v35);
  v32 = sub_A73320(v16, v22);
  v26[0] = 2;
  v28 = a4;
  v34 = v21 | a2 & 0xFFFFFFFFFFFFFFFBLL;
  v23 = *(_DWORD *)(a2 + 24);
  v29 = a4;
  v27 = v23;
  sub_1A19220((unsigned int)v35, a1, (unsigned int)&v30, (unsigned int)v26, (unsigned int)&v25, 1, 0, 1);
  v24 = sub_1A1D600((unsigned int)v35, a1, (unsigned int)&v30, (unsigned int)v26, (unsigned int)&v25, 1, 0);
  v14 = 1;
  if ( v24 != 1 )
  {
    v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
    sub_16F7BA0(a1, (_WORD *)(v24 & 0xFFFFFFFFFFFFFFFELL), a4, 0, a5, a6);
    v25 = sub_19A3EF0(a1, v25);
    v14 = v25;
  }
  sub_1A0BB10(v35);
  return v14;
}
