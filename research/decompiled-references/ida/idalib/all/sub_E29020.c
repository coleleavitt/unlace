__int64 __fastcall sub_E29020(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v4; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+10h] [rbp-98h] BYREF
  __int16 v12; // [rsp+30h] [rbp-78h]
  _QWORD v13[4]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v14; // [rsp+60h] [rbp-48h]

  v4 = a2[1].m128i_i32[2];
  if ( !v4 )
  {
    if ( !a2[2].m128i_i64[0] )
    {
LABEL_3:
      *(_BYTE *)(a1 + 22) = 114;
      *(_QWORD *)a1 = a1 + 16;
      *(_DWORD *)(a1 + 16) = 1819047278;
      *(_WORD *)(a1 + 20) = 29808;
      *(_QWORD *)(a1 + 8) = 7;
      *(_BYTE *)(a1 + 23) = 0;
      return a1;
    }
    goto LABEL_10;
  }
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
    {
      v6 = a2[2].m128i_i64[1];
      if ( !v6 && !a2->m128i_i64[0] )
        goto LABEL_3;
      if ( v4 == 1 )
      {
        v9 = a2->m128i_i64[0] + v6;
        v11[0] = "&(";
        v11[2] = &v10;
        v12 = 2819;
        v10 = v9;
        v13[0] = v11;
        v13[2] = ")";
        v14 = 770;
        sub_2253560(a1, v13);
        return a1;
      }
    }
LABEL_10:
    sub_E25340((__int64)v13, a2, a3);
    v7 = sub_CFE250((__int64)a2, (__int64)a2);
    goto LABEL_11;
  }
  if ( !a2[2].m128i_i64[0] )
    goto LABEL_3;
  sub_D8A590((__int64)v13, (__int64)a2[2].m128i_i64);
  v8 = *(_QWORD *)(a2[2].m128i_i64[0] + 16);
  if ( (v8 & 4) != 0 )
    BUG();
  v7 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 48);
LABEL_11:
  sub_A53AF0(a1, v13, a3, v7);
  if ( LODWORD(v13[0]) > 1 )
    sub_A4F8E0((int *)v13);
  return a1;
}
