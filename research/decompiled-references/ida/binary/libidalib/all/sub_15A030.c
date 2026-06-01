__int64 (*__fastcall sub_15A030(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rdi
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 992) )
  {
    if ( *(_QWORD *)(a1 + 480) )
    {
      if ( *(_DWORD *)(a1 + 472) == 1 )
      {
        v2 = *(_QWORD *)(a1 + 856);
        if ( v2 )
        {
          result = *(__int64 (**)(void))(*(_QWORD *)v2 + 264LL);
          if ( (char *)result != (char *)nullsub_4 )
            return (__int64 (*)(void))result();
        }
      }
    }
    else
    {
      sub_158B30(a1);
      if ( *(_BYTE *)(a1 + 992) )
      {
        if ( *(_QWORD *)(a1 + 480) )
        {
          v3 = 0;
          if ( *(_DWORD *)(a1 + 472) == 1 )
            v3 = *(_QWORD *)(a1 + 856);
          __asm { jmp     r9 }
        }
        sub_158B30(a1);
        return (__int64 (*)(void))sub_15A0D0();
      }
      else
      {
        return (__int64 (*)(void))MEMORY[0x3010102464C45B7](0);
      }
    }
  }
  return result;
}

