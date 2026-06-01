__int64 __fastcall sub_1765970(__int64 *a1, __int64 a2, __m128i a3, double a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  int v9; // eax
  int v10; // eax
  __int64 v11; // r13
  int v12; // r14d
  bool v13; // r15
  int v14; // [rsp+8h] [rbp-90h]
  __int64 v15; // [rsp+8h] [rbp-90h]
  __int64 v16; // [rsp+10h] [rbp-88h] BYREF
  int v17; // [rsp+18h] [rbp-80h]
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+50h] [rbp-48h]

  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( result != 1 )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(a2 + 16);
    v8 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || (result = a2, v7 != v8) )
    {
      v9 = sub_EEC140(v7);
      v10 = sub_15F0EF0(v6, v9, 0, a3, a4);
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(_DWORD *)(a2 + 32);
      v14 = v10;
      v19 = 0;
      v13 = sub_C00400(a2);
      *(_OWORD *)ptr = 0;
      v21 = 0;
      v16 = v11;
      v17 = v12;
      sub_B85890(&v18, v11);
      result = sub_19CC2F0(*a1, v8, *(_QWORD *)(v8 + 8), v14, v13, (unsigned int)&v19, 0, 0, (__int64)&v16, 0, 0, 0);
      if ( HIDWORD(ptr[1]) )
      {
        v15 = result;
        free(ptr[0]);
        return v15;
      }
    }
  }
  return result;
}
