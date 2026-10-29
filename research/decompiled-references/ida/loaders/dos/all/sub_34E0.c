unsigned __int64 __fastcall sub_34E0(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  const char *v3; // rbp
  __int64 segm_by_sel; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int128 v17; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+20h] [rbp-C8h]
  __int64 v20; // [rsp+28h] [rbp-C0h]
  __int64 v21; // [rsp+30h] [rbp-B8h]
  __int128 v22; // [rsp+38h] [rbp-B0h]
  __int128 v23; // [rsp+48h] [rbp-A0h]
  __int128 v24; // [rsp+58h] [rbp-90h]
  __int128 v25; // [rsp+68h] [rbp-80h]
  __int128 v26; // [rsp+78h] [rbp-70h]
  __int128 v27; // [rsp+88h] [rbp-60h]
  __int128 v28; // [rsp+98h] [rbp-50h]
  __int128 v29; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+B8h] [rbp-30h]
  unsigned __int64 v31; // [rsp+C8h] [rbp-20h]

  v2 = a1;
  v31 = __readfsqword(0x28u);
  v3 = a2;
  segm_by_sel = get_segm_by_sel();
  if ( !segm_by_sel || *(_QWORD *)(segm_by_sel + 48) != a1 )
  {
    v9 = -1;
    if ( a1 != -1 )
      v9 = 16 * sel2para(a1);
    if ( getinf(22, a2, v5, v6, v7, v8, v17, *((_QWORD *)&v17 + 1), v18, *((_QWORD *)&v18 + 1)) < v9 )
    {
      a2 = (const char *)v9;
      setinf(22, v9);
    }
    v21 = a1;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v30 = 0xFFFFFFFF00000000LL;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    if ( a1 != -1 )
      v2 = 16 * sel2para(a1);
    LOBYTE(v20) = 1;
    *((_QWORD *)&v17 + 1) = getinf(22, a2, v10, v11, v12, v13, v2, *((_QWORD *)&v17 + 1), v18, *((_QWORD *)&v18 + 1));
    LOBYTE(v14) = 2;
    if ( v3 )
      v14 = strcmp(v3, "STACK") == 0 ? 5 : 2;
    BYTE1(v20) = v14;
    add_segm_ex(&v17, 0, v3, 33);
    v15 = getseg(v17);
    set_default_sreg_value(v15, 32, -1);
  }
  return v31 - __readfsqword(0x28u);
}

