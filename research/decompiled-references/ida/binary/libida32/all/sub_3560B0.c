__int64 __fastcall sub_3560B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( *(_BYTE *)(a1 + 56)
    && (v3 = *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 24) < (unsigned int)v3)
    && (get_flags_ex(v3, 4) & 0x400) != 0 )
  {
    return 0;
  }
  else
  {
    return sub_3BA7D0(*(_QWORD *)(a1 + 16), a2, a1 + 32);
  }
}

