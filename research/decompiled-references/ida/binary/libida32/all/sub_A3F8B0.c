__int64 __fastcall sub_A3F8B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
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
  switch ( (unsigned int)sub_EFEE00(v15) )
  {
    case 0u:
    case 3u:
      v7 = sub_EFEE90(v15, 0);
      goto LABEL_3;
    case 1u:
      v7 = *(_QWORD *)(sub_EFF120(v15) + 8);
      goto LABEL_3;
    case 2u:
      v11 = *(_QWORD *)(sub_EFF150(v15) + 8);
      *(_DWORD *)(a1 + 8) = a4;
      *(_QWORD *)a1 = v11;
      sub_B61B50(a1 + 16, a5);
      return a1;
    case 4u:
      v8 = *(_QWORD *)(sub_EFF230(v15) + 8);
      if ( (unsigned __int64)-v8 > 0x2D )
      {
        v12 = 56;
        if ( v8 )
        {
LABEL_4:
          *(_QWORD *)a1 = v8;
          *(_DWORD *)(a1 + 8) = a4;
          sub_B61B50(a1 + 16, a5);
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
      v13 = sub_EFF190(v15);
      v7 = sub_EFE470(v13);
      goto LABEL_3;
    case 6u:
      v14 = sub_EFF1D0(v15);
      v7 = sub_EFE440(v14);
      goto LABEL_3;
    case 7u:
      v7 = sub_EFF250(v15);
LABEL_3:
      v8 = *(_QWORD *)(v7 + 40);
      goto LABEL_4;
    case 8u:
      v10 = sub_EFF4F0(v15);
      sub_A3F8B0(a1, a2, *(_QWORD *)(v10 + 16), a4);
      return a1;
  }
}

