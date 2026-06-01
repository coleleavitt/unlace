__int64 __fastcall sub_C90740(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _DWORD *v4; // rax
  unsigned int v5; // r13d
  void *v6; // rbp
  _DWORD *v8; // rax
  unsigned __int64 v9; // rax
  int v10[2]; // [rsp+0h] [rbp-78h] BYREF
  void *v11; // [rsp+8h] [rbp-70h]
  void *v12[2]; // [rsp+10h] [rbp-68h] BYREF
  int v13[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]

  v3 = *(_WORD *)(a2 + 4) == 0;
  *(_QWORD *)v10 = 0;
  v11 = nullptr;
  v12[0] = (char *)&dword_0 + 1;
  v12[1] = nullptr;
  if ( v3 && !*(_DWORD *)(a2 + 24) && ((v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v4 == -1) )
  {
    if ( (unsigned __int8)sub_1666AE0(a1 + 24, a3, v10, v13)
      && (*(_DWORD *)a2 >= *(_DWORD *)(a1 + 816)
       || (*(_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * (*(_DWORD *)a2 >> 5)) & (1 << *(_DWORD *)a2)) == 0) )
    {
      v8 = *(_DWORD **)(sub_15D1F10(a2) + 24);
      v5 = 0;
      v6 = qword_1C7F2C0;
      if ( v8 )
      {
        if ( *v8 == 5 && v8[1] == 1 )
        {
          v5 = (BYTE4(v12[0]) & 1) == 0;
          if ( (BYTE4(v12[0]) & 1) == 0 )
          {
            v5 = 0;
            if ( LODWORD(v12[0]) == 1 )
            {
              v5 = sub_182CFA0(qword_1C7F2C0, v10);
              v6 = qword_1C7F2C0;
              if ( (_BYTE)v5 )
              {
                v9 = sub_182D020(qword_1C7F2C0, v10);
                v6 = qword_1C7F2C0;
                if ( HIDWORD(v9) )
                {
                  v5 = 0;
                }
                else
                {
                  *(_QWORD *)v13 = 0;
                  v14 = 0;
                  v15 = 1;
                  v16 = 0;
                  sub_27B950((__int64)qword_1C7F2C0, (__int64)v13, v10);
                  sub_C8FE40(a1, a2, (__int64)v13);
                  sub_25A130((char *)v13);
                  v6 = qword_1C7F2C0;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v5 = 0;
      v6 = qword_1C7F2C0;
    }
  }
  else
  {
    v5 = 0;
    v6 = qword_1C7F2C0;
  }
  sub_182CBA0(v6, v10);
  sub_182CBA0(v6, v12);
  return v5;
}

