__int64 __fastcall sub_1509FA0(__int64 a1, unsigned int a2, unsigned __int8 a3, __m128i a4)
{
  unsigned int v5; // eax
  __int64 v6; // rax
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  char v19; // al
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int v23; // [rsp+4h] [rbp-D4h]
  unsigned int v24; // [rsp+8h] [rbp-D0h]
  unsigned int v25; // [rsp+Ch] [rbp-CCh]
  int v26; // [rsp+1Ah] [rbp-BEh] BYREF
  __int16 v27; // [rsp+1Eh] [rbp-BAh]
  _BYTE *v28; // [rsp+20h] [rbp-B8h] BYREF
  char v29; // [rsp+28h] [rbp-B0h]
  __int64 v30; // [rsp+30h] [rbp-A8h]
  int v31; // [rsp+38h] [rbp-A0h]
  __int16 v32; // [rsp+3Ch] [rbp-9Ch]
  __int64 (__fastcall *v33)(__int64); // [rsp+40h] [rbp-98h]
  __int64 v34; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+50h] [rbp-88h]
  __int16 v36; // [rsp+60h] [rbp-78h] BYREF
  void *ptr; // [rsp+68h] [rbp-70h]
  __int64 v38; // [rsp+70h] [rbp-68h]
  _BYTE v39[96]; // [rsp+78h] [rbp-60h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  v32 = 449;
  v23 = v5;
  v28 = (_BYTE *)(a1 + 1952);
  LOBYTE(v5) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v29 = v5;
  v30 = a1;
  v31 = 1507350;
  v33 = sub_146A990;
  v34 = 0;
  v35 = 0;
  v6 = sub_20EB760(a2, 0);
  if ( (unsigned __int8)sub_156A040(&v28, 1625, v6, 0) )
  {
    v12 = 0;
    goto LABEL_12;
  }
  v7 = 0;
  v36 = 0;
  ptr = v39;
  v38 = 0x400000000LL;
  if ( a2 == 49 )
    v7 = sub_1509AA0((const __m128i *)a1, (__int64)&v36, 49, a4);
  v24 = *(_DWORD *)(a1 + 16);
  v11 = sub_14BDAD0(a1, 0, a4);
  if ( v11 > 1 )
  {
    v25 = *(_DWORD *)(a1 + 16);
    v19 = sub_14808E0((__int64)&v28, nullptr, v8, v9, v10, v25);
    v17 = v25;
    if ( v19 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v27 = 449;
  v26 = 1507394;
  sub_15680D0(a1, &v26, 3, 2);
  v12 = 0;
  if ( !(unsigned __int8)sub_14808E0((__int64)&v28, (__int64 *)&v26, v13, v14, v15, v16) )
  {
LABEL_6:
    v17 = HIDWORD(v35);
LABEL_7:
    if ( (v11 <= 1) | a3 || v7 )
    {
      v12 = 0;
    }
    else
    {
      v20 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL);
      if ( a2 == 49 )
      {
        v12 = sub_1B33F80(v21, v20, (unsigned int)&v36, v23, v35, v24, v17);
      }
      else if ( a2 == 109 )
      {
        v12 = sub_1B340A0(v21, v20, v23, (unsigned int)v35, v24, v17);
      }
      else
      {
        v12 = sub_1B34160(v21, v20, v23, (unsigned int)v35, v24, v17);
      }
    }
  }
  if ( ptr != v39 )
    free(ptr);
LABEL_12:
  *v28 = v29;
  return v12;
}
