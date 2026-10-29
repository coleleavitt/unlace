bool __fastcall sub_1E67EB0(__int64 a1, __int64 a2, __int64 a3, int a4, __m128i a5, double a6)
{
  unsigned int v9; // r15d
  char v10; // cl
  unsigned __int16 v11; // dx
  int v12; // esi
  bool result; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v22; // [rsp+18h] [rbp-E0h] BYREF
  _BYTE *v23; // [rsp+20h] [rbp-D8h] BYREF
  signed __int64 v24; // [rsp+28h] [rbp-D0h]
  _QWORD v25[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v27; // [rsp+50h] [rbp-A8h] BYREF
  char v28; // [rsp+A8h] [rbp-50h]
  unsigned int v29; // [rsp+B0h] [rbp-48h]
  char v30; // [rsp+B4h] [rbp-44h]

  if ( *(_WORD *)(a3 + 56) )
  {
    v9 = 0;
    while ( 1 )
    {
      v21 = 0;
      v23 = nullptr;
      v24 = 0;
      if ( !(unsigned __int8)sub_181EB00(a1, a3, v9, &v23, &v21, a5, a6) )
        return 1;
      if ( v24 == 2 )
      {
        if ( *(_WORD *)v23 != 24954 )
          goto LABEL_13;
        v10 = 2;
        v11 = (*(_WORD *)(a2 + 2) >> 3) & 0x1FF;
        v12 = (v11 >> 2) & 7;
      }
      else
      {
        if ( v24 != 3 || *(_WORD *)v23 != 29818 || v23[2] != 48 )
        {
LABEL_13:
          sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), v21, 0x14FCu, 0);
          if ( v28 )
          {
            sub_AEC220(&v27, v23, v24);
          }
          else if ( v30 )
          {
            v16 = sub_168B9E0(v25);
            v19 = v26;
            if ( v26 )
              v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
            v22 = v19;
            v20 = sub_1587BC0(v16, &v22, v14, v15, v17, v18);
            sub_AEC220((unsigned __int8 **)(*v20 + 32LL * v29 + 8), v23, v24);
          }
          goto LABEL_15;
        }
        v10 = 5;
        v11 = (*(_WORD *)(a2 + 2) >> 3) & 0x1FF;
        v12 = (v11 >> 5) & 7;
      }
      if ( (v11 & 0x100) != 0 )
      {
        sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), v21, 0xD87u, 0);
LABEL_15:
        sub_15F7200(v25);
        *(_BYTE *)(a3 + 58) |= 1u;
        return 1;
      }
      result = v12 != 0 && a4 != v12;
      if ( result )
        break;
      ++v9;
      *(_WORD *)(a2 + 2) = *(_WORD *)(a2 + 2) & 0xF007 | (8 * (((a4 << v10) | v11) & 0x1FF));
      if ( *(unsigned __int16 *)(a3 + 56) <= v9 )
        return result;
    }
    sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), v21, 0xD88u, 0);
    sub_1682BA0((__int64)v25, (__int64)&v23);
    sub_15F7200(v25);
    *(_BYTE *)(a3 + 58) |= 1u;
    return 1;
  }
  else
  {
    sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1058u, 0);
    sub_15DD120((__int64)v25, a3);
    sub_15F7200(v25);
    *(_BYTE *)(a3 + 58) |= 1u;
    return 1;
  }
}
