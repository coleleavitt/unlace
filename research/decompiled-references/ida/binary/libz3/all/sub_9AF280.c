__int64 __fastcall sub_9AF280(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v13; // r12d
  __int64 v14; // r15
  signed int i; // edx
  __int64 v16; // rax
  signed int v17; // eax
  char v20[88]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    v8 = v7 + 40LL * *(unsigned int *)(v7 - 4);
    if ( v7 != v8 )
    {
      v9 = v7;
      v10 = 0;
      while ( 1 )
      {
        v11 = *(unsigned int *)(v9 + 32);
        if ( (_DWORD)v11 != -1
          && (!*(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v11) || !*(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v11))
          && (unsigned int)++v10 > 2 )
        {
          return 0;
        }
        v9 += 40;
        if ( v8 == v9 )
        {
          *a3 = -1;
          *a4 = -1;
          do
          {
            v13 = *(_DWORD *)(v7 + 32);
            if ( v13 != -1 && !sub_99A460(a1, v13) )
            {
              if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
                return 0;
              if ( *(_DWORD *)v7 == 1 )
              {
                if ( (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 || *a3 != -1 )
                  return 0;
                *a3 = v13;
              }
              else
              {
                if ( *(_DWORD *)v7 != -1 || (*(_BYTE *)(v7 + 20) & 1) != 0 || *(_DWORD *)(v7 + 16) != 1 || *a4 != -1 )
                  return 0;
                *a4 = v13;
              }
            }
            v7 += 40;
          }
          while ( v7 != v9 );
          if ( *a3 == -1 && *a4 == -1 )
            return 0;
          goto LABEL_23;
        }
      }
    }
  }
  *a3 = -1;
  v9 = v7;
  *a4 = -1;
  if ( *a3 == -1 )
    return 0;
LABEL_23:
  sub_992B50(a5);
  v14 = *(_QWORD *)a2;
  for ( i = *a4; v14 != v9; v14 += 40 )
  {
    v16 = *(unsigned int *)(v14 + 32);
    if ( (_DWORD)v16 != -1 && *a3 != (_DWORD)v16 && (_DWORD)v16 != i )
    {
      sub_3EBE30((__int64)v20, v14, *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v16) + 16LL);
      sub_89ABF0((__int64)qword_1C7F2C0, a5, (__int64)v20, a5);
      sub_25A130(v20);
      i = *a4;
    }
  }
  if ( i != -1 )
  {
    v17 = *a3;
    if ( *a3 == -1 )
    {
      *a3 = i;
      *a4 = -1;
      sub_1831620(qword_1C7F2C0, a5);
    }
    else if ( *(_DWORD *)(a2 + 12) != v17 && v17 > i )
    {
      *a3 = i;
      *a4 = v17;
      sub_1831620(qword_1C7F2C0, a5);
    }
  }
  return 1;
}

