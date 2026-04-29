__int64 __fastcall sub_225680(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, _QWORD *a5, char a6)
{
  unsigned int v6; // r12d
  int v8; // ebp
  __int64 v9; // r15
  unsigned int v10; // ebx
  char v11; // bl
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned int v15; // r13d
  int v16; // ebx
  unsigned int v17; // ebp
  int v20; // [rsp+24h] [rbp-64h]
  unsigned int v21; // [rsp+28h] [rbp-60h]
  __int64 v22[11]; // [rsp+30h] [rbp-58h] BYREF

  v22[3] = __readfsqword(0x28u);
  if ( a3 == a4 )
    return 1;
  v6 = a3;
  v8 = 0;
  v9 = sub_60B60(*(_QWORD **)(a1 + 8));
  sub_5DC10(a2, v6);
  while ( v8 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 96LL))(v9, v6) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 112LL))(v9, v6, (unsigned int)v8);
    if ( sub_5E3B0(a5, v10) == a6 && !sub_5E3B0(a2, v10) )
    {
      if ( a6 )
      {
        v22[0] = 0;
        v22[1] = 0;
        v11 = sub_696B0(v9, v22, v10, a4);
        qfree(v22[0]);
        if ( v11 )
          return 1;
      }
      else
      {
        if ( a4 == v10 )
          return 1;
        v13 = sub_60B60(*(_QWORD **)(a1 + 8));
        sub_5DC10(a2, v10);
        v21 = v6;
        v14 = v13;
        v15 = v10;
        v16 = 0;
        v20 = v8;
        while ( v16 < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, v15) )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 112LL))(
                  v14,
                  v15,
                  (unsigned int)v16);
          if ( !sub_5E3B0(a5, v17) && !sub_5E3B0(a2, v17) && (unsigned __int8)sub_225680(a1, a2, v17, a4, a5, 0) )
            return 1;
          ++v16;
        }
        v8 = v20;
        v6 = v21;
        a6 = 0;
      }
    }
    ++v8;
  }
  return 0;
}
