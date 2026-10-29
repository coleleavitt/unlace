bool __fastcall sub_14CF70(_DWORD *a1, __int64 a2)
{
  bool v2; // zf
  bool v4; // bl
  __int64 (**v5)(); // [rsp+0h] [rbp-98h] BYREF
  int v6; // [rsp+8h] [rbp-90h]
  int v7; // [rsp+Ch] [rbp-8Ch]
  __int128 v8; // [rsp+10h] [rbp-88h] BYREF
  __int64 v9; // [rsp+20h] [rbp-78h]
  __int64 v10; // [rsp+28h] [rbp-70h]
  __int64 v11; // [rsp+30h] [rbp-68h]
  __int64 (***v12)(); // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  unsigned __int64 v18; // [rsp+78h] [rbp-20h]

  v2 = a1[298] == 1;
  v18 = __readfsqword(0x28u);
  if ( !v2 )
    return sub_F30A0((__int64)a1, a2);
  v5 = off_22FD98;
  v8 = 0;
  v6 = 0;
  v7 = sub_C7920(-1);
  v9 = 0;
  v10 = -1;
  v11 = 0;
  v12 = &v5;
  v12 = (__int64 (***)())idaplace_t__clone();
  v14 = 0;
  v15 = -1;
  v16 = 0;
  v17 = 0;
  v13 = 0;
  v4 = (unsigned int)sub_15E260(a1, &v13, &v8, 1) == 1
    && (*(unsigned int (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, v17, a2) != -1;
  if ( v17 )
    qfree();
  if ( v12 )
    qfree();
  return v4;
}

