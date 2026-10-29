__int64 __fastcall sub_16BAE0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64, int *); // rax
  unsigned int v3; // ebx
  int v5; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-A0h]
  __int64 v7; // [rsp+10h] [rbp-98h]
  __int64 v8; // [rsp+18h] [rbp-90h]
  __int128 v9; // [rsp+20h] [rbp-88h]
  int v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+38h] [rbp-70h]
  int v12; // [rsp+40h] [rbp-68h]
  char v13; // [rsp+48h] [rbp-60h]
  unsigned __int64 v14; // [rsp+4Ch] [rbp-5Ch]
  __int64 v15; // [rsp+58h] [rbp-50h]
  __int128 v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp-38h]
  char v18; // [rsp+78h] [rbp-30h]
  unsigned __int64 v19; // [rsp+88h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v14 = 0xFFFFFFFEFFFFFFFFLL;
  v9 = 0;
  v5 = 0;
  v6 = 0;
  v7 = -1;
  v8 = 0;
  v10 = -1;
  v11 = 0;
  v12 = -1;
  v13 = 0;
  v15 = -1;
  v17 = 0xFFFFFFFFLL;
  v18 = 0;
  v16 = 0;
  sub_15EC40(a1, (__int64)&v5, 2u);
  v2 = *(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 568LL);
  if ( v2 == sub_16BAB0 )
  {
    if ( !v5 || !(unsigned int)sub_120430(&v5) )
      sub_16B950(a1);
    v3 = 1;
  }
  else
  {
    v3 = v2(a1, a2, &v5);
  }
  if ( SHIDWORD(v14) >= -1 && v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v3;
}

