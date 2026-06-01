__int64 __fastcall sub_5E99D0(__int64 a1, _QWORD *a2, int a3, int a4)
{
  int named_type; // edx
  __int64 result; // rax
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  unsigned __int8 v8; // [rsp+17h] [rbp-69h]
  __int64 v9; // [rsp+18h] [rbp-68h] BYREF
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+38h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  named_type = get_named_type(a1, a3, a4, (int)&v9, (int)&v10, (int)&v11, (__int64)&v12, 0, 0);
  result = 0;
  if ( named_type )
  {
    v13[0] = 0;
    v6 = deserialize_tinfo(v13, a1, &v9, &v10, &v12, v11);
    if ( v6 )
    {
      if ( a2 )
      {
        v7 = v13[0];
        v13[0] = *a2;
        *a2 = v7;
      }
    }
    v8 = v6;
    clear_tinfo_t(v13);
    return v8;
  }
  return result;
}

