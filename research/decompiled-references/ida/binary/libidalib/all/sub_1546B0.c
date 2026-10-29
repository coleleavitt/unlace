unsigned __int64 __fastcall sub_1546B0(TView *this, _QWORD *a2, __int64 a3, TView ***a4)
{
  const char *v6; // rcx
  const char *v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_154460((__int64)&v8, (__int64)a4);
  v6 = v8;
  if ( !v9 )
    v6 = s1;
  sub_144880((__int64)this, a2 + 1, a3, (__int64)v6);
  if ( v8 )
  {
    v9 = 0;
    qfree();
  }
  *(_QWORD *)this = *a2;
  sub_1541B0(a4, this);
  return v10 - __readfsqword(0x28u);
}

