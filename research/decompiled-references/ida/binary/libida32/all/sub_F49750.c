__int16 __fastcall sub_F49750(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int *v4; // r8
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+0h] [rbp-40h]
  void *ptr[2]; // [rsp+8h] [rbp-38h] BYREF
  __int64 v17; // [rsp+18h] [rbp-28h]

  LOWORD(v3) = *(_WORD *)(*a1 + 18LL) >> 3;
  if ( (_BYTE)v3 == 6 )
  {
    if ( !*(_QWORD *)(*a1 + 32LL) )
      return v3;
    v4 = (unsigned int *)a1[1];
    v5 = 0;
  }
  else
  {
    v4 = (unsigned int *)a1[1];
    v5 = a3;
  }
  v6 = a3;
  *v4 = v5;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 32LL);
  if ( v9 )
  {
    *(_OWORD *)ptr = 0;
    v17 = 0;
    sub_E6CB50((__int64)ptr, a2, v9, (v6 << 32) | v6);
    sub_E6D460((__int64 *)ptr, a2, v10, v11, v12, v13);
    if ( HIDWORD(v17) )
    {
      v15 = v9;
      free(ptr[1]);
      v8 = *a1;
      v9 = v15;
    }
    else
    {
      v8 = *a1;
    }
  }
  LOWORD(v3) = *(_WORD *)(v8 + 18) >> 3;
  if ( (_BYTE)v3 != 6 || *(_QWORD *)(v8 + 32) )
  {
    v3 = a1[1];
    *(_QWORD *)(v3 + 8) = v9;
  }
  return v3;
}

