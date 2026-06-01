__int64 __fastcall sub_1FC90(_QWORD *a1, const char *a2, unsigned int a3)
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
  if ( (dword_7BCA4 & 0x100000) != 0 )
    sub_15E90((__int64 (__fastcall ***)(_QWORD))"TLS: OpenSSL version \"%s\"\n", a2);
  if ( (unsigned int)sub_2BE80(
                       (_DWORD)a2,
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
        *(_QWORD *)v6 = off_79388;
LABEL_7:
        *a1 = v6;
        v6[92] = v5;
        return 1;
      }
LABEL_15:
      v6 = (_DWORD *)operator new(0x1A8u);
      memset(v6, 0, 0x1A8u);
      *(_QWORD *)v6 = off_792B8;
      goto LABEL_7;
    }
  }
  else if ( (unsigned int)sub_2BE80(
                            (_DWORD)a2,
                            (unsigned int)"LibreSSL %d.%d.%d",
                            (unsigned int)&v9,
                            (unsigned int)&v10,
                            (unsigned int)&v11,
                            v4) == 3
         && v9 == 2
         && (unsigned int)(v10 - 2) <= 3 )
  {
    if ( (dword_7BCA4 & 0x100000) != 0 )
      sub_15E90((__int64 (__fastcall ***)(_QWORD))"TLS: LibreSSL detected. Setting OpenSSL API version to 1.0.1g\n");
    v5 = 16777575;
    if ( a3 <= 0x1000167 )
      goto LABEL_15;
  }
  return 0;
}

