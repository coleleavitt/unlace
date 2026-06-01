__int64 __fastcall sub_168360(__int64 *a1, __int64 a2, __int64 a3, double a4, double a5)
{
  const char *v5; // rbp
  int v6; // eax
  int reg_value; // eax
  void *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rdx
  char *v13; // rsi
  unsigned int v14; // eax
  char *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  const char *v19; // [rsp+60h] [rbp-68h]

  if ( *(_QWORD *)(a3 + 8) <= 1u )
    return 0;
  v5 = *(const char **)a3;
  v6 = sub_9E360();
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v5 = v19;
      goto LABEL_5;
    }
  }
  else if ( (unsigned int)str2reg() != -1 )
  {
    goto LABEL_5;
  }
  v5 = nullptr;
LABEL_5:
  if ( (unsigned int)str2reg() == -1 )
    return 0;
  if ( sub_9E360() )
  {
    find_reg_value_info();
    v11 = (_QWORD *)*a1;
    if ( (unsigned __int64)a1[2] < 0x1E )
    {
      v18 = qvector_reserve();
      *a1 = v18;
      v11 = (_QWORD *)v18;
    }
    a1[1] = 30;
    v12 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v11 = *(_QWORD *)"(internal error: empty value)";
    *(_QWORD *)((char *)v11 + 21) = *(_QWORD *)"y value)";
    v13 = (char *)v11 - v12;
    v14 = 0;
    v15 = (char *)("(internal error: empty value)" - v13);
    v16 = ((_DWORD)v13 + 29) & 0xFFFFFFF8;
    do
    {
      v17 = v14;
      v14 += 8;
      *(_QWORD *)(v12 + v17) = *(_QWORD *)&v15[v17];
    }
    while ( v14 < v16 );
    *(_BYTE *)(*a1 + 29) = 0;
  }
  else
  {
    reg_value = find_reg_value();
    if ( reg_value )
    {
      if ( reg_value != 1 )
      {
        sub_8F740((__int64)"This processor does not support the register tracker!\n", a2);
        return 2;
      }
      sub_94440(a1);
      if ( get_ea_name() > 0 )
        sub_96630(a1);
      sub_8F740((__int64)"The register %s at %a has the value 0x%a\n", v5, 0.0, a5);
    }
    else
    {
      v9 = (void *)*a1;
      if ( (unsigned __int64)a1[2] <= 0xE )
      {
        v10 = qvector_reserve();
        *a1 = v10;
        v9 = (void *)v10;
      }
      a1[1] = 15;
      qmemcpy(v9, "No value found", 14);
      *(_BYTE *)(*a1 + 14) = 0;
    }
  }
  return 1;
}

