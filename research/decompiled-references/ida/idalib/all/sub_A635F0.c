__int64 __fastcall sub_A635F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v15[0] = a3;
  switch ( (unsigned int)sub_F22B40(v15) )
  {
    case 0u:
    case 3u:
      v7 = sub_F22BD0(v15, 0);
      goto LABEL_3;
    case 1u:
      v7 = *(_QWORD *)(sub_F22E60(v15) + 8);
      goto LABEL_3;
    case 2u:
      v11 = *(_QWORD *)(sub_F22E90(v15) + 8);
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = v11;
      sub_B85890(a1 + 16, a5);
      return a1;
    case 4u:
      v8 = *(_QWORD *)(sub_F22F70(v15) + 8);
      if ( (unsigned __int64)-v8 > 0x2D )
      {
        v12 = 56;
        if ( v8 )
        {
LABEL_4:
          *(_QWORD *)a1 = v8;
          *(_DWORD *)(a1 + 8) = a4;
          sub_B85890(a1 + 16, a5);
          return a1;
        }
      }
      else
      {
        v12 = 16 * (3 - v8) + 8;
      }
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)a1 = (a2 + v12 + 17536) | 6;
      return a1;
    case 5u:
      v13 = sub_F22ED0(v15);
      v7 = sub_F221B0(v13);
      goto LABEL_3;
    case 6u:
      v14 = sub_F22F10(v15);
      v7 = sub_F22180(v14);
      goto LABEL_3;
    case 7u:
      v7 = sub_F22F90(v15);
LABEL_3:
      v8 = *(_QWORD *)(v7 + 40);
      goto LABEL_4;
    case 8u:
      v10 = sub_F23230(v15);
      sub_A635F0(a1, a2, *(_QWORD *)(v10 + 16), a4);
      return a1;
  }
}
