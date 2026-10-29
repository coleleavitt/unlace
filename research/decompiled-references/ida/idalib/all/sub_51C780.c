unsigned __int64 __fastcall sub_51C780(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        signed int a4,
        __int64 a5)
{
  __int64 v5; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  _DWORD *v12; // rax
  char *v13; // rax
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v18; // [rsp+8h] [rbp-1D0h]
  int v19[4]; // [rsp+10h] [rbp-1C8h] BYREF
  int v20[2]; // [rsp+20h] [rbp-1B8h]
  int v21[2]; // [rsp+28h] [rbp-1B0h]
  __int64 v22[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-198h]
  __int64 v24; // [rsp+48h] [rbp-190h]
  __int64 v25; // [rsp+50h] [rbp-188h]
  char v26; // [rsp+58h] [rbp-180h] BYREF
  _QWORD v27[8]; // [rsp+198h] [rbp-40h] BYREF

  v27[0] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*a1 + 1768);
  if ( !*(_BYTE *)(v5 + 160) )
  {
    *(_BYTE *)(v5 + 160) = 1;
    v10 = sub_3C1900(a1, a2, a3, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr);
    if ( v10 < a3 )
    {
      v18 = v10;
      if ( sub_518710(a1, v10, a4, nullptr) != a5 )
      {
        v12 = (_DWORD *)a1[2];
        if ( a4 >= v12[17] && a4 <= v12[18] && v12[20] != a4 )
          sub_51C400(*a1, v18, a4, a5, 3u, 0);
      }
    }
    if ( (~((unsigned __int16)sub_3BE900(a1, a2, 4) >> 8) & 6) == 0 )
    {
      v23 = -1;
      v13 = &v26;
      v24 = 0;
      v25 = 0;
      *(_OWORD *)v22 = -1;
      do
      {
        *(_WORD *)v13 = 0;
        v13 += 40;
        *((_WORD *)v13 - 19) = 0;
        *((_WORD *)v13 - 18) = 0;
        *((_DWORD *)v13 - 2) = 0;
        *((_WORD *)v13 - 17) = 0;
        *((_OWORD *)v13 - 2) = 0;
        *((_QWORD *)v13 - 2) = 0;
      }
      while ( v27 != (_QWORD *)v13 );
      v14 = decode_insn(v22, a2, v27, 0, 0, v11, 0.0);
      if ( v14 != get_item_end(a2, a2, v15, v16) - a2 )
      {
        *(_QWORD *)v20 = 0;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)v19 = 0;
        if ( v14 )
        {
          sub_3D68E0((int)a1, v17, v18, v19[0], v19[2], v20[0], v21[0], v22[0]);
          if ( *(_QWORD *)v20 )
            (*(void (__fastcall **)(int *, int *, __int64))v20)(v19, v19, 3);
        }
        else
        {
          sub_3D19E0((_DWORD)a1, a2);
        }
        sub_3A61A0(a1, a2, a2 + 1, 0x28u);
      }
    }
    *(_BYTE *)(v5 + 160) = 0;
  }
  return v27[0] - __readfsqword(0x28u);
}
