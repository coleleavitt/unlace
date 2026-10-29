__int64 __fastcall sub_7CAC50(__int64 a1, __int64 a2)
{
  __int64 (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 432LL);
  if ( (char *)v3 == (char *)sub_79EFF0 )
    v4 = a1 + 2144;
  else
    v4 = v3();
  v5 = sub_180C100(v4, 24);
  *(_DWORD *)(v5 + 8) = 2;
  result = v5 + 8;
  *(_QWORD *)(result + 8) = a2;
  *(_QWORD *)(result - 8) = a1;
  return result;
}

