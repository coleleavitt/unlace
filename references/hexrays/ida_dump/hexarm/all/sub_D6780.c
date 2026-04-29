__int64 __fastcall sub_D6780(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 (*v4)(); // rax
  int v5; // ebp
  __int64 v6; // r12
  __int64 i; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  signed int v14; // ebp
  __int64 v15; // rdx
  unsigned __int64 *v16; // rdx
  __int64 v17; // rdi
  int v18; // ebp
  __int64 v19; // rax
  _QWORD *v20; // r13
  __int64 func; // rsi
  __int64 v22; // rdi
  __int64 (*v23)(); // r8
  __int64 v24; // rax
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 1240) )
  {
    if ( !under_debugger )
      sub_3835A0(50075);
    goto LABEL_33;
  }
  v3 = *(_QWORD *)(a1 + 1504);
  v4 = *(__int64 (**)())(*(_QWORD *)v3 + 248LL);
  if ( v4 != sub_CEAF0 && ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v4)(v3, 0, -1, -1) )
  {
    v11 = *(_QWORD **)(a1 + 1248);
    if ( a2 >= *(_DWORD *)(a1 + 64) )
      sub_CEB50();
    v12 = sub_3312A0(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * a2) + 56LL) + 24LL));
    v13 = v11[1];
    if ( v13 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = (unsigned __int64 *)(*v11 + 16 * v15);
        if ( v12 >= *v16 && v12 < v16[1] )
          break;
        v15 = ++v14;
        if ( v14 >= v13 )
          goto LABEL_27;
      }
      v17 = *(_QWORD *)(a1 + 1240);
      v25 = 0;
      v26 = 0;
      sub_6F730(v17, v14, &v25);
      sub_63B90(&v25, v14);
      v18 = sub_64360(&v25, 0);
      v6 = 0;
      while ( v18 != (_DWORD)v26 )
      {
        v20 = (_QWORD *)(*v11 + 16LL * v18);
        func = get_func(*v20);
        if ( func )
        {
          v22 = *(_QWORD *)(a1 + 1504);
          v23 = *(__int64 (**)())(*(_QWORD *)v22 + 248LL);
          v24 = 0;
          if ( v23 != sub_CEAF0 )
            v24 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v23)(v22, func, *v20, v20[1]);
          v19 = v24 - (*(int *)(a1 + 116) + *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 88));
          if ( v6 < v19 )
            v6 = v19;
        }
        v18 = sub_64360(&v25, v18 + 1);
      }
      qfree(v25);
      return ((_DWORD)v6 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1)
           & (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    }
LABEL_27:
    if ( !under_debugger )
      sub_3835A0(50076);
LABEL_33:
    BUG();
  }
  v5 = 0;
  v6 = 0;
  for ( i = 0; (unsigned __int64)v5 < *(_QWORD *)(a1 + 464); i = v5 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * i);
      if ( *(_DWORD *)v8 == 1 && *(_QWORD *)(a1 + 144) <= *(_QWORD *)(v8 + 8) )
        break;
      i = ++v5;
      if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 464) )
        return ((_DWORD)v6 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1)
             & (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    }
    v9 = (int)sub_1C3000(v8, *(unsigned int *)(v8 + 88)) - *(_QWORD *)(a1 + 144);
    if ( v6 < v9 )
      v6 = v9;
    ++v5;
  }
  return ((_DWORD)v6 + *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) - 1)
       & (unsigned int)-*(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
}
