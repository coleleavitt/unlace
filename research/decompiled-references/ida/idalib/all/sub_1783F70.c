__int64 __fastcall sub_1783F70(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+10h] [rbp-88h] BYREF
  int v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v19; // [rsp+50h] [rbp-48h]

  v9 = sub_6F3470(*(_QWORD *)(a1 + 240) + 552LL, a4, a5);
  v15 = a3;
  v14 = v9;
  sub_B85890(&v16, v9);
  v10 = *(_QWORD *)(a2 + 8);
  v17 = 0;
  *(_OWORD *)ptr = 0;
  v19 = 0;
  if ( sub_19CC2F0(a1, a2, v10, a3, 0, (unsigned int)&v17, 0, 0, (__int64)&v14, 0, 0, 0) == 1 )
  {
    result = 1;
    if ( !HIDWORD(ptr[1]) )
      return result;
LABEL_7:
    v13 = result;
    free(ptr[0]);
    return v13;
  }
  v11 = a3;
  if ( a8 )
    v11 = sub_EEC140(*(_QWORD *)(a7 + 8 * a8 - 8));
  result = sub_192A5E0(a1, v11, 0, 0, 0);
  if ( HIDWORD(ptr[1]) )
    goto LABEL_7;
  return result;
}
