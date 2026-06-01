unsigned __int64 __fastcall sub_1B2F4A0(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // [rsp+8h] [rbp-B0h]
  _BYTE v11[32]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int8 *v12; // [rsp+30h] [rbp-88h] BYREF
  char v13; // [rsp+88h] [rbp-30h]
  char v14; // [rsp+94h] [rbp-24h]

  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 544) + 8LL) & 0x7F) != 0
    && (*(_BYTE *)(*(_QWORD *)(*a1 + 544) + 8LL) & 0x7F) != 0x18 )
  {
    sub_168B9F0((__int64)v11, a1, a2, 0x11A9u, 0);
    if ( v13 )
    {
      sub_AE9DF0(&v12, (__int64)"requires", 1u);
      sub_15F7200(v11);
      return 0;
    }
    else
    {
      if ( v14 )
        sub_1B132F0((__int64)v11, (__int64)"requires");
      sub_15F7200(v11);
      return 0;
    }
  }
  else
  {
    result = sub_1B2C6C0(a1, a2, a3, a4);
    if ( result )
    {
      v10 = result;
      sub_B94AD0(*(__m128i **)(*a1 + 544), result, *a1, v5, v6, v7);
      v8 = a1[1];
      result = v10;
      v9 = *(unsigned int *)(v8 + 27520);
      if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 27524) )
      {
        sub_2237220(v8 + 27512, v8 + 27528, v9 + 1, 8);
        v9 = *(unsigned int *)(v8 + 27520);
        result = v10;
      }
      *(_QWORD *)(*(_QWORD *)(v8 + 27512) + 8 * v9) = result;
      ++*(_DWORD *)(v8 + 27520);
    }
  }
  return result;
}
