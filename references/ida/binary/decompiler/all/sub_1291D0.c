__int64 __fastcall sub_1291D0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  char v6; // r15
  char v7; // r14
  __int16 v8; // r13
  unsigned __int64 v9; // r8
  char v10; // al
  int v11; // eax
  unsigned __int64 v13; // [rsp+0h] [rbp-80h]
  __int64 v15; // [rsp+8h] [rbp-78h]
  unsigned __int8 v16; // [rsp+18h] [rbp-68h]
  int v18; // [rsp+24h] [rbp-5Ch]
  __int64 v19; // [rsp+28h] [rbp-58h]
  unsigned __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v21 = 0;
  v20 = 0xFFFFFFFF00000000LL;
  sub_123DE0((__int64)&v20, (unsigned __int8 *)a1);
  v6 = v20;
  v7 = BYTE1(v20);
  v8 = WORD1(v20);
  v18 = HIDWORD(v20);
  v9 = v20;
  v19 = v21;
  if ( a4 == -1 || (v13 = v20, v10 = sub_128630(a1 + 64, a2, a4, a5), v9 = v13, v10) )
  {
    v11 = *(_DWORD *)(a1 + 36);
    v6 = *(_BYTE *)(a1 + 32);
    v7 = *(_BYTE *)(a1 + 33);
    v8 = *(_WORD *)(a1 + 34);
    *(_QWORD *)(a1 + 32) = v9;
    v18 = v11;
    v15 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v19;
    sub_11A960(a1 + 48);
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = a3;
    if ( a4 != -1 )
      sub_1595B0(a1, a2, 0, 0, 0, 0, 0);
    v19 = v15;
    v10 = 1;
  }
  v16 = v10;
  LOBYTE(v20) = v6;
  HIDWORD(v20) = v18;
  BYTE1(v20) = v7;
  v21 = v19;
  WORD1(v20) = v8;
  sub_11A960((__int64)&v20);
  return v16;
}
