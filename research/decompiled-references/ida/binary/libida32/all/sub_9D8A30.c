__int64 __fastcall sub_9D8A30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // esi
  void *v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rdi
  int v13; // r10d
  __int64 v14; // r11
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  __int64 v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v18[0] = 0;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a4 = *a2;
  a6 = v8 - 1;
  v9 = *(void **)a1;
  v10 = a6 & (((unsigned int)*a2 >> 9) ^ ((unsigned int)*a2 >> 4));
  a3 = *(_QWORD *)a1 + 48LL * v10;
  v11 = *(_QWORD *)a3;
  if ( *a2 == *(_QWORD *)a3 )
    return a3 + 8;
  v13 = 1;
  v14 = 0;
  if ( v11 != -4096 )
  {
    while ( 1 )
    {
      if ( !v14 && v11 == -8192 )
        v14 = a3;
      v10 = a6 & (v13 + v10);
      a3 = (__int64)v9 + 48 * v10;
      v11 = *(_QWORD *)a3;
      if ( a4 == *(_QWORD *)a3 )
        return a3 + 8;
      if ( v11 == -4096 )
      {
        if ( v14 )
          a3 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(a1 + 8);
  v18[0] = a3;
  v16 = v15 + 1;
  a5 = (unsigned int)(4 * v16);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_11;
  a5 = v8 >> 3;
  if ( v8 - *(_DWORD *)(a1 + 12) - v16 <= (unsigned int)a5 )
  {
LABEL_12:
    sub_9D86F0((void **)a1, v8, a3, a4, a5, a6);
    sub_9CA200((__int64 *)a1, a2, v18);
    a4 = *a2;
    a3 = v18[0];
    v16 = *(_DWORD *)(a1 + 8) + 1;
  }
  v17 = *(_QWORD *)a3 == -4096;
  *(_DWORD *)(a1 + 8) = v16;
  if ( !v17 )
    --*(_DWORD *)(a1 + 12);
  *(_QWORD *)a3 = a4;
  *(_OWORD *)(a3 + 24) = 0;
  *(_QWORD *)(a3 + 40) = 0;
  *(_QWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = a3 + 48;
  return a3 + 8;
}

