void __fastcall sub_18116D0(__int64 a1, char *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  _DWORD *v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  int v11; // eax
  __m128i *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdi
  __int64 (*v18)(void); // rax
  char v19; // al
  _DWORD *v20; // rdi
  unsigned __int8 (*v21)(void); // rax
  int v22; // eax
  unsigned int v23; // edx
  __int64 *v24; // rsi
  unsigned int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rax
  int v30; // eax
  _BYTE v31[168]; // [rsp+0h] [rbp-A8h] BYREF

  LOBYTE(v8) = a2[28] & 0x7F;
  if ( (_BYTE)v8 == 61 )
  {
    v20 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
    v21 = *(unsigned __int8 (**)(void))(*(_QWORD *)v20 + 416LL);
    if ( (char *)v21 == (char *)sub_102B960 )
    {
      v22 = v20[65];
      if ( v22 == 15 )
      {
        v30 = v20[66];
        if ( (unsigned int)(v30 - 27) > 1 && v30 )
          goto LABEL_8;
      }
      else if ( v20[62] != 38 || (v22 != 24 || v20[64] != 3) && (v22 != 25 || v20[64] != 3) )
      {
        goto LABEL_8;
      }
    }
    else if ( !v21() )
    {
      LOBYTE(v8) = a2[28] & 0x7F;
      goto LABEL_2;
    }
    v23 = a3[1].m128i_u32[2];
    v24 = (__int64 *)(a1 + 8);
    v25 = 127;
LABEL_35:
    sub_168B9F0((__int64)v31, v24, v23, v25, 0);
    sub_15DD120((__int64)v31, (__int64)a3);
    sub_15F7200(v31);
    return;
  }
LABEL_2:
  v8 = (unsigned __int8)v8;
  if ( (unsigned int)(unsigned __int8)v8 - 34 <= 5 && (a2[82] & 1) != 0 && *(_WORD *)(a3[4].m128i_i64[1] + 8) == 113 )
  {
    v17 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
    v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 416LL);
    if ( (char *)v18 == (char *)sub_102B960 )
      v19 = sub_102B960(v17);
    else
      v19 = v18();
    if ( !v19 )
    {
      v23 = a3[1].m128i_u32[2];
      v24 = (__int64 *)(a1 + 8);
      v25 = 6572;
      goto LABEL_35;
    }
    v8 = a2[28] & 0x7F;
  }
  if ( (unsigned int)(v8 - 35) <= 3 )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
    v10 = *(unsigned __int8 (**)(void))(*(_QWORD *)v9 + 416LL);
    if ( (char *)v10 == (char *)sub_102B960 )
    {
      v11 = v9[65];
      if ( v11 == 15 )
      {
        v26 = v9[66];
        if ( (unsigned int)(v26 - 27) > 1 && v26 )
          goto LABEL_8;
      }
      else if ( v9[62] != 38 || (v11 != 24 || v9[64] != 3) && (v11 != 25 || v9[64] != 3) )
      {
        goto LABEL_8;
      }
    }
    else if ( !v10() )
    {
      goto LABEL_8;
    }
    v27 = *(_QWORD *)(sub_B8C1B0((__int64)(a2 + 72)) + 16);
    v28 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v27 & 4) != 0 )
      v28 = (_QWORD *)*v28;
    if ( !v28 )
      BUG();
    v29 = v28[8];
    if ( v29 && (*(_BYTE *)(v29 + 10) & 0x20) != 0 )
    {
      v23 = a3[1].m128i_u32[2];
      v24 = (__int64 *)(a1 + 8);
      v25 = 3174;
      goto LABEL_35;
    }
  }
LABEL_8:
  if ( *(_WORD *)(a3[4].m128i_i64[1] + 8) == 111 )
    v12 = sub_1811220(a1, a2, a3, a4, a5, a6);
  else
    v12 = sub_180D3A0(a1, (__int64)a2, a3, a4, a5, a6);
  if ( v12 )
    sub_B8CC60((__int64)a2, (__int64)v12, v13, v14, v15, v16);
}
