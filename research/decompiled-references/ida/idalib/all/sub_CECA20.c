__int64 __fastcall sub_CECA20(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // r14
  __int64 v12; // r12
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rbx
  unsigned __int8 v17; // r15
  unsigned int v18; // edx
  __int64 v19; // rbp
  __int64 result; // rax
  char v21; // r8
  char v22; // dl
  __int64 v23; // rdi
  char v24; // r9
  __int64 v25; // rsi
  char v26; // al
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // al
  unsigned __int8 v29; // dl
  __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 i; // rbx
  unsigned int v34; // edx
  __int64 v35; // [rsp-10h] [rbp-88h]
  __int64 v38; // [rsp+10h] [rbp-68h]
  unsigned __int8 v41; // [rsp+24h] [rbp-54h]
  unsigned __int8 v47; // [rsp+3Eh] [rbp-3Ah]
  unsigned __int8 v48; // [rsp+3Fh] [rbp-39h]

  v9 = a4;
  v10 = a3;
  v12 = a1;
  v14 = *(_QWORD *)(a8 + 32);
  v15 = *(_QWORD *)(v14 + 8);
  v16 = v15 + 32LL * *(unsigned int *)(v14 + 16);
  if ( v16 != v15 )
  {
    v47 = a3;
    v41 = a3;
    v48 = a4;
    v17 = a4;
    do
    {
      v18 = *(_DWORD *)(v15 + 8);
      v15 += 32;
      sub_CEC720(a1, a2, v41, v17, a5, a6, a7, *(_QWORD *)(v15 - 16), v18, 0);
    }
    while ( v16 != v15 );
    v10 = v47;
    v9 = v48;
    v14 = *(_QWORD *)(a8 + 32);
  }
  v19 = *(_QWORD *)(v14 + 280);
  result = 3LL * *(unsigned int *)(v14 + 288);
  if ( v19 != v19 + 24LL * *(unsigned int *)(v14 + 288) )
  {
    v38 = v19 + 24LL * *(unsigned int *)(v14 + 288);
    do
    {
      if ( *(_BYTE *)(a8 + 60) == 1 || !v14 )
      {
        v22 = a6;
        v21 = a7;
      }
      else
      {
        v21 = *(_BYTE *)(v14 + 648) | a7;
        v22 = a6 & (*(_BYTE *)(v14 + 648) ^ 1);
      }
      v23 = *(_QWORD *)(v19 + 16);
      v24 = *(_BYTE *)(v23 + 60);
      v25 = a2 + *(unsigned int *)(v19 + 8);
      *(_DWORD *)(v25 - 16) = *(_DWORD *)(v19 + 8);
      v26 = *(_BYTE *)(v25 - 12);
      *(_QWORD *)(v25 - 8) = v23;
      *(_BYTE *)(v25 - 12) = (32 * (v21 & 1)) | (2 * (v24 & 1)) & 0xDF | v26 & 0xC9 | (16 * (v22 & 1)) & 0xDF;
      v27 = v10;
      if ( !v10 )
        v27 = *(_BYTE *)(v23 + 56);
      *(_BYTE *)(v25 - 12) = v27 & 1 | *(_BYTE *)(v25 - 12) & 0xFE;
      v28 = v9;
      if ( !v9 )
        v28 = *(_BYTE *)(v23 + 57);
      v29 = a5;
      *(_BYTE *)(v25 - 12) = *(_BYTE *)(v25 - 12) & 0xBF | ((v28 & 1) << 6);
      if ( !a5 )
        v29 = *(_BYTE *)(v23 + 59);
      *(_BYTE *)(v25 - 11) = v29 & 1 | *(_BYTE *)(v25 - 11) & 0xFE;
      result = *(_QWORD *)(v23 + 64);
      if ( result )
      {
        v30 = 1;
        if ( !v21 )
        {
          v31 = *(_QWORD *)(v23 + 32);
          if ( !v31 || v24 == 1 )
            v30 = 0;
          else
            v30 = *(unsigned __int8 *)(v31 + 648);
        }
        ((void (__fastcall *)(__int64, __int64, _QWORD, bool, _QWORD, bool, __int64, __int64))result)(
          a1,
          v25,
          *(_BYTE *)(v25 - 12) & 1,
          (*(_BYTE *)(v25 - 12) & 0x40) != 0,
          *(_BYTE *)(v25 - 11) & 1,
          (*(_BYTE *)(v25 - 12) & 0x10) != 0,
          v30,
          v23);
        v14 = *(_QWORD *)(a8 + 32);
        result = v35;
      }
      v19 += 24;
    }
    while ( v38 != v19 );
    v12 = a1;
  }
  v32 = *(_QWORD *)(v14 + 488);
  for ( i = v32 + 32LL * *(unsigned int *)(v14 + 496);
        v32 != i;
        result = (__int64)sub_CEC720(v12, a2, a3, a4, a5, a6, a7, *(_QWORD *)(v32 - 16), v34, 1) )
  {
    v34 = *(_DWORD *)(v32 + 8);
    v32 += 32;
  }
  return result;
}
