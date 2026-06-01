void __fastcall sub_B575A0(__int64 *a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // r8
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 *v17; // rax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-7Ch]
  _QWORD v23[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a1;
  v5 = *(__int64 **)(*a1 + 168);
  v6 = 2LL * *(unsigned int *)(*a1 + 176);
  v7 = &v5[v6];
  if ( v5 != &v5[v6] )
  {
    while ( (unsigned __int64)*v5 <= 1 )
    {
      v5 += 2;
      if ( v7 == v5 )
        return;
    }
    if ( v7 != v5 )
    {
      v8 = *v5;
      do
      {
        sub_B595A0(v23, v4, *(_QWORD *)(v8 + 32), *(_QWORD *)(v8 + 40));
        v9 = v23[0];
        v10 = v23[1];
        if ( v23[0] )
          ++*(_DWORD *)(v23[0] + 8LL);
        v11 = *(_QWORD **)(a2 + 8);
        if ( v11 )
        {
          v12 = *((_DWORD *)v11 - 1);
          if ( v12 == *((_DWORD *)v11 - 2) )
          {
            v18 = (3 * v12 + 1) >> 1;
            v19 = 8 * v18 + 8;
            if ( 8 * v12 + 8 >= (unsigned int)v19 || v12 >= v18 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v24, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v24);
              sub_233E40((__int64)v24);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v22 = (3 * v12 + 1) >> 1;
            v20 = (unsigned int *)sub_186B300(v11 - 1, v19);
            v11 = v20 + 2;
            *(_QWORD *)(a2 + 8) = v20 + 2;
            *v20 = v22;
            LODWORD(v20) = v20[1];
            v15 = &v11[(unsigned int)v20];
            v14 = (_DWORD)v20 + 1;
          }
          else
          {
            v13 = v12;
            v14 = v12 + 1;
            v15 = &v11[v13];
          }
        }
        else
        {
          v21 = (_QWORD *)sub_186B270(0x18u);
          v11 = v21 + 1;
          *v21 = 2;
          v14 = 1;
          *(_QWORD *)(a2 + 8) = v11;
          v15 = v11;
        }
        *v15 = v9;
        *((_DWORD *)v11 - 1) = v14;
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            sub_15D7BC0(v10, v9);
        }
        v17 = v5 + 2;
        if ( v7 == v5 + 2 )
          break;
        while ( 1 )
        {
          v8 = *v17;
          v5 = v17;
          if ( (unsigned __int64)*v17 > 1 )
            break;
          v17 += 2;
          if ( v7 == v17 )
            return;
        }
      }
      while ( v7 != v17 );
    }
  }
}

