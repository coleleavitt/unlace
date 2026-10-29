__int64 __fastcall sub_8480B0(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 (*v10)(void); // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 i; // r14
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 v19; // [rsp+10h] [rbp-48h]

  v19 = a4;
  v7 = sub_15D1F10(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * a4));
  v8 = *a1;
  v9 = v7;
  v10 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 440LL);
  if ( (char *)v10 == (char *)sub_79F010 )
    v11 = v8 + 1592;
  else
    v11 = v10();
  v12 = *(_QWORD *)(v11 + 176);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 - 4);
    if ( a5 < v13 )
    {
      for ( i = 8LL * a5; ; i += 8 )
      {
        v15 = *(__int64 **)(v12 + i);
        if ( *((_DWORD *)v15 + 10) )
          break;
        v16 = *v15;
        if ( v9 == sub_15D1F10(*v15) && !(unsigned __int8)sub_15D26C0(a1[2], v16) )
        {
          *(_DWORD *)(*a2 + 4 * v19) = a5;
          return 1;
        }
        if ( v13 == ++a5 )
          return 0;
        v12 = *(_QWORD *)(v11 + 176);
      }
    }
  }
  return 0;
}

