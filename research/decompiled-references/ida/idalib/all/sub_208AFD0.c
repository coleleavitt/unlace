__int64 __fastcall sub_208AFD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h]

  v1 = sub_208ACA0(a1 + 80);
  sub_206DED0((__int64)&v4, *(_QWORD *)(v1 + 16), *(_QWORD *)(v1 + 24));
  if ( v5 )
    return v4;
  v3 = sub_208ACD0(a1 + 72);
  return sub_206D9B0(v3);
}
