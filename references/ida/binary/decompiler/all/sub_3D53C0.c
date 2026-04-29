__int64 __fastcall sub_3D53C0(_QWORD *a1, unsigned int a2, __int64 a3, double a4, double a5, double a6, __m128 a7)
{
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r10
  __int64 *v14; // rdx
  _QWORD *v15; // rdi
  __int64 *v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rcx

  if ( a2 == 171 )
    return sub_3D4DE0(a1, a3, a4, a5, a6, a7);
  if ( a2 > 0xAB )
  {
    if ( a2 != 175 )
    {
      if ( a2 == 177 )
        sub_3C9340((__int64)a1, (int *)a3);
      return 0;
    }
    v9 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v18 = (__int64 *)(*(_QWORD *)(a3 + 8) + 8LL);
      *(_QWORD *)(a3 + 8) = v18;
    }
    else
    {
      v10 = *(_QWORD *)(a3 + 16);
      v11 = (unsigned int)(v9 + 8);
      *(_DWORD *)a3 = v11;
      if ( (unsigned int)v11 <= 0x2F )
      {
        v12 = (unsigned int)(v9 + 16);
        *(_DWORD *)a3 = v12;
        v13 = *(_QWORD *)(v10 + v11);
        if ( (unsigned int)v12 <= 0x2F )
        {
          v14 = (__int64 *)(v12 + v10);
          *(_DWORD *)a3 = v9 + 24;
LABEL_15:
          if ( *(_QWORD *)(*v14 + 32) )
          {
            v15 = sub_3C9300((__int64)a1, v13);
            if ( v15 )
              sub_3CA300((__int64)v15, v16, v17);
          }
          return 0;
        }
        v14 = *(__int64 **)(a3 + 8);
LABEL_21:
        *(_QWORD *)(a3 + 8) = v14 + 1;
        goto LABEL_15;
      }
      v18 = *(__int64 **)(a3 + 8);
    }
    v14 = v18 + 1;
    *(_QWORD *)(a3 + 8) = v18 + 1;
    v13 = *v18;
    goto LABEL_21;
  }
  if ( a2 == 73 )
  {
    sub_3CEF20((__int64)a1, a3);
    return 0;
  }
  else
  {
    if ( a2 != 80 )
      return 0;
    return sub_3D48F0(a1, a3);
  }
}
