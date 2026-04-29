__int64 __fastcall sub_46FD0(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  unsigned int type_ordinal; // eax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  const char *v13; // rcx
  __int64 idati; // rdx
  __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  const char *v16; // [rsp+10h] [rbp-68h] BYREF
  __int128 v17; // [rsp+18h] [rbp-60h]
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v19; // [rsp+40h] [rbp-38h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v15 = 0;
  v6 = sub_46AA0((__int64)a1, (__int64)&v15, a3, a4);
  if ( v6 != 1 )
    goto LABEL_2;
  v16 = nullptr;
  v17 = 0;
  tinfo_t__build_anon_type_name(&v16, &v15);
  v8 = (__int64)src;
  if ( (_QWORD)v17 )
    v8 = (__int64)v16;
  v9 = (_QWORD *)a1[39];
  type_ordinal = get_type_ordinal(v9);
  if ( type_ordinal )
    goto LABEL_10;
  v11 = alloc_type_ordinals(a1[39], 1);
  v12 = v11;
  v13 = src;
  if ( (_QWORD)v17 )
    v13 = v16;
  if ( !(unsigned int)save_tinfo(&v15, a1[39], v11, v13, 130) )
  {
    v8 = -1;
    v9 = a1;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, __int64 *))(*a1 + 56LL))(a1, -1, v12, 0, &v15);
    type_ordinal = v12;
LABEL_10:
    idati = a1[39];
    v19 = 1;
    v18[1] = type_ordinal;
    if ( !idati )
      idati = get_idati(v9, v8);
    v18[0] = idati;
    create_tinfo(a2, 61, 189, v18);
    goto LABEL_13;
  }
  v6 = 0;
LABEL_13:
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
LABEL_2:
  clear_tinfo_t(&v15);
  return v6;
}
