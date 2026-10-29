void __fastcall sub_1702F80(_QWORD *a1, __m128i *a2, __int64 a3, __int64 a4, char ***a5)
{
  unsigned __int8 v5; // bl
  char v6; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  char v19; // dl
  unsigned __int64 v20; // rcx
  char *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  unsigned __int64 v29; // rdi

  if ( a3 )
  {
    v5 = *(_BYTE *)(a3 + 28) & 0x7F;
    v6 = v5;
    if ( v5 == 71 )
      v6 = *(_BYTE *)(*(_QWORD *)(a3 + 48) + 28LL) & 0x7F;
    if ( v6 != 38 && v5 != 37 )
    {
      v11 = sub_B8BF30(a3);
      if ( v11 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 25;
        if ( (unsigned int)v16 > 1 )
          v15 = sub_F63050(v15, a2, v16, v12);
        v17 = *(_QWORD *)(v15 + 24);
        goto LABEL_10;
      }
      switch ( v5 )
      {
        case 0x12u:
          if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            v17 = sub_BA86C0(a3, a4);
          else
            v17 = *(_QWORD *)(a3 + 80);
LABEL_10:
          if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v18 = *(_QWORD *)&byte_8[a1[2384] & 0xFFFFFFFFFFFFFFF0LL];
            v19 = v18 | a1[2384];
            v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)v17 | (unsigned __int8)*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (v20 | v19 & 7) )
            {
              v21 = sub_16FEFA0(v17, a2, *a5, v20, v13, v14);
              sub_15A3150((__int64)a5, (__int64)v21);
            }
          }
          return;
        case 0x21u:
          v22 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
            v22 = (_QWORD *)*v22;
          v23 = sub_B8C1B0((__int64)v22);
          v28 = *(_QWORD *)(v23 + 48);
          if ( v28 )
            v29 = v28 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v29 = sub_A7AA70((__int64)a1, v23, v24, v25, v26, v27);
          v17 = sub_ECEDD0(v29, a1, 0, v25, v26);
          goto LABEL_10;
        case 0x1Cu:
          return;
        case 0x32u:
          if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v17 = sub_BA8C20(a3, a4);
            goto LABEL_10;
          }
          break;
        default:
          if ( (unsigned int)v5 - 26 > 0x1A )
          {
            if ( v5 != 75 )
              return;
            if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              v17 = sub_BA9760(a3, a4);
            else
              v17 = *(_QWORD *)(a3 + 56);
            goto LABEL_10;
          }
          break;
      }
      v17 = *(_QWORD *)(a3 + 48);
      goto LABEL_10;
    }
  }
}
