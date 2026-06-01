__int64 __fastcall sub_195AB90(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax
  int v5; // r15d
  int v6; // r14d
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-90h]
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  int v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]

  result = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( result != 1 )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v6 = *(_DWORD *)(a2 + 28);
    v7 = result & 0xFFFFFFFFFFFFFFFELL;
    v8 = *a1;
    v16 = 0;
    v9 = *(unsigned __int8 *)(a2 + 32);
    v10 = *(_QWORD *)(v8 + 248);
    *(_OWORD *)ptr = 0;
    v18 = 0;
    v11 = sub_6F3470(*(_QWORD *)(v10 + 17504), "isa", 3u);
    v14 = v5;
    v13 = v11;
    sub_B85890(&v15, v11);
    result = sub_19CC2F0(*a1, v7, *(_QWORD *)(v7 + 8), v6, v9, (unsigned int)&v16, 0, 0, (__int64)&v13, 0, 0, 0);
    if ( HIDWORD(ptr[1]) )
    {
      v12 = result;
      free(ptr[0]);
      return v12;
    }
  }
  return result;
}
