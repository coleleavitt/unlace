__int64 (__fastcall **__fastcall sub_2AB3C0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  _QWORD *v7; // rbx

  result = &off_4B4B18;
  *a1 = &off_4B4B18;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = a1[6];
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + v5);
        ++v6;
        v5 += 264;
        *v7 = off_4B3EA0;
        sub_1188E0((__int64)(v7 + 28));
        sub_1188E0((__int64)(v7 + 26));
        sub_1188E0((__int64)(v7 + 24));
        sub_1188E0((__int64)(v7 + 12));
        sub_1188E0((__int64)(v7 + 10));
        sub_1188E0((__int64)(v7 + 8));
        v3 = a1[5];
      }
      while ( v4 != v6 );
    }
    a1[6] = 0;
    return (__int64 (__fastcall **)())qfree(v3);
  }
  return result;
}
