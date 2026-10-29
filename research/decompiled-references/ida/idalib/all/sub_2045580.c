void __fastcall sub_2045580(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int8 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  __int64 v9; // r9
  __int64 v10; // r8
  __m128i v11; // [rsp+0h] [rbp-78h] BYREF
  bool v12; // [rsp+10h] [rbp-68h]
  char v13; // [rsp+11h] [rbp-67h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+60h] [rbp-18h]

  v2 = a1;
  if ( *a1 == 85 )
  {
    v3 = *((_QWORD *)a1 - 4);
    if ( v3 )
    {
      if ( *(_BYTE *)v3 == 13 && *(_QWORD *)(v3 + 24) == *((_QWORD *)a1 + 10) && (*(_BYTE *)(v3 + 33) & 0x20) != 0 )
      {
        v4 = 32LL * (*((_DWORD *)a1 + 1) & 0x7FFFFFF);
        if ( (a1[7] & 0x40) != 0 )
        {
          v5 = *((unsigned __int8 **)a1 - 1);
          a1 = &v5[v4];
        }
        else
        {
          v5 = &a1[-v4];
        }
        for ( ; a1 != v5; v5 += 32 )
        {
          v6 = *(_QWORD *)v5;
          if ( *(_QWORD *)v5 && *(_BYTE *)v6 == 24 && (unsigned int)**(unsigned __int8 **)(v6 + 24) - 5 <= 0x20 )
            break;
        }
      }
    }
  }
  v7 = sub_202ED50(v2);
  v11.m128i_i64[1] = 0;
  v13 = v9;
  v14 = v7;
  v11.m128i_i64[0] = (__int64)&off_2BE5CC8;
  v12 = v7 != 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_2045100(v10, a2, &v11, v8, v10, v9);
  sub_202F1D0(&v11);
}
