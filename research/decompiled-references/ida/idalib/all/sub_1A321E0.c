__int64 __fastcall sub_1A321E0(unsigned __int8 **a1, __m128i a2, double a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned __int8 *v6; // rcx
  int v8; // eax
  char v9; // al
  _DWORD v10[2]; // [rsp+20h] [rbp-E8h] BYREF
  char v11; // [rsp+28h] [rbp-E0h]
  __int64 v12; // [rsp+2Ch] [rbp-DCh]
  char v13; // [rsp+34h] [rbp-D4h]
  void *v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  char v16[24]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF

  v3 = (*a1)[24];
  v4 = *a1[2];
  v5 = *((_DWORD *)*a1 + 2);
  if ( (v3 & 8) != 0 )
  {
    v6 = a1[1];
    if ( *(char *)(*((_QWORD *)v6 + 29) + 1LL) < 0 && (_BYTE)v4 && *(_DWORD *)a1[3] == 1 )
    {
      sub_168B9F0((__int64)&v17, (__int64 *)v6 + 1, v5, 0x1ABBu, 0);
      sub_15F7200(&v17);
      sub_168B9F0((__int64)&v17, (__int64 *)a1[1] + 1, *(_DWORD *)a1[4], 0x1719u, 0);
      v8 = sub_15F0EF0((__int64)a1[1], *(_DWORD *)a1[4], 0, a2, a3);
      strcpy(v16, ", this");
      v10[0] = v8;
      v10[1] = v8;
      v12 = 0;
      v13 = 0;
      v14 = v16;
      v16[16] = 0;
      v11 = 0;
      v15 = 6;
      sub_1589170((__int64)&v17, v10);
      if ( v14 != v16 )
        operator delete(v14);
      sub_15F7200(&v17);
      v5 = *((_DWORD *)*a1 + 2);
      v4 = *a1[2];
      v3 = (*a1)[24];
    }
    sub_C94E00((__int64)&v17, v5, v4, (v3 & 3) == 0, 0, 0);
    return v17;
  }
  else
  {
    v9 = v3 & 3;
    if ( v9 == 3 )
      sub_C94E00((__int64)&v17, v5, v4, 4, 0, 0);
    else
      sub_C94E00((__int64)&v17, v5, v4, (v9 != 0) + 2, *(_QWORD *)*a1, *((_DWORD *)*a1 + 3));
    return v17;
  }
}
