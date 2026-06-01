__int64 __fastcall sub_BF5D70(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  char v5; // bp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int8 **v10; // rax
  unsigned __int8 **v11; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // [rsp+8h] [rbp-120h]
  __int64 v16; // [rsp+8h] [rbp-120h]
  __int64 v17; // [rsp+10h] [rbp-118h]
  __int64 v18; // [rsp+10h] [rbp-118h]
  const void *v19; // [rsp+10h] [rbp-118h]
  __int64 v20; // [rsp+20h] [rbp-108h]
  __int64 v21; // [rsp+20h] [rbp-108h]
  __int64 v22; // [rsp+20h] [rbp-108h]
  char v23; // [rsp+28h] [rbp-100h]
  __int64 v24; // [rsp+28h] [rbp-100h]
  const void *v25; // [rsp+28h] [rbp-100h]
  __int64 v26; // [rsp+30h] [rbp-F8h]
  char v27; // [rsp+30h] [rbp-F8h]
  char v28; // [rsp+38h] [rbp-F0h]
  char v30; // [rsp+44h] [rbp-E4h]
  void *v31; // [rsp+50h] [rbp-D8h] BYREF
  signed __int64 v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-B8h] BYREF
  char v35; // [rsp+74h] [rbp-B4h]
  void *v36; // [rsp+B0h] [rbp-78h] BYREF
  signed __int64 v37; // [rsp+B8h] [rbp-70h]
  __int64 v38; // [rsp+C0h] [rbp-68h] BYREF

  v3 = *a1;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 16LL) + 8LL);
  v4 = *(_QWORD *)(a1[1] + 16);
  v34 = 0;
  v35 &= ~1u;
  v15 = v4;
  v5 = *(_BYTE *)(v3 + 128) & 1;
  if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
  {
    v6 = *(_QWORD *)v3;
    v7 = *(_QWORD *)(v3 + 8);
    BYTE4(v36) &= ~1u;
    LODWORD(v36) = 0;
    sub_A2D690((__int64)&v36);
    sub_A2D390((__int64)&v36, v6, v7, (__int64 *)(v3 + 16), v5);
    sub_A2BFE0((__int64)&v34, (__int64)&v36);
    if ( (unsigned int)v36 <= 1 )
      goto LABEL_3;
  }
  else
  {
    v13 = *(unsigned int *)(v3 + 56);
    v14 = *(_QWORD *)(v3 + 8);
    v27 = *(_BYTE *)(v3 + 24);
    v25 = *(const void **)(v3 + 48);
    v22 = *(_QWORD *)v3;
    BYTE4(v36) &= ~1u;
    LODWORD(v36) = 0;
    sub_A2D690((__int64)&v36);
    sub_A2D530((__int64)&v36, v22, v14, (_QWORD *)(v3 + 16), v25, v13, (v27 & 2) != 0, v5);
    sub_A2BFE0((__int64)&v34, (__int64)&v36);
    if ( (unsigned int)v36 <= 1 )
      goto LABEL_3;
  }
  sub_A2BBA0((int *)&v36);
LABEL_3:
  if ( *(_BYTE *)(v3 + 129) )
    v35 |= 1u;
  sub_A2FDB0((__int64)&v31, &v34, v15, v17);
  if ( v34 > 1 )
    sub_A2BBA0((int *)&v34);
  v8 = a1[3];
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 24LL) + 8LL);
  v9 = *(_QWORD *)(a1[1] + 16);
  v34 = 0;
  v35 &= ~1u;
  if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
  {
    v23 = *(_BYTE *)(v8 + 128) & 1;
    v18 = *(_QWORD *)(v8 + 8);
    v20 = *(_QWORD *)v8;
    BYTE4(v36) &= ~1u;
    LODWORD(v36) = 0;
    sub_A2D690((__int64)&v36);
    sub_A2D390((__int64)&v36, v20, v18, (__int64 *)(v8 + 16), v23);
    sub_A2BFE0((__int64)&v34, (__int64)&v36);
    if ( (unsigned int)v36 <= 1 )
      goto LABEL_9;
  }
  else
  {
    v28 = *(_BYTE *)(v8 + 24);
    v30 = *(_BYTE *)(v8 + 128) & 1;
    v19 = *(const void **)(v8 + 48);
    v26 = *(unsigned int *)(v8 + 56);
    v24 = *(_QWORD *)v8;
    v21 = *(_QWORD *)(v8 + 8);
    BYTE4(v36) &= ~1u;
    LODWORD(v36) = 0;
    sub_A2D690((__int64)&v36);
    sub_A2D530((__int64)&v36, v24, v21, (_QWORD *)(v8 + 16), v19, v26, (v28 & 2) != 0, v30);
    sub_A2BFE0((__int64)&v34, (__int64)&v36);
    if ( (unsigned int)v36 <= 1 )
      goto LABEL_9;
  }
  sub_A2BBA0((int *)&v36);
LABEL_9:
  if ( *(_BYTE *)(v8 + 129) )
    v35 |= 1u;
  sub_A2FDB0((__int64)&v36, &v34, v9, v16);
  if ( v34 > 1 )
    sub_A2BBA0((int *)&v34);
  v10 = (unsigned __int8 **)sub_E0FED0(a1[1], *(_QWORD *)a1[2], a2, 0);
  v11 = v10;
  if ( a3 )
  {
    if ( v10 )
    {
      sub_AC84E0(v10, v36, v37);
      sub_AC84E0(v11, v31, v32);
    }
  }
  else if ( v10 )
  {
    sub_AC84E0(v10, v31, v32);
    sub_AC84E0(v11, v36, v37);
  }
  if ( v36 != &v38 )
    operator delete(v36);
  if ( v31 != &v33 )
    operator delete(v31);
  return 0;
}

