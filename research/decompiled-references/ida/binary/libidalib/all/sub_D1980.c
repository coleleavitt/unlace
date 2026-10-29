bool __fastcall sub_D1980(__int64 a1, int a2, int a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  char v5; // dl
  bool result; // al
  _QWORD *v7; // rdi
  int v8; // eax
  bool v9; // [rsp+Fh] [rbp-59h]
  __int64 v10; // [rsp+18h] [rbp-50h] BYREF
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    if ( dbg )
    {
      if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
      {
        v4 = qword_252758;
        if ( qword_252758 )
        {
          *(_QWORD *)qword_252758 = *(_QWORD *)(v3 + 32LL * a3 + 8);
          v4[1] = v3;
          *((_DWORD *)v4 + 4) = a3;
          sub_CDCF0((__int64)v4, 11);
        }
      }
    }
  }
  if ( !getseg() )
    return 1;
  v11 = -2;
  v12 = -1;
  v13 = 0;
  v5 = sub_CFEA0(SHIDWORD(qword_2524A0), a2, (__int64)&v11);
  result = 1;
  if ( v5 )
  {
    v10 = v12;
    result = dbg
          && (*(_BYTE *)(dbg + 37LL) & 1) != 0
          && (v7 = qword_252758) != nullptr
          && (v8 = HIDWORD(qword_2524A0),
              *((_DWORD *)qword_252758 + 4) = v12,
              *(_DWORD *)v7 = v8,
              v7[3] = &v10,
              (int)sub_CDCF0((__int64)v7, 10) > 0)
          && v10 != get_segm_base();
  }
  if ( v11 >= -1 )
  {
    if ( v12 )
    {
      v9 = result;
      *(_QWORD *)&v13 = 0;
      qfree();
      return v9;
    }
  }
  return result;
}

