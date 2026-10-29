__int64 __fastcall sub_21D6250(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  char v4; // dl
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_21D40E0((__int64 *)a1, *(_BYTE *)(a1 + 129), a2);
  v3 = v2;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 112) = v2;
  }
  else if ( v2 )
  {
    v8[0] = v2;
    v6 = sub_21D4F30(a1 + 136, v8);
    if ( v6 )
    {
      v7 = v6[1];
      if ( v7 )
        v3 = v7;
    }
    if ( *(_QWORD *)(a1 + 120) == v3 )
      *(_BYTE *)(a1 + 128) = 1;
  }
  return v3;
}
