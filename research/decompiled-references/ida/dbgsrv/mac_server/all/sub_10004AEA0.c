/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004AEA0
// Address: 0x000000010004AEA0

//----- (000000010004AEA0) ----------------------------------------------------
__int64 __fastcall sub_10004AEA0(__int64 a1, __int64 a2, int a3)
{
  bool v3; // al
  unsigned int v4; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char v10[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]

  sub_10004ACB0(a1, a2, a3);
  while ( 1 )
  {
    v10[0] = 1;
    v11 = 0;
    v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
    if ( v4 > 0x3C3C )
      break;
    if ( v4 == 60 )
    {
      sub_10004ACB0(a1, (__int64)v10, 1);
      v7 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 == 1 || v10[0] == 1 )
        v3 = v7 < v11;
      else
        v3 = (__int64)v7 < (__int64)v11;
    }
    else
    {
      if ( v4 != 62 )
        return __stack_chk_guard;
      sub_10004ACB0(a1, (__int64)v10, 1);
      v5 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 == 1 || v10[0] == 1 )
        v3 = v5 > v11;
      else
        v3 = (__int64)v5 > (__int64)v11;
    }
LABEL_3:
    *(_QWORD *)(a2 + 8) = v3;
    *(_BYTE *)a2 = 0;
  }
  if ( v4 == 15421 )
  {
    sub_10004ACB0(a1, (__int64)v10, 1);
    v8 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 == 1 || v10[0] == 1 )
      v3 = v8 <= v11;
    else
      v3 = (__int64)v8 <= (__int64)v11;
    goto LABEL_3;
  }
  if ( v4 == 15933 )
  {
    sub_10004ACB0(a1, (__int64)v10, 1);
    v6 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 == 1 || v10[0] == 1 )
      v3 = v6 >= v11;
    else
      v3 = (__int64)v6 >= (__int64)v11;
    goto LABEL_3;
  }
  return __stack_chk_guard;
}
