__int64 __fastcall sub_6CB000(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v15[0] = a3;
  switch ( (unsigned int)sub_B03960(v15) )
  {
    case 0u:
    case 3u:
      v5 = sub_B03A00(v15, 0);
      goto LABEL_3;
    case 1u:
      v5 = *(_QWORD *)(sub_B03D80(v15) + 8);
      goto LABEL_3;
    case 2u:
      v8 = *(_QWORD *)(sub_B03DC0(v15) + 8);
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = v8;
      sub_792560(a1 + 16);
      return a1;
    case 4u:
      v9 = sub_B03EA0(v15);
      if ( (*(_BYTE *)(v9 + 8) & 4) != 0 )
      {
        v10 = *(int *)(v9 + 16);
        *(_DWORD *)(a1 + 8) = a4;
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)a1 = (a2 + 16 * v10 + 17432) | 6;
      }
      else
      {
        v14 = *(_QWORD *)(v9 + 16);
        *(_DWORD *)(a1 + 8) = a4;
        *(_QWORD *)a1 = v14;
        sub_792560(a1 + 16);
      }
      goto LABEL_4;
    case 5u:
      v11 = sub_B03E00(v15);
      v5 = sub_B03230(v11);
      goto LABEL_3;
    case 6u:
      v12 = sub_B03E40(v15);
      v5 = sub_B03200(v12);
      goto LABEL_3;
    case 7u:
      v5 = sub_B03EC0(v15);
LABEL_3:
      v6 = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = v6;
      sub_792560(a1 + 16);
LABEL_4:
      result = a1;
      break;
    case 8u:
      v13 = sub_B03F50(v15);
      sub_6CB000(a1, a2, *(_QWORD *)(v13 + 16), a4);
      result = a1;
      break;
  }
  return result;
}

