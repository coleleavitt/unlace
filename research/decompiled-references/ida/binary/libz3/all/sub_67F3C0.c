__int64 __fastcall sub_67F3C0(const __m128i *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  _DWORD *v5; // rax
  _DWORD *v7; // rax
  __int64 *(__fastcall *v8)(__int64 *, __int64, unsigned int *); // rax
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-118h]
  __int64 v16; // [rsp+8h] [rbp-110h]
  void (__fastcall *v17)(__int64 *, const __m128i *, __int64); // [rsp+8h] [rbp-110h]
  __int64 v18; // [rsp+10h] [rbp-108h] BYREF
  __int64 v19; // [rsp+18h] [rbp-100h]
  __int64 v20[2]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v21[48]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v22[64]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v23[120]; // [rsp+A0h] [rbp-78h] BYREF

  sub_167E970(v21, a3, 0, 0, 0);
  sub_167F5F0(v22, v21);
  sub_167F5B0(v23, v21);
  while ( (unsigned __int8)sub_167E490(v22, v23) )
  {
    v3 = sub_167E460(v22);
    v4 = v3;
    if ( !*(_WORD *)(v3 + 4) && !*(_DWORD *)(v3 + 24) )
    {
      v5 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( !v5 || *v5 == -1 )
      {
        v7 = *(_DWORD **)(sub_15D1F10(v4) + 24);
        if ( v7 )
        {
          if ( a1[9].m128i_i32[0] == *v7 && !v7[1] )
          {
            v15 = *a2;
            v8 = *(__int64 *(__fastcall **)(__int64 *, __int64, unsigned int *))(a1->m128i_i64[0] + 32);
            if ( v8 == sub_67F2C0 )
            {
              v9 = *(_DWORD **)(sub_15D1F10(v4) + 24);
              if ( v9 && a1[9].m128i_i32[0] == *v9 && !v9[1] )
              {
                v16 = *(_QWORD *)(a1[1].m128i_i64[1] + 64);
                v11 = sub_67B850((__int64 *)a1[1].m128i_i64[0], (unsigned int *)v4);
                sub_1374250(v20, v16, v11);
                v12 = sub_15D1F10(v4);
                v13 = sub_678D40(a1, v20[0], v12);
                if ( *(_DWORD *)(v13 + 28) )
                {
                  sub_67ECA0(&v18, (__int64)a1, v13);
                }
                else
                {
                  v17 = *(void (__fastcall **)(__int64 *, const __m128i *, __int64))(a1->m128i_i64[0] + 40);
                  v14 = sub_15D1F10(v4);
                  v17(&v18, a1, v14);
                }
                sub_675460(v20[0], v20[1]);
                v10 = v18;
              }
              else
              {
                v18 = 0;
                v10 = 0;
                v19 = a1->m128i_i64[1];
              }
            }
            else
            {
              v8(&v18, (__int64)a1, (unsigned int *)v4);
              v10 = v18;
            }
            sub_135F9B0(v15, *(_QWORD *)(v4 + 16), v10);
            sub_675460(v18, v19);
          }
        }
      }
    }
    sub_167EA90(v22);
  }
  sub_6642B0((__int64)v23);
  sub_6642B0((__int64)v22);
  return sub_677270((__int64)v21);
}

