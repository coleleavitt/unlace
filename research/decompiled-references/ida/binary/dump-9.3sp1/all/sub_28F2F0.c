__int64 __fastcall sub_28F2F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 v7; // r15
  char tinfo_property; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-78h]
  unsigned int v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+18h] [rbp-60h] BYREF
  signed int v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+2Ch] [rbp-4Ch]
  signed int v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 8);
  v27 = __readfsqword(0x28u);
  if ( v2 == 30 || v2 == 24 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v4 + 8) != 61 )
      return 0;
LABEL_7:
    if ( sub_255A30(*(__int64 **)(v4 + 24)) )
      return 0;
    v7 = *(_QWORD *)(a2 + 24);
    if ( v4 == v7 )
      v7 = *(_QWORD *)(a2 + 32);
    v23 = 0;
    if ( *(_DWORD *)(v7 + 8) == 51 )
    {
      v5 = sub_28EA50(a1, v7, (__int64)&v22, a2);
      if ( (_BYTE)v5 )
      {
        if ( (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0) && (tinfo_property & 0xFu) <= 8
          || (get_tinfo_property() & 0xF) == 9 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 145LL) )
          {
            if ( v24 != v26 * (v25 + 1) || v26 >= v24 )
            {
              if ( !v25 )
              {
LABEL_21:
                sub_28F010(a1, v7, &v22);
                if ( (get_tinfo_property() & 0xF) == 9 )
                {
                  sub_255630(v4);
                  *(_DWORD *)(v4 + 8) = 62;
                  v11 = (__m128i *)j__qalloc_or_throw(20, 2, v9, v10);
                  *v11 = _mm_loadu_si128(xmmword_42E1E0);
                  v11[1].m128i_i32[0] = xmmword_42E1E0[1].m128i_i32[0];
                  *(_QWORD *)(v4 + 24) = v11;
                  copy_tinfo_t();
                  *(_DWORD *)(a2 + 56) |= 4u;
                }
                else if ( (unsigned int)get_tinfo_property() == 2 )
                {
                  set_tinfo_property();
                  sub_246B40(v7, *(_QWORD *)(a1 + 72), (_QWORD *)&v23 + 1);
                }
                goto LABEL_12;
              }
LABEL_26:
              v21 = v26;
              v12 = (unsigned int)(8 * v26 - 1);
              v13 = 0;
              if ( (unsigned __int64)(int)v12 < 0x40 )
                v13 = 1LL << (8 * (unsigned __int8)v26 - 1);
              v20 = v13;
              v14 = j__qalloc_or_throw(64, 2, 1LL << (8 * (unsigned __int8)v26 - 1), v12);
              *(_QWORD *)v14 = -1;
              *(_QWORD *)(v14 + 8) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 16) = 0xFFFFFFFFLL;
              *(_QWORD *)(v14 + 40) = 0;
              *(_QWORD *)(v14 + 48) = 0;
              *(_DWORD *)(v14 + 56) = 0;
              *(_OWORD *)(v14 + 24) = 0;
              *(_QWORD *)v14 = *(_QWORD *)v7;
              v15 = *(_QWORD *)(a1 + 64);
              v16 = *(_QWORD *)(v15 + 216);
              sub_240A20(v14, v16, v15, v20, v21, 2u);
              v19 = j__qalloc_or_throw(64, v16, v17, v18);
              *(_QWORD *)v19 = -1;
              *(_DWORD *)(v19 + 8) = 21;
              *(_QWORD *)(v19 + 12) = -1;
              *(_QWORD *)(v19 + 24) = v7;
              *(_QWORD *)(v19 + 32) = v14;
              *(_QWORD *)(v19 + 40) = 0;
              *(_QWORD *)(v19 + 48) = 0;
              *(_DWORD *)(v19 + 56) = 0;
              *(_QWORD *)v19 = *(_QWORD *)a2;
              *(_QWORD *)(a2 + 24) = v19;
              sub_2441C0(v19, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
              *(_DWORD *)(a2 + 8) = ((*(_DWORD *)(a2 + 8) & 0xFFFFFFFD) == 28) + 22;
              sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
              goto LABEL_12;
            }
          }
          else if ( v25 || v26 >= v24 )
          {
            if ( v24 == v26 * (v25 + 1) )
              goto LABEL_21;
            goto LABEL_26;
          }
        }
      }
    }
    v5 = 0;
LABEL_12:
    clear_tinfo_t();
    clear_tinfo_t();
    return v5;
  }
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v4 + 8) == 61 )
    goto LABEL_7;
  return 0;
}
