__int64 __fastcall sub_413F50(_QWORD *a1, _BYTE *a2, unsigned __int64 a3, char a4, __int64 *a5)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 result; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 tinfo_tid; // rax
  __int64 v17; // [rsp+8h] [rbp-110h]
  __int64 v18; // [rsp+8h] [rbp-110h]
  __int64 v19; // [rsp+8h] [rbp-110h]
  unsigned __int64 v20; // [rsp+18h] [rbp-100h] BYREF
  __int64 v21; // [rsp+20h] [rbp-F8h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-F0h] BYREF
  __int128 v23; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-D8h] BYREF
  void *v25; // [rsp+50h] [rbp-C8h]
  __int128 v26; // [rsp+58h] [rbp-C0h]
  void *ptr; // [rsp+68h] [rbp-B0h]
  __int128 v28; // [rsp+70h] [rbp-A8h]
  __int128 v29; // [rsp+80h] [rbp-98h] BYREF
  int v30; // [rsp+98h] [rbp-80h]
  __int64 v31; // [rsp+B0h] [rbp-68h]
  int v32; // [rsp+B8h] [rbp-60h]
  __int64 v33; // [rsp+C0h] [rbp-58h]
  char v34; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+D8h] [rbp-40h]

  v6 = a4 & 0xF;
  v35 = __readfsqword(0x28u);
  v20 = sub_3BDD60(a1, a3);
  v8 = -32770;
  if ( _bittest64(&v8, v6) )
    goto LABEL_2;
  if ( (unsigned __int8)sub_7BEFD0(&v20, *a1, &v21, 11, 65) )
  {
LABEL_3:
    v9 = sub_413EA0(a1, (__int64)a2, v21 - 1, a5);
    v10 = sub_3BDE50(a1, v9);
    return sub_6BA0F0(a1, v10);
  }
  if ( (_DWORD)v6 )
  {
LABEL_2:
    if ( !(unsigned __int8)sub_7BEFD0(&v20, *a1, &v21, 12, 65) )
      return -1;
    goto LABEL_3;
  }
  v23 = 0;
  if ( !a5 )
  {
    a5 = (__int64 *)&v23;
    sub_630CA0(*a1, 26, &v23, 16);
  }
  v25 = nullptr;
  ptr = nullptr;
  v31 = 1;
  v32 = -1;
  v33 = 0;
  v34 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  if ( a3 < *a5 || a3 >= a5[1] || sub_6BE1C0(a1, 0, &v24, a3) == -1 )
    goto LABEL_15;
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(v29, 289);
  if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 0x2D )
  {
    tinfo_tid = get_tinfo_tid(&tinfo_property, 0);
    goto LABEL_22;
  }
  if ( (BYTE8(v29) & 0xF) == 8 )
  {
    tinfo_tid = sub_6BB440((_DWORD)a1, a1[1], v30, v12, v13, v14);
LABEL_22:
    if ( tinfo_tid != -1 )
    {
      if ( a2 )
        *a2 = 0;
      v19 = sub_6BA0F0(a1, tinfo_tid);
      clear_tinfo_t(&tinfo_property);
      v15 = v19;
      goto LABEL_16;
    }
  }
  clear_tinfo_t(&tinfo_property);
LABEL_15:
  v15 = -1;
LABEL_16:
  v17 = v15;
  clear_tinfo_t(&v29);
  result = v17;
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
    result = v17;
  }
  if ( v25 )
  {
    v18 = result;
    *(_QWORD *)&v26 = 0;
    qfree(v25);
    return v18;
  }
  return result;
}
