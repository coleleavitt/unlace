void __fastcall sub_97EFB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  int v9; // r13d
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD **v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // ebx
  int v18; // eax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 (*v21)(void); // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD **v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned __int8 v27; // al
  int v28; // r13d
  void *v29; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (_QWORD *)sub_A1A5A0(v3, 24);
  v5 = *v4;
  v6 = v4;
  if ( v5 != sub_2575D20(v3, 24, v7) )
  {
    v8 = *((_BYTE *)v6 + 20) & 7;
    if ( v8 != 2 )
    {
      if ( v8 > 2u )
      {
        v9 = 0;
        if ( v8 == 3 )
          v9 = 4;
      }
      else
      {
        v9 = v8 == 0;
      }
      goto LABEL_5;
    }
    v28 = (unsigned __int8)sub_25763D0(v6);
LABEL_32:
    v9 = v28 + 2;
    goto LABEL_5;
  }
  v9 = 0;
  v27 = *(_BYTE *)(v6[1] + 20LL) & 7;
  if ( v27 == 1 )
    goto LABEL_5;
  if ( v27 <= 1u )
  {
    v9 = 1;
    goto LABEL_5;
  }
  if ( v27 == 2 )
  {
    v28 = (unsigned __int8)sub_257E500(v6);
    goto LABEL_32;
  }
  if ( v27 == 3 )
    v9 = 4;
LABEL_5:
  v10 = *(_QWORD **)(a1 + 24);
  v11 = *(__int64 (**)(void))(*v10 + 104LL);
  if ( (char *)v11 == (char *)sub_8D7E60
    && (v12 = (_QWORD *)v10[3], v11 = *(__int64 (**)(void))(*v12 + 104LL), (char *)v11 == (char *)sub_8D7E60)
    && (v13 = (_QWORD *)v12[3], v11 = *(__int64 (**)(void))(*v13 + 104LL), (char *)v11 == (char *)sub_8D7E60)
    && (v14 = (_QWORD **)v13[3], v11 = (__int64 (*)(void))(*v14)[13], (char *)v11 == (char *)sub_8D7E60) )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 104LL))(v14[3]);
  }
  else
  {
    v15 = v11();
  }
  v16 = 4;
  if ( *(_BYTE *)(*(_QWORD *)(v15 + 17288) + 14LL) != 32 )
    v16 = 2;
  v17 = sub_A24BE0(v16);
  v18 = sub_A24BE0(12);
  v19 = *(_QWORD **)(a1 + 24);
  v20 = ((v18 + 7) & 0xFFFFFFF8) + ((v17 + 7) & 0xFFFFFFF8) * (5 - v9);
  v21 = *(__int64 (**)(void))(*v19 + 104LL);
  if ( (char *)v21 == (char *)sub_8D7E60
    && (v22 = (_QWORD *)v19[3], v21 = *(__int64 (**)(void))(*v22 + 104LL), (char *)v21 == (char *)sub_8D7E60)
    && (v23 = (_QWORD *)v22[3], v21 = *(__int64 (**)(void))(*v23 + 104LL), (char *)v21 == (char *)sub_8D7E60)
    && (v24 = (_QWORD **)v23[3], v21 = (__int64 (*)(void))(*v24)[13], (char *)v21 == (char *)sub_8D7E60) )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v24[3] + 104LL))(v24[3]);
  }
  else
  {
    v25 = v21();
  }
  v26 = 4;
  if ( *(_BYTE *)(*(_QWORD *)(v25 + 17288) + 14LL) != 32 )
    v26 = 2;
  sub_97E960((__int64)&v29, *(_QWORD *)(a1 + 184), v26, v20);
  sub_97E3E0(a1, (__int64)&v29, *(_QWORD *)(a2 + 8));
  if ( v30 > 0x40 )
  {
    if ( v29 )
      operator delete[](v29);
  }
}

