__int64 __fastcall sub_40A830(_QWORD *a1, int a2, __int64 a3, _DWORD *a4, unsigned int a5)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int *v11; // r14
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // r8d
  __int64 v22; // rax
  unsigned int i; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // [rsp+1Ch] [rbp-A4h]
  char v28; // [rsp+23h] [rbp-9Dh]
  unsigned int v29; // [rsp+24h] [rbp-9Ch]
  __int64 v30; // [rsp+30h] [rbp-90h]
  __int64 v31; // [rsp+38h] [rbp-88h]
  __int64 v32; // [rsp+38h] [rbp-88h]
  __int64 v34; // [rsp+48h] [rbp-78h]
  __int64 v35; // [rsp+50h] [rbp-70h] BYREF
  __int64 v36; // [rsp+58h] [rbp-68h] BYREF
  __int64 v37; // [rsp+60h] [rbp-60h] BYREF
  unsigned int *v38; // [rsp+68h] [rbp-58h] BYREF
  __int64 v39; // [rsp+70h] [rbp-50h] BYREF
  __int64 v40; // [rsp+78h] [rbp-48h]
  __int64 v41[8]; // [rsp+80h] [rbp-40h] BYREF

  v7 = a1;
  v30 = a1[1];
  v37 = v30;
  v39 = v30;
  v40 = 0;
  sub_41C800(v41, a3);
  v31 = v41[0];
  v8 = sub_15E1A70(a1[1]);
  v34 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  sub_3FCDF0(v31, v30);
  v9 = a1[3];
  v38 = nullptr;
  sub_404A20((__int64)a1, v9, v34, (__int64)&v37);
  v10 = a1[15];
  v11 = v38;
  v12 = *(_BYTE *)(v10 + 136);
  v32 = v10;
  *(_BYTE *)(v10 + 145) = 1;
  *(_DWORD *)(v10 + 148) = a2;
  *(_BYTE *)(v10 + 136) = 1;
  v13 = a1[2];
  v28 = v12;
  if ( !*(_BYTE *)(v13 + 643) )
    a5 = -1;
  v14 = *(_QWORD *)(v32 + 16);
  v15 = v32;
  if ( v14 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v14 + 120LL))(*(_QWORD *)(v32 + 16), v9, v32);
    v41[0] = 0;
    sub_1862300(v41, "arith.ignore_int", a5 == 0);
    sub_1862300(v41, "array.weak", a5 <= 1);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 88LL))(v14, v41);
    sub_18572D0(v41);
    v13 = a1[2];
    v15 = a1[15];
  }
  v16 = *(_BYTE *)(v13 + 668) == 0;
  *(_QWORD *)(v15 + 128) = 0;
  *(_QWORD *)(v15 + 120) = &v39;
  v17 = a1[1];
  v41[1] = 0;
  v41[0] = v17;
  if ( !v16 )
  {
    sub_4087A0((__int64)a1, (__int64)&v37);
    v11 = v38;
  }
  v18 = a1[37];
  v35 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v38 = v11;
  sub_407600(&v38, &v35);
  v19 = a1[15];
  if ( v38 )
    v20 = *(v38 - 1);
  else
    v20 = 0;
  v27 = sub_42BF90(v19, a3, (unsigned int)v41, (int)v7 + 232, v20, (_DWORD)v38, 1);
  if ( v27 == -1 )
  {
    sub_2FCDE0((__int64 *)a3);
    v22 = v40;
    for ( i = 0; v40; i = v29 + 1 )
    {
      if ( i >= *(_DWORD *)(v22 - 4) )
        break;
      v24 = *(_QWORD *)(v22 + 8LL * i);
      v36 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      v29 = i;
      sub_407600((unsigned int **)(a3 + 8), &v36);
      v22 = v40;
    }
    v25 = v7[15];
    LODWORD(v7) = (_DWORD)a4;
    *a4 = *(_DWORD *)(v25 + 140);
  }
  sub_2334C0(v41);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
  *(_BYTE *)(v32 + 136) = v28;
  *(_BYTE *)(v32 + 145) = 0;
  sub_3FCDF0(v34, v30);
  sub_2334C0(&v39);
  sub_2334C0(&v37);
  LOBYTE(v7) = v27 == -1;
  return (unsigned int)v7;
}

