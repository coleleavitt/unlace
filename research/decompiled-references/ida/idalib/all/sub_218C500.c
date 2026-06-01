__int64 __fastcall sub_218C500(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // rax
  __int64 v8; // rax
  char v10; // al
  unsigned __int64 *v11; // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 *v13; // [rsp+10h] [rbp-38h] BYREF
  char v14; // [rsp+18h] [rbp-30h]

  v6 = HIDWORD(a3);
  sub_216F990((__int64)&v13, (_QWORD *)(a2 + 56), a3, a4, a5, a6);
  if ( (v14 & 1) != 0 )
  {
    v7 = v13;
    v12 |= 1u;
    v13 = nullptr;
    v11 = v7;
  }
  else
  {
    sub_217BF40((__int64)&v11, (_QWORD *)(a2 + 56), v13, v6);
  }
  sub_216FA80((__int64 *)&v13);
  v8 = (__int64)v11;
  if ( (v12 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 8) |= 1u;
    v11 = nullptr;
    *(_QWORD *)a1 = v8;
  }
  else
  {
    v10 = *((_BYTE *)v11 + 4) & 0xF;
    *(_BYTE *)(a1 + 8) &= ~1u;
    switch ( v10 )
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
  sub_218A810((__int64 *)&v11);
  return a1;
}
