void __fastcall sub_226EFA0(unsigned int a1, _QWORD *a2)
{
  char v2; // bp
  __int64 v3; // rax
  unsigned int v4; // r12d
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx

  v2 = a1;
  if ( a1 <= 0x7F )
  {
    v7 = a2[1];
    v8 = v7 + 1;
    if ( (unsigned __int64)(v7 + 1) <= a2[2] )
      goto LABEL_8;
    goto LABEL_10;
  }
  if ( a1 <= 0x7FF )
  {
    v3 = a2[1];
    v2 = a1 & 0x3F | 0x80;
    v4 = (a1 >> 6) | 0xFFFFFFC0;
    v5 = v3 + 1;
    if ( (unsigned __int64)(v3 + 1) <= a2[2] )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( a1 <= 0xFFFF )
  {
    v9 = a2[1];
    v2 = a1 & 0x3F | 0x80;
    v4 = (a1 >> 6) & 0x3F | 0xFFFFFF80;
    if ( (unsigned __int64)(v9 + 1) > a2[2] )
    {
      sub_2236E10((__int64)a2, a2 + 3, v9 + 1, 1);
      v9 = a2[1];
    }
    *(_BYTE *)(*a2 + v9) = (a1 >> 12) | 0xE0;
    v10 = a2[1];
    v3 = v10 + 1;
    v5 = v10 + 2;
    a2[1] = v3;
    if ( v5 <= a2[2] )
    {
LABEL_7:
      *(_BYTE *)(*a2 + v3) = v4;
      v6 = a2[1];
      v7 = v6 + 1;
      v8 = v6 + 2;
      a2[1] = v7;
      if ( v8 <= a2[2] )
      {
LABEL_8:
        *(_BYTE *)(*a2 + v7) = v2;
        ++a2[1];
        return;
      }
LABEL_10:
      sub_2236E10((__int64)a2, a2 + 3, v8, 1);
      v7 = a2[1];
      goto LABEL_8;
    }
LABEL_14:
    sub_2236E10((__int64)a2, a2 + 3, v5, 1);
    v3 = a2[1];
    goto LABEL_7;
  }
  if ( a1 <= 0x10FFFF )
  {
    sub_FC8050(a2, (a1 >> 18) | 0xF0);
    sub_FC8050(a2, (a1 >> 12) & 0x3F | 0x80);
    sub_FC8050(a2, (a1 >> 6) & 0x3F | 0x80);
    sub_FC8050(a2, a1 & 0x3F | 0x80);
  }
}
