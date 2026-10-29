unsigned __int64 __fastcall sub_1F950(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  _BYTE *v5; // rcx
  std::string *v6; // rax
  std::string *v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  std::string *v12; // rax
  _BYTE *v13; // rsi
  std::string *v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = (std::string *)__readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 32);
  v14[0] = nullptr;
  if ( !v4 )
    goto LABEL_8;
  v5 = *(_BYTE **)(a1 + 24);
  if ( *v5 != 83 )
  {
    if ( *v5 == 80 )
    {
      *(_QWORD *)(a1 + 24) = v5 + 1;
      *(_QWORD *)(a1 + 32) = v4 - 1;
      v10 = sub_1F6A0(a1, a3 + 1);
      if ( !v10 )
        return 0;
      goto LABEL_9;
    }
LABEL_8:
    v10 = 0;
LABEL_9:
    v11 = sub_1B300((_QWORD *)a1, 0, 0);
    if ( v11 )
    {
      v12 = (std::string *)sub_C400(*(_QWORD **)(a1 + 40), 32);
      v14[0] = v12;
      v7 = v12;
      if ( v12 )
      {
        sub_C080((__int64)v12, v11, *(_QWORD **)(a1 + 40));
        if ( v10 )
          sub_C080((__int64)v7, v10, *(_QWORD **)(a1 + 40));
        v13 = *(_BYTE **)(a1 + 8);
        if ( v13 == *(_BYTE **)(a1 + 16) )
        {
          sub_18710(a1, v13, v14);
          v7 = v14[0];
        }
        else
        {
          *(_QWORD *)v13 = v7;
          *(_QWORD *)(a1 + 8) += 8LL;
        }
        goto LABEL_5;
      }
    }
    return 0;
  }
  *(_QWORD *)(a1 + 24) = v5 + 1;
  *(_QWORD *)(a1 + 32) = v4 - 1;
  v6 = (std::string *)sub_1BFA0((_QWORD *)a1);
  v14[0] = v6;
  v7 = v6;
  if ( !v6 || *((_WORD *)v6 + 8) != 32 )
    return 0;
LABEL_5:
  v8 = sub_C400(*(_QWORD **)(a1 + 40), 42);
  sub_C080(v8, a2, *(_QWORD **)(a1 + 40));
  sub_C080(v8, (__int64)v7, *(_QWORD **)(a1 + 40));
  return v8;
}

