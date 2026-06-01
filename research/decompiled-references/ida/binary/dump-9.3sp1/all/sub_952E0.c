__int64 __fastcall sub_952E0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  int v13; // [rsp+0h] [rbp-88h]
  __int64 v14; // [rsp+8h] [rbp-80h]
  int v15[4]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( a3 )
      goto LABEL_4;
LABEL_6:
    if ( (unsigned __int8)sub_12CF30(v8, (int)a2 + 64, (int)v7 + 64, 0, 0, a6) )
      return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
    if ( (*(_BYTE *)(a1 + 76) & 2) != 0
      && !*(_DWORD *)(a1 + 72)
      && !*(_QWORD *)(a1 + 64)
      && *(_DWORD *)(a2 + 68) == 2 * *(_DWORD *)(v7 + 68) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
      sub_123A40(v15);
      if ( (unsigned __int8)sub_1317D0(v15, v14, 0) && (unsigned __int8)sub_125B60(v15, a2 + 64, 0) )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v16[1] = 0;
        v17 = 0;
        v18 = 0;
        sub_127FE0(v12, (__int64)v16, v7 + 64, 1u, v10, v11, v13, v14, v15[0], v15[2], 0);
        if ( !sub_124CC0(*(_QWORD *)(a1 + 8), v16, v7, a2, 0, 1) )
        {
          sub_93B40(v16);
          sub_11CDA0(v15);
          return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
        }
        if ( v17 )
        {
          *(_QWORD *)&v18 = 0;
          qfree(v17);
        }
        qfree(v16[0]);
      }
      sub_11CDA0(v15);
    }
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  if ( !a3 )
    goto LABEL_6;
LABEL_4:
  if ( (unsigned __int8)sub_12CF30(v8, (int)v7 + 64, (int)a2 + 64, 0, 0, a6) )
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a2, a2);
  return 0;
}
