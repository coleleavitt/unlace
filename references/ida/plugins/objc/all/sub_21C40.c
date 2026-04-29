__int64 __fastcall sub_21C40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v6; // ebx
  __int64 v8; // rbx
  int _32bit; // eax
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  __int128 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v10 = 0;
  if ( (a5 & 0x20) != 0 )
  {
    v8 = a3 + 4;
    _32bit = get_32bit();
    if ( _32bit != -1 )
    {
      v10 = v8 + _32bit;
      goto LABEL_3;
    }
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 136))(a1, &v10, a1[59] + a3) )
    return 0;
LABEL_3:
  v11 = 0;
  v12 = 0;
  v6 = 0;
  if ( get_strlit_contents() > 0 )
    v6 = sub_21620(a1[1], a4, a2, &v11);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v6;
}
