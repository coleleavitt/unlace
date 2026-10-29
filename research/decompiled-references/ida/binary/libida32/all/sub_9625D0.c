void __fastcall sub_9625D0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __m128 v13[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 88);
  if ( *(_DWORD *)(a1 + 96) )
    sub_962560(v13, v3, &v3[2 * *(unsigned int *)(a1 + 104)], a1 + 88, 0);
  else
    sub_962560(v13, &v3[2 * *(unsigned int *)(a1 + 104)], &v3[2 * *(unsigned int *)(a1 + 104)], a1 + 88, 1);
  v5 = v13[0].m128_u64[1];
  v4 = (_QWORD *)v13[0].m128_u64[0];
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * *(unsigned int *)(a1 + 104));
  sub_962560(v13, v6, v6, a1 + 88, 1);
  v7 = v13[0].m128_u64[0];
  if ( v4 != (_QWORD *)v13[0].m128_u64[0] )
  {
    do
    {
LABEL_4:
      while ( 1 )
      {
        v8 = sub_EA1E50(a2, v4[1]);
        sub_EA1EC0(a2, *v4, v8);
        v9 = v4 + 2;
        if ( v4 + 2 != (_QWORD *)v5 )
          break;
LABEL_13:
        v4 = (_QWORD *)v5;
        if ( v7 == v5 )
          return;
      }
      v10 = v4[2];
      if ( v10 == -4096 || v10 == -8192 )
      {
        v11 = v4 + 4;
        while ( 1 )
        {
          v4 = v11;
          if ( v11 == (_QWORD *)v5 )
            goto LABEL_13;
          v12 = *v11;
          v11 += 2;
          if ( v12 != -8192 && v12 != -4096 )
          {
            if ( (_QWORD *)v7 != v4 )
              goto LABEL_4;
            return;
          }
        }
      }
      v4 += 2;
    }
    while ( (_QWORD *)v7 != v9 );
  }
}

