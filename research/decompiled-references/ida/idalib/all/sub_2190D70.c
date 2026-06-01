__int64 __fastcall sub_2190D70(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // rax
  __int64 v10; // rax
  char v12; // al
  unsigned int *v13; // [rsp+0h] [rbp-48h] BYREF
  char v14; // [rsp+8h] [rbp-40h]
  unsigned int *v15; // [rsp+10h] [rbp-38h] BYREF
  char v16; // [rsp+18h] [rbp-30h]

  v6 = HIDWORD(a3);
  sub_216EEC0((__int64)&v15, (_QWORD *)(a2 + 56), a3, a4, a5, a6);
  if ( (v16 & 1) != 0 )
  {
    v9 = v15;
    v14 |= 1u;
    v15 = nullptr;
    v13 = v9;
  }
  else
  {
    sub_21729C0((__int64)&v13, (_QWORD *)(a2 + 56), v15, (unsigned int)v6, v7, v8);
  }
  sub_216EFC0((__int64 *)&v15);
  v10 = (__int64)v13;
  if ( (v14 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 8) |= 1u;
    v13 = nullptr;
    *(_QWORD *)a1 = v10;
  }
  else
  {
    v12 = v13[3] & 0xF;
    *(_BYTE *)(a1 + 8) &= ~1u;
    switch ( v12 )
    {
      case 0:
        *(_DWORD *)a1 = 0;
        break;
      case 1:
      case 5:
        *(_DWORD *)a1 = 2;
        break;
      case 2:
        *(_DWORD *)a1 = 5;
        break;
      case 3:
        *(_DWORD *)a1 = 3;
        break;
      case 4:
        *(_DWORD *)a1 = 4;
        break;
      default:
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 1;
        break;
    }
  }
  sub_218B120((__int64 *)&v13);
  return a1;
}
