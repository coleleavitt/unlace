__int64 __fastcall sub_2134AC0(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *a1;
  v9[0] = 0;
  LOBYTE(v3) = sub_2133530(v2, &v8, (__int64)v9);
  v4 = v3;
  if ( (_BYTE)v3 )
    return v4;
  v5 = *(__int64 **)(*a1 + 24);
  v6 = *v5;
  if ( *(_BYTE *)a1[1] )
  {
    (*(void (__fastcall **)(__int64 *, unsigned __int64))(v6 + 576))(v5, v8);
    return v4;
  }
  (*(void (__fastcall **)(__int64 *, unsigned __int64))(v6 + 568))(v5, v8);
  return v4;
}
