__int64 __fastcall sub_3E23E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // al
  char *v10; // rbp
  __int64 v11; // r12
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 73 && !(unsigned __int8)sub_282320(a2) )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = *(_QWORD **)(*(_QWORD *)(v3 + 64) + 24LL);
    if ( v4[2] == 1 )
    {
      v5 = *v4;
      if ( *(_DWORD *)(*v4 + 24LL) == 72 )
      {
        v6 = *(_QWORD *)(v5 + 40);
        if ( *(_DWORD *)(v6 + 8) == 57
          && *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL) == 64
          && !(unsigned __int8)sub_282250(*(_QWORD *)(a2 + 24), 18, 1)
          && !(unsigned __int8)sub_282250(v3, 17, 1) )
        {
          v7 = *(_QWORD *)(v5 + 40);
          s1 = 0;
          v8 = *(_QWORD *)(v7 + 24);
          v13 = 0;
          v9 = sub_1CFF30(&s1, *(_QWORD *)(v8 + 24), 0, 0);
          v10 = s1;
          if ( v9 && (_QWORD)v13 && (!strcmp(s1, "IntOver") || !strcmp(v10, "RangeCheck")) )
          {
            v11 = *(_QWORD *)(a2 + 24);
            if ( v11 )
            {
              if ( *(_QWORD *)(v11 + 64) )
              {
                sub_252570(*(_QWORD *)(v11 + 64));
                j__qfree();
              }
              if ( *(_QWORD *)(v11 + 72) )
              {
                sub_252570(*(_QWORD *)(v11 + 72));
                j__qfree();
              }
              sub_252B50(v11);
              clear_tinfo_t();
              j__qfree();
              v10 = s1;
            }
            *(_DWORD *)(a2 + 8) = 70;
          }
          if ( v10 )
          {
            *(_QWORD *)&v13 = 0;
            qfree();
          }
        }
      }
    }
  }
  return 0;
}
