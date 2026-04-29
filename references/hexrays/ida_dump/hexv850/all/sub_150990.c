__int64 __fastcall sub_150990(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned __int8 v12; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v13; // [rsp+Fh] [rbp-39h]

  v4 = *(_QWORD *)(a2 + 24);
  v5 = v4 + 80LL * *(_QWORD *)(a2 + 32);
  if ( v4 == v5 )
  {
    return 0;
  }
  else
  {
    v8 = 0;
    do
    {
      if ( *(_BYTE *)v4 != 10
        && (get_tinfo_property(*(_QWORD *)(v4 + 24), 2) & 0xF) == 0xA
        && *(_DWORD *)(v4 + 4) == *(_DWORD *)(a1 + 84) )
      {
        v10 = sub_137C20(a3, v4, a4, 0, v4, 0xFFFFFFFF);
        if ( (_BYTE)v10 )
        {
          if ( (*(_BYTE *)(v4 + 1) & 1) != 0 )
          {
            *(_DWORD *)(v4 + 4) = *(_DWORD *)(a1 + 84);
          }
          else
          {
            v12 = v10;
            sub_117D90((char *)v4, a1);
            v10 = v12;
          }
          if ( *(_BYTE *)v4 == 10 )
          {
            v11 = *(_QWORD *)(v4 + 8);
            if ( *(_BYTE *)v11 == 5 )
            {
              v13 = v10;
              sub_188CD0(*(_QWORD *)(a3 + 64), *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL));
              v10 = v13;
            }
          }
          v8 = v10;
        }
      }
      v4 += 80;
    }
    while ( v5 != v4 );
  }
  return v8;
}
