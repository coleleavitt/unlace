__int64 __fastcall sub_7ABA60(_QWORD *a1, int a2, unsigned int a3)
{
  int v4; // r9d
  void *v5; // rbx
  _DWORD *v6; // rdx
  char v8; // [rsp+0h] [rbp-68h]
  char v9; // [rsp+0h] [rbp-68h]
  char v10; // [rsp+1Bh] [rbp-4Dh] BYREF
  int v11; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
    sub_383DA0();
  if ( (unsigned int)qsscanf(a2, (int)"OpenSSL %d.%d.%d%c", (int)&v11, (int)&v12, (int)&v13, (int)&v10, v8) == 4 )
  {
    LODWORD(v5) = v10 | (v13 << 8) | (v12 << 16) | (v11 << 24);
    if ( (unsigned int)v5 >= a3 )
    {
      if ( (unsigned int)v5 > (unsigned int)&algn_100FFF6[9] )
      {
        v6 = (_DWORD *)operator new(0x218u);
        memset(v6, 0, 0x218u);
        *(_QWORD *)v6 = off_2B10A90;
LABEL_6:
        *a1 = v6;
        v6[92] = (_DWORD)v5;
        return 1;
      }
LABEL_14:
      v6 = (_DWORD *)operator new(0x1A8u);
      memset(v6, 0, 0x1A8u);
      *(_QWORD *)v6 = off_2B109C0;
      goto LABEL_6;
    }
  }
  else if ( (unsigned int)qsscanf(a2, (int)"LibreSSL %d.%d.%d", (int)&v11, (int)&v12, (int)&v13, v4, v9) == 3
         && v11 == 2
         && (unsigned int)(v12 - 2) <= 3 )
  {
    if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      sub_383DA0();
    v5 = &loc_1000167;
    if ( a3 <= (unsigned int)&loc_1000167 )
      goto LABEL_14;
  }
  return 0;
}

