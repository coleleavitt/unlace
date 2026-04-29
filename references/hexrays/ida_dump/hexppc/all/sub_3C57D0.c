__int64 __fastcall sub_3C57D0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 v4; // rbp
  unsigned int v6; // edi
  char *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 136LL);
  if ( v3 == sub_3C4530 )
  {
    v4 = *(_QWORD *)(a1[23] + 8LL * a3);
    if ( v4 == a1[22] )
    {
      v6 = 65280;
    }
    else
    {
      if ( *(int *)(v4 + 8) > 69 )
        return v10 - __readfsqword(0x28u);
      v8 = 0;
      v9 = 0;
      if ( (unsigned __int8)sub_3274C0(&v8, v4 + 48, nullptr, 0) )
      {
        if ( v8 )
        {
          *(_QWORD *)&v9 = 0;
          qfree(v8);
        }
        v6 = 255;
        if ( *(_DWORD *)(v4 + 8) != 48 )
          return v10 - __readfsqword(0x28u);
      }
      else
      {
        if ( v8 )
        {
          *(_QWORD *)&v9 = 0;
          qfree(v8);
        }
        v6 = 3329434;
      }
    }
  }
  else
  {
    v6 = v3((__int64)a1, a3);
    if ( v6 == -1 )
      return v10 - __readfsqword(0x28u);
  }
  v7 = sub_3C41D0(v6);
  return sub_63080(a2, (__int64)" color: %s", v7);
}
