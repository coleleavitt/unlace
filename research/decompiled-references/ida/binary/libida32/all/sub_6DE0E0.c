__int64 __fastcall sub_6DE0E0(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = 4 * v2;
    v4 = *(unsigned int *)(a1 + 16);
    if ( (unsigned int)(4 * v2) < 0x40 )
      v3 = 64;
    if ( v3 >= (unsigned int)v4 )
      goto LABEL_5;
    v7 = *(_QWORD **)a1;
    v8 = v2 - 1;
    if ( v8 )
    {
      _BitScanReverse(&v8, v8);
      v9 = 1 << (v8 + 2);
      if ( v9 < 64 )
        v9 = 64;
      if ( v9 == (_DWORD)v4 )
      {
        result = (__int64)&v7[2 * (unsigned int)v4];
        *(_QWORD *)(a1 + 8) = 0;
        if ( ((16 * (_BYTE)v4) & 0x10) == 0 || (*v7 = -4096, v7 += 2, (_QWORD *)result != v7) )
        {
          do
          {
            *v7 = -4096;
            v7 += 4;
            *(v7 - 2) = -4096;
          }
          while ( (_QWORD *)result != v7 );
        }
        return result;
      }
      operator delete();
      v13 = (4 * v9 / 3u + 1)
          | ((unsigned __int64)(4 * v9 / 3u + 1) >> 1)
          | (((4 * v9 / 3u + 1) | ((unsigned __int64)(4 * v9 / 3u + 1) >> 1)) >> 2)
          | (((4 * v9 / 3u + 1)
            | ((unsigned __int64)(4 * v9 / 3u + 1) >> 1)
            | (((4 * v9 / 3u + 1) | ((unsigned __int64)(4 * v9 / 3u + 1) >> 1)) >> 2)) >> 4);
      v14 = (v13 | (v13 >> 8) | ((v13 | (v13 >> 8)) >> 16)) + 1;
      v15 = 16 * ((v13 | (v13 >> 8) | ((v13 | (v13 >> 8)) >> 16)) + 1);
    }
    else
    {
      operator delete();
      v15 = 2048;
      v14 = 128;
    }
    *(_DWORD *)(a1 + 16) = v14;
    result = sub_220C370(v15, 8, v13, v10, v11, v12);
    v16 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = result;
    v17 = result + 16 * v16;
    if ( result != v17 )
    {
      if ( (((_BYTE)v17 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = -4096, result += 16, v17 != result) )
      {
        do
        {
          *(_QWORD *)result = -4096;
          result += 32;
          *(_QWORD *)(result - 16) = -4096;
        }
        while ( v17 != result );
      }
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)result )
    {
      v4 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v4 )
      {
        if ( (unsigned int)v4 <= 0x40 )
        {
LABEL_5:
          result = *(_QWORD *)a1;
          v6 = *(_QWORD *)a1 + 16 * v4;
          if ( v6 != *(_QWORD *)a1 )
          {
            if ( (((_BYTE)v6 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = -4096, result += 16, v6 != result) )
            {
              do
              {
                *(_QWORD *)result = -4096;
                result += 32;
                *(_QWORD *)(result - 16) = -4096;
              }
              while ( v6 != result );
            }
          }
          goto LABEL_9;
        }
        result = operator delete();
        *(_DWORD *)(a1 + 16) = 0;
        *(_QWORD *)a1 = 0;
      }
LABEL_9:
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  return result;
}

