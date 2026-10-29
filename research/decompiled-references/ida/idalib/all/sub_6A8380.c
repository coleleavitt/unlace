__int64 __fastcall sub_6A8380(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, _QWORD, _QWORD),
        int *a3,
        int a4,
        unsigned int a5)
{
  int v6; // eax
  unsigned int v8; // eax
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  int v11; // eax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v6 = *a3;
  v18 = __readfsqword(0x28u);
  if ( v6 == 2 )
  {
    v13 = *((__int64 **)a3 + 1);
    v14 = *v13;
    v15 = *v13 + 24 * v13[1];
    if ( *v13 == v15 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v10 = sub_6A8380(a1, a2, v14, *(unsigned __int16 *)(v14 + 18), *(unsigned __int16 *)(v14 + 16) + a5);
        if ( v10 )
          break;
        v14 += 24;
        if ( v15 == v14 )
          return 0;
      }
    }
    return v10;
  }
  if ( v6 == 4 )
  {
    v8 = *((unsigned __int16 *)a3 + 4);
    v16 = 3;
    v17 = v8;
    v9 = a4 / 2;
    v10 = (**a2)(a2, &v16, a5, (unsigned int)(a4 / 2));
    if ( !v10 )
    {
      v11 = *((unsigned __int16 *)a3 + 5);
      LODWORD(v16) = 3;
      LODWORD(v17) = v11;
      v10 = (**a2)(a2, &v16, v9 + a5, v9);
    }
    cleanup_argloc(&v16);
    return v10;
  }
  return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, _QWORD, _QWORD), int *, _QWORD))**a2)(
           a2,
           a3,
           a5);
}
