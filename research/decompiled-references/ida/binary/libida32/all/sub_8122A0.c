__int64 __fastcall sub_8122A0(
        const __m128i *a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edx
  int v7; // eax
  __int64 v8; // r14
  int v9; // edx
  __m128i v10; // [rsp+0h] [rbp-1C8h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-1B0h]
  __int64 v12; // [rsp+30h] [rbp-198h]
  __int64 v13; // [rsp+38h] [rbp-190h]
  unsigned int v14; // [rsp+68h] [rbp-160h]
  _BYTE v15[264]; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v16; // [rsp+198h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = sub_733090((__int64)a1, &v10, (__int64)v15, 0x100u, 0, 0, 0, 0);
  if ( !v4 )
  {
    v7 = sub_734840(a1);
    if ( v7 )
    {
      if ( v7 < 0 )
        return (unsigned int)-v7;
    }
    else
    {
      v8 = sub_733DB0((__int64)a1);
      sub_734100((__int64)a1);
      v9 = a2(a3, v8, v11, v12, v13, v14, v15);
      if ( v9 < 0 )
        return (unsigned int)-v9;
    }
    return 0;
  }
  v5 = -v4;
  if ( v4 >= 0 )
    return 0;
  return v5;
}

