unsigned __int64 __fastcall sub_19833D0(__int64 *a1, unsigned __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  int v7; // r15d
  int v8; // r13d
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-90h]
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  int v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]

  result = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( result != 1 )
  {
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    result = a2;
    if ( v5 != *(_QWORD *)(a2 + 16) )
    {
      v6 = *a1;
      v7 = *(_DWORD *)(a2 + 24);
      v16 = 0;
      v8 = *(unsigned __int8 *)(a2 + 32);
      v9 = *(_DWORD *)(a2 + 28);
      v10 = *(_QWORD *)(v6 + 248);
      *(_OWORD *)ptr = 0;
      v18 = 0;
      v11 = sub_6F3470(*(_QWORD *)(v10 + 17504), "isa", 3u);
      v14 = v7;
      v13 = v11;
      sub_B85890(&v15, v11);
      result = sub_19CC2F0(*a1, v5, *(_QWORD *)(v5 + 8), v9, v8, (unsigned int)&v16, 0, 0, (__int64)&v13, 0, 0, 0);
      if ( HIDWORD(ptr[1]) )
      {
        v12 = result;
        free(ptr[0]);
        return v12;
      }
    }
  }
  return result;
}
