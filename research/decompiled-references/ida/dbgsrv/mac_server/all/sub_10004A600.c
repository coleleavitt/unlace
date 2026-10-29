/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A600
// Address: 0x000000010004A600

//----- (000000010004A600) ----------------------------------------------------
__int64 __fastcall sub_10004A600(__int64 a1, __int64 a2, int a3)
{
  _BOOL8 v3; // r12
  char i; // al
  int v5; // ecx
  char *v6; // r15
  __int64 *v7; // rax
  __int64 v8; // rax
  char v10[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v11; // [rsp+8h] [rbp-58h] BYREF
  char v12[8]; // [rsp+10h] [rbp-50h] BYREF
  _BOOL8 v13; // [rsp+18h] [rbp-48h]
  char v14[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF

  v12[0] = 1;
  v13 = 0;
  sub_10004B360(a1, (__int64)v12, a3);
  v3 = v13;
  for ( i = v12[0]; ; i = 0 )
  {
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
    if ( v5 != 31868 )
      break;
    v14[0] = 1;
    v15 = 0;
    sub_10004B360(a1, (__int64)v14, 1);
    v3 = (v15 | v3) != 0;
  }
  if ( v5 == 63 )
  {
    v13 = v3;
    v12[0] = i;
    v14[0] = 1;
    v15 = 0;
    v6 = v14;
    sub_10004A600(a1, v14, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL) != 58 )
      sub_10004A4A0(a1);
    v10[0] = 1;
    v11 = 0;
    sub_10004A600(a1, v10, 1);
    v7 = &v15;
    if ( !v13 )
    {
      v7 = &v11;
      v6 = v10;
    }
    v8 = *v7;
    *(_BYTE *)a2 = *v6;
    *(_QWORD *)(a2 + 8) = v8;
  }
  else
  {
    v13 = v3;
    v12[0] = i;
    *(_BYTE *)a2 = i;
    *(_QWORD *)(a2 + 8) = v3;
  }
  return __stack_chk_guard;
}
