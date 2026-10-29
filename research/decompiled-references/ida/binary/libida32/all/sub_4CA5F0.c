unsigned __int64 __fastcall sub_4CA5F0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  int v5; // eax
  unsigned __int8 *v6; // rcx
  unsigned int v7; // eax
  __int16 v8; // dx
  unsigned __int8 v10; // dl
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 *v17; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]
  unsigned __int64 v19; // [rsp+18h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  v4 = (unsigned __int64)&a2[a3];
  v18 = v4;
  if ( (unsigned __int64)a2 < v4 )
  {
    v10 = *a2;
    *(_DWORD *)(a1 + 8) = 0;
    v17 = a2 + 1;
    v5 = v10;
    *(_QWORD *)a1 = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 12) = v10;
    if ( (v10 & 0x10) != 0 )
    {
      v11 = unpack_dd(&v17);
      v12 = node2ea(v11);
      v4 = v18;
      *(_DWORD *)a1 = v12;
      v5 = *(_DWORD *)(a1 + 12);
    }
    v13 = v5 & 0x40;
    if ( (v5 & 0x20) != 0 )
    {
      v14 = unpack_dd(&v17);
      v15 = node2ea(v14);
      v4 = v18;
      *(_DWORD *)(a1 + 4) = v15;
      v5 = *(_DWORD *)(a1 + 12);
      v13 = v5 & 0x40;
    }
    if ( v13 )
    {
      v16 = unpack_dd(&v17);
      v4 = v18;
      *(_DWORD *)(a1 + 8) = v16;
      v5 = *(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    v17 = a2;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0xFFFFFFFFLL;
    v5 = 0;
  }
  v6 = v17;
  v7 = v5 & 0xFFFFFF8F;
  *(_DWORD *)(a1 + 12) = v7;
  if ( (unsigned __int64)v6 < v4 )
  {
    v8 = *v6;
    v17 = v6 + 1;
    if ( (unsigned __int64)(v6 + 1) < v4 )
      v8 |= v6[1] << 8;
    *(_DWORD *)(a1 + 12) = v7 | (16 * v8) & 0x3F70;
  }
  return v19 - __readfsqword(0x28u);
}

