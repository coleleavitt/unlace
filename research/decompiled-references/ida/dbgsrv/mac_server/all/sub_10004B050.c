/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B050
// Address: 0x000000010004B050

//----- (000000010004B050) ----------------------------------------------------
__int64 __fastcall sub_10004B050(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  bool v4; // al
  int v5; // eax
  __int64 v6; // r13
  char v7; // al
  bool v8; // al
  int v9; // ecx
  __int64 v10; // r15
  char i; // al
  bool v12; // al
  int v13; // ecx
  __int64 v14; // r15
  __int64 j; // rbx
  int v16; // eax
  char v18[8]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v19; // [rsp+18h] [rbp-58h]
  char v20[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  char v22[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]

  v3 = a2;
  sub_10004AEA0(a1, a2, a3);
  while ( 1 )
  {
    v22[0] = 1;
    v23 = 0;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
    if ( v5 == 8509 )
    {
      sub_10004AEA0(a1, (__int64)v22, 1);
      v4 = *(_QWORD *)(a2 + 8) != v23;
      goto LABEL_3;
    }
    if ( v5 != 15677 )
      break;
    sub_10004AEA0(a1, (__int64)v22, 1);
    v4 = *(_QWORD *)(a2 + 8) == v23;
LABEL_3:
    *(_QWORD *)(a2 + 8) = v4;
    *(_BYTE *)a2 = 0;
  }
  if ( (_WORD)v5 != 38 )
    goto LABEL_16;
  while ( 2 )
  {
    v20[0] = 1;
    v21 = 0;
    sub_10004AEA0(a1, (__int64)v20, 1);
    v6 = v21;
    v7 = v20[0];
    while ( 2 )
    {
      v22[0] = 1;
      v23 = 0;
      v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
      if ( v9 == 8509 )
      {
        sub_10004AEA0(a1, (__int64)v22, 1);
        v8 = v6 != v23;
LABEL_12:
        v6 = v8;
        v7 = 0;
        continue;
      }
      break;
    }
    if ( v9 == 15677 )
    {
      sub_10004AEA0(a1, (__int64)v22, 1);
      v8 = v6 == v23;
      goto LABEL_12;
    }
    v21 = v6;
    v20[0] = v7;
    *(_QWORD *)(a2 + 8) &= v6;
    LOWORD(v5) = *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL);
    if ( (_WORD)v5 == 38 )
      continue;
    break;
  }
LABEL_16:
  if ( (_WORD)v5 == 94 )
  {
LABEL_20:
    v18[0] = 1;
    v19 = 0;
    sub_10004AEA0(a1, (__int64)v18, 1);
    v10 = v19;
    for ( i = v18[0]; ; i = 0 )
    {
      v22[0] = 1;
      v23 = 0;
      v13 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
      if ( v13 == 8509 )
      {
        sub_10004AEA0(a1, (__int64)v22, 1);
        v12 = v10 != v23;
      }
      else
      {
        if ( v13 != 15677 )
        {
          v19 = v10;
          v18[0] = i;
          if ( (_WORD)v13 == 38 )
          {
            v14 = v19;
            do
            {
              v20[0] = 1;
              v21 = 0;
              sub_10004AEA0(a1, (__int64)v20, 1);
              for ( j = v21; ; j = j == v23 )
              {
                while ( 1 )
                {
                  v22[0] = 1;
                  v23 = 0;
                  v16 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
                  if ( v16 != 8509 )
                    break;
                  sub_10004AEA0(a1, (__int64)v22, 1);
                  j = j != v23;
                }
                if ( v16 != 15677 )
                  break;
                sub_10004AEA0(a1, (__int64)v22, 1);
              }
              v14 &= j;
            }
            while ( (_WORD)v16 == 38 );
            v19 = v14;
            v3 = a2;
          }
          else
          {
            v14 = v19;
          }
          *(_QWORD *)(v3 + 8) ^= v14;
          if ( *(_WORD *)(*(_QWORD *)(a1 + 496) + 24LL) != 94 )
            return __stack_chk_guard;
          goto LABEL_20;
        }
        sub_10004AEA0(a1, (__int64)v22, 1);
        v12 = v10 == v23;
      }
      v10 = v12;
    }
  }
  return __stack_chk_guard;
}
