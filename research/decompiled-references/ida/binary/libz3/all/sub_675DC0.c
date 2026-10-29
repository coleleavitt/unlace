__int64 __fastcall sub_675DC0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  unsigned int v6; // r15d
  unsigned int v7; // eax
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  _QWORD *v15; // r15
  _BYTE v16[48]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v17[64]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v18[120]; // [rsp+80h] [rbp-78h] BYREF

  v4 = *(_QWORD **)(a1 + 56);
  if ( !v4 || (v5 = &v4[*((unsigned int *)v4 - 1)], v5 == v4) )
  {
    if ( !a3 )
      return 1;
  }
  else
  {
    v6 = 0;
    do
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 64LL))(*v4);
      if ( v6 < v7 )
        v6 = v7;
      ++v4;
    }
    while ( v5 != v4 );
    if ( v6 >= a3 )
    {
      if ( a3 < v6 )
      {
        sub_167E970(v16, a2, 0, 0, 0);
        sub_167F5F0(v17, v16);
        sub_167F5B0(v18, v16);
        while ( (unsigned __int8)sub_167E490(v17, v18) )
        {
          v12 = sub_167E460(v17);
          v13 = *(_QWORD **)(a1 + 56);
          if ( v13 )
          {
            v14 = &v13[*((unsigned int *)v13 - 1)];
            if ( v14 != v13 )
            {
              v15 = *(_QWORD **)(a1 + 56);
              do
              {
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v15 + 24LL))(*v15, v12, a3);
                ++v15;
              }
              while ( v14 != v15 );
            }
          }
          sub_167EA90(v17);
        }
        sub_6642B0((__int64)v18);
        sub_6642B0((__int64)v17);
        sub_677270(v16);
      }
      else
      {
        v8 = *(__int64 **)(a1 + 56);
        if ( v8 )
        {
          v9 = &v8[*((unsigned int *)v8 - 1)];
          while ( v9 != v8 )
          {
            v10 = *v8++;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, a2);
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

