/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4301B0
// Address: 0x00000000004301B0

//----- (00000000004301B0) ----------------------------------------------------
__int64 __fastcall sub_4301B0(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // bp
  char *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rsi
  void *v11; // rax
  char v12; // al
  void **v13; // r12
  _BYTE *v14; // rax
  void *v15; // rsi
  void **v16; // r12
  _BYTE *v17; // rax
  void *v18; // rsi
  void **v19; // r12
  _BYTE *v20; // rax
  void *v21; // rsi
  void *v22; // rax
  void *v23; // rax
  void *v24; // rax

  v1 = *(_QWORD *)(a1 + 328);
  v2 = *(_WORD *)(*(_QWORD *)(a1 + 320) + 2 * v1 - 2);
  if ( v1 )
    *(_QWORD *)(a1 + 328) = v1 - 1;
  v3 = (char *)s1;
  v4 = *(_QWORD *)(a1 + 160) + 24LL * *(_QWORD *)(a1 + 168) - 24;
  if ( *(_QWORD *)(v4 + 8) )
    v3 = *(char **)v4;
  v5 = sub_439950(v3);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    switch ( *(_BYTE *)(v6 + v2) )
    {
      case 2:
        ++v2;
        sub_4300F0(a1);
        goto LABEL_10;
      case 3:
        ++v2;
        if ( (*(_BYTE *)(a1 + 212) & 0xFD) != 0xD0 )
        {
          v19 = *(void ***)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -48;
          v20 = v19[1];
          v21 = *v19;
          if ( v19[2] < v20 + 1 )
          {
            v22 = sub_481540((__int64)v19, v21, (unsigned __int64)(v20 + 1), 1u);
            *v19 = v22;
            v21 = v22;
            v20 = v19[1];
          }
          v20[(_QWORD)v21] = -48;
          v19[1] = (char *)v19[1] + 1;
          ++*(_DWORD *)(a1 + 208);
        }
        goto LABEL_10;
      case 4:
        if ( *(_BYTE *)(v6 + v2 + 1) )
          ++v2;
        goto LABEL_10;
      case 5:
      case 6:
      case 8:
      case 0xA:
        goto LABEL_9;
      case 7:
        v12 = *(_BYTE *)(a1 + 212);
        ++v2;
        if ( v12 != -88 && v12 != -65 )
        {
          v13 = *(void ***)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -65;
          v14 = v13[1];
          v15 = *v13;
          if ( v13[2] < v14 + 1 )
          {
            v23 = sub_481540((__int64)v13, v15, (unsigned __int64)(v14 + 1), 1u);
            *v13 = v23;
            v15 = v23;
            v14 = v13[1];
          }
          v14[(_QWORD)v15] = -65;
          v13[1] = (char *)v13[1] + 1;
          ++*(_DWORD *)(a1 + 208);
        }
        goto LABEL_10;
      case 9:
        ++v2;
        if ( *(_BYTE *)(a1 + 212) != 0xD3 )
        {
          v16 = *(void ***)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -47;
          v17 = v16[1];
          v18 = *v16;
          if ( v16[2] < v17 + 1 )
          {
            v24 = sub_481540((__int64)v16, v18, (unsigned __int64)(v17 + 1), 1u);
            *v16 = v24;
            v18 = v24;
            v17 = v16[1];
          }
          v17[(_QWORD)v18] = -47;
          v16[1] = (char *)v16[1] + 1;
          ++*(_DWORD *)(a1 + 208);
        }
        goto LABEL_10;
      default:
        goto LABEL_30;
    }
  }
  v7 = sub_439670(*(__int64 **)(a1 + 104), v3);
  if ( v7 == -1 || *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v7) + 24LL) > v2 )
  {
LABEL_9:
    ++v2;
LABEL_10:
    v8 = *(_QWORD *)(a1 + 328);
    v9 = *(void **)(a1 + 320);
    if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v8 + 1) )
    {
      v11 = sub_481540(a1 + 320, v9, v8 + 1, 2u);
      *(_QWORD *)(a1 + 320) = v11;
      v9 = v11;
      v8 = *(_QWORD *)(a1 + 328);
    }
    *((_WORD *)v9 + v8) = v2;
    ++*(_QWORD *)(a1 + 328);
    return 0;
  }
  else
  {
LABEL_30:
    sub_479F30(0, v3);
    return sub_479EB0(0x38u);
  }
}
