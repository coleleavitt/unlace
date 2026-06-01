__int64 __fastcall sub_4B66C0(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v9; // rax
  char v10; // dl
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 || (unsigned __int8)(((unsigned int)sub_8930A0(a2) >> 16) - 15) > 2u )
  {
    if ( *(_DWORD *)(a1 + 12) == 2 )
    {
      if ( !(unsigned __int8)is_valid_cp(a2, 2, 0) )
      {
LABEL_4:
        v6 = *(_DWORD *)(a1 + 8);
        if ( (v6 & 1) != 0 )
        {
          *(_WORD *)a5 = 95;
          return 0xFFFFFFFFLL;
        }
        goto LABEL_15;
      }
    }
    else if ( !(unsigned __int8)is_valid_cp(a2, 6, 0) )
    {
      goto LABEL_4;
    }
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( (v6 & 1) != 0 )
  {
    *(_BYTE *)a5 = 95;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_BYTE *)(a4 + v9);
      *(_BYTE *)(a5 + v9 + 1) = v10;
      if ( !v10 )
        break;
      if ( ++v9 == 14 )
      {
        *(_BYTE *)(a5 + 15) = 0;
        return 0xFFFFFFFFLL;
      }
    }
    return 0xFFFFFFFFLL;
  }
LABEL_15:
  if ( (v6 & 0x100) == 0 )
  {
    put_utf8_char(v11, a2);
    sub_384000(1262, *(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), (__int64)v11);
  }
  return 4294967294LL;
}

