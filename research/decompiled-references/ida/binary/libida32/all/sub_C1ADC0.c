__int64 __fastcall sub_C1ADC0(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int16 *v14; // rsi
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  char v18; // al
  unsigned int v19; // eax
  char v20; // [rsp+Fh] [rbp-439h] BYREF
  void *v21; // [rsp+10h] [rbp-438h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-430h]
  char v23; // [rsp+1Ch] [rbp-42Ch]
  __int16 v24; // [rsp+20h] [rbp-428h] BYREF
  __int64 v25; // [rsp+28h] [rbp-420h]
  __int16 v26; // [rsp+30h] [rbp-418h] BYREF
  __int64 v27; // [rsp+38h] [rbp-410h]
  unsigned int v28; // [rsp+40h] [rbp-408h] BYREF
  char v29; // [rsp+44h] [rbp-404h]
  __int64 v30; // [rsp+48h] [rbp-400h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-3F8h]
  char v32; // [rsp+54h] [rbp-3F4h]
  __m128 v33[60]; // [rsp+80h] [rbp-3C8h] BYREF

  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v7 = *(_QWORD *)(a3 + 2320);
  v22 = 1;
  v21 = nullptr;
  v23 = 0;
  if ( (*(_BYTE *)(v7 + 1) & 0x10) != 0 )
  {
    if ( (unsigned __int8)sub_C18AD0(a3, a2, (__int64)&v21, a4) )
    {
      v19 = v22;
      *(_BYTE *)(a1 + 16) = 1;
      *(_DWORD *)(a1 + 8) = v19;
      *(_QWORD *)a1 = v21;
      *(_BYTE *)(a1 + 12) = v23;
      return a1;
    }
  }
  else if ( (unsigned __int8)sub_C1AD00(a2, a3, a4, (__int64)a4, a5, a6) )
  {
    v24 = 0;
    v26 = 0;
    v29 &= ~1u;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    sub_BEEB30(v33, a3, (__int64)&v24, 3);
    v10 = *(_QWORD *)(a2 + 8);
    v33[0].m128_i8[8] = 1;
    sub_BF86C0(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL), a3, v11, v12, v13);
    v14 = &v26;
    if ( !(unsigned __int8)sub_BF9D30(a2, (__int64)&v26, a3, &v20, v15, v16) )
    {
      v14 = (__int16 *)a2;
      sub_C167C0((__int64)v33, a2, &v28);
    }
    v17 = v31;
    *(_DWORD *)(a1 + 8) = v31;
    if ( v17 > 0x40 )
    {
      v14 = (__int16 *)&v30;
      sub_21E17D0(a1);
    }
    else
    {
      *(_QWORD *)a1 = v30;
    }
    v18 = v32;
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 12) = v18;
    sub_C00040((__int64)v33, (__int64)v14);
    if ( v28 > 1 )
      sub_A2BBA0((int *)&v28);
    goto LABEL_7;
  }
  *(_BYTE *)(a1 + 16) = 0;
LABEL_7:
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return a1;
}

