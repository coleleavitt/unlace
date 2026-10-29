void __fastcall sub_B23C70(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // r12
  __int64 v5; // r13

  if ( !*(_WORD *)(a2 + 4) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)(v3 + 8) == *v2 && !v2[1] )
      {
        if ( (unsigned __int8)sub_162B070(*(_QWORD *)(v3 + 16)) )
        {
          v4 = (__int64 *)sub_186B270(0x20u);
          v5 = sub_186B270(0x28u);
          sub_162B3B0(v5, *(_QWORD *)(a1 + 64), a2);
          *v4 = v5;
          v4[1] = 0;
          v4[2] = 0;
          v4[3] = 0;
          sub_B23930(a1, (__int64)v4);
        }
      }
    }
  }
}

