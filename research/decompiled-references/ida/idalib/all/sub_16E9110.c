__int64 __fastcall sub_16E9110(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebp
  char v9; // al
  unsigned __int64 v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ecx
  char v15; // al
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // r12d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // [rsp+8h] [rbp-F0h]
  __int64 v39; // [rsp+8h] [rbp-F0h]
  unsigned int v40; // [rsp+14h] [rbp-E4h] BYREF
  unsigned int v41; // [rsp+18h] [rbp-E0h] BYREF
  unsigned int v42; // [rsp+1Ch] [rbp-DCh] BYREF
  int v43; // [rsp+20h] [rbp-D8h] BYREF
  int v44; // [rsp+24h] [rbp-D4h] BYREF
  __int64 v45; // [rsp+28h] [rbp-D0h] BYREF
  void **v46[3]; // [rsp+30h] [rbp-C8h] BYREF
  int v47; // [rsp+48h] [rbp-B0h]
  __int64 v48; // [rsp+50h] [rbp-A8h]

  v5 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  v6 = sub_B75A50(v5, 0);
  v7 = *(_DWORD *)(a2 + 16);
  v8 = v6;
  v40 = v7;
  v41 = (v6 != 1009) + 1;
  if ( v41 > v7 )
  {
    sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 20), 0x1468u, 0);
    v43 = 0;
    v31 = sub_1587D10((__int64)v46, &v43);
    v27 = sub_1588370(v31, &v41);
  }
  else
  {
    if ( v7 < (unsigned int)(v6 != 1009) + 257 )
    {
      v9 = *(_BYTE *)(a2 + 2);
      v42 = 0;
      v10 = *(_QWORD *)(a2 + 8 * (((v9 & 8) != 0) + 1LL) + 32);
      if ( v8 == 1009 )
      {
        LODWORD(v16) = 0;
      }
      else
      {
        v11 = *(_QWORD **)(a1 + 248);
        v12 = v11[2382];
        v47 = 0;
        v46[1] = nullptr;
        LODWORD(v46[0]) = 1;
        v46[2] = (void **)sub_A73320(v11, v12);
        v48 = 0;
        v13 = sub_1A24E20(a1, v46, 0, v10, 0, 0);
        if ( v13 == 1 )
          return 1;
        v14 = v42;
        *(_QWORD *)(a2 + 8 * (v42 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40) = v13
                                                                                             & 0xFFFFFFFFFFFFFFFELL;
        v15 = *(_BYTE *)(a2 + 2);
        v42 = v14 + 1;
        v16 = v14 + 1;
        v10 = *(_QWORD *)(a2 + 8 * (v16 + ((v15 & 8) != 0) + 1) + 32);
      }
      v17 = sub_16CDDB0(a1, v10, a3);
      if ( v17 != 1 )
      {
        v18 = v40;
        v20 = v42++ + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0);
        v19 = v42;
        *(_QWORD *)(a2 + 8 * v20 + 40) = v17 & 0xFFFFFFFFFFFFFFFELL;
        if ( (unsigned int)v18 <= v19 )
        {
LABEL_19:
          if ( v8 == 1009 )
          {
            v32 = *(_QWORD **)(a1 + 248);
            v25 = 0;
            *(_QWORD *)(a2 + 8) = sub_A63CE0(v32);
            return v25;
          }
          sub_1504FB0((__int64 *)v46, v18, 0);
          v35 = *(unsigned int *)(a2 + 16);
          v39 = a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
          v36 = sub_BF6D70(a2);
          if ( (unsigned __int8)sub_16E8B90(a1, v39, v35, 1u, 0, v16, a3, v19, 8u, 0, v36, 0, (__int64)v46) )
          {
            sub_1505150(v46);
            v37 = *(_QWORD *)(a1 + 248);
            v25 = 0;
            *(_QWORD *)(a2 + 8) = *(_QWORD *)(v37 + 19056);
            return v25;
          }
          sub_1505150(v46);
        }
        else
        {
          while ( 1 )
          {
            v24 = sub_192BE00(a1);
            if ( v24 == 1 )
              break;
            v21 = v24 & 0xFFFFFFFFFFFFFFFELL;
            v22 = sub_AAE980(*(_QWORD *)(a1 + 248), *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFFELL) + 8));
            if ( v22 > 255 )
            {
              v38 = v22;
              v33 = sub_EEC140(v21);
              sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), v33, 0x127Eu, 0);
              v34 = sub_1588370((__int64)v46, &v42);
              v43 = v38;
              v28 = sub_1587D10(v34, &v43);
              v44 = 255;
              goto LABEL_15;
            }
            v23 = v42;
            v18 = v40;
            *(_QWORD *)(a2 + 8 * (v42 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40) = v21;
            v42 = v23 + 1;
            if ( (unsigned int)v18 <= v23 + 1 )
              goto LABEL_19;
          }
        }
      }
      return 1;
    }
    sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 20), 0x146Fu, 0);
    v42 = 0;
    v26 = sub_1587D10((__int64)v46, (int *)&v42);
    v43 = v41 + 255;
    v27 = sub_16CF160(v26, (unsigned int *)&v43);
  }
  v28 = sub_1588370(v27, &v40);
  v44 = 0;
LABEL_15:
  v29 = sub_1587D10(v28, &v44);
  v45 = sub_EEC8C0(a2, (__int64)&v44, a3);
  v25 = *(unsigned __int8 *)(sub_1587DB0(v29, &v45) + 120);
  sub_15F7200(v46);
  return v25;
}
