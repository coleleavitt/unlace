unsigned __int64 __fastcall sub_1C2170(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  int tinfo_size; // eax
  unsigned int v7; // r13d
  _BYTE v8[16]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int128 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  unsigned __int64 v15; // [rsp+58h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *a3 )
  {
    tinfo_size = get_tinfo_size(0, *a4, 0);
    v7 = tinfo_size;
    if ( tinfo_size > 0 )
    {
      sub_1C1370(
        (__int64)v8,
        *(_QWORD *)(a1 + 1504),
        (__int64)a3,
        tinfo_size,
        *(_QWORD *)(a1 + 136) + *(int *)(a1 + 116));
      v9[1] = a2;
      v9[0] = off_4B12C0;
      v13 = -1;
      v10 = 0;
      v12 = 0;
      v14 = 0;
      v11 = 0;
      for_all_arglocs(v9, v8, v7, 0);
      v9[0] = off_4B12C0;
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v10);
      }
      cleanup_argloc(v8);
    }
  }
  return v15 - __readfsqword(0x28u);
}
