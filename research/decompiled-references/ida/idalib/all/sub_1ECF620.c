__int64 __fastcall sub_1ECF620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+8h] [rbp-10h]

  v7 = *(_QWORD **)(a1 + 144);
  switch ( (int)a2 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = (__int64)sub_704780(
                          (__int64 *)(*(_QWORD *)(v7[283] + 80LL) + 72LL),
                          *(_QWORD *)(v7[283] + 80LL),
                          (unsigned int)a2,
                          a4,
                          a5,
                          a6);
      break;
    case 2:
      result = v7[185];
      if ( !result )
      {
        result = sub_A8A250(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 3:
      result = v7[186];
      if ( !result )
      {
        result = sub_A8A1F0(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 4:
      result = v7[187];
      if ( !result )
      {
        result = sub_A8A180(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 5:
      result = v7[188];
      if ( !result )
      {
        result = sub_A89FE0(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 6:
      result = v7[181];
      if ( !result )
      {
        result = sub_A8A380(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 7:
      result = v7[182];
      if ( !result )
      {
        result = sub_A8A330(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 8:
      result = v7[205];
      if ( !result )
      {
        result = sub_A8A2C0(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 9:
      result = v7[183];
      if ( !result )
      {
        result = sub_AA7570(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 10:
      result = v7[2842];
      if ( !result )
      {
        result = sub_AA81B0(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 11:
      result = v7[184];
      if ( !result )
      {
        result = sub_A8A3D0(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 12:
      result = v7[2843];
      break;
    case 13:
      result = v7[284];
      if ( !result )
      {
        result = sub_A7A420((__int64)v7, a2, (unsigned int)a2, a4, a5, a6);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 14:
      result = v7[202];
      if ( !result )
      {
        result = sub_A8A850(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 15:
      result = v7[201];
      if ( !result )
      {
        result = sub_A8A910(v7);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 16:
      result = v7[285];
      if ( !result )
      {
        result = sub_A86FC0(v7, a2, (unsigned int)a2, a4, a5, a6);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 17:
      result = v7[286];
      if ( !result )
      {
        result = sub_A87040(v7, a2, (unsigned int)a2, a4, a5, a6);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 18:
      result = v7[287];
      if ( !result )
      {
        result = sub_A870C0(v7, a2, (unsigned int)a2, a4, a5, a6);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    case 19:
      result = v7[288];
      if ( !result )
      {
        result = sub_A87140(v7, a2, (unsigned int)a2, a4, a5, a6);
        a2 = (unsigned int)a2;
        goto LABEL_6;
      }
      break;
    default:
      result = 0;
LABEL_6:
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = result;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, a2, result);
        result = v10;
      }
      break;
  }
  return result;
}
