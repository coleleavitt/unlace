bool __fastcall sub_21C11D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // dl
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  _QWORD **v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 16);
  v3 = *(_BYTE *)(a2 + 16);
  if ( (_BYTE)v2 == 0xFF )
    return v3 == -1;
  if ( v3 == -1 || (_BYTE)v2 != v3 )
    return 0;
  v6 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v2])((__int64)v7, a1);
  v7[0] = (_QWORD **)&v6;
  v4 = *(unsigned __int8 *)(a2 + 16);
  if ( (_BYTE)v4 == 0xFF )
    abort();
  return ((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v4])(v7, (_QWORD *)a2);
}
