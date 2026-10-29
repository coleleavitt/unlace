__int64 *__fastcall sub_2185670(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int32 v10; // eax
  __int64 v11[2]; // [rsp+0h] [rbp-38h] BYREF
  char v12; // [rsp+10h] [rbp-28h]

  sub_216EAB0((__int64)v11, (_QWORD *)(a2 + 56), a3, a4, a5, a6);
  if ( (v12 & 1) != 0 )
  {
    v6 = v11[0];
    v11[0] = 0;
    *a1 = v6;
  }
  else
  {
    v8 = v11[0];
    v9 = v11[0] + (v11[1] << 6);
    if ( v11[0] != v9 )
    {
      do
      {
        v10 = _byteswap_ulong(*(_DWORD *)(v8 + 4));
        if ( v10 == 11 )
        {
          if ( !*(_QWORD *)(a2 + 120) )
            *(_QWORD *)(a2 + 120) = v8;
        }
        else if ( v10 == 18 )
        {
          if ( !*(_QWORD *)(a2 + 136) )
            *(_QWORD *)(a2 + 136) = v8;
        }
        else if ( v10 == 2 && !*(_QWORD *)(a2 + 128) )
        {
          *(_QWORD *)(a2 + 128) = v8;
        }
        v8 += 64;
      }
      while ( v8 != v9 );
    }
    *(_BYTE *)(a2 + 48) = 1;
    *a1 = 0;
  }
  sub_216F970(v11);
  return a1;
}
