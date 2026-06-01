__int64 __fastcall sub_B62710(__int64 a1)
{
  _DWORD *v1; // rcx
  int v2; // edx
  unsigned int v3; // r12d
  unsigned int v4; // eax
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 *v11; // rbp
  bool v12; // zf
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  char v18; // dl
  char v19; // al
  int v20; // r12d
  int v21; // ecx
  int v22; // edx

  v1 = *(_DWORD **)(a1 + 16);
  if ( *(char *)(a1 + 2) >= 0 )
  {
    v2 = *v1 >> 14;
    v3 = v2 & 0x13;
    v4 = ((*(_BYTE *)(a1 + 2) >> 3) & 0xF) - 3;
    if ( (v2 & 4) != 0 )
    {
      v3 |= 8u;
      if ( v4 > 1 || (v2 & 2) != 0 )
        return v3;
    }
    else if ( v4 > 1 )
    {
      return v3;
    }
    v6 = sub_BFB9F0(*(_QWORD *)(a1 + 16));
    v7 = *(_WORD *)v6 & 0x1FF;
    if ( v7 == 71 )
    {
      v8 = *(_QWORD *)(v6 + 16);
LABEL_9:
      if ( v8 && (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v9 = sub_B8C3D0(v8);
        v10 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
        if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
          v11 = *(__int64 **)sub_B8C3D0(v8);
        else
          v11 = nullptr;
        v12 = v11 == (__int64 *)v10;
        if ( (unsigned __int64)v11 >= v10 )
          goto LABEL_25;
LABEL_14:
        v13 = v11;
        if ( *(_WORD *)(*v11 + 36) == 126 )
          goto LABEL_17;
        while ( (__int64 *)v10 != ++v13 )
        {
          if ( *(_WORD *)(*v13 + 36) == 126 )
          {
            while ( 1 )
            {
LABEL_17:
              v14 = *v11;
              if ( *(_WORD *)(*v11 + 36) != 126 )
              {
                v15 = v11 + 1;
                do
                {
                  v14 = *v15;
                  v11 = v15++;
                }
                while ( *(_WORD *)(v14 + 36) != 126 );
              }
              if ( sub_B08B30(v14) )
                v3 |= 0x10u;
              if ( sub_B08AF0(v14) )
                v3 |= 0xAu;
              v12 = ++v11 == (__int64 *)v10;
              if ( (unsigned __int64)v11 < v10 )
                goto LABEL_14;
LABEL_25:
              if ( v12 )
                return v3;
              if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 126 )
              {
                v16 = (__int64 *)(v10 + 8);
                while ( v11 != v16 )
                {
                  v17 = *v16++;
                  if ( *(_WORD *)(v17 + 36) == 126 )
                    goto LABEL_17;
                }
                return v3;
              }
            }
          }
        }
      }
      return v3;
    }
    if ( v7 == 46 )
    {
      v8 = *(_QWORD *)(v6 + 24);
      goto LABEL_9;
    }
    return v3;
  }
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v19 = (2 * ((v18 & 2) != 0))
      | ((v18 & 4) != 0 ? 0xC : 0)
      | (16 * ((v18 & 0x10) != 0))
      | (32 * ((v18 & 8) != 0))
      | v18 & 1;
  v20 = (2 * ((v18 & 2) != 0)) & 0x10 | (16 * ((v18 & 0x10) != 0)) & 0x10;
  if ( (2 * ((v18 & 2) != 0)) & 0x10 | (16 * ((v18 & 0x10) != 0)) & 0x10 )
    v20 = 16;
  v21 = (2 * ((v18 & 2) != 0)) & 8 | ((v18 & 4) != 0 ? 8 : 0);
  if ( (2 * ((v18 & 2) != 0)) & 8 | ((v18 & 4) != 0 ? 8 : 0) )
    v21 = 8;
  v22 = (2 * ((v18 & 2) != 0)) & 2;
  if ( (v19 & 2) != 0 )
    v22 = 2;
  return v22 | v21 | v19 & 1 | (unsigned int)v20;
}
