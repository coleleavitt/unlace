__int64 __fastcall sub_70B420(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 16) != 10 )
    __asm { jmp     rax }
  return (4 * *(_DWORD *)(a2 + 32)) & 0x7FFFFF8;
}

