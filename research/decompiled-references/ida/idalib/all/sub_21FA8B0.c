__int64 __fastcall sub_21FA8B0(__int64 a1, __int64 a2)
{
  char v3; // dl
  char v4; // cl
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a2 + 20);
  v4 = v3 & 7;
  if ( (v3 & 7) == 1 )
  {
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
    {
      v7 = 0x7FFF;
      v6 = **(_QWORD **)(a2 + 8);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8);
      v7 = 0x7FFF;
    }
  }
  else if ( v4 == 3 || !v4 )
  {
    v7 = 0;
    v6 = 0;
    if ( v4 != 3 )
    {
      v6 = 0x8000000000000000LL;
      v7 = 0x7FFF;
    }
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16) + 0x3FFF;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a2 + 8LL) + 64) > 0x7F )
    {
      v6 = **(_QWORD **)(a2 + 8);
      if ( v5 != 1 )
        goto LABEL_7;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( v5 != 1 )
      {
LABEL_7:
        v7 = v5 & 0x7FFF;
        goto LABEL_10;
      }
    }
    v7 = 0;
    if ( v6 < 0 )
      goto LABEL_7;
  }
LABEL_10:
  v9[0] = v6;
  v9[1] = v7 | ((unsigned __int64)((v3 & 8) != 0) << 15);
  sub_2205600(a1, 80, v9, 2);
  return a1;
}
