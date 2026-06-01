unsigned __int64 __fastcall sub_2217FB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // edx
  __int64 *v8; // r13
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rbp
  __int64 *v13; // rbx
  unsigned __int64 result; // rax
  __int64 *v15; // r13
  __int64 *v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rbp
  __int64 *v22; // rbx
  unsigned __int64 v23; // r13
  __int64 *v24; // rax

  v5 = *(_DWORD *)(a2 + 100);
  v6 = *(_DWORD *)(a2 + 104);
  if ( v5 == v6 )
  {
    v18 = sub_22111F0((__int64)&qword_2D0A780);
    return sub_22179D0(*(_QWORD *)(a4 + 8), **(const char ***)a4, v18);
  }
  v8 = (__int64 *)(a2 + 88);
  v9 = *(_QWORD **)(a2 + 88);
  if ( v5 - v6 != 1 )
    goto LABEL_3;
  v17 = *(_QWORD *)sub_2214680(v8, v9);
  if ( v17 == sub_22102D0() )
  {
    v19 = sub_2214680((__int64 *)(a1 + 272), *(_QWORD **)(a1 + 272));
    v21 = v20;
    v22 = (__int64 *)v19;
    v23 = sub_2214700(a1 + 272);
    while ( (__int64 *)v23 != v22 )
    {
      sub_22179D0(*(_QWORD *)(a4 + 8), **(const char ***)a4, *v22);
      if ( v21 == v22 + 1 )
      {
        v22 = v21;
      }
      else if ( (unsigned __int64)v22[1] < 0xFFFFFFFFFFFFFFFELL )
      {
        ++v22;
      }
      else
      {
        v24 = v22 + 2;
        do
        {
          v22 = v24;
          if ( v21 == v24 )
            break;
          ++v24;
        }
        while ( (unsigned __int64)*v22 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
    v18 = sub_22102D0();
    return sub_22179D0(*(_QWORD *)(a4 + 8), **(const char ***)a4, v18);
  }
  v9 = *(_QWORD **)(a2 + 88);
LABEL_3:
  v10 = sub_2214680(v8, v9);
  v12 = v11;
  v13 = (__int64 *)v10;
  result = sub_2214700((__int64)v8);
  v15 = (__int64 *)result;
  while ( v15 != v13 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        sub_22179D0(*(_QWORD *)(a4 + 8), **(const char ***)a4, *v13);
        result = (unsigned __int64)(v13 + 1);
        if ( v12 != v13 + 1 )
          break;
        v13 = v12;
        if ( v15 == v12 )
          return result;
      }
      if ( (unsigned __int64)v13[1] >= 0xFFFFFFFFFFFFFFFELL )
        break;
      ++v13;
      if ( v15 == (__int64 *)result )
        return result;
    }
    v16 = v13 + 2;
    do
    {
      v13 = v16;
      if ( v12 == v16 )
        break;
      ++v16;
    }
    while ( (unsigned __int64)*v13 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
