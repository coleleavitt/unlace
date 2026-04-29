__int64 *__fastcall sub_3E34B0(__int64 *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 *result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 not_tail; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rbp
  _QWORD *v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 *v24; // [rsp+10h] [rbp-58h]
  __int64 *i; // [rsp+18h] [rbp-50h]
  __int64 *v26; // [rsp+28h] [rbp-40h]

  v2 = (__int64 *)a1[114];
  v3 = &v2[4 * a1[115]];
  while ( v3 != v2 )
  {
    v4 = *v2;
    v2 += 4;
    sub_116EE0(v4);
  }
  result = (__int64 *)a1[117];
  v24 = result;
  v26 = &result[a1[118]];
  if ( v26 != result )
  {
    do
    {
      v6 = (_QWORD *)a1[1];
      v7 = *v24;
      v8 = *(_QWORD *)(v6[65] + 8LL);
      if ( v8 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v8 + 24) & 2) == 0 )
          {
            if ( v7 == *(_QWORD *)(v8 + 32) )
              break;
            v9 = *(_QWORD *)(v8 + 48);
            if ( v9 )
            {
              if ( v7 == *(_QWORD *)(v9 + 24) )
                break;
            }
          }
          v8 = *(_QWORD *)(v8 + 8);
          if ( !v8 )
            goto LABEL_10;
        }
        v10 = *(_QWORD *)(v8 + 16);
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 76) != 6 )
          {
            if ( (get_flags_ex(*v24, 4) & 0x10000) != 0 )
            {
              not_tail = prev_not_tail(v7, 4, v11);
              v13 = not_tail;
              if ( not_tail >= *(_QWORD *)(v10 + 32) && not_tail < *(_QWORD *)(v10 + 40) )
              {
                if ( !(unsigned __int8)sub_9C4F0(v10) )
                {
                  v22 = sub_62A40(a1[1], *(_DWORD *)(v10 + 72) + 1);
                  *(_DWORD *)(v22 + 24) |= 2u;
                  v10 = v22;
                }
                v14 = sub_62A50(a1[1], v13, v13, 0);
                sub_3E33E0((_QWORD *)v10, v13, 268, v7, *(_DWORD *)(v14 + 72));
                v15 = j__qalloc_or_throw(80);
                *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v15 + 40) = 0;
                *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v15 + 56) = 0;
                *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v15 + 72) = 0;
                sub_329320(v15, v13);
                *(_BYTE *)(v15 + 32) = 1;
                *(_DWORD *)v15 = 13;
                *(_QWORD *)(v15 + 36) = 0xF800000004LL;
                sub_11A350(v15 + 48, *(_QWORD *)(*(_QWORD *)(v14 + 480) + 112LL), 1, 4, -1, 0);
                *(_BYTE *)(v15 + 64) = 1;
                *(_QWORD *)(v15 + 68) = 0xF800000004LL;
                sub_AEBD0((_QWORD *)v14, v15);
                sub_3E33E0((_QWORD *)v14, v13, 248, 0, *(_DWORD *)(v8 + 72));
                v16 = sub_62A50(a1[1], v13, v13, 0);
                v17 = (__int64 *)a1[120];
                v18 = (_QWORD *)v16;
                for ( i = &v17[a1[121]]; i != v17; v18 = (_QWORD *)sub_62A50(a1[1], v13, v13, 0) )
                {
                  v23 = *v17;
                  v19 = j__qalloc_or_throw(80);
                  *(_QWORD *)(v19 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v19 + 40) = 0;
                  *(_QWORD *)(v19 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v19 + 56) = 0;
                  *(_QWORD *)(v19 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v19 + 72) = 0;
                  sub_329320(v19, v13);
                  *(_BYTE *)(v19 + 32) = 1;
                  *(_DWORD *)v19 = 44;
                  *(_QWORD *)(v19 + 36) = 0x10800000004LL;
                  sub_11A350(v19 + 48, *(_QWORD *)(v18[60] + 112LL), v23, 4, -1, 0);
                  v20 = *(_QWORD *)(v18[60] + 112LL);
                  *(_BYTE *)(v19 + 64) = 6;
                  v21 = 8 * *(_DWORD *)(v20 + 84);
                  if ( (unsigned __int64)v21 <= 0x3F )
                    v23 &= ~(-1LL << v21);
                  ++v17;
                  *(_QWORD *)(v19 + 72) = v23;
                  sub_AEBD0(v18, v19);
                }
                sub_AEC00(v18, v13, *(_DWORD *)(v8 + 72));
                goto LABEL_11;
              }
            }
            v6 = (_QWORD *)a1[1];
          }
        }
      }
LABEL_10:
      sub_32F270(v6, v7, (__int64)"bad loop end");
LABEL_11:
      result = ++v24;
    }
    while ( v26 != v24 );
  }
  return result;
}
