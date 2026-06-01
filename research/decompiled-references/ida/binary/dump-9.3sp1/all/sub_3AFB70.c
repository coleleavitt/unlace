__int64 __fastcall sub_3AFB70(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD v3[2]; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+10h] [rbp-48h]
  int v5; // [rsp+14h] [rbp-44h]
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  v3[0] = 0;
  v3[1] = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v1 = sub_3AD5A0(a1, (__int64)v3, &v6);
  if ( (_BYTE)v1 )
    v1 = sub_3AF790(*(_QWORD *)(a1 + 128), v6, (__int64)v3, 1u, **(_QWORD **)(a1 + 32), (__int64 *)(a1 + 44));
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  clear_tinfo_t();
  return v1;
}
