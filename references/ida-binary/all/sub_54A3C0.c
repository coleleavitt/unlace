__int64 __fastcall sub_54A3C0(_DWORD *a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rdx

  result = *(_QWORD *)a1;
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 440LL);
  if ( (char *)v2 != (char *)sub_549D60 )
    return v2();
  if ( a1[14] != -1 )
    return (*(__int64 (**)(void))(result + 480))();
  return result;
}
