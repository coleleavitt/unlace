__int64 __fastcall sub_418700(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 (*v3)(); // rax

  v2 = *(_QWORD *)(*(_QWORD *)(sub_426230(a1, a2) + 32) + 32LL);
  if ( v2 && ((v3 = *(__int64 (**)())(*(_QWORD *)v2 + 480LL), v3 == sub_178B60) || !(unsigned __int8)v3()) )
    return 7;
  else
    return 3;
}
