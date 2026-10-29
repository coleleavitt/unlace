__int64 *__fastcall sub_21848D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10[2]; // [rsp+0h] [rbp-38h] BYREF
  char v11; // [rsp+10h] [rbp-28h]

  sub_216E130((__int64)v10, (_QWORD *)(a2 + 56), a3, a4, a5, a6);
  v6 = v10[0];
  if ( (v11 & 1) != 0 )
  {
    v10[0] = 0;
    *a1 = v6;
  }
  else
  {
    v8 = v10[0] + 40 * v10[1];
    if ( v10[0] != v8 )
    {
      do
      {
        v9 = *(_DWORD *)(v6 + 4);
        if ( v9 == 11 )
        {
          if ( !*(_QWORD *)(a2 + 120) )
            *(_QWORD *)(a2 + 120) = v6;
        }
        else if ( v9 == 18 )
        {
          if ( !*(_QWORD *)(a2 + 136) )
            *(_QWORD *)(a2 + 136) = v6;
        }
        else if ( v9 == 2 && !*(_QWORD *)(a2 + 128) )
        {
          *(_QWORD *)(a2 + 128) = v6;
        }
        v6 += 40;
      }
      while ( v6 != v8 );
    }
    *(_BYTE *)(a2 + 48) = 1;
    *a1 = 0;
  }
  sub_216EEA0(v10);
  return a1;
}
