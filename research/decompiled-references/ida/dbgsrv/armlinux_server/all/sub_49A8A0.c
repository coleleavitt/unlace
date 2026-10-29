/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A8A0
// Address: 0x000000000049A8A0

//----- (000000000049A8A0) ----------------------------------------------------
__int64 __fastcall sub_49A8A0(__int64 *a1, const char *a2, unsigned __int64 a3, double a4)
{
  __int64 v6; // x2
  __int64 v7; // x21
  double v8; // d0
  const char *v9; // x19
  const char *v10; // x4
  __int64 v11; // x19
  void *v13; // [xsp+38h] [xbp-38h] BYREF
  __int64 v14; // [xsp+40h] [xbp-30h]
  __int64 v15; // [xsp+48h] [xbp-28h]
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v17; // [xsp+58h] [xbp-18h]
  __int64 v18; // [xsp+60h] [xbp-10h]

  if ( a1 )
  {
    v6 = *a1;
    v7 = a1[1];
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    if ( v6 != -1 )
    {
      sub_40CD68((__int64)&v13, "%a", a4);
      goto LABEL_4;
    }
  }
  else
  {
    v7 = -1;
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
  }
  v13 = sub_491288((__int64)&v13, nullptr, 8u, 1u);
  v14 = 8;
  strcpy((char *)v13, "BADADDR");
LABEL_4:
  ptr = nullptr;
  v17 = 0;
  v18 = 0;
  v9 = (const char *)&qword_4B2D48;
  if ( v14 )
    v9 = (const char *)v13;
  if ( v7 == -1 )
  {
    ptr = sub_491288((__int64)&ptr, nullptr, 8u, 1u);
    v17 = 8;
    strcpy((char *)ptr, "BADADDR");
  }
  else
  {
    sub_40CD68((__int64)&ptr, "%a", v8);
  }
  v10 = (const char *)ptr;
  if ( !v17 )
    v10 = (const char *)&qword_4B2D48;
  v11 = (int)sub_49B748(a2, a3, "%s..%s", v9, v10);
  if ( ptr )
  {
    v17 = 0;
    j__free(ptr);
  }
  if ( v13 )
  {
    v14 = 0;
    j__free(v13);
  }
  return v11;
}
// 49A924: variable 'v8' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
