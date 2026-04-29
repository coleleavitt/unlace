__int64 __fastcall sub_3EAF90(__int64 a1, int a2, int a3, int a4)
{
  int v5; // eax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  int v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v5 = *(unsigned __int16 *)(a1 + 70);
  v17 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 832);
  v14 = a4;
  v8 = *(_DWORD *)(v7 + 472) + v5;
  v11 = 0x100000001LL;
  v13 = 0x100000001LL;
  v15 = 0x100000001LL;
  v12 = a3;
  v16 = v8;
  switch ( a2 )
  {
    case 23:
      goto LABEL_7;
    case 24:
      sub_1D2850(a1, 7, (unsigned __int8 *)&v13, nullptr, (unsigned __int8 *)&v13);
LABEL_7:
      sub_1D2850(a1, 20, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15);
      goto LABEL_4;
    case 25:
      sub_1D2850(a1, 21, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15);
      goto LABEL_10;
    case 26:
      sub_1D2850(a1, 20, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15);
      goto LABEL_10;
    case 27:
      sub_1D2850(a1, 19, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15);
LABEL_10:
      sub_1D2850(a1, 6, (unsigned __int8 *)&v15, nullptr, (unsigned __int8 *)&v15);
      goto LABEL_4;
    case 28:
      goto LABEL_3;
    case 29:
      sub_1D2850(a1, 7, (unsigned __int8 *)&v13, nullptr, (unsigned __int8 *)&v13);
LABEL_3:
      sub_1D2850(a1, 19, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15);
      goto LABEL_4;
    case 30:
      sub_1D2850(a1, 21, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13, (unsigned __int8 *)&v15);
LABEL_4:
      v9 = 1;
      break;
    default:
      v9 = 0;
      break;
  }
  sub_119360((__int64)&v15);
  sub_119360((__int64)&v13);
  sub_119360((__int64)&v11);
  return v9;
}
