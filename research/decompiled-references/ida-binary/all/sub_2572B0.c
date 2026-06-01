__int64 __fastcall sub_2572B0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v9; // ebx
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( sub_2570C0() )
    return 1;
  result = 0;
  if ( !byte_8CC5F4 )
  {
    v6 = sub_384360(a1, a2, v3, v4);
    v7 = v6;
    if ( v6 )
    {
      v8 = sub_3844D0(v6);
      return (int)sub_384140(v7, v8, 0) > 0;
    }
    else
    {
      v10[0] = 0;
      v10[1] = 1022;
      v12 = xmmword_8CC810;
      v11 = dword_8CC428;
      v9 = sub_238AE0((double *)&qword_8CC2B0, (__int64)v10, a3);
      sub_238680((__int64)v10, (const char *)v10);
      return v9 > 0;
    }
  }
  return result;
}
