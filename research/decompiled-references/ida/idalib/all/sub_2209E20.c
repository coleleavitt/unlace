__int64 __fastcall sub_2209E20(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned int v6; // r15d
  __int64 *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r9d
  bool v10; // r10
  int v11; // eax
  int v12; // r9d
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // r8d
  int v17; // eax
  int v18; // r8d
  void *v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-40h]

  sub_2209CE0(a1, a2, (__int64 *)a3);
  if ( *(_DWORD *)(a3 + 8) <= 0x40u )
  {
    if ( *(_QWORD *)a3 )
      goto LABEL_3;
LABEL_11:
    *a4 = 0;
    return a1;
  }
  v14 = sub_2206780((__int64 *)a3);
  if ( (unsigned int)(v15 - v14) <= 0x40 && !**(_QWORD **)a3 )
    goto LABEL_11;
LABEL_3:
  sub_2207BA0((__int64)&v19, a1, a3);
  v6 = v20;
  if ( v20 <= 0x40 )
  {
    v7 = *(__int64 **)a2;
    if ( v19 != *(void **)a2 )
    {
      *a4 = 1;
      return a1;
    }
LABEL_6:
    v8 = *(_DWORD *)(a2 + 8);
    v9 = v8 - 1;
    if ( v8 <= 0x40 )
    {
      v10 = 0;
      if ( (__int64 *)(1LL << v9) != v7 )
        goto LABEL_9;
    }
    else
    {
      v10 = 0;
      if ( ((1LL << v9) & v7[v9 >> 6]) == 0 )
        goto LABEL_9;
      v11 = sub_22068B0((__int64 **)a2);
      if ( v11 != v12 )
        goto LABEL_9;
    }
    v16 = *(_DWORD *)(a3 + 8);
    v10 = 1;
    if ( v16 )
    {
      if ( v16 <= 0x40 )
      {
        v10 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v16) == *(_QWORD *)a3;
      }
      else
      {
        v17 = sub_2206980((__int64 **)a3);
        v10 = v18 == v17;
      }
    }
LABEL_9:
    *a4 = v10;
    if ( v6 <= 0x40 )
      return a1;
    goto LABEL_17;
  }
  if ( sub_2205D70((__int64)&v19, (const void **)a2) )
  {
    v7 = *(__int64 **)a2;
    goto LABEL_6;
  }
  *a4 = 1;
LABEL_17:
  if ( v19 )
    operator delete[](v19);
  return a1;
}
