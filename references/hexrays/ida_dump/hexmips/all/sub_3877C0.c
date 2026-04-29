__int64 __fastcall sub_3877C0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  char **v4; // rax
  const char *v5; // rbp
  bool v6; // zf
  bool v7; // sf
  bool v8; // of
  int v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  _DWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-28h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_253960(a1, a2, a3);
  if ( (unsigned __int64)(int)a2 >= *(_QWORD *)(a1 + 136) )
    return 0;
  v4 = (char **)(*(_QWORD *)(a1 + 128) + 32LL * (int)a2);
  v5 = *v4;
  if ( !*v4 || (unsigned int)sub_3813A0(*v4, nullptr) )
    return 0;
  v8 = __OFSUB__(*(_DWORD *)(a1 + 152), (_DWORD)a2);
  v6 = *(_DWORD *)(a1 + 152) == (_DWORD)a2;
  v7 = *(_DWORD *)(a1 + 152) - (int)a2 < 0;
  v12[0] = 0;
  v10 = 0;
  sub_385890(a1, v5, 0, v7 ^ v8 | v6, nullptr, (__int64)&v10, a4, (__int64)v12);
  if ( v10 == 1 )
  {
    if ( v13 > 0x44 )
    {
      if ( v13 != 73 && (v13 & 0x40000000) == 0 )
        return v11;
    }
    else if ( v13 <= 0x42 )
    {
      return v11;
    }
    return 0;
  }
  if ( v10 == 3 )
    return a1 + 16;
  else
    return *(_BYTE *)tag_skipcodes(v5) == 125;
}
