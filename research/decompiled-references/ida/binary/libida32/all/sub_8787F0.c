__int64 __fastcall sub_8787F0(__int64 a1)
{
  char v1; // r8
  __int64 v2; // r10
  int v4; // r9d
  char *v5; // r10
  bool v6; // r8
  __int64 result; // rax
  int v8; // edx
  int v9; // eax
  int v10; // r9d
  unsigned __int8 *v11; // rcx
  int v12; // ebp
  int v13; // edi
  int i; // edx
  unsigned __int8 v15; // al
  int v16; // esi
  unsigned int v17; // r9d
  unsigned int v18; // ebp
  int v19; // eax
  int v20; // [rsp+8h] [rbp-230h] BYREF
  int v21; // [rsp+Ch] [rbp-22Ch] BYREF
  _DWORD v22[130]; // [rsp+10h] [rbp-228h] BYREF
  unsigned __int64 v23; // [rsp+218h] [rbp-20h]

  v1 = *(_BYTE *)(a1 + 98);
  v2 = *(_QWORD *)(a1 + 80);
  v23 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 104);
  v20 = 0;
  v5 = (char *)(a1 + v2);
  v6 = (v1 & 8) != 0;
  if ( (v4 & 0x210) != 0 )
    goto LABEL_2;
  v21 = 0;
  v9 = sub_877F00(a1, v5, &v21);
  if ( v9 == 3 )
    return 1;
  if ( v9 != 1 )
  {
    v4 = *(_DWORD *)(a1 + 104);
    goto LABEL_2;
  }
  v11 = (unsigned __int8 *)(a1 + 40);
  v12 = -1;
  v13 = -1;
  for ( i = 0; i != 256; i += 8 )
  {
    v15 = *v11;
    if ( *v11 )
    {
      if ( (v15 & (unsigned __int8)(v15 - 1)) != 0 )
        goto LABEL_44;
      if ( v15 > 0x20u )
      {
        v16 = i + 6;
        if ( v15 != 64 )
        {
          v16 = i + 7;
          if ( v15 != 0x80 )
            v16 = i;
        }
      }
      else if ( v15 == 1 )
      {
LABEL_21:
        v16 = i;
      }
      else
      {
        switch ( *v11 )
        {
          case 2u:
            v16 = i + 1;
            break;
          case 4u:
            v16 = i + 2;
            break;
          case 8u:
            v16 = i + 3;
            break;
          case 0x10u:
            v16 = i + 4;
            break;
          case 0x20u:
            v16 = i + 5;
            break;
          default:
            goto LABEL_21;
        }
      }
      if ( v16 > 127 && v6 )
        goto LABEL_44;
      if ( v13 < 0 )
      {
        v13 = v16;
      }
      else
      {
        if ( v12 >= 0 || v13 != *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + v16 + 256) )
          goto LABEL_44;
        v12 = v16;
      }
    }
    ++v11;
  }
  if ( v13 < 0 )
  {
LABEL_44:
    v17 = *(_DWORD *)(a1 + 104);
    v18 = 64;
  }
  else
  {
    if ( (v10 & 0x80u) == 0 )
    {
      v17 = *(_DWORD *)(a1 + 104);
LABEL_32:
      *(_DWORD *)(a1 + 120) = v13;
      v18 = ((v12 >> 31) & 0xFFFFFFE0) + 48;
      goto LABEL_45;
    }
    v19 = *(_DWORD *)(a1 + 124);
    if ( v19 == v13 )
    {
      *(_DWORD *)(a1 + 124) = 0;
      v17 = v10 & 0xFFFFFE7F;
      goto LABEL_32;
    }
    if ( v12 < 0 )
    {
      *(_DWORD *)(a1 + 120) = v13;
      v17 = *(_DWORD *)(a1 + 104);
      v18 = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 120) = v13;
      if ( v19 == v12 )
      {
        v17 = v10 & 0xFFFFFE7F;
        v18 = 48;
        *(_DWORD *)(a1 + 124) = 0;
      }
      else
      {
        v17 = *(_DWORD *)(a1 + 104);
        v18 = 48;
      }
    }
  }
LABEL_45:
  v4 = v18 | v17;
  *(_DWORD *)(a1 + 104) = v4;
LABEL_2:
  if ( (v4 & 0x802000) != 0 || *(_WORD *)(a1 + 138) > 0x80u )
    return 0;
  v22[0] = 0;
  v8 = sub_8772C0(a1, v5, (unsigned __int8 *)v5, v6, nullptr, &v20, v22);
  result = 2;
  if ( v8 == -2 )
    return result;
  if ( v8 == -1 )
    return 0;
  result = 3;
  if ( v8 != -3 )
  {
    if ( v8 > 0xFFFF )
      LOWORD(v8) = -1;
    *(_WORD *)(a1 + 134) = v8;
    return 0;
  }
  return result;
}

