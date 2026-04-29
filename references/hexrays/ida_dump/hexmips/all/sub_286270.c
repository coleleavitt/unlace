_BOOL8 __fastcall sub_286270(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  _BOOL4 v5; // ebp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // r14
  int v14; // eax
  int v15; // edx
  int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  int v23; // eax
  int tinfo_property; // [rsp+0h] [rbp-88h]
  __int64 v25; // [rsp+0h] [rbp-88h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+10h] [rbp-78h]
  int v29; // [rsp+10h] [rbp-78h]
  int v30; // [rsp+18h] [rbp-70h]
  __int64 v31; // [rsp+28h] [rbp-60h] BYREF
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8);
  v34 = __readfsqword(0x28u);
  if ( v3 <= 0x21 )
  {
    if ( v3 <= 0x1F )
      return 0;
    v7 = *(_QWORD *)(a2 + 32);
    v5 = 0;
    if ( *(_DWORD *)(v7 + 8) != 61 )
      return v5;
    v8 = sub_2511B0(*(__int64 **)(v7 + 24), (_QWORD *)(v7 + 48));
    v9 = 1LL << v8;
    if ( (unsigned __int64)v8 >= 0x40 )
      v9 = 0;
  }
  else
  {
    if ( v3 - 38 > 1 )
      return 0;
    v4 = *(_QWORD *)(a2 + 32);
    v5 = 0;
    if ( *(_DWORD *)(v4 + 8) != 61 )
      return v5;
    v9 = sub_2511B0(*(__int64 **)(v4 + 24), (_QWORD *)(v4 + 48));
  }
  v10 = *(_QWORD *)(a2 + 24);
  v32 = 0;
  v33 = 0;
  v11 = *(_DWORD *)(v10 + 8);
  if ( v11 == 48 )
  {
    if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v10 + 48), 3) == 1 )
    {
      v20 = v33;
      v21 = v32;
      if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
      {
        v32 = qvector_reserve(&v32, v32, v33 + 1, 8);
        v21 = v32;
        v20 = v33;
      }
      *(_QWORD *)(v21 + 8 * v20) = v10;
      v10 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)&v33 = v33 + 1;
    }
    if ( *(_DWORD *)(v10 + 8) != 36 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( v11 != 36 )
    return 0;
LABEL_12:
  if ( (*(_BYTE *)(v10 + 56) & 1) != 0 )
  {
    v12 = *(_QWORD *)(v10 + 24);
    v13 = *(_QWORD *)(v10 + 32);
    tinfo_property = get_tinfo_property(*(_QWORD *)(v12 + 48), 14);
    v14 = get_tinfo_property(*(_QWORD *)(v13 + 48), 14);
    v15 = v14;
    v16 = v14;
    if ( *(_DWORD *)(v12 + 8) == 48 && tinfo_property == 1 )
    {
      v30 = v14;
      v29 = v14;
      v27 = *(_QWORD *)(v12 + 24);
      v23 = get_tinfo_property(*(_QWORD *)(v27 + 48), 14);
      v17 = v12;
      v16 = v29;
      v12 = v27;
      tinfo_property = v23;
      v15 = v30;
    }
    else
    {
      v17 = v10;
    }
    if ( *(_DWORD *)(v13 + 8) == 48 && v15 == 1 )
    {
      v28 = v17;
      v26 = *(_QWORD *)(v13 + 24);
      v22 = get_tinfo_property(*(_QWORD *)(v26 + 48), 14);
      v10 = v13;
      v17 = v28;
      v13 = v26;
      v16 = v22;
    }
    if ( tinfo_property == v9 && v16 == v9 )
    {
      v25 = v17;
      if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v12 + 48), 2) & 0xF) - 10) <= 1u
        && (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v13 + 48), 2) & 0xF) - 10) <= 1u )
      {
        v5 = sub_240DD0(*(_QWORD *)(a1 + 72), v12, v13, 0x16u);
        if ( v5 )
        {
          v31 = 0;
          copy_tinfo_t(&v31, a2 + 48);
          sub_250520(v25);
          sub_250520(v10);
          v18 = *(_QWORD *)(a2 + 24);
          if ( v18 )
          {
            sub_250DB0(*(_QWORD *)(a2 + 24));
            clear_tinfo_t(v18 + 48);
            j__qfree(v18);
          }
          v19 = *(_QWORD *)(a2 + 32);
          if ( v19 )
          {
            sub_250DB0(*(_QWORD *)(a2 + 32));
            clear_tinfo_t(v19 + 48);
            j__qfree(v19);
          }
          *(_DWORD *)(a2 + 8) = 36;
          *(_QWORD *)(a2 + 24) = v12;
          *(_QWORD *)(a2 + 32) = v13;
          sub_23F940(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
          if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(a2 + 48), v31, 0)
            && (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
          {
            *(_DWORD *)(a1 + 8) |= 8u;
          }
          clear_tinfo_t(&v31);
          goto LABEL_14;
        }
      }
    }
  }
LABEL_13:
  v5 = 0;
LABEL_14:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v5;
}
