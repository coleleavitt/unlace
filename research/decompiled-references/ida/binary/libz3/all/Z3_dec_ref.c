void __fastcall Z3_dec_ref(__int64 a1, __int64 a2)
{
  char v2; // r12
  _BYTE *v3; // rax
  _BYTE *v4; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_294BC0();
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) )
      {
        sub_252470(a1, a2);
      }
      else
      {
        v4 = *(_BYTE **)(a1 + 1536);
        *(_DWORD *)(a1 + 1520) = 11;
        *(_QWORD *)(a1 + 1544) = 0;
        *v4 = 0;
        if ( *(_QWORD *)(a1 + 1528) )
        {
          sub_2BC170();
          (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 11);
        }
      }
    }
    byte_1C7EBA0 = 1;
  }
  else if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      sub_252470(a1, a2);
    }
    else
    {
      v3 = *(_BYTE **)(a1 + 1536);
      *(_DWORD *)(a1 + 1520) = 11;
      *(_QWORD *)(a1 + 1544) = 0;
      *v3 = 0;
      if ( *(_QWORD *)(a1 + 1528) )
      {
        sub_2BC170();
        (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 11);
      }
    }
  }
}

