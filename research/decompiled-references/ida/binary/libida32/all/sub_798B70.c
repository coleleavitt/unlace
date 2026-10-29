unsigned __int64 __fastcall sub_798B70(__int64 a1, __int8 *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r12
  int i; // ebp
  _BYTE *v9; // rdi
  size_t v10; // r8
  const char *v12; // rsi
  char *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-50h]
  int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 8);
  v19 = __readfsqword(0x28u);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  for ( i = 0; ; ++i )
  {
    v9 = *(_BYTE **)a1;
    v18 = -1;
    v10 = (v6 == 0) + v6 - 1;
    if ( !v9
      || !(unsigned __int8)sub_790A40(
                             v9,
                             a2,
                             &v18,
                             *(const char **)a3,
                             v10,
                             0,
                             *(void (__fastcall **)(__int8 *, _QWORD))(a1 + 2120)) )
    {
      break;
    }
    v12 = *(const char **)a3;
    v13 = *(char **)a3;
    if ( v7 )
    {
      v14 = *(_QWORD *)(a3 + 8);
      v15 = v7 + 1;
      if ( v14 < v7 + 1 )
      {
        if ( *(_QWORD *)(a3 + 16) < v15 )
        {
          v16 = qvector_reserve(a3, v12, v7 + 1, 1);
          v15 = v7 + 1;
          *(_QWORD *)a3 = v16;
          v12 = (const char *)v16;
          v14 = *(_QWORD *)(a3 + 8);
        }
        v17 = v15;
        memset((void *)&v12[v14], 0, v15 - v14);
        v13 = *(char **)a3;
        *(_QWORD *)(a3 + 8) = v17;
      }
      else if ( v15 != v14 )
      {
        *(_QWORD *)(a3 + 8) = v15;
      }
      v13[v7] = 0;
    }
    else if ( v13 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v13);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    sub_357520((__int64 *)a3);
    v6 = *(_QWORD *)(a3 + 8);
  }
  return v19 - __readfsqword(0x28u);
}

