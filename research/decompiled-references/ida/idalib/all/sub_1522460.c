void __fastcall sub_1522460(
        __int64 a1,
        int a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        unsigned int a7)
{
  const char *v11; // rbx
  unsigned __int8 *v12[10]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int8 *v13[17]; // [rsp+50h] [rbp-88h] BYREF

  sub_1564820(v13, a1, a7, 1850);
  sub_AEC220(v13, a5, a6);
  sub_AEC220(v13, a3, a4);
  sub_FC70F0((__int64)v12, (__int64)v13);
  sub_AEA040((__int64)v13);
  switch ( a2 )
  {
    case 4:
      v11 = "'is_member'";
      goto LABEL_3;
    case 10:
      v11 = "'is_instance'";
      goto LABEL_3;
    case 14:
      v11 = "'unless(is_union)'";
      goto LABEL_3;
    case 16:
      v11 = "'functionType'";
      goto LABEL_3;
    case 19:
      v11 = "'is_thread_local', 'is_global', 'is_local', 'is_parameter', 'unless(is_parameter)'";
LABEL_3:
      sub_1520C80(v12, 1);
      sub_1520A40(v12, (__int64)v11);
      break;
    default:
      sub_1520C80(v12, 0);
      break;
  }
  sub_AEA040((__int64)v12);
}
