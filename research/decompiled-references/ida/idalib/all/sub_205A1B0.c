unsigned __int64 __fastcall sub_205A1B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  _QWORD *v9; // rsi
  int v11; // edx
  __m128 v12[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v3 )
  {
    v6 = sub_205A060(a2);
    v7 = v3 - 1;
    v3 = *(unsigned int *)(a1 + 16);
    v8 = v7 & v6;
    v9 = (_QWORD *)(v4 + 8LL * v8);
    if ( *v9 == a2 )
    {
LABEL_3:
      sub_20568F0(v12, v9, (_QWORD *)(*(_QWORD *)a1 + 8 * v3), a1, 1);
      return v12[0].m128_u64[0];
    }
    if ( *v9 != -4096 )
    {
      v11 = 1;
      do
      {
        v8 = v7 & (v11 + v8);
        v9 = (_QWORD *)(v4 + 8LL * v8);
        if ( *v9 == a2 )
          goto LABEL_3;
        ++v11;
      }
      while ( *v9 != -4096 );
    }
    v4 = *(_QWORD *)a1;
  }
  sub_20568F0(v12, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), a1, 1);
  return v12[0].m128_u64[0];
}
