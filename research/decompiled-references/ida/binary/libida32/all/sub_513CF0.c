__int64 __fastcall sub_513CF0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r13
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // r14
  char *v9; // rax
  unsigned __int8 v11; // cl
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 109;
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD *)(a2 + 40);
  v12[1] = __readfsqword(0x28u);
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 1480);
  if ( (_DWORD)a3 == (unsigned int)sub_630920(v8, v6, a3) )
  {
    v3 = 63;
    if ( (unsigned __int8)sub_630850(v8, *(_QWORD *)(a2 + 40), v7, (unsigned int)v12, 0, 0, 0, 0) )
    {
      switch ( *(_BYTE *)v12[0] & 0xF )
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
          v11 = *(_BYTE *)v12[0] & 0x30;
          if ( v11 == 32 )
          {
            v3 = 101;
          }
          else if ( v11 > 0x20u )
          {
            v3 = 63;
            if ( v11 == 48 )
              v3 = 116;
          }
          else
          {
            v3 = v11 == 0 ? 115 : 117;
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
  v9 = (char *)qvector_reserve(a1, 0, 2, 1);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = 2;
  *v9 = v3;
  *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
  return a1;
}

