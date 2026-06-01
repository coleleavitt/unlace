void __fastcall sub_14A12D0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // r15
  char v6; // r12
  int v7; // r13d
  _DWORD *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // r10d
  __int64 *v12; // rdi
  char v13; // dl
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-E8h]
  unsigned int v16; // [rsp+8h] [rbp-E0h]
  __int64 v17; // [rsp+8h] [rbp-E0h]
  int *v18; // [rsp+10h] [rbp-D8h]
  unsigned int v19; // [rsp+1Ch] [rbp-CCh]
  __int64 v20; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+2Ch] [rbp-BCh] BYREF
  __int64 v22; // [rsp+34h] [rbp-B4h] BYREF
  char v23; // [rsp+3Ch] [rbp-ACh]
  __int128 v24; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-98h]
  __int64 v26; // [rsp+60h] [rbp-88h] BYREF
  __int16 v27; // [rsp+68h] [rbp-80h]

  v5 = a2 + 8;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v18 = (int *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v16 = *(_DWORD *)(a1 + 40);
  if ( *(_QWORD *)(a2 + 16)
    && (v6 = sub_169D7E0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v5)) != 0 )
  {
    sub_1564E40(a1, 0);
    v7 = sub_16A2FF0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v5) ^ 1;
  }
  else
  {
    v6 = 0;
    LOBYTE(v7) = 0;
  }
  sub_146B5E0(&v20, a1, 0x308u, 1, 0);
  sub_183C0A0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), a2);
  v8 = *(_DWORD **)a2;
  v24 = 0;
  v25 = 0;
  sub_147E420(a1, a2, (__int64)v8, (__int64)&v24);
  v9 = sub_14C51E0(a1, 1);
  v15 = sub_183C1B0(*(_QWORD *)(a1 + 96), v9);
  if ( !(unsigned __int8)sub_15AC3B0(a2) )
  {
    sub_1564820(&v26, a1, v16, 1877);
    sub_AEA040((__int64)&v26);
    goto LABEL_9;
  }
  if ( v15 == 1 )
  {
    v26 = 0x42009600250018LL;
    v27 = 62;
    sub_15680D0(a1, &v26, 5, 3);
    if ( !(unsigned __int8)sub_147B3A0(a2, &v26) )
      goto LABEL_9;
    goto LABEL_17;
  }
  *(_QWORD *)(a2 + 824) = v15 & 0xFFFFFFFFFFFFFFFELL;
  v10 = sub_EEC140(v15 & 0xFFFFFFFFFFFFFFFELL);
  if ( v10 )
    *(_DWORD *)(a2 + 92) = v10;
  if ( (unsigned __int8)sub_147B3A0(a2, &v26) )
  {
LABEL_17:
    if ( *(_WORD *)(a1 + 32) == 37 && ((**(_DWORD **)a2 >> 12) & 0x7F) == 0x32 )
    {
      v11 = *(_DWORD *)(a1 + 16);
      v12 = *(__int64 **)(a1 + 8);
      v21 = 0;
      *(_DWORD *)(a1 + 40) = v11;
      v19 = v11;
      sub_14634E0(v12, v18);
      v17 = sub_1496480(a1, &v21, 20, 3u, nullptr, 0, (__m128i)0LL, a4);
      if ( v13 )
      {
        v26 = 0x96002500180040LL;
        v27 = 66;
        sub_15680D0(a1, &v26, 5, 3);
      }
      else
      {
        sub_1564820(&v26, a1, v19, 1876);
        v23 = 1;
        v22 = v21;
        sub_AEC610(&v26, &v22);
        sub_AEA040((__int64)&v26);
        LODWORD(v26) = 0;
        sub_147B3A0(a2, &v26);
        v14 = *(_QWORD *)(a2 + 128) + 144LL * (unsigned int)v26;
        *(_QWORD *)(v14 + 128) = v17;
        *(_BYTE *)(v14 + 57) = (2 * (v17 != 0)) | *(_BYTE *)(v14 + 57) & 0xFD;
        *(_DWORD *)(v14 + 136) = v21;
      }
    }
  }
LABEL_9:
  if ( BYTE8(v25) )
    sub_19A2DA0(&v24);
  if ( v20 )
    sub_1564F70(v20);
  if ( (_BYTE)v7 )
    sub_169D850(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v5);
  if ( v6 )
    sub_1564F70(a1);
}
