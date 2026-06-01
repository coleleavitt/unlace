__int64 __fastcall sub_D08320(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD **v15; // rdi
  __int64 v16; // rax

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_DWORD *)(a1 + 816) + 1;
  *(_DWORD *)(a1 + 816) = v3;
  if ( v3 != 1 )
    return 1;
  v5 = *(_QWORD **)(a1 + 408);
  v6 = *(__int64 (**)(void))(*v5 + 96LL);
  if ( (char *)v6 == (char *)sub_CF0240
    && (v7 = (_QWORD *)v5[3], v6 = *(__int64 (**)(void))(*v7 + 96LL), (char *)v6 == (char *)sub_CF0240)
    && (v8 = (_QWORD *)v7[3], v6 = *(__int64 (**)(void))(*v8 + 96LL), (char *)v6 == (char *)sub_CF0240)
    && (v9 = (_QWORD **)v8[3], v6 = (__int64 (*)(void))(*v9)[12], (char *)v6 == (char *)sub_CF0240) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 96LL))(v9[3]);
  }
  else
  {
    v10 = v6();
  }
  v11 = *(_QWORD **)(a1 + 408);
  *(_QWORD *)(a1 + 808) = *(_QWORD *)(v10 + 8);
  v12 = *(__int64 (**)(void))(*v11 + 96LL);
  if ( (char *)v12 == (char *)sub_CF0240
    && (v13 = (_QWORD *)v11[3], v12 = *(__int64 (**)(void))(*v13 + 96LL), (char *)v12 == (char *)sub_CF0240)
    && (v14 = (_QWORD *)v13[3], v12 = *(__int64 (**)(void))(*v14 + 96LL), (char *)v12 == (char *)sub_CF0240)
    && (v15 = (_QWORD **)v14[3], v12 = (__int64 (*)(void))(*v15)[12], (char *)v12 == (char *)sub_CF0240) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v15[3] + 96LL))(v15[3]);
  }
  else
  {
    v16 = v12();
  }
  *(_QWORD *)(v16 + 8) = 0;
  return 1;
}
