__int64 __fastcall sandbox_check(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  _QWORD v12[2]; // [xsp+0h] [xbp-90h] BYREF
  __int128 v13; // [xsp+10h] [xbp-80h]
  __int128 v14; // [xsp+20h] [xbp-70h]
  __int128 v15; // [xsp+30h] [xbp-60h]
  __int128 v16; // [xsp+40h] [xbp-50h]
  __int128 v17; // [xsp+50h] [xbp-40h]
  __int64 v18; // [xsp+60h] [xbp-30h]
  char *v19; // [xsp+70h] [xbp-20h]
  __int64 v20; // [xsp+78h] [xbp-18h] BYREF

  v20 = a2;
  sandbox_operation_fixup(&v20);
  v12[0] = 0;
  v13 = 0u;
  v18 = 0;
  v16 = 0u;
  v17 = 0u;
  v14 = 0u;
  v15 = 0u;
  v12[1] = a1;
  *(_QWORD *)&v13 = v20;
  v19 = &a9;
  return sandbox_check_common(v12, a3, &a9);
}
