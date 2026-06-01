void __fastcall sub_1AA69F0(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax

  if ( a2 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 97) & 4) != 0 )
    {
      v6 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v6 )
      {
        v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        {
          if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(v7 + 8)) )
            return;
        }
        else if ( (unsigned __int8)sub_B8E180(v7) )
        {
          return;
        }
        v12 = sub_F63270(*v6, a2, v8, v9, v10, v11);
        if ( v12 )
        {
          v13 = v12[16];
          if ( v13 )
          {
            if ( (*(_BYTE *)(v13 + 10) & 0x20) != 0 )
              sub_1AA6760(a1, a2, a4);
          }
        }
      }
    }
  }
}
