__int64 __fastcall sub_7223D0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // edx
  __int64 v9; // rdi
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  int *vars40; // [rsp+48h] [rbp+40h]

  vars40 = &vars0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  vars28 = a1;
  v11 = &off_49DA2C8;
  vars8 = 0;
  vars0 = 0;
  vars20 = 0;
  vars24 = 1;
  vars18 = 0;
  sub_2623850(&v11, 0, 0, 0, a5, a6);
  sub_5FF0F0((__int64)&v11, "(");
  v8 = *(_DWORD *)(a2 + 40);
  switch ( v8 )
  {
    case 0:
      sub_5FF0F0((__int64)&v11, "enable");
      break;
    case 2:
      sub_AE6C50(*(_QWORD *)(a2 + 48), (int)&vars0, 0, a3, 0, 0, "\n", 1u);
      break;
    case 3:
    case 4:
      v9 = *(_QWORD *)(a2 + 48);
      if ( v9 )
      {
        sub_AE6C50(v9, (int)&vars0, 0, a3, 0, 0, "\n", 1u);
        if ( *(_DWORD *)(a2 + 40) == 4 )
          sub_5FF0F0((__int64)&vars0, ", scalable");
      }
      else if ( v8 == 4 )
      {
        sub_5FF0F0((__int64)&v11, "scalable");
      }
      else
      {
        sub_5FF0F0((__int64)&v11, "fixed");
      }
      break;
    case 5:
      sub_5FF0F0((__int64)&v11, "assume_safety");
      break;
    case 6:
      sub_5FF0F0((__int64)&v11, "full");
      break;
    default:
      sub_5FF0F0((__int64)&vars0, "disable");
      break;
  }
  sub_5FF0F0((__int64)&vars0, ")");
  v11 = &off_49DA2C8;
  sub_2623770(&vars0);
  return a1;
}

