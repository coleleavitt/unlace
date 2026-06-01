__int64 __fastcall sub_2296DB0(_BYTE *a1, __int64 a2)
{
  char **v2; // rbp
  char *v3; // rax
  signed __int64 v4; // rax
  signed __int64 v6; // rdx
  char *s[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+10h] [rbp-28h] BYREF

  if ( !qword_2D0ADE0 )
    sub_2230020(&qword_2D0ADE0, sub_2296510, (__int64)sub_2296960);
  s[0] = v8;
  if ( a1 )
  {
    sub_22968A0(s, a1, (__int64)&a1[a2]);
  }
  else
  {
    s[1] = nullptr;
    v8[0] = 0;
  }
  v2 = (char **)operator new(0x10u);
  v3 = strdup(s[0]);
  v2[1] = nullptr;
  *v2 = v3;
  v4 = _InterlockedCompareExchange64(&qword_2D0B848, (signed __int64)v2, 0);
  if ( v4 )
  {
    v6 = v4;
    do
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), (signed __int64)v2, 0);
    while ( v6 );
  }
  if ( s[0] != v8 )
    operator delete(s[0]);
  sub_22965A0();
  return 0;
}
