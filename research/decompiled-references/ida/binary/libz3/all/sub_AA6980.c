__int64 __fastcall sub_AA6980(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF

  v3[0] = 0;
  sub_AA6780(a1, (__int64)v3);
  result = sub_1817AF0(v3, a2);
  if ( *((_QWORD *)&v3[0] + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v3[0] + 1) - 8LL));
  if ( *(_QWORD *)&v3[0] )
    return sub_186B220((void *)(*(_QWORD *)&v3[0] - 8LL));
  return result;
}

