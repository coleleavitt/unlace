unsigned __int64 __fastcall sub_38CA30(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3,
        __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  size_t v10; // r13
  __int64 v11; // r13
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-90h]
  __int64 v14; // [rsp+10h] [rbp-80h] BYREF
  void *src; // [rsp+18h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+20h] [rbp-70h]
  void *v17; // [rsp+38h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-50h]
  unsigned __int64 v19; // [rsp+50h] [rbp-40h]

  v6 = *a4;
  v19 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( (v6 & 0x100) != 0 )
    get_tinfo_pdata(&src, v6, 0);
  v8 = operator new(0x40u);
  v17 = nullptr;
  sub_38BBA0(v8, 0, (__int64)&v17, (__int64)a4, -1);
  clear_tinfo_t(&v17);
  v9 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))**a2;
  v14 = v8;
  v10 = n[0];
  v18 = 0;
  v17 = nullptr;
  if ( n[0] )
  {
    v13 = v9;
    v17 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v18 + 1) = v10;
    memcpy(v17, src, v10);
    *(_QWORD *)&v18 = v10;
    v9 = v13;
  }
  v11 = v9(a2, &v17, &v14, 0);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  sub_38C390(a1, a2, a3, a4, 0, v11);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return v19 - __readfsqword(0x28u);
}
