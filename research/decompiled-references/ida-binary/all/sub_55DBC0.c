int __fastcall sub_55DBC0(unsigned __int8 **a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // r12
  unsigned __int8 *v3; // rbx
  int v4; // ebp
  int result; // eax
  signed int v6; // r15d
  int v7; // edx
  int v8; // r15d
  int v9; // esi
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  int v12; // r15d
  unsigned __int64 v13; // r15
  signed int v14; // r15d
  int v15; // eax

  v1 = 0x4000000040003001LL;
  v2 = (unsigned __int64)a1[2];
  v3 = *a1;
  LOBYTE(v4) = *((_BYTE *)a1 + 28);
  while ( 1 )
  {
    v3 += (unsigned __int8)v4;
    *a1 = v3;
    if ( (unsigned __int64)v3 >= v2 )
      break;
LABEL_5:
    v6 = *v3;
    LOBYTE(v4) = 1;
    *((_DWORD *)a1 + 6) = v6;
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_17;
    v7 = v2 - (_DWORD)v3;
    if ( (_DWORD)v2 - (_DWORD)v3 == 1 )
      goto LABEL_23;
    if ( v6 <= 223 )
    {
      if ( v6 <= 193 )
        goto LABEL_23;
      v12 = v6 & 0x1F;
      v11 = 1;
      LOBYTE(v4) = 1;
      *((_DWORD *)a1 + 6) = v12;
LABEL_15:
      if ( (unsigned __int8)(v3[v11] + 0x80) > 0x3Fu )
        goto LABEL_24;
      LOBYTE(v4) = v4 + 1;
      v6 = (unsigned __int8)(v3[v11] + 0x80) | (v12 << 6);
      *((_DWORD *)a1 + 6) = v6;
LABEL_17:
      *((_BYTE *)a1 + 28) = v4;
      result = iswalnum(v6);
      if ( !result )
      {
        v13 = (unsigned int)(v6 - 33);
        if ( (unsigned int)v13 > 0x3E || !_bittest64(&v1, v13) )
          return result;
      }
    }
    else
    {
      if ( v6 > 239 )
      {
        v14 = v6 - 240;
        *((_DWORD *)a1 + 6) = v14;
        if ( v14 > 4 || (v15 = byte_6D56E0[(v3[1] >> 4) & 0xF], !_bittest(&v15, v14)) )
        {
LABEL_23:
          LOBYTE(v4) = 1;
          goto LABEL_24;
        }
        v8 = v3[1] & 0x3F | (v14 << 6);
        *((_DWORD *)a1 + 6) = v8;
        if ( v7 == 2 || (v10 = v3[2] + 0x80, v10 > 0x3Fu) )
        {
          LOBYTE(v4) = 2;
          goto LABEL_24;
        }
        v11 = 3;
        v4 = 3;
      }
      else
      {
        v8 = v6 & 0xF;
        *((_DWORD *)a1 + 6) = v8;
        v9 = byte_5C329C[v8];
        if ( !_bittest(&v9, v3[1] >> 5) )
          goto LABEL_23;
        v10 = v3[1] & 0x3F;
        v11 = 2;
        v4 = 2;
      }
      v12 = v10 | (v8 << 6);
      *((_DWORD *)a1 + 6) = v12;
      if ( v7 != v4 )
        goto LABEL_15;
      LOBYTE(v4) = v2 - (_BYTE)v3;
LABEL_24:
      *((_DWORD *)a1 + 6) = -1;
      *((_BYTE *)a1 + 28) = v4;
      result = iswalnum(0xFFFFFFFF);
      if ( !result )
        return result;
    }
  }
  while ( 1 )
  {
    *((_BYTE *)a1 + 28) = 0;
    *((_DWORD *)a1 + 6) = 0;
    result = iswalnum(0);
    if ( !result )
      return result;
    *a1 = v3;
    if ( (unsigned __int64)v3 < v2 )
      goto LABEL_5;
  }
}
