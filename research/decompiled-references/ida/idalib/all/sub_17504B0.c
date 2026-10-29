__int64 __fastcall sub_17504B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v9; // r14d
  __int64 v12; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 *v20; // rax
  __int64 v21; // r13
  __int64 *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r12
  __int64 v32; // [rsp+10h] [rbp-88h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  int v35; // [rsp+20h] [rbp-78h]
  unsigned __int64 v37; // [rsp+40h] [rbp-58h]
  int v38; // [rsp+48h] [rbp-50h]
  char v39[8]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v40; // [rsp+58h] [rbp-40h]

  v35 = a4;
  if ( !a4 )
  {
LABEL_2:
    v9 = 0;
    *(_BYTE *)(a9 + 128) = 1;
    return v9;
  }
  v12 = *(_QWORD *)a6;
  v14 = *(unsigned int *)(a6 + 8);
  v32 = *(_QWORD *)a6 + 24 * v14;
  if ( *(_QWORD *)a6 != v32 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      v16 = v15 + 24LL * *(_QWORD *)(v12 + 16);
      if ( v15 != v16 )
        break;
LABEL_8:
      v12 += 24;
      if ( v32 == v12 )
      {
        v14 = *(unsigned int *)(a6 + 8);
        goto LABEL_10;
      }
    }
    while ( !sub_F1D550(v15) )
    {
      v15 += 24;
      if ( v16 == v15 )
        goto LABEL_8;
    }
    goto LABEL_2;
  }
LABEL_10:
  if ( (_DWORD)v14 )
  {
    v28 = *(_QWORD *)a6 + 24 * v14;
    v17 = *(_QWORD *)(v28 - 16);
    v18 = *(_QWORD *)(v28 - 8);
  }
  else
  {
    LODWORD(v17) = 0;
    LODWORD(v18) = 0;
  }
  sub_1DC3850((unsigned int)v39, a1, a8, a2, v17, v18, a8);
  v9 = v40;
  if ( !v40 )
  {
    v19 = a3;
    v34 = a3 + 16 * a4;
    if ( v19 != v34 )
    {
      v38 = *(_DWORD *)(a1 + 12632);
      v20 = (__int64 *)a6;
      v21 = v19;
      v22 = v20;
      do
      {
        v24 = *(_QWORD *)v21;
        *(_DWORD *)(a1 + 12632) = *(_DWORD *)(v21 + 8);
        v25 = sub_174E240(a1, v24, a2, a8, v22, a9, a7);
        if ( v25 == 1 )
        {
          v29 = a1;
          v9 = 1;
LABEL_22:
          *(_DWORD *)(v29 + 12632) = v38;
          goto LABEL_23;
        }
        v26 = *(unsigned int *)(a5 + 8);
        v27 = v25 & 0xFFFFFFFFFFFFFFFELL;
        if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
        {
          v37 = v27;
          sub_2237220(a5, a5 + 16, v26 + 1, 8);
          v26 = *(unsigned int *)(a5 + 8);
          v27 = v37;
        }
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v26) = v27;
        v23 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
        *(_DWORD *)(a5 + 8) = v23;
        if ( !*(_BYTE *)(a9 + 128) )
        {
          v29 = a1;
          v30 = a4 - v23;
          if ( a4 > *(unsigned int *)(a5 + 12) )
          {
            sub_2237220(a5, a5 + 16, a4, 8);
            v23 = *(unsigned int *)(a5 + 8);
            v35 = v30 + v23;
          }
          if ( v30 )
            memset((void *)(*(_QWORD *)a5 + 8 * v23), 0, 8 * v30);
          v9 = 0;
          *(_DWORD *)(a5 + 8) = v35;
          goto LABEL_22;
        }
        *(_DWORD *)(a1 + 12632) = v38;
        v21 += 16;
      }
      while ( v34 != v21 );
      v9 = (unsigned __int8)v9;
    }
  }
LABEL_23:
  sub_1DBADA0(v39);
  return v9;
}
