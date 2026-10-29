void __fastcall sub_18CAD50(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        double a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  _DWORD *v8; // rax
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 *v14; // rdx
  int v15; // [rsp+Ch] [rbp-BCh]
  unsigned __int64 v16; // [rsp+10h] [rbp-B8h] BYREF
  char v17; // [rsp+18h] [rbp-B0h]
  void *v18; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-A0h]
  __int16 v20; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h]
  unsigned int v22; // [rsp+50h] [rbp-78h] BYREF
  char v23; // [rsp+54h] [rbp-74h]
  __int64 v24[14]; // [rsp+58h] [rbp-70h] BYREF

  v20 = 0;
  v7 = *a2;
  v21 = 0;
  v8 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  v22 = 0;
  v23 &= ~1u;
  if ( (*v8 & 0x20000) == 0 )
  {
    if ( (unsigned __int8)sub_C3F220((unsigned __int64)v8, (__int64)&v20, *(_QWORD *)(a1 + 248), 0, 0, a7) )
    {
      LODWORD(v19) = 64;
      BYTE4(v19) = 0;
      v18 = nullptr;
      v11 = sub_98E2D0(v24, (__int64 *)&v18);
      if ( (unsigned int)v19 > 0x40 && v18 )
      {
        v15 = v11;
        operator delete[](v18);
        v11 = v15;
      }
      if ( !v11 )
      {
        sub_168B9B0((__int64)&v18, a1 + 8, 7330);
        sub_AE9DF0((unsigned __int8 **)&v18, a4, 2u);
        v12 = sub_EEC8C0(*a2 & 0xFFFFFFFFFFFFFFFELL, a4, a5);
        v17 = 1;
        v16 = v12;
        sub_AEC610((__int64 *)&v18, (__int64 *)&v16);
        v13 = *a2 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v13;
        if ( v13 )
        {
          v13 = 1;
          v14 = (__int64 *)&v16;
        }
        else
        {
          v14 = nullptr;
        }
        sub_18CA280(a1, a3, v14, v13, (__int64)&v18);
        if ( v18 && v19 )
          sub_1580C40(v19, (unsigned __int64)v18);
      }
    }
    if ( v22 > 1 )
      sub_A4F8E0((int *)&v22);
  }
}
