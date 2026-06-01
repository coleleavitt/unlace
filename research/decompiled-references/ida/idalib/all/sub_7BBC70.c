unsigned __int64 __fastcall sub_7BBC70(__int64 a1, __int8 *a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r12
  int i; // ebp
  __int64 v9; // rdi
  const char *v10; // rcx
  size_t v11; // r8
  __int64 v13; // rsi
  _BYTE *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v6 = a3[1];
  v20 = __readfsqword(0x28u);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  for ( i = 0; ; ++i )
  {
    v9 = *(_QWORD *)a1;
    v10 = (const char *)*a3;
    v19 = -1;
    v11 = (v6 == 0) + v6 - 1;
    if ( !v9
      || !(unsigned __int8)sub_7B2560(v9, a2, &v19, v10, v11, 0, *(void (__fastcall **)(__int8 *, __int64))(a1 + 2128)) )
    {
      break;
    }
    v13 = *a3;
    v14 = (_BYTE *)*a3;
    if ( v7 )
    {
      v15 = a3[1];
      v16 = v7 + 1;
      if ( v15 < v7 + 1 )
      {
        if ( a3[2] < v16 )
        {
          v17 = qvector_reserve(a3, v13, v7 + 1, 1);
          v16 = v7 + 1;
          *a3 = v17;
          v13 = v17;
          v15 = a3[1];
        }
        v18 = v16;
        memset((void *)(v13 + v15), 0, v16 - v15);
        v14 = (_BYTE *)*a3;
        a3[1] = v18;
      }
      else if ( v16 != v15 )
      {
        a3[1] = v16;
      }
      v14[v7] = 0;
    }
    else if ( v14 )
    {
      a3[1] = 0;
      qfree(v14);
      *a3 = 0;
      a3[2] = 0;
    }
    sub_35A910(a3);
    v6 = a3[1];
  }
  return v20 - __readfsqword(0x28u);
}
