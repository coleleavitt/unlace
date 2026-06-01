__int64 __fastcall edit_func_dialog_t__::vfunc_8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  const char *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // r9
  __int64 (*v11)(); // rax
  unsigned int v13; // ebx
  unsigned __int64 v14; // r15
  char *v15; // r8
  size_t v16; // r9
  const char *v17; // rsi
  void *v18; // rdi
  size_t n; // [rsp+8h] [rbp-88h]
  void *src; // [rsp+10h] [rbp-80h]
  _BYTE *srcb; // [rsp+10h] [rbp-80h]
  char *srca; // [rsp+10h] [rbp-80h]
  _QWORD *v23; // [rsp+18h] [rbp-78h]
  void *v24; // [rsp+18h] [rbp-78h]
  char *v25; // [rsp+20h] [rbp-70h] BYREF
  __int128 v26; // [rsp+28h] [rbp-68h]
  void *dest; // [rsp+40h] [rbp-50h] BYREF
  __int128 v28; // [rsp+48h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( !(unsigned __int8)callui(203, 7, a1, 0, (unsigned int)&callui, a6) )
  {
    v23 = *(_QWORD **)(*(_QWORD *)(a1 + 352) + 1000LL);
    if ( (unsigned __int8)get_tinfo_from_tlc(a1 + 296, a1 + 328, v23, 1) )
    {
      if ( !*(_BYTE *)(a1 + 416) )
        return 1;
    }
    else
    {
      clear_tinfo_t(a1 + 296);
      if ( !*(_BYTE *)(a1 + 416) )
        return 1;
    }
    v25 = nullptr;
    dest = nullptr;
    v26 = 0;
    v28 = 0;
    if ( &v25 != v23 + 8 )
    {
      v14 = v23[9];
      if ( v14 > 1 )
      {
        src = (void *)v23[8];
        v25 = (char *)qvector_reserve(&v25, 0, v23[9], 1);
        *(_QWORD *)&v26 = v14;
        memmove(v25, src, v14 - 1);
        v25[v14 - 1] = 0;
      }
    }
    if ( &dest != v23 + 11 )
    {
      v15 = (char *)v23[12];
      if ( v15 && (v16 = (size_t)(v15 - 1), v15 != (_BYTE *)&dword_0 + 1) )
      {
        v18 = dest;
        v24 = (void *)v23[11];
        if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)v15 )
        {
          n = (size_t)(v15 - 1);
          srca = v15;
          dest = (void *)qvector_reserve(&dest, dest, v15, 1);
          v16 = n;
          v18 = dest;
          v15 = srca;
        }
        *(_QWORD *)&v28 = v15;
        srcb = v15;
        memmove(v18, v24, v16);
        srcb[(_QWORD)dest - 1] = 0;
      }
      else
      {
        *(_QWORD *)&v28 = 0;
      }
    }
    v17 = (const char *)(a1 + 328);
    v13 = sub_3B7DD0(
            a1 + 304,
            a1 + 328,
            (__int64 *)(a1 + 288),
            (_QWORD *)(a1 + 296),
            a1 + 368,
            (__int64)&v25,
            a1 + 392,
            (__int64)&dest,
            *(_QWORD *)(a1 + 256));
    if ( dest )
    {
      *(_QWORD *)&v28 = 0;
      qfree(dest, v17);
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, v17);
    }
    return v13;
  }
  v7 = &s1;
  if ( *(_QWORD *)(a1 + 272) )
    v7 = *(const char **)(a1 + 264);
  parse_decl(0, a1 + 328, 0, v7, 49423);
  if ( !*(_BYTE *)(a1 + 416) )
  {
    if ( *(_QWORD *)(a1 + 272) > 1u )
      return parse_decl(a1 + 296, 0, 0, *(_QWORD *)(a1 + 264), 49422);
    clear_tinfo_t(a1 + 296);
    return 1;
  }
  v10 = 1;
  v11 = *(__int64 (**)())(*QT::QCoreApplication::self + 296LL);
  if ( v11 != sub_3B5230 )
    v10 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (*)(), __int64, __int64, __int64))v11)(
            QT::QCoreApplication::self,
            a1 + 328,
            sub_3B5230,
            v8,
            v9,
            1)
        ^ 1;
  return sub_3B8310(
           (__int64 *)(a1 + 264),
           (_QWORD *)(a1 + 304),
           (__int64 *)(a1 + 288),
           *(_QWORD *)(a1 + 256),
           a1 + 296,
           v10);
}
