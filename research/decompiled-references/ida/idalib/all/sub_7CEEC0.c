__int64 __fastcall sub_7CEEC0(_QWORD *a1, int a2, unsigned int a3)
{
  int v4; // r9d
  unsigned int v5; // ebx
  _DWORD *v6; // rdx
  char v8; // [rsp+1Bh] [rbp-4Dh] BYREF
  int v9; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v10; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
    sub_3879F0();
  if ( (unsigned int)qsscanf(
                       a2,
                       (unsigned int)"OpenSSL %d.%d.%d%c",
                       (unsigned int)&v9,
                       (unsigned int)&v10,
                       (unsigned int)&v11,
                       (unsigned int)&v8) == 4 )
  {
    v5 = v8 | (v11 << 8) | (v10 << 16) | (v9 << 24);
    if ( v5 >= a3 )
    {
      if ( v5 > 0x100FFFF )
      {
        v6 = (_DWORD *)operator new(0x218u);
        memset(v6, 0, 0x218u);
        *(_QWORD *)v6 = off_2B3AA30;
LABEL_6:
        *a1 = v6;
        v6[92] = v5;
        return 1;
      }
LABEL_14:
      v6 = (_DWORD *)operator new(0x1A8u);
      memset(v6, 0, 0x1A8u);
      *(_QWORD *)v6 = off_2B3A960;
      goto LABEL_6;
    }
  }
  else if ( (unsigned int)qsscanf(
                            a2,
                            (unsigned int)"LibreSSL %d.%d.%d",
                            (unsigned int)&v9,
                            (unsigned int)&v10,
                            (unsigned int)&v11,
                            v4) == 3
         && v9 == 2
         && (unsigned int)(v10 - 2) <= 3 )
  {
    if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      sub_3879F0();
    v5 = 16777575;
    if ( a3 <= 0x1000167 )
      goto LABEL_14;
  }
  return 0;
}
