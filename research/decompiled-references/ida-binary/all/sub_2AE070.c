__int64 __fastcall sub_2AE070(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64, int, unsigned int); // rax
  int *v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-48h]
  __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 408) + 8LL);
  if ( !*(_BYTE *)(a2 + 284) || (result = sub_29ACF0(v13), (_BYTE)result) )
  {
    result = *(_QWORD *)(a2 + 320);
    v4 = 0;
    v5 = 0;
    v12 = result;
    if ( result )
    {
      do
      {
        v9 = *(__int64 (__fastcall **)(__int64, __int64, int, unsigned int))(*a1 + 752LL);
        v10 = (int *)(v4 + *(_QWORD *)(a2 + 312));
        v11 = *v10;
        if ( v9 == sub_2ACF40 )
        {
          v6 = a1[55];
          v7 = 0xFFFFFFFFLL;
          if ( v11 < *(_QWORD *)(v6 + 24) )
          {
            v8 = (_QWORD *)(*(_QWORD *)(v6 + 16) + 24 * v11);
            if ( v8[1] )
              v7 = *(unsigned int *)(*v8 + 36LL);
          }
        }
        else
        {
          v7 = (unsigned int)v9((__int64)a1, v13, v11, 0xFFFFFFFF);
        }
        ++v5;
        v4 += 152;
        result = sub_2B47C0(a2, v7);
        *((_BYTE *)v10 + 69) = result;
      }
      while ( v12 != v5 );
    }
  }
  return result;
}
