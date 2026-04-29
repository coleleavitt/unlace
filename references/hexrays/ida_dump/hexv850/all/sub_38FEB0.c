__int64 __fastcall sub_38FEB0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi

  v7 = sub_214BD0(*(_QWORD *)(a1 + 24), a2, a3);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v7 == 2 )
    {
      sub_2B4840(v9);
      v13 = 0;
    }
    else
    {
      sub_214300(v9);
      sub_2B4840(*(_QWORD *)(a1 + 24));
      v13 = 1;
    }
    sub_38FA10(a1, v13, a4, v10, v11, v12);
    sub_3380C0(*(_QWORD *)(a1 + 128), 0x72u, a1, a2, a3);
    return 1;
  }
  return v8;
}
