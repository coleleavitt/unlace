__int64 __fastcall sub_81FBE0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // dl
  int v8; // eax
  int v9; // edx
  __int64 v10; // rdx

  v3 = *(unsigned __int8 *)(a1 + 8);
  if ( (_BYTE)v3 )
    return 1;
  v6 = sub_8175F0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL));
  if ( (a3 & 0x10) != 0 )
  {
    if ( (~(unsigned __int8)((unsigned int)v6 >> 3) & 7) != 0 )
      goto LABEL_6;
    if ( (v6 & 0x104) != 0 )
    {
      sub_A2E130(a1, a2, 2208, 0);
      return v3;
    }
LABEL_12:
    LOBYTE(v6) = (unsigned __int8)v6 >> 6;
    v10 = 9;
    if ( !_bittest64(&v10, v6) )
      goto LABEL_8;
    return 1;
  }
  if ( !a3 )
    return 1;
  if ( (~(unsigned __int8)((unsigned int)v6 >> 3) & 7) == 0 )
  {
    if ( (v6 & 0x104) != 0 )
      goto LABEL_8;
    goto LABEL_12;
  }
LABEL_6:
  v7 = v6;
  v8 = v6 & 0x100;
  v9 = v7 >> 6;
  if ( v9 == 3 )
  {
    if ( v8 )
      goto LABEL_8;
    return 1;
  }
  if ( !(v8 | v9) )
    return 1;
LABEL_8:
  sub_A2E130(a1, a2, 2210, 0);
  return v3;
}

