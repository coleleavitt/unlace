__int64 __fastcall sub_167F780(__int64 a1, unsigned int *a2, unsigned int *a3, char a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v11; // esi

  v4 = *(_QWORD *)(a1 + 17448);
  switch ( *(_DWORD *)(v4 + 260) )
  {
    case 1:
    case 9:
      v7 = *a2;
      v6 = 10;
      v5 = 13;
      if ( *a2 < 0xA )
        goto LABEL_4;
      goto LABEL_9;
    case 5:
    case 0x1B:
      v5 = 0;
      v6 = 11;
      goto LABEL_3;
    case 0x1C:
      v5 = 0;
      v6 = 4;
      goto LABEL_3;
    case 0x26:
      return (unsigned int)(a4 == 0) + 6968;
    default:
      if ( *(_DWORD *)(v4 + 256) == 1 )
        return a4 == 0 ? 7476 : 7474;
      v5 = 0x7FFFFFFF;
      v6 = -1;
LABEL_3:
      v7 = *a2;
      if ( *a2 < v6 )
        goto LABEL_4;
LABEL_9:
      v11 = a2[1] & 0x7FFFFFFF;
      if ( v7 != v6 || v5 <= v11 )
        return a4 == 0 ? 7476 : 7474;
LABEL_4:
      v8 = *a3;
      if ( *a3 < v6 )
        return a4 == 0 ? 7475 : 7473;
      v9 = a3[1] & 0x7FFFFFFF;
      if ( v8 == v6 && v5 > v9 )
        return a4 == 0 ? 7475 : 7473;
      else
        return a4 == 0 ? 7476 : 7474;
  }
}
