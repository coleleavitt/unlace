__int64 __fastcall sub_3E3880(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned int v14; // r12d
  __int64 v16; // rdi
  void (__fastcall ***v17)(_QWORD); // rdx
  bool v18; // zf
  _QWORD v20[5]; // [rsp+0h] [rbp-28h] BYREF

  v20[1] = __readfsqword(0x28u);
  sub_2399A0(v20, a2, qword_8BA5A8, a3, a13, a14, a4, a5, a6, a7, a8, a9, a10, a11);
  v16 = v20[0];
  LOBYTE(v14) = v20[0] != 0;
  if ( v20[0] )
  {
    v17 = (void (__fastcall ***)(_QWORD))*a1;
    if ( *a1 && (v18 = *((_DWORD *)v17 + 2) == 1, --*((_DWORD *)v17 + 2), v18) )
    {
      (**(void (__fastcall ***)(_QWORD))*a1)(*a1);
      v16 = v20[0];
      *a1 = v20[0];
      if ( !v16 )
        return v14;
    }
    else
    {
      *a1 = v16;
    }
    if ( !*(_DWORD *)(v16 + 8) )
      (**(void (__fastcall ***)(__int64))v16)(v16);
  }
  return v14;
}
