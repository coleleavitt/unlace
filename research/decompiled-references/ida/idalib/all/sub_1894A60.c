__int64 __fastcall sub_1894A60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  unsigned __int8 v4; // dl
  _QWORD *v5; // rbp
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax

  LODWORD(v2) = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v3 = **(_BYTE ***)(a2 + 16);
    if ( v3 )
    {
      v4 = v3[28] & 0x7F;
      LOBYTE(v2) = (unsigned int)v4 - 53 > 1 && ((v4 + 52) & 0x7Fu) > 1;
      if ( !(_BYTE)v2 )
      {
        v3 = (_BYTE *)sub_B72ED0(**(_QWORD **)(a2 + 16));
        if ( !v3 )
          return (unsigned int)v2;
        v4 = v3[28] & 0x7F;
      }
      LODWORD(v2) = 0;
      if ( v4 == 20 )
      {
        v5 = *(_QWORD **)(a1 + 32);
        LODWORD(v2) = 1;
        if ( v5 )
        {
          if ( v5 == (_QWORD *)v3 )
          {
            LODWORD(v2) = 0;
          }
          else
          {
            v2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 32LL))(v3);
            v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 32LL);
            if ( v6 == sub_A55E60 )
              v7 = v5[12];
            else
              v7 = v6((__int64)v5);
            LOBYTE(v2) = v2 != v7;
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
