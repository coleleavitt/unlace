void __fastcall sub_2277620(__int64 a1)
{
  _QWORD *v1; // rax
  const __m128i ***v2; // r9
  unsigned __int64 v3; // rsi
  _BYTE *v4; // r8
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 ***v8; // rdi
  __int64 v9; // rax
  const char *v10; // [rsp+0h] [rbp-38h] BYREF
  __int16 v11; // [rsp+20h] [rbp-18h]

  if ( !*(_DWORD *)(a1 + 96) )
  {
    v1 = *(_QWORD **)(a1 + 672);
    if ( *(_DWORD *)(*v1 + 32LL) == 5 )
    {
      v2 = (const __m128i ***)v1[1];
      v3 = (__int64)(v1[2] - (_QWORD)v2) >> 3;
      if ( v3 )
      {
        v4 = *(_BYTE **)(a1 + 600);
        if ( (*v4 & 1) != 0 )
        {
          v5 = 0;
          while ( ++v5 < v3 )
          {
            v6 = *(_QWORD *)&v4[8 * (v5 >> 6)];
            if ( !_bittest64(&v6, v5) )
            {
              v2 += v5;
              goto LABEL_11;
            }
          }
        }
        else
        {
LABEL_11:
          v8 = *(__int64 ****)(a1 + 80);
          v10 = "unknown bit value";
          v11 = 259;
          sub_226EEF0(v8, **v2, (__int64)&v10, 0);
          v9 = std::_V2::generic_category((std::_V2 *)v8);
          *(_DWORD *)(a1 + 96) = 22;
          *(_QWORD *)(a1 + 104) = v9;
        }
      }
    }
  }
}
