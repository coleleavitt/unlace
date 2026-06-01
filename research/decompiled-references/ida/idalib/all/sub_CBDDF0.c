unsigned __int64 __fastcall sub_CBDDF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  _QWORD *v6; // r9
  int v8; // edi
  __m128 v9; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v3 )
  {
    v5 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (_QWORD *)(v4 + 16LL * v5);
    if ( *v6 == a2 )
    {
LABEL_3:
      sub_CBDD50(&v9, v6, (_QWORD *)(16 * v3 + v4), a1, 1);
      return v9.m128_u64[0];
    }
    if ( *v6 != -4096 )
    {
      v8 = 1;
      do
      {
        v5 = (v3 - 1) & (v8 + v5);
        v6 = (_QWORD *)(v4 + 16LL * v5);
        if ( *v6 == a2 )
          goto LABEL_3;
        ++v8;
      }
      while ( *v6 != -4096 );
    }
  }
  sub_CBDD50(&v9, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), a1, 1);
  return v9.m128_u64[0];
}
