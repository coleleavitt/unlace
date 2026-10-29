__int64 __fastcall sub_EE0640(__int64 *a1, __int64 a2)
{
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdi
  _BYTE *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v13[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v14; // [rsp+30h] [rbp-28h]

  v4 = a1 + 3;
  if ( sub_F3F530(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_971800(*a1, "/*implicit*/");
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *a1;
    v14 = 257;
    v12 = v5;
    sub_F50AF0(&v12, v6, v4, v13, 0);
    return sub_971800(*a1, "()");
  }
  else
  {
    sub_971800(*a1, "/*implicit*/(");
    v8 = *a1;
    v12 = *(_QWORD *)(a2 + 8);
    v14 = 257;
    sub_F50AF0(&v12, v8, v4, v13, 0);
    v9 = *a1;
    v10 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_2257CD0(v9, 41);
    }
    else
    {
      *(_QWORD *)(v9 + 32) = v10 + 1;
      *v10 = 41;
    }
    v11 = *a1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 48 )
      return sub_971800(v11, "{}");
    else
      return sub_2257BF0(v11, 0);
  }
}

