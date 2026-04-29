__int64 __fastcall sub_28F330(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  __int64 v5; // rbp
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // [rsp+Ch] [rbp-7Ch]
  __int64 v15; // [rsp+10h] [rbp-78h]
  __int64 v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+10h] [rbp-78h]
  __int64 v18; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) != 61 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51 )
    return 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v5 + 8) != 48 )
    return 0;
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v5 + 48), 9);
  v7 = get_tinfo_property(tinfo_property, 2);
  clear_tinfo_t(&tinfo_property);
  if ( v7 != 33 )
  {
    if ( v7 == 32 )
    {
      v14 = 8;
      goto LABEL_9;
    }
    return 0;
  }
  v14 = 4;
LABEL_9:
  v8 = *(_QWORD *)(v5 + 24);
  v20 = 0;
  v20 = get_tinfo_property(*(_QWORD *)(v8 + 48), 9);
  if ( (get_tinfo_property(v20, 2) & 0xF) == 9
    && v14 == get_tinfo_size(0, v20, 0)
    && (v15 = *(_QWORD *)(a2 + 32), v14 == get_tinfo_size(0, *(_QWORD *)(v15 + 48), 0)) )
  {
    tinfo_property = 0xFFFFFFFF00000000LL;
    v9 = *(_QWORD *)(a1 + 72);
    v23 = 0;
    v10 = sub_119160((__int64)&tinfo_property, *(_QWORD *)(v9 + 112), *(_BYTE **)(v15 + 24), -(__int64)v14);
    v11 = v15;
    v3 = v10;
    if ( (_BYTE)v10 )
    {
      v12 = *(_QWORD *)(v15 + 24);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          v18 = v15;
          *(_QWORD *)(v12 + 24) = 0;
          v16 = v12;
          qfree(v13);
          v11 = v18;
          v12 = v16;
        }
        v17 = v11;
        j__qfree(v12);
        v11 = v17;
      }
      v19 = v11;
      *(_DWORD *)(v11 + 8) = 62;
      *(_QWORD *)(v11 + 24) = v23;
      sub_327220(v21, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (unsigned int)v14);
      copy_tinfo_t(v19 + 48, v21);
      clear_tinfo_t(v21);
      LOBYTE(tinfo_property) = 0;
      sub_250FD0((__int64 *)v5, *(_QWORD *)(v5 + 24));
      sub_23F940(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      *(_DWORD *)(a2 + 56) |= 4u;
      copy_tinfo_t(a2 + 48, &v20);
      if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        *(_DWORD *)(a1 + 8) |= 8u;
    }
    sub_118BA0((__int64)&tinfo_property);
  }
  else
  {
    v3 = 0;
  }
  clear_tinfo_t(&v20);
  return v3;
}
