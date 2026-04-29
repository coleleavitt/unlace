__int64 __fastcall sub_28A6F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 v6; // r15
  char tinfo_property; // al
  __m128i *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-78h]
  unsigned int v13; // [rsp+8h] [rbp-70h]
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  __int128 v15; // [rsp+18h] [rbp-60h] BYREF
  signed int v16; // [rsp+28h] [rbp-50h]
  int v17; // [rsp+2Ch] [rbp-4Ch]
  signed int v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 8);
  v19 = __readfsqword(0x28u);
  if ( v2 == 30 || v2 == 24 )
  {
    v3 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v3 + 8) != 61 )
      return 0;
LABEL_7:
    if ( sub_250E30(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48)) )
      return 0;
    v6 = *(_QWORD *)(a2 + 24);
    if ( v3 == v6 )
      v6 = *(_QWORD *)(a2 + 32);
    v15 = 0;
    if ( *(_DWORD *)(v6 + 8) == 51 )
    {
      v4 = sub_289E50(a1, v6, (__int64)&v14, a2);
      if ( (_BYTE)v4 )
      {
        if ( (tinfo_property = get_tinfo_property(*((_QWORD *)&v15 + 1), 2), (tinfo_property & 0x3E) != 0)
          && (tinfo_property & 0xFu) <= 8
          || (get_tinfo_property(*((_QWORD *)&v15 + 1), 2) & 0xF) == 9 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 145LL) )
          {
            if ( v16 != v18 * (v17 + 1) || v18 >= v16 )
            {
              if ( !v17 )
              {
LABEL_21:
                sub_28A410(a1, v6, &v14);
                if ( (get_tinfo_property(*((_QWORD *)&v15 + 1), 2) & 0xF) == 9 )
                {
                  sub_250A30(v3);
                  *(_DWORD *)(v3 + 8) = 62;
                  v8 = (__m128i *)j__qalloc_or_throw(20);
                  *v8 = _mm_loadu_si128(xmmword_407C00);
                  v8[1].m128i_i32[0] = xmmword_407C00[1].m128i_i32[0];
                  *(_QWORD *)(v3 + 24) = v8;
                  copy_tinfo_t(v3 + 48, v6 + 48);
                  *(_DWORD *)(a2 + 56) |= 4u;
                }
                else if ( (unsigned int)get_tinfo_property(*((_QWORD *)&v15 + 1), 3) == 2 )
                {
                  set_tinfo_property((char *)&v15 + 8, 1, 1);
                  sub_241F40(v6, *(_QWORD *)(a1 + 72), (_QWORD *)&v15 + 1);
                }
                goto LABEL_12;
              }
LABEL_26:
              v13 = v18;
              v9 = 0;
              if ( (unsigned __int64)(8 * v18 - 1) < 0x40 )
                v9 = 1LL << (8 * (unsigned __int8)v18 - 1);
              v12 = v9;
              v10 = j__qalloc_or_throw(64);
              *(_QWORD *)v10 = -1;
              *(_QWORD *)(v10 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v10 + 40) = 0;
              *(_QWORD *)(v10 + 48) = 0;
              *(_DWORD *)(v10 + 56) = 0;
              *(_OWORD *)(v10 + 24) = 0;
              *(_QWORD *)v10 = *(_QWORD *)v6;
              sub_23BE20(v10, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), *(_QWORD *)(a1 + 64), v12, v13, 2u);
              v11 = j__qalloc_or_throw(64);
              *(_QWORD *)v11 = -1;
              *(_DWORD *)(v11 + 8) = 21;
              *(_QWORD *)(v11 + 12) = -1;
              *(_QWORD *)(v11 + 24) = v6;
              *(_QWORD *)(v11 + 32) = v10;
              *(_QWORD *)(v11 + 40) = 0;
              *(_QWORD *)(v11 + 48) = 0;
              *(_DWORD *)(v11 + 56) = 0;
              *(_QWORD *)v11 = *(_QWORD *)a2;
              *(_QWORD *)(a2 + 24) = v11;
              sub_23F5C0(v11, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
              *(_DWORD *)(a2 + 8) = ((*(_DWORD *)(a2 + 8) & 0xFFFFFFFD) == 28) + 22;
              sub_23F5C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
              goto LABEL_12;
            }
          }
          else if ( v17 || v18 >= v16 )
          {
            if ( v16 == v18 * (v17 + 1) )
              goto LABEL_21;
            goto LABEL_26;
          }
        }
      }
    }
    v4 = 0;
LABEL_12:
    clear_tinfo_t((char *)&v15 + 8);
    clear_tinfo_t(&v15);
    return v4;
  }
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) == 61 )
    goto LABEL_7;
  return 0;
}
