__int64 __fastcall sub_3C8BD0(__int64 *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  int v17; // [rsp+8h] [rbp-50h]
  int v18; // [rsp+Ch] [rbp-4Ch]
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v25; // [rsp+38h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *a1;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(*a1 + 48);
  if ( v7 == *(_QWORD *)(*a1 + 56) )
  {
    v14 = a4 + 8;
    if ( v7 == v8 )
    {
      v14 = a4 + 14;
      if ( *(_DWORD *)a2 != *(_DWORD *)(v4 + 32) )
        v14 = a4 + 12;
    }
    v18 = a3;
    v16 = v14;
    v17 = 2;
    if ( sub_3C8B70((__int64)(a1 + 6), (__int64)&v16) )
    {
      a1[6] = v15;
      *((_DWORD *)a1 + 14) = 2;
      *((_DWORD *)a1 + 15) = a3;
    }
  }
  else
  {
    if ( v7 != v8 )
    {
      if ( *(_QWORD *)(a1[1] + 24) && rangeset_t_find_range() )
      {
        v12 = *a1;
        v23 = 0;
        v24 = a3;
        v22 = *(_QWORD *)(v12 + 56) - *(_QWORD *)(a2 + 24);
        if ( sub_3C8B70((__int64)(a1 + 6), (__int64)&v22) )
        {
          a1[6] = v13;
          *((_DWORD *)a1 + 14) = 0;
          *((_DWORD *)a1 + 15) = a3;
        }
      }
      return 0;
    }
    v10 = a4 + 6;
    if ( *(_DWORD *)a2 != *(_DWORD *)(v4 + 32) )
      v10 = a4 + 4;
    v20 = 1;
    v19 = v10;
    v21 = a3;
    if ( sub_3C8B70((__int64)(a1 + 6), (__int64)&v19) )
    {
      a1[6] = v11;
      *((_DWORD *)a1 + 14) = 1;
      *((_DWORD *)a1 + 15) = a3;
    }
  }
  return 1;
}
