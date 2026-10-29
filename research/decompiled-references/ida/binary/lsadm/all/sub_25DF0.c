__int64 __fastcall sub_25DF0(unsigned int a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r10d
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  unsigned int v7; // r11d
  _DWORD *v8; // rax
  __int64 v9; // rdx
  int v11; // eax
  int v12; // eax

  if ( a1 > 0x10FFFF )
    return 0;
  v1 = a1;
  v2 = 13312;
  v3 = 0;
  v4 = 3200;
  v5 = 3200;
  while ( 1 )
  {
    v6 = v5 / 2;
    if ( (unsigned __int64)(v5 / 2) <= 0xC7F )
    {
      v7 = 1114112;
      if ( v6 != 3199 )
        v7 = *((_DWORD *)&qword_3E460 + 3 * v6 + 3);
      if ( (unsigned int)v1 >= v2 && (unsigned int)v1 < v7 )
        break;
    }
    if ( v2 >= (unsigned int)v1 )
    {
      v4 = v6 - 1;
      v12 = 3199;
      if ( v4 <= 3199 )
        v12 = v4;
      if ( v12 < v3 )
        return 0;
    }
    else
    {
      v3 = v6 + 1;
      v11 = 3199;
      if ( v4 <= 3199 )
        v11 = v4;
      if ( v11 < v3 )
        return 0;
    }
    v5 = v3 + v4;
    v2 = *((_DWORD *)&qword_3E460 + 3 * ((v3 + v4) / 2));
  }
  v8 = (_DWORD *)&qword_3E460 + 3 * v6;
  v9 = (unsigned int)v8[1];
  if ( !v8[2] )
    v9 = (unsigned int)(v1 + v9 - *v8);
  if ( (unsigned int)v9 > 0x1D51 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(1519, v1);
    BUG();
  }
  return *((unsigned int *)qword_47A60 + v9);
}

