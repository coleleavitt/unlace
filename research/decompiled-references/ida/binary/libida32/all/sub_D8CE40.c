__int64 __fastcall sub_D8CE40(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD **v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 24);
  v3 = *(__int64 (**)(void))(*v2 + 96LL);
  if ( (char *)v3 == (char *)sub_CCC500
    && (v4 = (_QWORD *)v2[3], v3 = *(__int64 (**)(void))(*v4 + 96LL), (char *)v3 == (char *)sub_CCC500)
    && (v5 = (_QWORD *)v4[3], v3 = *(__int64 (**)(void))(*v5 + 96LL), (char *)v3 == (char *)sub_CCC500)
    && (v6 = (_QWORD **)v5[3], v3 = (__int64 (*)(void))(*v6)[12], (char *)v3 == (char *)sub_CCC500) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6[3] + 96LL))(v6[3]);
  }
  else
  {
    v7 = v3();
  }
  v8 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 424) = *(_QWORD *)(v7 + 8);
  v9 = *(__int64 (**)(void))(*v8 + 96LL);
  if ( (char *)v9 == (char *)sub_CCC500
    && (v10 = (_QWORD *)v8[3], v9 = *(__int64 (**)(void))(*v10 + 96LL), (char *)v9 == (char *)sub_CCC500)
    && (v11 = (_QWORD *)v10[3], v9 = *(__int64 (**)(void))(*v11 + 96LL), (char *)v9 == (char *)sub_CCC500)
    && (v12 = (_QWORD **)v11[3], v9 = (__int64 (*)(void))(*v12)[12], (char *)v9 == (char *)sub_CCC500) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 96LL))(v12[3]);
    *(_QWORD *)(result + 8) = 0;
  }
  else
  {
    result = v9();
    *(_QWORD *)(result + 8) = 0;
  }
  return result;
}

