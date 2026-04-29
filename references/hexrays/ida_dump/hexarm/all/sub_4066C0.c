__int64 __fastcall sub_4066C0(__int64 a1, __int16 a2, unsigned int a3, unsigned int a4, unsigned int a5, double a6)
{
  int v6; // r12d
  int v7; // ebp
  unsigned __int16 v8; // ax
  int v9; // r14d
  unsigned int v11; // r15d
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  int v15; // eax
  unsigned __int64 *v16; // r8
  unsigned __int8 *v17; // rcx
  unsigned __int8 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-88h]
  int v20; // [rsp+8h] [rbp-80h]
  int v21; // [rsp+8h] [rbp-80h]
  int v22; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v23; // [rsp+10h] [rbp-78h] BYREF
  __int64 v24; // [rsp+18h] [rbp-70h]
  unsigned __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  unsigned __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v7 = a4;
  v8 = *(_WORD *)(a1 + 48);
  v29 = __readfsqword(0x28u);
  v9 = a5;
  if ( v8 <= 0x366u )
  {
    if ( v8 > 0x363u && !*(_BYTE *)(a1 + 65) )
      return 0;
  }
  else if ( v8 == 910 )
  {
    return 0;
  }
  if ( !(unsigned __int8)sub_401880(a1, a3, a4, a5) )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
    v19 = a1 + 24;
    v12 = sub_3FA800(a1, a1 + 24, a1 + 64, v11, a6);
    v13 = v12;
    if ( (a2 & 0x400) != 0 && *(_BYTE *)(a1 + 145) )
    {
      v22 = v12;
      v20 = sub_3FA800(a1, v19, a1 + 104, v11, a6);
      v15 = sub_3FA800(a1, v19, a1 + 144, v11, a6);
      v14 = v20;
      v13 = v22;
    }
    else
    {
      if ( (a2 & 0x100) == 0 )
        v7 = -1;
      if ( (a2 & 0x200) != 0 )
      {
        v21 = v12;
        v15 = sub_3FA800(a1, v19, a1 + 104, v11, a6);
        v13 = v21;
        v14 = v21;
      }
      else
      {
        v14 = v12;
        v15 = -1;
        v9 = -1;
      }
    }
    v24 = 0;
    v23 = 0xFFFFFFFF00000000LL;
    if ( (a2 & 4) == 0 )
      v6 = -1;
    if ( v7 != -1 )
    {
      LOBYTE(v23) = 1;
      LODWORD(v24) = v7;
      HIDWORD(v23) = v14;
    }
    v26 = 0;
    v25 = 0xFFFFFFFF00000000LL;
    if ( v9 == -1 )
    {
      v27 = 0xFFFFFFFF00000000LL;
      v28 = 0;
      if ( v6 == -1 )
      {
        v16 = nullptr;
        v17 = nullptr;
      }
      else
      {
        LODWORD(v28) = v6;
        v17 = nullptr;
        LOBYTE(v27) = 1;
        v16 = &v27;
        HIDWORD(v27) = v13;
      }
    }
    else
    {
      LOBYTE(v25) = 1;
      LODWORD(v26) = v9;
      HIDWORD(v25) = v15;
      v27 = 0xFFFFFFFF00000000LL;
      v28 = 0;
      if ( v6 == -1 )
      {
        v16 = nullptr;
      }
      else
      {
        LOBYTE(v27) = 1;
        HIDWORD(v27) = v13;
        v16 = &v27;
        LODWORD(v28) = v6;
      }
      v17 = (unsigned __int8 *)&v25;
    }
    if ( v7 == -1 )
      v18 = nullptr;
    else
      v18 = (unsigned __int8 *)&v23;
    sub_3F86E0(a1, 0x3Eu, v18, v17, (__int64)v16);
    sub_3FA550(a1);
    sub_11C7E0((__int64)&v27);
    sub_11C7E0((__int64)&v25);
    sub_11C7E0((__int64)&v23);
  }
  return 0;
}
