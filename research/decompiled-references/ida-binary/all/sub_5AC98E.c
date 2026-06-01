__int64 __fastcall sub_5AC98E(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+20h] [rbp-B0h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-A8h] BYREF
  _BYTE v8[80]; // [rsp+30h] [rbp-A0h] BYREF
  _QWORD v9[6]; // [rsp+80h] [rbp-50h] BYREF
  __int64 v10; // [rsp+B0h] [rbp-20h]
  _BYTE *v11; // [rsp+B8h] [rbp-18h]

  sub_593356(v9);
  sub_5ACF5E(v8, v9);
  if ( (unsigned __int8)sub_5AADBB(a1, 4u, (__int64)v8) )
  {
    v11 = v8;
    v5 = sub_5AC0A2((__int64)v8);
    v4 = sub_5ABCDE((__int64)v11);
    while ( (unsigned __int8)sub_5AD021(&v5, &v4) )
    {
      v10 = sub_5AD07E(&v5);
      if ( (unsigned __int8)sub_5AC887(*(_DWORD **)v10, *(_QWORD *)(v10 + 8), a2) )
      {
        v2 = 1;
        goto LABEL_10;
      }
      sub_5AD05E(&v5);
    }
  }
  if ( sub_5AAC71(a1, (__int64)".note.gnu.build-id", 7u, &v7, &v6) )
    v2 = sub_5AC887(v7, v6, a2);
  else
    v2 = 0;
LABEL_10:
  sub_5ACF42(v8);
  sub_5933A4((__int64)v9);
  return v2;
}
