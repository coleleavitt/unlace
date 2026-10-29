__int64 __fastcall sub_8218A0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v14; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+8h] [rbp-80h]
  const __m128i *v16; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-60h]

  v14 = a3;
  v15 = a4;
  v6 = sub_69F3F0((__int64)&v14);
  v7 = *(_QWORD *)(a1 + 136);
  v17 = a2;
  v8 = a1 + 128;
  v18 = v6;
  v9 = v8;
  if ( !v7 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 32);
      if ( v10 < a2 || a2 == v10 && *(_DWORD *)(v7 + 40) < v6 )
        break;
      v9 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v7 );
LABEL_8:
  if ( v8 == v9 || a2 < *(_QWORD *)(v9 + 32) || a2 == *(_QWORD *)(v9 + 32) && v6 < *(_DWORD *)(v9 + 40) )
  {
LABEL_10:
    v16 = (const __m128i *)&v17;
    v9 = sub_820760((_QWORD *)(a1 + 120), v9, &v16);
  }
  v11 = v14;
  v12 = v15;
  BYTE4(v17) |= 1u;
  v16 = nullptr;
  LODWORD(v17) = 0;
  sub_6A37F0((__int64)&v17);
  sub_6A3550((__int64)&v17, v11, v12, &v16, 0);
  sub_6A01B0(v9 + 48, (__int64)&v17);
  if ( (unsigned int)v17 > 1 )
    sub_69F740((__int64)&v17);
  return v9 + 48;
}

