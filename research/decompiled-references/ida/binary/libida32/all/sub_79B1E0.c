unsigned __int64 __fastcall sub_79B1E0(const char *a1, unsigned int a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned __int8 (__fastcall *v10)(_QWORD); // rax
  unsigned int v11; // eax
  __int64 (__fastcall *v12)(__int64, unsigned int); // rax
  unsigned int v15; // [rsp+8h] [rbp-50h]
  int v16; // [rsp+Ch] [rbp-4Ch]
  int v17; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v16 = a4 - a3;
  v8 = sub_7946D0((__int64)a1, a2, 0x41u);
  if ( v8 != -1 )
  {
    v9 = v8;
    v15 = a3 + a5;
    do
    {
      v12 = **(__int64 (__fastcall ***)(__int64, unsigned int))a6;
      if ( v12 == sub_79B1C0 )
      {
        v10 = *(unsigned __int8 (__fastcall **)(_QWORD))(a6 + 8);
        if ( !v10 || !v10(v9) )
        {
LABEL_5:
          v11 = sub_791FA0((__int64)a1, a2, v9, 0x41u) - 1;
          if ( v11 >= a3 && v11 < v15 )
          {
            v17 = v16 + v11 + 1;
            sub_791DB0(a1, a2, v9, (const char *)&v17, 4u, 65);
          }
        }
      }
      else if ( !(unsigned __int8)v12(a6, v9) )
      {
        goto LABEL_5;
      }
      v9 = sub_794710((__int64)a1, a2, v9, 65);
    }
    while ( v9 != -1 );
  }
  return v18 - __readfsqword(0x28u);
}

