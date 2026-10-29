void __fastcall sub_1564BC0(__int64 a1, int a2, unsigned __int16 a3, int a4, __m128i a5, double a6)
{
  int v10; // r12d
  int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  unsigned int v14; // eax
  int v15; // r15d
  unsigned int v16; // esi
  int v17; // eax
  unsigned __int64 v19; // [rsp+14h] [rbp-94h] BYREF
  char v20; // [rsp+1Ch] [rbp-8Ch]
  unsigned __int8 *v21[17]; // [rsp+20h] [rbp-88h] BYREF

  if ( a2 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( a2 >= 0 && v10 >= 0
      || ((v12 = v10 & 0x7FFFFFFF,
           v13 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 88LL),
           v14 = v13[119],
           (v10 & 0x7FFFFFFFu) >= v14)
       && v12 < v13[120]
        ? (v15 = v13[118])
        : (v15 = sub_101D590((__int64)v13, v12), v13 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 88LL), v14 = v13[119]),
          (v16 = a2 & 0x7FFFFFFF, v14 <= (a2 & 0x7FFFFFFFu)) && v16 < v13[120]
        ? (v17 = v13[118])
        : (v17 = sub_101D590((__int64)v13, v16)),
          v17 == v15) )
    {
      if ( (*(_BYTE *)(a1 + 34) & 3) != 0 )
      {
        v11 = sub_13DC060(
                a2,
                0,
                *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                a5,
                a6);
        if ( !v11 )
          v11 = a2;
        sub_FC70B0((__int64)v21, *(_QWORD *)(a1 + 104), v11, 2076);
        sub_AE9DF0(v21, *(_WORD *)(a1 + 32) == a3, 2u);
        sub_AE9DF0(v21, a3, 4u);
        sub_AE9DF0(v21, *(unsigned __int16 *)(a1 + 32), 4u);
        sub_AE9DF0(v21, a4, 2u);
        v19 = __PAIR64__(v10, a2);
        v20 = 1;
        sub_AEC610((__int64 *)v21, (__int64 *)&v19);
        sub_AEA040((__int64)v21);
      }
    }
    else
    {
      sub_FC70B0((__int64)v21, *(_QWORD *)(a1 + 104), a2, 2075);
      sub_AE9DF0(v21, *(_WORD *)(a1 + 32) == a3, 2u);
      sub_AE9DF0(v21, a3, 4u);
      sub_AE9DF0(v21, *(unsigned __int16 *)(a1 + 32), 4u);
      sub_AE9DF0(v21, a4, 2u);
      LODWORD(v19) = a2;
      HIDWORD(v19) = a2;
      v20 = 1;
      sub_AEC610((__int64 *)v21, (__int64 *)&v19);
      sub_AEA040((__int64)v21);
      sub_FC70B0((__int64)v21, *(_QWORD *)(a1 + 104), v10, 2029);
      sub_AE9DF0(v21, *(_WORD *)(a1 + 32) == a3, 2u);
      sub_AE9DF0(v21, *(unsigned __int16 *)(a1 + 32), 4u);
      LODWORD(v19) = v10;
      HIDWORD(v19) = v10;
      v20 = 1;
      sub_AEC610((__int64 *)v21, (__int64 *)&v19);
      sub_AEA040((__int64)v21);
    }
  }
}
