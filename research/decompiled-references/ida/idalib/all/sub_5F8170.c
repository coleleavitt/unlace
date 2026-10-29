__int64 __fastcall sub_5F8170(
        __int64 a1,
        const char *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        double a7,
        double a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  __int64 (__fastcall *v12)(void *, __int64, __int64, __int64, _QWORD); // rax
  void *v13; // r14
  unsigned int v14; // eax
  int named_type; // edx
  int v16; // eax
  size_t v18; // rax
  size_t v19; // r14
  int v20; // eax
  size_t v21; // [rsp+0h] [rbp-90h]
  unsigned int v24; // [rsp+20h] [rbp-70h]
  int v25; // [rsp+2Ch] [rbp-64h] BYREF
  int v26; // [rsp+34h] [rbp-5Ch] BYREF
  char *v27; // [rsp+38h] [rbp-58h] BYREF
  void *ptr; // [rsp+40h] [rbp-50h] BYREF
  __int128 v29; // [rsp+48h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-38h]

  v25 = a3;
  v30 = __readfsqword(0x28u);
  ptr = nullptr;
  v29 = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 745) & 8) != 0 )
    {
      v18 = strlen(a2);
      v19 = v18;
      if ( v18 )
      {
        v21 = v18 + 1;
        ptr = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
        *(_QWORD *)&v29 = v21;
        memmove(ptr, a2, v19);
        *((_BYTE *)ptr + v19) = 0;
        v12 = *(__int64 (__fastcall **)(void *, __int64, __int64, __int64, _QWORD))(a1 + 264);
        v13 = ptr;
        if ( !v12 )
          goto LABEL_8;
      }
      else
      {
        v12 = *(__int64 (__fastcall **)(void *, __int64, __int64, __int64, _QWORD))(a1 + 264);
        v13 = nullptr;
        if ( !v12 )
          goto LABEL_8;
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_64EFC0(
                               (unsigned int)&ptr,
                               *(_QWORD *)(a1 + 248),
                               (_DWORD)a2,
                               (_DWORD)a6,
                               1,
                               *(_DWORD *)(a1 + 748),
                               a5) )
      {
        sub_6B1A00((int)sub_368890, (int)a6);
        sub_378D50();
      }
      v12 = *(__int64 (__fastcall **)(void *, __int64, __int64, __int64, _QWORD))(a1 + 264);
      v13 = ptr;
      if ( !v12 )
        goto LABEL_8;
    }
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(void *, __int64, __int64, __int64, _QWORD))(a1 + 264);
    if ( !v12 )
      return 0;
    v13 = nullptr;
  }
  v14 = v12(v13, a5, a9, a4, *(_QWORD *)(a1 + 280));
  v24 = v14;
  if ( v14 == 3 )
    goto LABEL_13;
  if ( v14 )
    goto LABEL_14;
  if ( !a2 )
    goto LABEL_13;
LABEL_8:
  named_type = get_named_type(*(_QWORD *)(a1 + 248), (_DWORD)v13, 0, (unsigned int)&v27, 0, 0, 0, (__int64)&v26, 0);
  v16 = *(_DWORD *)(a1 + 744);
  if ( !named_type || (v16 & 0x400) != 0 )
  {
LABEL_10:
    if ( (v16 & 0x20) == 0 )
    {
      if ( (unsigned int)sub_65B7A0(*(_QWORD *)(a1 + 248), (_DWORD)v13, 68, (_DWORD)a6, a10, a9, a11, (__int64)&v25, a4) )
      {
        if ( !under_debugger )
          interr(698);
        BUG();
      }
      sub_5F7920((_QWORD *)a1, 0, a2);
    }
    goto LABEL_13;
  }
  if ( sub_5695E0(*(_QWORD *)(a1 + 248), v27, a6) )
  {
    if ( v26 != 3 && v25 == 3 )
      goto LABEL_27;
    goto LABEL_13;
  }
  v20 = sub_5E7000(a1, v27, a6, 0.0, a8);
  if ( v20 )
  {
    if ( v20 != 2 )
    {
LABEL_27:
      v16 = *(_DWORD *)(a1 + 744);
      goto LABEL_10;
    }
LABEL_13:
    v24 = 0;
    goto LABEL_14;
  }
  set_error_string(0, a2);
  v24 = 52;
LABEL_14:
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  return v24;
}
