__int64 __fastcall sub_19D27B0(_QWORD *a1, int a2, __int16 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  __int64 v19; // [rsp+8h] [rbp-F0h]
  __int64 v20; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD *v21; // [rsp+18h] [rbp-E0h]
  __int64 v22; // [rsp+20h] [rbp-D8h]
  _OWORD v23[5]; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-80h]
  __int64 v25; // [rsp+80h] [rbp-78h]
  __int64 v26; // [rsp+88h] [rbp-70h]
  int v27; // [rsp+90h] [rbp-68h]
  __int64 v28; // [rsp+98h] [rbp-60h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-48h]

  v5 = (_QWORD *)sub_168B6C0((__int64)a1);
  v10 = v5[189];
  v11 = v5;
  v12 = v5[2395];
  if ( v10 )
    goto LABEL_2;
  v15 = sub_6F3470(v5[2188], "BOOL", 4u);
  v16 = *a1;
  v21 = v23;
  v22 = 0x800000000LL;
  v25 = v16;
  v23[4] = 0;
  v26 = v15;
  v20 = 0;
  v24 = 0;
  v27 = a2;
  sub_B85890(&v28, v15);
  v29 = 0;
  v30 = 0x101010000LL;
  sub_1A395A0(&v20);
  if ( (unsigned __int8)sub_1A49A10(*a1, &v20, *(_QWORD *)(*a1 + 608LL), 0, 0) && (_DWORD)v20 == 2 )
  {
    v17 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = *(_BYTE *)(v17 + 28) & 0x7F;
    if ( (unsigned int)v18 - 53 <= 1 || ((v18 + 52) & 0x7Fu) <= 1 )
    {
      v17 = sub_B72ED0(v17);
      v18 = *(_BYTE *)(v17 + 28) & 0x7F;
    }
    if ( v18 == 64 )
      v11[189] = v17;
  }
  sub_169D230((__int64)&v20);
  v10 = v11[189];
  if ( v10 )
  {
LABEL_2:
    v13 = *(_QWORD *)(v10 + 48);
    if ( v13 )
      v12 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v12 = sub_A7AA70((__int64)v11, v10, v6, v7, v8, v9);
  }
  result = sub_EEE9A0(24, v11, 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x28;
  if ( unk_2CD7484 )
  {
    v19 = result;
    sub_EE9B50(40);
    result = v19;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v12;
  *(_BYTE *)(result + 16) = a3 == 122;
  *(_DWORD *)(result + 20) = a2;
  return result;
}
