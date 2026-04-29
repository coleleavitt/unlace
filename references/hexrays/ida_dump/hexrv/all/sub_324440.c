__int64 __fastcall sub_324440(__int64 *a1, __int64 a2, char *a3, int a4, char a5, __int64 a6)
{
  char v9; // al
  signed __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v13[0] = -1;
  v9 = sub_11B8C0(a3, v13, 0);
  v10 = v13[0];
  if ( v9 )
  {
    v11 = v13[0] * a4;
    if ( v11 >= v13[0] && (int)v11 == v11 )
    {
      v10 = v13[0] * a4;
    }
    else
    {
      v10 = -1;
      v11 = -1;
    }
    v13[0] = v11;
  }
  return sub_3242B0(a1, a2, v10, a5, a6);
}
