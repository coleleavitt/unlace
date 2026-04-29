__int64 __fastcall sub_267A0(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  _DWORD *v4; // rdx
  __int64 v5; // [rsp+Ch] [rbp-2Ch]
  int v6; // [rsp+14h] [rbp-24h]

  if ( *(_DWORD *)(a1 + 212) && (unsigned __int64)(get_sreg(a2, 20) - 1) > 0xFFFFFFFFFFFFFFFDLL )
    return -1;
  if ( (a2 & 3) != 0 || (unsigned __int16)get_word(a2) != 18296 )
  {
    if ( get_bytes() == 12 )
    {
      v3 = &off_9FFE0;
      v4 = qword_8B178;
      if ( v5 == qword_8B178[0] )
        goto LABEL_9;
      while ( 1 )
      {
        v3 += 8;
        if ( v3 == algn_9FFF8 )
          break;
        v4 = *(_DWORD **)v3;
        if ( v5 == **(_QWORD **)v3 )
        {
LABEL_9:
          if ( v6 == v4[2] )
            return (unsigned int)get_dword(a2 + 12);
        }
      }
    }
    return -1;
  }
  return a2 + 4;
}
