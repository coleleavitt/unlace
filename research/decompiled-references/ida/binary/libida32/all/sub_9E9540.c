__int64 __fastcall sub_9E9540(__int64 *a1, unsigned __int8 *a2, size_t a3, int a4, char a5)
{
  unsigned __int64 v5; // rax
  char v6; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // edx
  int v13; // [rsp+14h] [rbp-44h] BYREF
  char v14; // [rsp+18h] [rbp-40h]
  int v15; // [rsp+1Ch] [rbp-3Ch]
  _BYTE v16[16]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int *v17; // [rsp+30h] [rbp-28h]

  if ( !*(_QWORD *)(*a1 + 88) )
    return 0;
  v5 = sub_9E6AE0(*a1, a2, a3);
  if ( !v6 )
    return 0;
  v8 = *a1;
  v15 = v5 >> 33;
  v9 = *(_QWORD *)(v8 + 88);
  v10 = -1;
  if ( a5 )
    v10 = a4;
  v14 = 3;
  v13 = v10;
  sub_9E8840((__int64)v16, v9, (__int64)&v13);
  if ( v17 )
    return *v17 | 0x100000000LL;
  else
    return 0;
}

