__int64 __fastcall sub_120920(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h]
  __int64 v9; // [rsp+10h] [rbp-98h]
  __int64 v10; // [rsp+18h] [rbp-90h]
  __int128 v11; // [rsp+20h] [rbp-88h]
  int v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  int v14; // [rsp+40h] [rbp-68h]
  char v15; // [rsp+48h] [rbp-60h]
  unsigned __int64 v16; // [rsp+4Ch] [rbp-5Ch]
  __int64 v17; // [rsp+58h] [rbp-50h]
  __int128 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp-38h]
  char v20; // [rsp+78h] [rbp-30h]
  unsigned __int64 v21; // [rsp+88h] [rbp-20h]

  v1 = *a1;
  v21 = __readfsqword(0x28u);
  v2 = sub_153DC0(v1);
  if ( v2 )
  {
    v11 = 0;
    v16 = 0xFFFFFFFEFFFFFFFFLL;
    v7 = 0;
    v8 = 0;
    v9 = -1;
    v10 = 0;
    v12 = -1;
    v13 = 0;
    v14 = -1;
    v15 = 0;
    v17 = -1;
    v19 = 0xFFFFFFFFLL;
    v20 = 0;
    v18 = 0;
    ((void (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15EC40)(v2, &v7, 2, v3, v4, v5);
    if ( SHIDWORD(v16) >= -1 && v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  return 0;
}

