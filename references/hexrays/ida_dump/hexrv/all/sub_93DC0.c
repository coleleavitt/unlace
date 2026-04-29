__int64 __fastcall sub_93DC0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r15
  _DWORD *v5; // r14
  int v6; // eax
  unsigned __int8 v7; // al
  _DWORD *v8; // r10
  unsigned __int64 *v9; // r14
  signed int v10; // eax
  __int64 v11; // rdi
  char v12; // al
  unsigned __int8 v13; // al
  _DWORD *v14; // r10
  unsigned int v15; // edx
  unsigned __int8 v16; // [rsp+8h] [rbp-80h]
  _DWORD *v17; // [rsp+8h] [rbp-80h]
  _DWORD *v18; // [rsp+8h] [rbp-80h]
  unsigned __int8 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  __m128i *v22; // [rsp+28h] [rbp-60h]
  _QWORD v23[11]; // [rsp+30h] [rbp-58h] BYREF

  v23[3] = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 || *((_BYTE *)a2 + 48) != 4 )
    return 0;
  v20 = 0;
  v3 = *((_QWORD *)a2 + 7);
  if ( *(_DWORD *)v3 == 12 )
  {
    v3 = sub_118420(*((_QWORD *)a2 + 7), &v20, 9);
    if ( !v3 )
      return 0;
  }
  else if ( *(_DWORD *)v3 != 9 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v3 + 32) != 4 )
    return 0;
  v5 = *(_DWORD **)(v3 + 40);
  v22 = nullptr;
  v21 = 0xFFFFFFFF00000000LL;
  v6 = *v5;
  if ( *v5 == 35 )
  {
    v8 = v5 + 8;
    v9 = (unsigned __int64 *)(v5 + 12);
  }
  else if ( v6 == 36 )
  {
    v8 = v5 + 12;
    v9 = (unsigned __int64 *)(v5 + 8);
  }
  else
  {
    if ( v6 != 33 || !(unsigned __int8)sub_11B8C0(v5 + 12, v23, 0) || v23[0] )
      goto LABEL_10;
    sub_120CC0(&v21);
    v8 = v5 + 8;
    v9 = &v21;
    v22[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
  }
  if ( *(_BYTE *)v8 != 4 || **((_DWORD **)v8 + 1) != 9 )
  {
    v10 = a2[9];
    if ( v10 == v8[1] )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      if ( v10 < *(_DWORD *)(v11 + 88)
        || v10 == *(_DWORD *)(v11 + 88) && (v17 = v8, v12 = sub_1186F0(v11, *a2), v8 = v17, v12) )
      {
        v18 = v8;
        v13 = sub_152D80(a1, v8, a2 + 8);
        if ( v13 )
        {
          v14 = v18;
          v19 = v13;
          sub_152D50(a1, a2, v14, a2, a2 + 8, 0);
          if ( v20 )
          {
            sub_11F580(v23, v20);
            sub_152D50(a1, a2, v9, a2, v23, 0);
            sub_118550(a2 + 12, v23);
          }
          else
          {
            sub_11F580(v23, v9);
            sub_118550(v3 + 32, v23);
            v15 = a2[9];
            *(_DWORD *)(v3 + 68) = v15;
            a2[13] = v15;
          }
          sub_1188E0(v23);
          v7 = v19;
          goto LABEL_11;
        }
      }
    }
  }
LABEL_10:
  v7 = 0;
LABEL_11:
  v16 = v7;
  sub_1188E0(&v21);
  return v16;
}
