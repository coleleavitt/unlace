__int64 __fastcall sub_6FE5C0(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = 4 * v2;
    v4 = *((unsigned int *)a1 + 4);
    if ( (unsigned int)(4 * v2) < 0x40 )
      v3 = 64;
    if ( v3 >= (unsigned int)v4 )
      goto LABEL_5;
    v7 = (_QWORD *)*a1;
    v8 = 16LL * (unsigned int)v4;
    v9 = v2 - 1;
    if ( v9 )
    {
      _BitScanReverse(&v9, v9);
      v10 = 1 << (v9 + 2);
      if ( v10 < 64 )
        v10 = 64;
      if ( v10 == (_DWORD)v4 )
      {
        result = (__int64)&v7[(unsigned __int64)v8 / 8];
        a1[1] = 0;
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
      operator delete(v7, v8, 8);
      v14 = (4 * v10 / 3u + 1)
          | ((unsigned __int64)(4 * v10 / 3u + 1) >> 1)
          | (((4 * v10 / 3u + 1) | ((unsigned __int64)(4 * v10 / 3u + 1) >> 1)) >> 2)
          | (((4 * v10 / 3u + 1)
            | ((unsigned __int64)(4 * v10 / 3u + 1) >> 1)
            | (((4 * v10 / 3u + 1) | ((unsigned __int64)(4 * v10 / 3u + 1) >> 1)) >> 2)) >> 4);
      v15 = (v14 | (v14 >> 8) | ((v14 | (v14 >> 8)) >> 16)) + 1;
      v16 = 16 * ((v14 | (v14 >> 8) | ((v14 | (v14 >> 8)) >> 16)) + 1);
    }
    else
    {
      operator delete(v7, v8, 8);
      v16 = 2048;
      v15 = 128;
    }
    *((_DWORD *)a1 + 4) = v15;
    result = sub_22300B0(v16, 8, v14, v11, v12, v13);
    v17 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    *a1 = result;
    v18 = result + 16 * v17;
    if ( result != v18 )
    {
      if ( (((_BYTE)v18 - (_BYTE)result) & 0x10) == 0 || (*(_QWORD *)result = -4096, result += 16, v18 != result) )
      {
        do
        {
          *(_QWORD *)result = -4096;
          result += 32;
          *(_QWORD *)(result - 16) = -4096;
        }
        while ( v18 != result );
      }
    }
  }
  else
  {
    result = *((unsigned int *)a1 + 3);
    if ( (_DWORD)result )
    {
      v4 = *((unsigned int *)a1 + 4);
      if ( (_DWORD)v4 )
      {
        if ( (unsigned int)v4 <= 0x40 )
        {
LABEL_5:
          result = *a1;
          v6 = *a1 + 16 * v4;
          if ( v6 != *a1 )
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
        result = operator delete(*a1, 16LL * (unsigned int)v4, 8);
        *((_DWORD *)a1 + 4) = 0;
        *a1 = 0;
      }
LABEL_9:
      a1[1] = 0;
    }
  }
  return result;
}
