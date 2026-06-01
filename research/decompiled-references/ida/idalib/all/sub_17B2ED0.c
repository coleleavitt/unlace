unsigned __int64 __fastcall sub_17B2ED0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6)
{
  __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 *v19; // rax
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rax
  char v28; // dl
  bool v29; // zf
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // [rsp+8h] [rbp-1B0h]
  __int64 v35; // [rsp+8h] [rbp-1B0h]
  __int64 v36; // [rsp+10h] [rbp-1A8h]
  __int64 v37; // [rsp+18h] [rbp-1A0h]
  int v38; // [rsp+2Ch] [rbp-18Ch] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-188h] BYREF
  __int64 v40; // [rsp+38h] [rbp-180h] BYREF
  __int64 v41; // [rsp+40h] [rbp-178h] BYREF
  __int64 v42; // [rsp+48h] [rbp-170h] BYREF
  __int64 v43[2]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v44; // [rsp+60h] [rbp-158h] BYREF
  int v45; // [rsp+68h] [rbp-150h]
  int v46; // [rsp+6Ch] [rbp-14Ch]
  __int64 v47; // [rsp+70h] [rbp-148h]
  char v48; // [rsp+78h] [rbp-140h]
  _QWORD v49[10]; // [rsp+80h] [rbp-138h] BYREF
  int v50; // [rsp+D0h] [rbp-E8h]
  char v51; // [rsp+D8h] [rbp-E0h]
  __int64 v52; // [rsp+E0h] [rbp-D8h]
  __int64 v53[25]; // [rsp+F0h] [rbp-C8h] BYREF

  if ( a3 <= 1 )
    goto LABEL_13;
  v39 = 0;
  if ( !(_DWORD)a3 )
    goto LABEL_13;
  v8 = *a2;
  if ( (*(_BYTE *)(*a2 + 28) & 0x7Fu) - 40 > 6 || *(char *)(v8 + 28) < 0 )
    goto LABEL_13;
  v36 = 0;
  v9 = a2 + 1;
  v34 = (__int64)&a2[(unsigned int)(a3 - 1) + 1];
  while ( 1 )
  {
    v10 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    v11 = v10;
    if ( !v10 )
      goto LABEL_10;
    v12 = *(_QWORD *)(v10 + 24);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_10;
    a4 = v39;
    if ( (v39 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v39 = v12;
      v36 = v8;
      goto LABEL_10;
    }
    a4 = *(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v39) & 7;
    if ( (*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v12) & 7) != a4 )
      break;
LABEL_10:
    if ( v9 != (__int64 *)v34 )
    {
      v8 = *v9;
      if ( (*(_BYTE *)(*v9 + 28) & 0x7Fu) - 40 <= 6 )
      {
        ++v9;
        if ( *(char *)(v8 + 28) >= 0 )
          continue;
      }
    }
    goto LABEL_13;
  }
  v17 = *(_QWORD *)(v8 + 56);
  v18 = 0;
  if ( *(_BYTE *)(v11 + 16) == 16 )
    v18 = v11;
  v19 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v17 & 4) != 0 )
    v19 = (__int64 *)v19[4];
  v37 = v18;
  v43[0] = *v19;
  v43[1] = (__int64)(v19 + 1);
  v20 = sub_F6CCB0(v43, a6);
  sub_168B9F0((__int64)v53, (__int64 *)(a1 + 8), v20, 0xCAFu, 0);
  v21 = 3;
  if ( v37 )
    v21 = (*(_BYTE *)(v37 + 18) >> 3) & 3;
  v38 = v21;
  v22 = sub_16CF160((__int64)v53, (unsigned int *)&v38);
  v23 = sub_1605D30(v22, (__int64 *)&v39);
  v40 = *(_QWORD *)(v36 + 40);
  v24 = sub_15894B0(v23, &v40);
  v41 = *(_QWORD *)(v11 + 24);
  v25 = sub_162B6D0(v24, &v41);
  v26 = &v42;
  v42 = *(_QWORD *)(v8 + 40);
  v27 = sub_15894B0(v25, &v42);
  v44 = *(_QWORD *)v27;
  v45 = *(_DWORD *)(v27 + 8);
  v46 = *(_DWORD *)(v27 + 12);
  v47 = *(_QWORD *)(v27 + 16);
  v28 = *(_BYTE *)(v27 + 24);
  v51 = 0;
  v29 = *(_BYTE *)(v27 + 120) == 0;
  v48 = v28;
  if ( !v29 )
  {
    v26 = (__int64 *)(v27 + 32);
    v35 = v27;
    sub_FC70F0((__int64)v49, v27 + 32);
    v27 = v35;
    v49[9] = *(_QWORD *)(v35 + 104);
    v33 = *(_DWORD *)(v35 + 112);
    v51 = 1;
    v50 = v33;
  }
  v52 = *(_QWORD *)(v27 + 128);
  sub_15F7200(v53);
  if ( sub_B735C0(v36) )
  {
    v31 = sub_B73640(v36);
    v32 = sub_EEC8C0(v31, (__int64)v26, *(double *)a6.m128_u64);
    v26 = v53;
    v53[0] = v32;
    sub_1587DB0((__int64)&v44, v53);
  }
  if ( sub_B73640(v8) )
  {
    v30 = sub_B73640(v8);
    v53[0] = sub_EEC8C0(v30, (__int64)v26, *(double *)a6.m128_u64);
    sub_1587DB0((__int64)&v44, v53);
  }
  sub_B88650(v8, 1);
  sub_15F7200(&v44);
LABEL_13:
  sub_17A5890((__int64 *)a1, a2, a3, a4, a5);
  result = 0;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
      return *a2;
    else
      return (unsigned __int64)sub_BA6010(*(_QWORD **)(a1 + 248), a2, a3, v13, v14, v15) | 1;
  }
  return result;
}
