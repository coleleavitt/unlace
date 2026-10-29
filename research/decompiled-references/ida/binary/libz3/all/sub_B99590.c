__int64 __fastcall sub_B99590(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = v1[5];
    if ( v2 )
      sub_186B220((void *)(v2 - 8));
    return sub_186B220(v1);
  }
  return result;
}

