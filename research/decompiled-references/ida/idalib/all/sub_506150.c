unsigned __int64 *__fastcall sub_506150(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax

  v1 = *(unsigned __int64 **)(a1 + 32);
  if ( v1 )
  {
    v2 = v1[1];
    v1 = nullptr;
    if ( (_DWORD)v2 )
    {
      v1 = sub_505DE0(a1, 0);
      sub_505BD0(*(_QWORD *)(a1 + 32) + 64LL, a1, v1);
    }
  }
  return v1;
}
