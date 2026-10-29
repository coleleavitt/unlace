__int64 __fastcall sub_F7F8F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v5; // ecx
  __int64 *v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v13; // esi
  int v14; // r9d
  __m128 vars0[3]; // [rsp+0h] [rbp+0h] BYREF

  v3 = a1 + 112;
  while ( 1 )
  {
    v10 = *(unsigned int *)(a1 + 128);
    v11 = *(_QWORD *)(a1 + 112);
    if ( (_DWORD)v10 )
    {
      v5 = (v10 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v6 = (__int64 *)(v11 + 16LL * v5);
      v7 = *v6;
      if ( a2 == *v6 )
        goto LABEL_3;
      v13 = 1;
      if ( v7 != -4096 )
      {
        while ( 1 )
        {
          v14 = v13 + 1;
          v5 = (v10 - 1) & (v13 + v5);
          v6 = (__int64 *)(v11 + 16LL * v5);
          if ( a2 == *v6 )
            break;
          if ( *v6 == -4096 )
            goto LABEL_7;
          v13 = v14;
        }
LABEL_3:
        sub_F7F850(vars0, v6, (_QWORD *)(16 * v10 + v11), v3, 1);
        v8 = vars0[0].m128_u64[0];
        goto LABEL_4;
      }
    }
LABEL_7:
    sub_F7F850(vars0, (_QWORD *)(v11 + 16LL * (unsigned int)v10), (_QWORD *)(v11 + 16LL * (unsigned int)v10), v3, 1);
    v8 = vars0[0].m128_u64[0];
LABEL_4:
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL * *(unsigned int *)(a1 + 128));
    sub_F7F850(vars0, v9, v9, v3, 1);
    if ( vars0[0].m128_u64[0] == v8 )
      return a2;
    a2 = *(_QWORD *)(v8 + 8);
  }
}
