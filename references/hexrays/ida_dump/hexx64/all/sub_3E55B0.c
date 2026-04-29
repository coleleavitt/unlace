__int64 __fastcall sub_3E55B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rcx
  __m128i v8; // kr00_16
  __int64 v9; // rdi
  __m128i v10; // xmm0
  const char *v11; // rdx
  const char *v12; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __m128i v15; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( a3 == -1 )
  {
    sub_3E5130((__int64)&v14, (__int64)"check_index: idx == BADNODE");
    v7 = v14;
    v8 = v15;
LABEL_8:
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v8;
    *(_BYTE *)(a1 + 24) = 1;
    return a1;
  }
  v5 = netnode_suplast(*(_QWORD *)(a2 + 24), 83);
  if ( v5 == -1 )
  {
    sub_3E5130((__int64)&v14, (__int64)"check_index: last == BADNODE");
    v7 = v14;
    v8 = v15;
    goto LABEL_8;
  }
  if ( v5 < a3 )
  {
    sub_3E5130((__int64)&v14, (__int64)"check_index: idx(%llX) > last(%llX)", a3, v5);
    v7 = v14;
    v8 = v15;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v12 = nullptr;
  v13 = 0;
  if ( netnode_qsupstr(v9, &v12, a3, 83) )
  {
    if ( (unsigned __int8)netnode_supdel(*(_QWORD *)(a2 + 24), a3, 83) )
    {
      netnode_supshift(*(_QWORD *)(a2 + 24), 0, 1, a3, 83);
      v11 = s1;
      if ( (_QWORD)v13 )
        v11 = v12;
      netnode_supset(*(_QWORD *)(a2 + 24), 0, v11, 0, 83);
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_13;
    }
    sub_3E5130((__int64)&v14, (__int64)"move_to_front(%llX)::supdel", a3);
  }
  else
  {
    sub_3E5130((__int64)&v14, (__int64)"move_to_front(%llX)::supstr", a3);
  }
  *(_QWORD *)a1 = v14;
  v10 = _mm_loadu_si128(&v15);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v10;
LABEL_13:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return a1;
}
