__int64 __fastcall sub_3EA1F0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r9
  int v5; // esi
  _DWORD *v6; // rax
  int v7; // r10d

  if ( a3 <= 120 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( *(_BYTE *)(v4 + 144) )
    {
      v5 = 72;
      v6 = &unk_42E280;
      v7 = 256;
      if ( a3 == 120 )
      {
        v5 = 8;
        v6 = &unk_42E240;
      }
LABEL_5:
      while ( !v6[2] || (int)a2 < (unsigned __int64)v5 || (int)v6[2] + (__int64)v5 - 1 < (unsigned __int64)(int)a2 )
      {
        v5 = v6[3];
        v6 += 3;
        if ( !v5 )
          goto LABEL_11;
      }
      a2 += v6[1] - v5;
    }
    else
    {
      v7 = 60;
      if ( a3 == 120 )
      {
        v5 = 16;
        v6 = &unk_42E2C0;
        goto LABEL_5;
      }
LABEL_11:
      if ( *(_BYTE *)(v4 + 145) )
        return v7 - a2 + 16;
    }
  }
  return a2;
}
