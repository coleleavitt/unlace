void __fastcall ClpNonLinearCost::feasibleBounds(ClpNonLinearCost *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r9
  __int64 v4; // r11
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // xmm1_8
  __int64 v10; // xmm0_8
  _BYTE *v11; // rcx
  __int64 v12; // xmm2_8

  if ( (*((_BYTE *)this + 144) & 2) != 0 )
  {
    v1 = *((_QWORD **)this + 12);
    v2 = v1[126];
    v3 = v1[123];
    v4 = v1[129];
    v5 = *((_DWORD *)this + 13) + *((_DWORD *)this + 12);
    if ( v5 > 0 )
    {
      v6 = (unsigned int)(v5 - 1);
      v7 = 0;
      v8 = v6 + 1;
      do
      {
        v10 = *(_QWORD *)(v2 + 8 * v7);
        v11 = (_BYTE *)(v7 + *((_QWORD *)this + 15));
        v12 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v7);
        if ( (*v11 & 0xF) != 0 )
        {
          v9 = *(_QWORD *)(v3 + 8 * v7);
          if ( (*v11 & 0xF) == 2 )
          {
            v10 = *(_QWORD *)(v3 + 8 * v7);
            v9 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7);
          }
        }
        else
        {
          v9 = *(_QWORD *)(v2 + 8 * v7);
          v10 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7);
        }
        *v11 = *v11 & 0xF0 | 1;
        *(_QWORD *)(v3 + 8 * v7) = v9;
        *(_QWORD *)(v2 + 8 * v7) = v10;
        *(_QWORD *)(v4 + 8 * v7++) = v12;
      }
      while ( v8 != v7 );
    }
  }
}

