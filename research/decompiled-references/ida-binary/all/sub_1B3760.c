unsigned __int64 __fastcall sub_1B3760(__int64 a1, unsigned __int8 a2)
{
  int v3; // eax
  char v4; // si
  _BYTE *v5; // rdx
  _UNKNOWN ***v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r13
  int v11; // r14d
  int v12; // eax
  int v13; // eax
  __int16 v14; // r12
  __int64 v15; // rdi
  int v16; // eax
  _UNKNOWN **v17; // [rsp+0h] [rbp-78h] BYREF
  int v18; // [rsp+8h] [rbp-70h]
  int v19; // [rsp+Ch] [rbp-6Ch]
  __int128 v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  _UNKNOWN ***v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v3 = 0;
  if ( a2 <= 0x27u )
  {
    v8 = sub_1EB5B0(a1);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 176LL))(v8, 0);
    if ( *(_QWORD *)(v9 + 16) <= 1u )
      return v25 - __readfsqword(0x28u);
    v10 = &off_85D028;
    v11 = 0;
    v12 = sub_330DE0(*(_QWORD *)(v9 + 8), a2);
    *(_BYTE *)(a1 + 1000) = 1;
    if ( v12 != -1 )
    {
      LODWORD(v20) = v12;
      sub_2006B0(a1, &v20, 0);
      goto LABEL_7;
    }
    while ( 1 )
    {
      v13 = sub_330DE0(*v10, a2);
      v14 = v13;
      if ( v13 != -1 )
        break;
      ++v11;
      v10 += 2;
      if ( v11 == 69 )
        goto LABEL_7;
    }
    v15 = *(_QWORD *)(a1 + 888);
    v19 = v11;
    v17 = &simpleline_place_t___vtable;
    v18 = 0;
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 208LL))(v15, 0);
    v21 = 0;
    LODWORD(v22) = -1;
    WORD2(v22) = v14;
    LODWORD(v23) = 1;
    v24 = &v17;
    HIWORD(v22) = v16 / 2;
    v20 = 0;
    v24 = (_UNKNOWN ***)simpleline_place_t__clone(&v17);
    sub_1FFC10(a1, &v20, 0, 0);
    v6 = v24;
    if ( !v24 )
      goto LABEL_7;
  }
  else
  {
    v4 = a2 - 40;
    v5 = &unk_85D020;
    while ( *v5 != v4 )
    {
      ++v3;
      v5 += 16;
      if ( v3 == 69 )
        goto LABEL_7;
    }
    v19 = v3;
    v17 = &simpleline_place_t___vtable;
    v18 = 0;
    v21 = 0;
    v22 = 0xFFFFFFFFLL;
    v23 = 1;
    v24 = &v17;
    v20 = 0;
    v24 = (_UNKNOWN ***)simpleline_place_t__clone(&v17);
    sub_1FFC10(a1, &v20, 0, 0);
    v6 = v24;
    if ( !v24 )
      goto LABEL_7;
  }
  qfree(v6, (const char *)&v20);
LABEL_7:
  *(_BYTE *)(a1 + 1000) = 0;
  return v25 - __readfsqword(0x28u);
}
