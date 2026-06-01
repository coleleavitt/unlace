__int64 __fastcall sub_149EE0(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rax
  __m128 v10; // xmm0
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a1 == -1 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v12 = 0;
    v1 = qword_251410 + 232LL * a1;
    v13 = 0;
    sub_149900((int *)v1, &v12);
    v2 = *(_QWORD *)(v1 + 96);
    v3 = *(_QWORD *)(v1 + 88);
    v4 = v13;
    if ( v2 <= (unsigned __int64)v13 )
      v4 = *(_QWORD *)(v1 + 96);
    if ( v4 )
    {
      v5 = 1;
      v6 = v3 + 16 * v2;
      v7 = v12 + 16 * v13;
      while ( *(_DWORD *)(v6 - 16) == *(_DWORD *)(v7 - 16)
           && *(_DWORD *)(v6 - 12) == *(_DWORD *)(v7 - 12)
           && *(_BYTE *)(v6 - 4) == *(_BYTE *)(v7 - 4)
           && *(_DWORD *)(v6 - 8) == *(_DWORD *)(v7 - 8) )
      {
        ++v5;
        v6 -= 16LL;
        v7 -= 16;
        if ( v4 < v5 )
          goto LABEL_16;
      }
      v8 = -1;
      if ( v5 != 1 )
        v8 = *(_DWORD *)(16 * (v2 - v5) + v3 + 24);
    }
    else
    {
LABEL_16:
      v8 = -1;
    }
    v9 = *(_QWORD *)(v1 + 104);
    *(_QWORD *)(v1 + 88) = v12;
    v10 = _mm_loadh_ps((const double *)&v13 + 1);
    v12 = v3;
    *((_QWORD *)&v13 + 1) = v9;
    *(_BYTE *)(v1 + 112) = 0;
    *(__m128 *)(v1 + 96) = v10;
    if ( v3 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  return v8;
}

