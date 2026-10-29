unsigned __int64 __fastcall sub_46D340(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  int v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v22 = __readfsqword(0x28u);
  if ( a3 != a2[1] )
    sub_46CE40(a2, a3);
  if ( a3 > 0 )
  {
    v16 = v4;
    v19 = v4 + 4 * v3;
    v17 = 0;
    do
    {
      v6 = 0;
      v7 = *(_QWORD *)(switch_dbctx(*(int *)(v16 + 16)) + 1480);
      v8 = (__int64 *)(*a2 + v17);
      v9 = sub_440320(v7);
      if ( v9 )
      {
        do
        {
          while ( !(unsigned __int8)sub_4403B0(v7, &v20, nullptr, &v21, v6) )
          {
            if ( v9 == ++v6 )
              goto LABEL_12;
          }
          v10 = v8[1];
          v11 = *v8;
          if ( v8[2] < (unsigned __int64)(v10 + 1) )
          {
            v15 = qvector_reserve(v8, v11, v10 + 1, 8);
            *v8 = v15;
            v11 = v15;
            v10 = v8[1];
          }
          v12 = v11 + 8 * v10;
          v13 = v20;
          ++v6;
          *(_QWORD *)v12 = 0;
          ++v8[1];
          *(_DWORD *)v12 = v13;
          *(_DWORD *)(v12 + 4) = v21 + v13;
        }
        while ( v9 != v6 );
      }
LABEL_12:
      v16 += 4;
      v17 += 24;
    }
    while ( v19 != v16 );
  }
  return v22 - __readfsqword(0x28u);
}

