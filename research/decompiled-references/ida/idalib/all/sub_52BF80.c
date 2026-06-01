__int64 __fastcall sub_52BF80(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // r13
  int v9; // edx
  char *v10; // rax
  unsigned __int8 v12; // cl
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 109;
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD *)(a2 + 40);
  v13[1] = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v5 + 1672);
  v9 = sub_64DF40(v8, v6, a3);
  if ( v9 == a3 )
  {
    v3 = 63;
    if ( (unsigned __int8)sub_64DE70(v8, *(_QWORD *)(a2 + 40), v9, (unsigned int)v13, 0, 0, 0, 0) )
    {
      switch ( *(_BYTE *)v13[0] & 0xF )
      {
        case 0xA:
          v3 = 112;
          break;
        case 0xB:
          v3 = 97;
          break;
        case 0xC:
          v3 = 102;
          break;
        case 0xD:
          v12 = *(_BYTE *)v13[0] & 0x30;
          if ( v12 == 32 )
          {
            v3 = 101;
          }
          else if ( v12 > 0x20u )
          {
            v3 = 63;
            if ( v12 == 48 )
              v3 = 116;
          }
          else
          {
            v3 = v12 == 0 ? 115 : 117;
          }
          break;
        case 0xE:
          v3 = 98;
          break;
        default:
          v3 = 46;
          break;
      }
    }
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v10 = (char *)qvector_reserve(a1, 0, 2, 1);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = 2;
  *v10 = v3;
  *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
  return a1;
}
