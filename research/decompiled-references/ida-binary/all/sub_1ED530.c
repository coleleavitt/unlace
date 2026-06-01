__int64 __fastcall sub_1ED530(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 result; // rax
  bool v12; // zf
  const char *v13; // rsi
  const char *v14; // rdi
  unsigned __int64 v15; // rax
  const char *v16; // rcx
  const char *v17; // rsi
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  const char *v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v9 = *a1;
  v22 = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64 *))(v9 + 840))(a1);
  if ( result == -1 )
  {
    v12 = *(_QWORD *)(a2 + 16) == 0;
    v20 = nullptr;
    v13 = &s1;
    v21 = 0;
    if ( !v12 )
      v13 = *(const char **)(a2 + 8);
    tag_remove(&v20, v13, 0);
    v14 = &s1;
    if ( (_QWORD)v21 )
      v14 = v20;
    v15 = qustrlen(v14);
    if ( v15 < (int)a4 )
      a4 = v15;
    v16 = &s1;
    v19 = -1;
    if ( (_QWORD)v21 )
      v16 = v20;
    v17 = (const char *)&v19;
    if ( (unsigned int)sub_1E73C0(0x4Au, &v19, (_QWORD)xmmword_8CC810, v16) == 1 )
    {
      result = v19;
    }
    else
    {
      v17 = (const char *)a2;
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, _QWORD))(*a1 + 832))(a1, a2, a3, a4, a5);
    }
    if ( v20 )
    {
      v18 = result;
      *(_QWORD *)&v21 = 0;
      qfree(v20, v17);
      return v18;
    }
  }
  return result;
}
