__int64 __fastcall sub_B05C60(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v4; // rdi
  unsigned int *v5; // rax
  unsigned int *v6; // r8
  __int64 v7; // r11
  unsigned int v8; // ecx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax

  v2 = a1[2];
  v4 = *(_QWORD *)(v2 + 8848);
  if ( *(_BYTE *)(v4 + a2) != 0xFF
    || (v12 = a1[107], v13 = a2 >> 1, !v12)
    || (unsigned int)v13 >= *(_DWORD *)(v12 - 4)
    || (v14 = *(_DWORD *)(v12 + 4 * v13)) == 0
    || a2 != (a2 & 0xFFFFFFFE) + (v14 >> 31) )
  {
    v5 = (unsigned int *)a1[108];
    if ( v5 )
    {
      v6 = &v5[*(v5 - 1)];
      if ( v6 != v5 )
      {
        v7 = a1[107];
        if ( v7 )
        {
          do
          {
            v8 = *v5;
            v9 = 0;
            if ( *v5 < *(_DWORD *)(v7 - 4) )
              v9 = *(_DWORD *)(v7 + 4LL * v8) >> 31;
            v10 = v9 + 2 * v8;
            if ( *(_BYTE *)(v4 + v10) == 0xFF
              && (*(_DWORD *)(*(_QWORD *)(v2 + 8872) + 16LL * ((unsigned int)v10 >> 1) + 8) & 0xFFFFFF) != 0 )
            {
              a2 = v10;
            }
            ++v5;
          }
          while ( v5 != v6 );
        }
        else
        {
          do
          {
            while ( *(_BYTE *)(v4 + 2 * *v5) != 0xFF )
            {
              if ( v6 == ++v5 )
                return a2;
            }
            if ( (*(_DWORD *)(*(_QWORD *)(v2 + 8872) + 16LL * (*v5 & 0x7FFFFFFF) + 8) & 0xFFFFFF) != 0 )
              a2 = 2 * *v5;
            ++v5;
          }
          while ( v6 != v5 );
        }
      }
    }
  }
  return a2;
}

