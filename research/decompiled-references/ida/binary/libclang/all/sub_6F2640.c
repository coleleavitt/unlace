__int64 __fastcall sub_6F2640(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  unsigned int v3; // r11d
  int v4; // eax
  __int64 v6; // r9
  __int64 v7; // rbp
  int v8; // edi
  int v9; // edx
  int v10; // r12d
  __int64 v11; // r13
  __int64 *v12; // rax
  int v13; // esi
  __int64 v14; // rcx
  __int64 *v15; // r8

  v4 = *((_DWORD *)a1 + 4);
  if ( v4 )
  {
    v6 = *a2;
    v7 = *a1;
    v8 = v4 - 1;
    v9 = 1;
    v10 = *((_DWORD *)a2 + 2);
    LODWORD(v11) = (v4 - 1) & (((unsigned int)*a2 >> 4) ^ ((unsigned int)*a2 >> 9));
    v12 = (__int64 *)(v7 + 40LL * (unsigned int)v11);
    v13 = *((_DWORD *)v12 + 2);
    v14 = *v12;
    v15 = nullptr;
    LOBYTE(v3) = v6 == *v12 && v10 == v13;
    if ( !(_BYTE)v3 )
    {
      if ( !v14 )
        goto LABEL_10;
LABEL_4:
      if ( v14 == -1 && v13 == 0 && !v15 )
        v15 = v12;
      while ( 1 )
      {
        v11 = v8 & (unsigned int)(v11 + v9);
        v12 = (__int64 *)(v7 + 40 * v11);
        v14 = *v12;
        v13 = *((_DWORD *)v12 + 2);
        if ( v6 == *v12 && v13 == v10 )
          break;
        ++v9;
        if ( v14 )
          goto LABEL_4;
LABEL_10:
        if ( !v13 )
        {
          if ( v15 )
            v12 = v15;
          *a3 = v12;
          return v3;
        }
      }
    }
    *a3 = v12;
    return 1;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}

