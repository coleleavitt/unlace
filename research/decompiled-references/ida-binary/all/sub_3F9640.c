void __fastcall sub_3F9640(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  void *v4; // r12
  void *v5[9]; // [rsp+0h] [rbp-48h] BYREF

  v5[3] = (void *)__readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 280) != -1 )
  {
    v3 = *(_QWORD *)(a1 + 112);
    if ( v3 )
    {
      sub_3F9040((__int64)v5, v3, a2);
      v4 = v5[0];
      if ( v5[1] != v5[0] )
        sub_3F92E0(*(_QWORD *)(a1 + 112), a2);
      if ( v4 )
        operator delete(v4, (char *)v5[2] - (char *)v4);
    }
  }
}
