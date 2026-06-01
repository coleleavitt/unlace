void __fastcall sub_1C53EF0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  char v15; // al
  bool v16; // cc
  __int64 v17; // rcx
  __int16 v18; // [rsp+10h] [rbp-88h] BYREF
  __int64 v19; // [rsp+18h] [rbp-80h]
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  char v21; // [rsp+24h] [rbp-74h]
  __int64 *v22; // [rsp+28h] [rbp-70h]
  unsigned int v23; // [rsp+30h] [rbp-68h]

  v6 = a2->m128i_i64[1];
  v18 = 0;
  v21 &= ~1u;
  v20 = 0;
  v19 = 0;
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
    || (*(_BYTE *)(v7 + 17) & 4) != 0 )
  {
    *(_DWORD *)(a3 + 24) = 1;
    *(_QWORD *)a3 = a2;
  }
  else if ( (a2->m128i_i8[1] & 6) != 0 )
  {
    v10 = sub_AAE980(*(_QWORD *)(a1 + 248), v6);
    v11 = sub_A72040(*(_QWORD **)(a1 + 248), v6);
    v14 = v10;
    if ( v11 )
      v14 = sub_AAE980(*(_QWORD *)(a1 + 248), *(_QWORD *)(v11 + 32));
    v15 = sub_C7F270(a2, &v18, *(_QWORD *)(a1 + 248), 0, v12, v13);
    if ( v15 )
      v15 = sub_C21390((__int64)&v18);
    *(_BYTE *)(a3 + 8) = v15;
    *(_DWORD *)(a3 + 24) = 3;
    *(_QWORD *)a3 = a2;
    *(_DWORD *)(a3 + 16) = v10;
    *(_DWORD *)(a3 + 20) = v14;
    v16 = v20 <= 1;
    *(_DWORD *)(a3 + 12) = v10 / v14;
    if ( !v16 )
      goto LABEL_12;
  }
  else if ( (a2->m128i_i16[0] & 0x1FF) == 0x47 && (*(_BYTE *)(a2[1].m128i_i64[0] + 28) & 0x7F) == 0x21
         || *(_BYTE *)(v7 + 16) == 47 )
  {
    if ( (unsigned __int8)sub_C3D370((__int64)a2, (__int64)&v18, *(_QWORD *)(a1 + 248), 0, a5, a6) )
    {
      if ( v23 > 0x40 )
      {
        v17 = *v22;
      }
      else
      {
        v17 = 0;
        if ( v23 )
          v17 = (__int64)((_QWORD)v22 << (64 - (unsigned __int8)v23)) >> (64 - (unsigned __int8)v23);
      }
      *(_DWORD *)(a3 + 24) = 2;
      v9 = v20;
      *(_QWORD *)a3 = v17;
    }
    else
    {
      *(_DWORD *)(a3 + 24) = 1;
      v9 = v20;
      *(_QWORD *)a3 = a2;
    }
    if ( v9 > 1 )
LABEL_12:
      sub_A4F8E0((int *)&v20);
  }
  else
  {
    *(_DWORD *)(a3 + 24) = 1;
    *(_QWORD *)a3 = a2;
  }
}
