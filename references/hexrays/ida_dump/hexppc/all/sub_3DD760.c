__int64 __fastcall sub_3DD760(_QWORD *a1, unsigned int a2, __int64 a3, double a4, double a5, double a6, __m128 a7)
{
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // rsi
  _QWORD **v17; // rax
  _QWORD **v18; // rdx
  _QWORD *v19; // rdi
  __int64 **v20; // rdx
  __int64 *v21; // rcx

  if ( a2 == 171 )
    return sub_3DD180(a1, a3, a4, a5, a6, a7);
  if ( a2 > 0xAB )
  {
    if ( a2 != 175 )
    {
      if ( a2 == 177 )
        sub_3CF3C0((__int64)a1, a3);
      return 0;
    }
    v9 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v20 = *(__int64 ***)(a3 + 8);
      v21 = (__int64 *)(v20 + 1);
      *(_QWORD *)(a3 + 8) = v20 + 1;
      v12 = *v20;
    }
    else
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = v9 + 8;
      *(_DWORD *)a3 = v11;
      v12 = *(__int64 **)(v10 + v9);
      if ( (unsigned int)v11 <= 0x2F )
      {
        v13 = v9 + 16;
        *(_DWORD *)a3 = v13;
        v14 = *(_QWORD *)(v10 + v11);
        if ( (unsigned int)v13 <= 0x2F )
        {
          v15 = (__int64 *)(v13 + v10);
          *(_DWORD *)a3 = v9 + 24;
LABEL_15:
          v16 = *v15;
          if ( *(_QWORD *)(*v15 + 32) )
          {
            v17 = (_QWORD **)a1[261];
            v18 = &v17[a1[262]];
            if ( v17 != v18 )
            {
              while ( 1 )
              {
                v19 = *v17;
                if ( *v17 )
                {
                  if ( *v19 == v14 )
                    break;
                }
                if ( v18 == ++v17 )
                  return 0;
              }
              sub_3D0480((__int64)v19, v12, v16);
            }
          }
          return 0;
        }
        v15 = *(__int64 **)(a3 + 8);
LABEL_25:
        *(_QWORD *)(a3 + 8) = v15 + 1;
        goto LABEL_15;
      }
      v21 = *(__int64 **)(a3 + 8);
    }
    v15 = v21 + 1;
    *(_QWORD *)(a3 + 8) = v21 + 1;
    v14 = *v21;
    goto LABEL_25;
  }
  if ( a2 == 73 )
  {
    sub_3D6680((__int64)a1, a3);
    return 0;
  }
  else
  {
    if ( a2 != 80 )
      return 0;
    return sub_3DC080(a1, a3);
  }
}
