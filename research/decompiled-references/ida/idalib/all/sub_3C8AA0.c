__int64 __fastcall sub_3C8AA0(unsigned __int8 **a1, __int64 a2, __int64 *a3, unsigned __int64 a4, int a5)
{
  unsigned __int8 *v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v11; // [rsp+8h] [rbp-190h] BYREF
  unsigned __int8 v12[344]; // [rsp+10h] [rbp-188h] BYREF
  unsigned __int64 v13; // [rsp+168h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( a4 != -1 )
    a4 = sub_3B9DC0(a1, a4);
  v8 = *a1;
  v11 = a4;
  v9 = sub_7BE950(&v11, v8, a5, v12, 330, 83);
  if ( v9 > 0 )
    return sub_3C86B0(a1, a2, a3, v12, v9);
  if ( a3 )
    *a3 = 0;
  return 0;
}
