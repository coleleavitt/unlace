_BOOL8 __fastcall sub_B4FBC0(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax
  _BYTE *v3; // rdx

  if ( sub_990BA0(a1)
    || (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 1LL) & 8) != 0
    || (result = 1, (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B) && *(char *)(a1 + 97) < 0 )
  {
    v1 = *(_QWORD *)(a1 + 88);
    result = 0;
    if ( v1 && (v1 & 4) != 0 )
    {
      v3 = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v3 )
        return (*v3 & 4) != 0;
    }
  }
  return result;
}

