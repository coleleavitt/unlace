__int64 __fastcall sub_3C8D50(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  int v13; // [rsp+8h] [rbp-60h]
  int v14; // [rsp+Ch] [rbp-5Ch]
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  int v16; // [rsp+18h] [rbp-50h]
  int v17; // [rsp+1Ch] [rbp-4Ch]
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) || !rangeset_t_find_range() )
    return 0;
  v7 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( v8 == a2 )
  {
    v14 = a3;
    v10 = a4 + 12;
    v13 = 2;
    v12 = v7 + 12;
    if ( sub_3C8B70(a1 + 48, (__int64)&v12) )
    {
      *(_QWORD *)(a1 + 48) = v10;
      *(_DWORD *)(a1 + 56) = 2;
      *(_DWORD *)(a1 + 60) = a3;
    }
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 48LL) != a2 )
    {
      v19 = 0;
      v18 = v8 - a2;
      v20 = a3;
      if ( sub_3C8B70(a1 + 48, (__int64)&v18) )
      {
        *(_QWORD *)(a1 + 48) = v9;
        *(_DWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 60) = a3;
      }
      return 0;
    }
    v16 = 1;
    v11 = a4 + 4;
    v17 = a3;
    v15 = v7 + 4;
    if ( sub_3C8B70(a1 + 48, (__int64)&v15) )
    {
      *(_QWORD *)(a1 + 48) = v11;
      *(_DWORD *)(a1 + 56) = 1;
      *(_DWORD *)(a1 + 60) = a3;
    }
  }
  return 1;
}
