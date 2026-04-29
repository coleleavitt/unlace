unsigned __int64 __fastcall sub_2A4DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax
  __int64 v6; // rdx
  __int64 tinfo_size; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int16 v20; // [rsp+30h] [rbp-98h]
  _QWORD v21[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v22; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+58h] [rbp-70h] BYREF
  _DWORD v24[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v25[4]; // [rsp+70h] [rbp-58h] BYREF
  int v26; // [rsp+80h] [rbp-48h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v4 = s1;
  v27 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a3 + 24);
  v18 = 0;
  if ( *(_QWORD *)(v6 + 24) )
    v4 = *(const char **)(v6 + 16);
  if ( !v4 )
    goto LABEL_8;
  v19[1] = v4;
  v20 = 256;
  v19[0] = get_idati(a1, a2, 256, a4);
  if ( !(unsigned __int8)create_tinfo(&v18, 61, 61, v19) )
    goto LABEL_8;
  tinfo_size = get_tinfo_size(0, v18, 0);
  if ( *(_DWORD *)(a3 + 8) != 61 )
    sub_294A30();
  if ( tinfo_size != sub_2511B0(*(__int64 **)(a3 + 24), (_QWORD *)(a3 + 48)) )
  {
    sub_327610(v19, *(_QWORD *)(*(_QWORD *)a1 + 112LL), &v18);
    v22 = 1;
    v23 = 0;
    copy_tinfo_t(&v23, v19);
    v8 = sub_250740(a2);
    v9 = *(_QWORD *)a1;
    v21[1] = v8;
    v21[0] = 6;
    sub_29B7E0((__int64)v21, v9, v10, v11, v12, v13);
    v24[0] = 0;
    sub_29AEF0((__int64)v24, (unsigned int *)v21);
    v25[0] = 0;
    sub_29AEF0((__int64)v25, (unsigned int *)&v22);
    v26 = 1;
    sub_2A3A90(a1, (__int64)v24, 0, v14, v15, v16);
    v26 = -1;
    sub_29A3B0((__int64)v25);
    sub_29A3B0((__int64)v24);
    sub_29A3B0((__int64)v21);
    sub_29A3B0((__int64)&v22);
    clear_tinfo_t(v19);
    clear_tinfo_t(&v18);
  }
  else
  {
LABEL_8:
    clear_tinfo_t(&v18);
  }
  return v27 - __readfsqword(0x28u);
}
