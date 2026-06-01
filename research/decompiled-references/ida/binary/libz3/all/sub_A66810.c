__int64 __fastcall sub_A66810(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  bool v4; // zf
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  void *v7; // r12
  _DWORD *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-A0h]
  unsigned int v14; // [rsp+14h] [rbp-94h]
  _DWORD *v15; // [rsp+18h] [rbp-90h]
  _DWORD *v16; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v19[11]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 32);
  v17[0] = 0;
  v18[0] = 1;
  v4 = *(_WORD *)(v2 + 4) == 0;
  v17[1] = 0;
  v18[1] = 0;
  v13 = v3;
  if ( v4 )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(v2 + 16) + 24LL);
    if ( v5 )
    {
      if ( *v5 == 5 && !v5[1] )
      {
        v10 = v13;
        v13 = v2;
        v2 = v10;
      }
    }
  }
  if ( (unsigned __int8)sub_1666AE0(a1 + 472, v13, v17, v19)
    && (*(_WORD *)(v2 + 4) || (v9 = *(_DWORD **)(*(_QWORD *)(v2 + 16) + 24LL)) == nullptr || *v9 != 5 || v9[1])
    && *(_DWORD *)(a2 + 24) == 2 )
  {
    v19[0] = 0;
    v19[1] = 0;
    v19[2] = 1;
    v19[3] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v19, (int *)v17);
    if ( LODWORD(v17[0]) )
    {
      v14 = sub_A53480(a1);
      v16 = nullptr;
      sub_9C34A0(&v16, (unsigned __int64 *)(a1 + 912), (unsigned int *)(a1 + 920));
      v15 = v16;
      sub_9D4E40(a1, v2, a2);
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 36LL) )
        sub_A66A90(a1);
      v11 = sub_A675A0(a1);
      sub_9F7580(a1, v14, (__int64)v19, v11);
      v12 = sub_9A0C70(a1, (unsigned int *)a2);
      v6 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v12);
      sub_9F72C0(a1, v14, (__int64)&qword_1C7F280, v6);
      sub_A54900(a1, v14);
      --*v15;
    }
    else
    {
      v6 = sub_A66480(a1, (unsigned int *)a2, (__int64)v19);
    }
    sub_25A130((char *)v19);
  }
  else
  {
    v6 = sub_A675A0(a1);
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v7, v18);
  return v6;
}

