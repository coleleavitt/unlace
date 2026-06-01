__int64 __fastcall sub_2687C0(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  char *v4; // [rsp+0h] [rbp-58h] BYREF
  __int128 v5; // [rsp+8h] [rbp-50h]
  char v6; // [rsp+18h] [rbp-40h]
  char v7; // [rsp+19h] [rbp-3Fh]
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  v4 = (char *)qvector_reserve(&v4, 0, 5, 1);
  *(_QWORD *)&v5 = 5;
  strcpy(v4, "Live");
  v6 = 1;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  v2 = sub_268730(a1, (__int64)&v4, 0);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)&v4);
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4, (const char *)&v4);
  }
  return v2;
}
