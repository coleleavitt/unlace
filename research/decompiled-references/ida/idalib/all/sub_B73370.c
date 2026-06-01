__int64 __fastcall sub_B73370(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax

  result = 2;
  v2 = (*(_BYTE *)(a1 + 96) >> 3) & 3;
  if ( v2 != 2 )
  {
    result = 1;
    if ( ((*(_BYTE *)(a1 + 96) >> 3) & 3) != 3 && v2 != 1 )
    {
      if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      {
        v4 = sub_B8C3D0(a1);
        v5 = *(__int64 **)v4;
        v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
        if ( *(_QWORD *)v4 >= v6 )
        {
          if ( v5 != (__int64 *)v6 )
          {
            if ( *(_WORD *)(*(_QWORD *)v6 + 36LL) == 442 )
              goto LABEL_23;
            v8 = (__int64 *)(v6 + 8);
            while ( v5 != v8 )
            {
              v9 = *v8++;
              if ( *(_WORD *)(v9 + 36) == 442 )
                goto LABEL_23;
            }
          }
        }
        else
        {
          v7 = *(__int64 **)v4;
          while ( *(_WORD *)(*v7 + 36) != 442 )
          {
            if ( (__int64 *)v6 == ++v7 )
              goto LABEL_5;
          }
          if ( (__int64 *)v6 != v7 )
            goto LABEL_23;
        }
      }
LABEL_5:
      v3 = sub_B8C330(a1);
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 2320) + 68LL) & 4) == 0
        || !*(_BYTE *)(*(_QWORD *)(v3 + 17448) + 273LL)
        || (*(_BYTE *)(a1 + 29) & 1) == 0 )
      {
        return 0;
      }
      v10 = sub_B8C3D0(a1);
      v11 = *(_QWORD *)v10;
      v12 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
      if ( *(_QWORD *)v10 >= v12 )
      {
        if ( v11 == v12 )
          return 0;
        while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 297 )
        {
          v12 += 8LL;
          if ( v11 == v12 )
            return 0;
        }
      }
      else
      {
        v13 = *(_QWORD *)v10;
        while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 297 )
        {
          v13 += 8;
          if ( v12 == v13 )
            return 0;
        }
        if ( v12 == v13 )
          return 0;
      }
LABEL_23:
      if ( *(_DWORD *)(*(_QWORD *)(sub_B8C330(a1) + 2320) + 152LL) <= 0xB532B7Fu )
      {
        if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
          return 1;
        v14 = sub_B8C3D0(a1);
        v15 = *(_QWORD *)v14;
        v16 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
        if ( *(_QWORD *)v14 >= v16 )
        {
          if ( v15 == v16 )
            return 1;
          while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 297 )
          {
            v16 += 8LL;
            if ( v15 == v16 )
              return 1;
          }
        }
        else
        {
          v17 = *(_QWORD *)v14;
          while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 297 )
          {
            v17 += 8;
            if ( v16 == v17 )
              return 1;
          }
          if ( v16 == v17 )
            return 1;
        }
      }
      return 2;
    }
  }
  return result;
}
