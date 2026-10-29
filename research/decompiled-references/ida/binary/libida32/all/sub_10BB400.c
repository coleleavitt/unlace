__int64 __fastcall sub_10BB400(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdi
  _DWORD v8[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v8[0] = a2;
  v2 = sub_2193060(a1, v8, 1);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v3 + 8LL * (unsigned int)v2;
  v5 = v3 + 8 * HIDWORD(v2);
  if ( v5 == v4 )
    return 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 - 8);
      if ( v6 )
      {
        if ( (unsigned __int8)sub_2195AD0(v6, a2) )
          break;
      }
      v5 -= 8;
      if ( v4 == v5 )
        return 0;
    }
  }
  else
  {
    v5 += ~(v5 - 8 - v4) & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( v4 == v5 )
    return 0;
  else
    return *(_QWORD *)(v5 - 8);
}

