__int64 __fastcall sub_98B20(__int64 a1, __int64 a2, bool *a3, const char *a4)
{
  __int64 v4; // r15
  unsigned int v6; // r12d
  unsigned int v8; // eax
  __int64 extlang; // rax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(char *, _BYTE *, _QWORD, _QWORD, __int64 *); // rax
  unsigned int v12; // ebp
  struct _Unwind_Exception *v14; // rbx
  __int64 v15; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+18h] [rbp-A0h]
  char v17[8]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+48h] [rbp-70h]
  _BYTE v20[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v4 = a1;
  v6 = a2;
  v21 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 68) & 0x20) != 0 )
  {
    if ( !dword_2515A4 )
      goto LABEL_3;
    goto LABEL_15;
  }
  v12 = sub_98930(a1, a2, (__int64)a4);
  if ( !(_BYTE)v12 )
    return v12;
  if ( dword_2515A4 )
  {
LABEL_15:
    a2 = 0xFFFFFFFFLL;
    a1 = 0xFFFFFFFFLL;
    invalidate_dbgmem_contents();
  }
LABEL_3:
  if ( *(_DWORD *)(v4 + 64) >> 28 >= (unsigned __int64)xmmword_2508C8 )
  {
    sub_978E0();
    goto LABEL_22;
  }
  a2 = 32;
  a1 = (__int64)v20;
  qsnprintf();
  v8 = *(_DWORD *)(v4 + 64);
  v15 = 0;
  v16 = 0;
  v17[0] = 2;
  v19 = 0;
  v18 = 0;
  if ( v8 >> 28 >= (unsigned __int64)xmmword_2508C8 )
  {
LABEL_22:
    sub_978C0(a1, a2);
    goto LABEL_23;
  }
  extlang = find_extlang();
  v10 = extlang;
  if ( !extlang )
  {
    if ( *(_DWORD *)(v4 + 64) >> 28 < (unsigned __int64)xmmword_2508C8 )
    {
LABEL_19:
      sub_94360(&v15);
LABEL_8:
      sub_C5070("AUTOHIDE NONE\n%a: %s condition:\n%s\n", 0.0, (const char *)v6, a4);
      v12 = 0;
      if ( !v10 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_23:
    v14 = (struct _Unwind_Exception *)sub_978E0();
    free_idcv();
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    _Unwind_Resume(v14);
  }
  v11 = *(__int64 (__fastcall **)(char *, _BYTE *, _QWORD, _QWORD, __int64 *))(extlang + 56);
  if ( !v11 )
    goto LABEL_19;
  v12 = v11(v17, v20, 0, 0, &v15);
  if ( !(_BYTE)v12 )
    goto LABEL_8;
  idcv_int64();
  *a3 = (_QWORD)v18 != 0;
  if ( (debug & 0x10000) != 0 )
    sub_91EA0((__int64)"Breakpoint %a %s\n", 0.0, (const char *)v6);
LABEL_9:
  --*(_DWORD *)(v10 + 12);
LABEL_10:
  free_idcv();
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return v12;
}

