__int64 __fastcall sub_441910(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a3 == 2 )
  {
    v5 = *(_QWORD *)(a4 + 8);
    if ( *(char ***)(v5 + 24) == &off_6554A0 || (result = sub_43FB20(a2, *(_QWORD *)(a4 + 8)), !(_DWORD)result) )
    {
      v6 = sub_458160(*(_QWORD *)(v5 + 32));
      sub_48B860(a2, v6, 3);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "dictionary");
    return 1;
  }
  return result;
}

