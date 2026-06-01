__int64 __fastcall sub_7A5C80(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  _BYTE *v6; // [rsp+8h] [rbp-10h] BYREF

  v2 = sub_789AD0(a1, 1);
  if ( !v2 )
    v2 = (_QWORD *)a1;
  v3 = sub_788920(v2, (__int64)&v6, 0);
  if ( (_BYTE)v3 && (v4 = v3, !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v6 + 24LL))(v6)) )
  {
    if ( (v6[83] & 8) != 0 )
      goto LABEL_10;
    if ( (v6[128] & 1) != 0 )
      return v6[128] & 1;
    if ( !*((_QWORD *)v6 + 16) )
    {
LABEL_10:
      if ( (v6[83] & 0x40) == 0 )
        return (v6[84] & 0x40) != 0;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}

