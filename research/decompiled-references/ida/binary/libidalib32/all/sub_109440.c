unsigned __int64 __fastcall sub_109440(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-A0h]
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  __int128 v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  int v20; // [rsp+40h] [rbp-68h]
  char v21; // [rsp+48h] [rbp-60h]
  unsigned __int64 v22; // [rsp+4Ch] [rbp-5Ch]
  __int64 v23; // [rsp+58h] [rbp-50h]
  __int128 v24; // [rsp+60h] [rbp-48h]
  __int64 v25; // [rsp+70h] [rbp-38h]
  char v26; // [rsp+78h] [rbp-30h]
  unsigned __int64 v27; // [rsp+88h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  sub_198FF0(a1, a2, a3);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 != 38 && v3 != 58 )
  {
    v9 = sub_F5C30(*(_QWORD *)a2);
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 416LL))(v9, 0);
      if ( v10 != -1 )
      {
        *(_DWORD *)(a2 + 84) = v10;
        *(_QWORD *)(a2 + 96) = get_func();
        *(_QWORD *)(a2 + 104) = get_fchunk();
        *(_QWORD *)(a2 + 112) = getseg();
      }
    }
  }
  v4 = *(_QWORD *)(a2 + 224);
  if ( v4 )
  {
    if ( (unsigned __int8)sub_161120(v4, a2 + 120, a2 + 136, 0) )
      *(_DWORD *)(a2 + 80) |= 1u;
    if ( *(_BYTE *)(sub_15E0E0(*(_QWORD *)(a2 + 224)) + 21) )
    {
      v11 = *(_QWORD *)(a2 + 224);
      v17 = 0;
      v22 = 0xFFFFFFFEFFFFFFFFLL;
      v13 = 0;
      v14 = 0;
      v15 = -1;
      v16 = 0;
      v18 = -1;
      v19 = 0;
      v20 = -1;
      v21 = 0;
      v23 = -1;
      v25 = 0xFFFFFFFFLL;
      v26 = 0;
      v24 = 0;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15EC40)(
                           v11,
                           &v13,
                           4,
                           v5,
                           v6,
                           v7) == 5 )
      {
        v12 = v18;
        if ( v18 == -1 )
          v12 = v22;
        *(_DWORD *)(a2 + 88) = v12;
      }
      if ( SHIDWORD(v22) >= -1 && v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      clear_tinfo_t();
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
    }
  }
  if ( *(_DWORD *)(a2 + 84) != -1 && (unsigned __int8)segtype() == 1 )
    *(_DWORD *)(a2 + 80) |= 2u;
  return v27 - __readfsqword(0x28u);
}

