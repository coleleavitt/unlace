/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_732E0
// Address: 0x000732E0

//----- (000732E0) --------------------------------------------------------
unsigned int __cdecl sub_732E0(int a1, int a2, char a3)
{
  int v3; // eax
  _BOOL4 v4; // edx
  int v5; // eax
  _BOOL4 v6; // edx
  int v7; // eax
  _BOOL4 v8; // edx
  int v9; // eax
  _BOOL4 v10; // edx
  int v11; // ecx
  unsigned __int64 v12; // kr00_8
  char v14[4]; // [esp+8h] [ebp-44h] BYREF
  unsigned __int64 v15; // [esp+Ch] [ebp-40h]
  char v16[4]; // [esp+18h] [ebp-34h] BYREF
  __int64 v17; // [esp+1Ch] [ebp-30h]
  char v18[4]; // [esp+28h] [ebp-24h] BYREF
  __int64 v19; // [esp+2Ch] [ebp-20h]
  unsigned int v20; // [esp+38h] [ebp-14h]

  v20 = __readgsdword(0x14u);
  sub_71D00(a1, a2, a3);
  while ( 1 )
  {
    v18[0] = 1;
    v19 = 0;
    v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
    if ( v3 != 8509 )
      break;
    sub_71D00(a1, (int)v18, 1);
    v4 = v19 != *(_QWORD *)(a2 + 4);
LABEL_2:
    *(_DWORD *)(a2 + 4) = v4;
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)a2 = 0;
  }
  if ( (unsigned __int16)v3 == 15677 )
  {
    sub_71D00(a1, (int)v18, 1);
    v4 = v19 == *(_QWORD *)(a2 + 4);
    goto LABEL_2;
  }
  if ( (unsigned __int16)v3 != 38 )
    goto LABEL_15;
  while ( 2 )
  {
    v16[0] = 1;
    v17 = 0;
    sub_71D00(a1, (int)v16, 1);
    while ( 2 )
    {
      v18[0] = 1;
      v19 = 0;
      v5 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
      if ( v5 == 8509 )
      {
        sub_71D00(a1, (int)v18, 1);
        v6 = v19 != v17;
        goto LABEL_9;
      }
      if ( (unsigned __int16)v5 == 15677 )
      {
        sub_71D00(a1, (int)v18, 1);
        v6 = v19 == v17;
LABEL_9:
        v17 = v6;
        v16[0] = 0;
        continue;
      }
      break;
    }
    *(_QWORD *)(a2 + 4) &= v17;
    v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
    if ( v3 == 38 )
      continue;
    break;
  }
LABEL_15:
  if ( (unsigned __int16)v3 == 94 )
  {
LABEL_18:
    v14[0] = 1;
    v15 = 0;
    sub_71D00(a1, (int)v14, 1);
    while ( 1 )
    {
      v18[0] = 1;
      v19 = 0;
      v7 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
      if ( v7 == 8509 )
      {
        sub_71D00(a1, (int)v18, 1);
        v8 = v19 != v15;
      }
      else
      {
        if ( (unsigned __int16)v7 != 15677 )
        {
          if ( (unsigned __int16)v7 != 38 )
          {
            v12 = v15;
            goto LABEL_17;
          }
          while ( 2 )
          {
            v16[0] = 1;
            v17 = 0;
            sub_71D00(a1, (int)v16, 1);
            while ( 2 )
            {
              v18[0] = 1;
              v19 = 0;
              v9 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
              if ( v9 == 8509 )
              {
                sub_71D00(a1, (int)v18, 1);
                v10 = v19 != v17;
                goto LABEL_26;
              }
              if ( (unsigned __int16)v9 == 15677 )
              {
                sub_71D00(a1, (int)v18, 1);
                v10 = v19 == v17;
LABEL_26:
                v17 = v10;
                v16[0] = 0;
                continue;
              }
              break;
            }
            v11 = HIDWORD(v15) & HIDWORD(v17);
            v15 &= v17;
            v12 = __PAIR64__(v11, v15);
            if ( (unsigned __int16)v9 == 38 )
              continue;
            break;
          }
LABEL_17:
          *(_QWORD *)(a2 + 4) ^= v12;
          if ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) != 94 )
            return __readgsdword(0x14u);
          goto LABEL_18;
        }
        sub_71D00(a1, (int)v18, 1);
        v8 = v19 == v15;
      }
      v15 = v8;
      v14[0] = 0;
    }
  }
  return __readgsdword(0x14u);
}
