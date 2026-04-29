__int64 __fastcall sub_6FE60(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64, __int128 *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r12d
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int128 v17; // [rsp+0h] [rbp-98h] BYREF
  __int128 v18; // [rsp+10h] [rbp-88h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  _OWORD v20[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v9 = *(_QWORD *)(a4 + 256);
  v22 = __readfsqword(0x28u);
  v17 = 0;
  v19 = 0;
  v18 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, __int128 *, _QWORD))sub_84590)(a5, v9, &v17, 0)
    && (v13 = (**a1)(a1, a2, a4, &v17, a6), (_BYTE)v13) )
  {
    v15 = *(_QWORD *)(a4 + 256);
    v21 = 0;
    memset(v20, 0, sizeof(v20));
    if ( (unsigned __int8)sub_84590(
                            a5,
                            v15,
                            v20,
                            1,
                            v11,
                            v12,
                            v17,
                            *((_QWORD *)&v17 + 1),
                            v18,
                            *((_QWORD *)&v18 + 1),
                            v19) )
    {
      v16 = *(_QWORD *)&v20[0] + *(_QWORD *)(a2 + 8);
      cleanup_argloc(a2);
      *(_DWORD *)a2 = 1;
      *(_QWORD *)(a2 + 8) = v16;
    }
  }
  else
  {
    return 0;
  }
  return v13;
}
