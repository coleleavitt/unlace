/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006110
// Address: 0x0000000100006110

//----- (0000000100006110) ----------------------------------------------------
__int64 __fastcall sub_100006110(__int64 a1)
{
  void **v2; // rsi
  void **v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // r14
  _QWORD *v6; // r15
  unsigned __int64 v7; // r12
  void **v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  *(_DWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 852) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  *(_DWORD *)(a1 + 860) = 4;
  sub_10001A080(a1 + 864);
  sub_100006420(a1);
  sub_10000C7D0(a1 + 1208, *(_QWORD **)(a1 + 1216));
  *(_QWORD *)(a1 + 1208) = a1 + 1216;
  *(_OWORD *)(a1 + 1216) = 0;
  sub_10000C700(a1 + 1136, *(_QWORD **)(a1 + 1144));
  *(_QWORD *)(a1 + 1136) = a1 + 1144;
  *(_OWORD *)(a1 + 1144) = 0;
  sub_10000C790(a1 + 1160, *(_QWORD **)(a1 + 1168));
  *(_QWORD *)(a1 + 1160) = a1 + 1168;
  *(_OWORD *)(a1 + 1168) = 0;
  v2 = *(void ***)(a1 + 128);
  v3 = *(void ***)(a1 + 136);
  if ( v3 == v2 )
  {
    v6 = (_QWORD *)(a1 + 160);
    v3 = *(void ***)(a1 + 128);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 152) / 0x38uLL;
    v5 = (__int64)v2[v4] + 72 * (*(_QWORD *)(a1 + 152) % 0x38uLL);
    v6 = (_QWORD *)(a1 + 160);
    v7 = (unsigned __int64)v2[(*(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152)) / 0x38uLL]
       + 72 * ((*(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152)) % 0x38uLL);
    if ( v5 != v7 )
    {
      v8 = &v2[v4];
      do
      {
        free_debug_event(v5);
        v5 += 72;
        if ( v5 - (_QWORD)*v8 == 4032 )
        {
          v5 = (__int64)v8[1];
          ++v8;
        }
      }
      while ( v5 != v7 );
      v2 = *(void ***)(a1 + 128);
      v3 = *(void ***)(a1 + 136);
    }
  }
  *v6 = 0;
  v9 = v3 - v2;
  if ( v9 >= 3 )
  {
    do
    {
      operator delete(*v2);
      v10 = *(_QWORD *)(a1 + 136);
      v2 = (void **)(*(_QWORD *)(a1 + 128) + 8LL);
      *(_QWORD *)(a1 + 128) = v2;
      v9 = (v10 - (__int64)v2) >> 3;
    }
    while ( v9 > 2 );
  }
  if ( v9 == 1 )
  {
    v11 = 28;
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_16;
    v11 = 56;
  }
  *(_QWORD *)(a1 + 152) = v11;
LABEL_16:
  *(_WORD *)(a1 + 1232) = 0;
  *(_BYTE *)(a1 + 1234) = 0;
  *(_QWORD *)(a1 + 1072) = -1;
  *(_QWORD *)(a1 + 1080) = 0;
  v12 = *(void **)(a1 + 1088);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 1088) = 0;
    *(_QWORD *)(a1 + 1104) = 0;
  }
  v13 = *(void **)(a1 + 1112);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 1112) = 0;
    *(_QWORD *)(a1 + 1128) = 0;
  }
  sub_10000A050(a1 + 432, *(_QWORD **)(a1 + 440));
  *(_QWORD *)(a1 + 432) = a1 + 440;
  *(_OWORD *)(a1 + 440) = 0;
  v14 = *(void **)(a1 + 1184);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 1184) = 0;
    *(_QWORD *)(a1 + 1200) = 0;
  }
  return sub_100061080(a1);
}
