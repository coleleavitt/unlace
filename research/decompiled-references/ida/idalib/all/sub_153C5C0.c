void __fastcall sub_153C5C0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 *v5; // rsi
  __int16 v6; // ax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char v9; // dl
  __int64 (__fastcall **v10)(); // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+0h] [rbp-120h]
  unsigned __int64 v19; // [rsp+0h] [rbp-120h]
  _BYTE *v20; // [rsp+8h] [rbp-118h] BYREF
  char v21; // [rsp+10h] [rbp-110h]
  __int64 v22; // [rsp+18h] [rbp-108h]
  int v23; // [rsp+20h] [rbp-100h]
  __int16 v24; // [rsp+24h] [rbp-FCh]
  __int64 (__fastcall *v25)(__int64); // [rsp+28h] [rbp-F8h]
  __int64 v26; // [rsp+30h] [rbp-F0h]
  __int64 v27; // [rsp+38h] [rbp-E8h]
  unsigned __int8 *v28[10]; // [rsp+48h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+98h] [rbp-88h] BYREF
  unsigned __int8 v30; // [rsp+9Ch] [rbp-84h]
  __int64 v31; // [rsp+A0h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+A8h] [rbp-78h]
  __int64 v33; // [rsp+B8h] [rbp-68h]
  __int64 v34; // [rsp+C0h] [rbp-60h]
  __int64 v35; // [rsp+C8h] [rbp-58h]
  int v36; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-48h]
  __int64 v38; // [rsp+E8h] [rbp-38h]
  int v39; // [rsp+F0h] [rbp-30h]

  *(_OWORD *)ptr = 0;
  v29 = 0;
  v5 = (__int64 *)&v29;
  v31 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( (unsigned __int8)sub_156E250(a1, &v29) )
    goto LABEL_6;
  v6 = *(_WORD *)(a1 + 32);
  if ( v39 != 2 )
  {
    v22 = a1;
    v20 = (_BYTE *)(a1 + 1952);
    v9 = *(_BYTE *)(a1 + 1952);
    v23 = 1638424;
    v21 = v9;
    *(_BYTE *)(a1 + 1952) = 1;
    v24 = 63;
    v25 = sub_1478A90;
    v26 = 0;
    v27 = 0;
    if ( v6 == 24 )
    {
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 92) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
      {
        LODWORD(v27) = sub_1478A90(a1);
        goto LABEL_11;
      }
      if ( !(unsigned __int8)sub_1568800(&v20) )
      {
LABEL_11:
        if ( v39 == 1 )
        {
          sub_156E210(&v20);
        }
        else
        {
          while ( *(_WORD *)(a1 + 32) != 25 )
          {
            while ( 1 )
            {
              v5 = (__int64 *)a2;
              v14 = sub_153BAF0(a1, (__int64 (__fastcall ***)())a2, 3u, nullptr, (__m128i)0LL, a4);
              if ( v14 <= 1 )
                break;
              v11 = *(unsigned int *)(a2 + 8);
              v5 = (__int64 *)*(unsigned int *)(a2 + 12);
              v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
              if ( v11 + 1 > (unsigned __int64)v5 )
              {
                v5 = (__int64 *)(a2 + 16);
                v18 = v15;
                sub_2237220(a2, a2 + 16, v11 + 1, 8);
                v11 = *(unsigned int *)(a2 + 8);
                v15 = v18;
              }
              v10 = *(__int64 (__fastcall ***)())a2;
              *(_QWORD *)(*(_QWORD *)a2 + 8 * v11) = v15;
              ++*(_DWORD *)(a2 + 8);
              if ( *(_WORD *)(a1 + 32) == 25 )
                goto LABEL_17;
            }
          }
LABEL_17:
          sub_14808E0((__int64)&v20, v5, (__int64)v10, v11, v12, v13);
        }
        goto LABEL_22;
      }
    }
    sub_1564840(v28, a1, a1 + 16, 14);
    sub_AE9DF0(v28, 24, 4u);
    sub_AEA040((__int64)v28);
LABEL_22:
    *v20 = v21;
    goto LABEL_6;
  }
  if ( v6 == 24 )
  {
    v7 = sub_1533380(a1, 0, 0x400008u);
    if ( v7 != 1 )
    {
      v8 = sub_1C37910(*(_QWORD *)(a1 + 96), v29, v30, &v31, &v36, v7 & 0xFFFFFFFFFFFFFFFELL);
      if ( v8 > 1 )
      {
        v16 = *(unsigned int *)(a2 + 8);
        v17 = v8 & 0xFFFFFFFFFFFFFFFELL;
        if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v19 = v17;
          sub_2237220(a2, a2 + 16, v16 + 1, 8);
          v16 = *(unsigned int *)(a2 + 8);
          v17 = v19;
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v16) = v17;
        ++*(_DWORD *)(a2 + 8);
      }
    }
  }
  else
  {
    sub_1564840(v28, a1, a1 + 16, 14);
    sub_AE9DF0(v28, 24, 4u);
    sub_AEA040((__int64)v28);
  }
LABEL_6:
  if ( HIDWORD(v33) )
    free(ptr[1]);
}
