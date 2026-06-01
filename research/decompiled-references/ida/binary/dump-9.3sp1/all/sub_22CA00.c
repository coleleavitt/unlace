__int64 __fastcall sub_22CA00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5, char a6)
{
  unsigned int v6; // r12d
  int v8; // ebp
  __int64 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // bl
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned int v17; // r13d
  int v18; // ebx
  unsigned int v19; // ebp
  unsigned int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+24h] [rbp-64h]
  unsigned int v23; // [rsp+28h] [rbp-60h]
  __int64 v24[11]; // [rsp+30h] [rbp-58h] BYREF

  v21 = a4;
  v24[3] = __readfsqword(0x28u);
  if ( (_DWORD)a3 == (_DWORD)a4 )
    return 1;
  v6 = a3;
  v8 = 0;
  v9 = sub_670E0(*(_QWORD **)(a1 + 8), (__int64)a2, a3, a4);
  sub_64190(a2, v6);
  while ( v8 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, v6) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 112LL))(v9, v6, (unsigned int)v8);
    if ( sub_64930(a5, v10) == a6 && !sub_64930(a2, v10) )
    {
      if ( a6 )
      {
        v24[0] = 0;
        v24[1] = 0;
        v13 = sub_6FC30(v9, v24, v10, v21);
        qfree(v24[0]);
        if ( v13 )
          return 1;
      }
      else
      {
        if ( v21 == v10 )
          return 1;
        v15 = sub_670E0(*(_QWORD **)(a1 + 8), v10, v11, v12);
        sub_64190(a2, v10);
        v23 = v6;
        v16 = v15;
        v17 = v10;
        v18 = 0;
        v22 = v8;
        while ( v18 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 96LL))(v16, v17) )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 112LL))(
                  v16,
                  v17,
                  (unsigned int)v18);
          if ( !sub_64930(a5, v19) && !sub_64930(a2, v19) && (unsigned __int8)sub_22CA00(a1, a2, v19, v21, a5, 0) )
            return 1;
          ++v18;
        }
        v8 = v22;
        v6 = v23;
        a6 = 0;
      }
    }
    ++v8;
  }
  return 0;
}
