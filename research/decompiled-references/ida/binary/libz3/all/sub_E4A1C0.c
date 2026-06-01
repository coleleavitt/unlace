__int64 __fastcall sub_E4A1C0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rdx
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  _QWORD **v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax

  *(_QWORD *)a1 = &off_1C5CE28;
  result = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD **)(a1 + 16);
    v3 = *(__int64 (**)(void))(*v2 + 72LL);
    if ( v3 == sub_E4A320 )
    {
      v4 = (_QWORD *)v2[13];
      v5 = *(__int64 (**)(void))(*v4 + 72LL);
      if ( v5 == v3 )
      {
        v6 = (_QWORD *)v4[13];
        v7 = *(__int64 (**)(void))(*v6 + 72LL);
        if ( v7 != v5 )
        {
          v9 = v7();
          return sub_18296D0(v9);
        }
        v8 = (_QWORD **)v6[13];
        v5 = (__int64 (*)(void))(*v8)[9];
        if ( v5 == v7 )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[13] + 72LL))(v8[13]);
          return sub_18296D0(v9);
        }
      }
      v11 = v5();
      return sub_18296D0(v11);
    }
    else
    {
      v10 = v3();
      return sub_18296D0(v10);
    }
  }
  return result;
}

