unsigned __int64 __fastcall sub_1A4A210(__int64 a1, _BYTE *a2, size_t a3, double a4, double a5)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  size_t v10; // rax
  __int64 v12; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD *v13; // [rsp+8h] [rbp-D0h]
  __int64 v14; // [rsp+10h] [rbp-C8h]
  _OWORD v15[5]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-70h]
  __int64 v17; // [rsp+70h] [rbp-68h]
  __int64 v18; // [rsp+78h] [rbp-60h]
  int v19; // [rsp+80h] [rbp-58h]
  __int64 v20; // [rsp+88h] [rbp-50h] BYREF
  __int128 v21; // [rsp+90h] [rbp-48h]
  __int64 v22; // [rsp+A0h] [rbp-38h]

  v6 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), a2, a3);
  v13 = v15;
  v14 = 0x800000000LL;
  v15[4] = 0;
  v18 = v6;
  v12 = 0;
  v16 = 0;
  v17 = a1;
  v19 = 0;
  sub_B85890(&v20, v6);
  v21 = 0;
  v22 = 0x101010000LL;
  sub_1A395A0((__int64)&v12);
  sub_1A49A10(a1, (__int64)&v12, *(__int64 **)(a1 + 192), 0, 0, v7, 0.0, a5);
  if ( (_DWORD)v14
    && (_DWORD)v12 == 2
    && (v8 = sub_16C47B0(*v13 & 0xFFFFFFFFFFFFFFF8LL), (*(_BYTE *)(v8 + 28) & 0x7Fu) - 64 <= 2) )
  {
    v9 = sub_A70A40(*(_QWORD *)(a1 + 248), v8, 0);
  }
  else
  {
    v10 = j__strlen("typedef");
    v9 = sub_1A41570(a1, "typedef", v10, a2, a3);
  }
  sub_169D230((__int64)&v12);
  return v9;
}
