unsigned __int64 __fastcall sub_3C2FE0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = a3 + 1;
  if ( a2 != -1 )
    a2 = sub_3B9DC0(a1, a2);
  v5 = a2;
  sub_7BE7C0(&v5, *a1, 16, &v4, 4, 65);
  return v6 - __readfsqword(0x28u);
}
