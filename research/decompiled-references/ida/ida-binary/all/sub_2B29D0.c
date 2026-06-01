__int64 __fastcall sub_2B29D0(__int64 *a1, unsigned int a2, int a3, _DWORD *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 (*v8)(void); // rax
  __int64 v9; // rax
  unsigned __int64 *v10; // rax
  unsigned int v11; // edx
  int v12; // eax
  unsigned int (*v13)(void); // rax
  __int64 v14; // rsi
  unsigned __int64 v16; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  v6 = *a1;
  v17[1] = __readfsqword(0x28u);
  if ( a5 )
  {
    v8 = *(__int64 (**)(void))(v6 + 112);
    if ( (char *)v8 == (char *)interactive_graph_t__::vfunc_14 )
      v9 = *(unsigned int *)(*(_QWORD *)(a1[22] + 24LL * (int)a2) + 4LL * a3);
    else
      v9 = v8();
    v16 = 0;
    v17[0] = 0;
    sub_298C80((__int64)a1, (v9 << 32) | a2, &v16, v17);
    v10 = &v16;
    v11 = 1;
    if ( HIDWORD(v16) == a4[3] )
    {
LABEL_5:
      v12 = *(_DWORD *)v10;
      if ( *a4 <= v12 )
        LOBYTE(v11) = a4[2] < v12;
    }
  }
  else
  {
    v13 = *(unsigned int (**)(void))(v6 + 120);
    if ( (char *)v13 == (char *)interactive_graph_t__::vfunc_15 )
      v14 = *(unsigned int *)(*(_QWORD *)(a1[25] + 24LL * (int)a2) + 4LL * a3);
    else
      v14 = v13();
    v16 = 0;
    v17[0] = 0;
    sub_298C80((__int64)a1, (v5 << 32) | v14, &v16, v17);
    v10 = v17;
    v11 = 1;
    if ( HIDWORD(v17[0]) == a4[1] )
      goto LABEL_5;
  }
  return v11;
}
