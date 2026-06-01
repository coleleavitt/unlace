_QWORD *__fastcall sub_13DF9D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !*(_BYTE *)(a2 + 48) || *(_DWORD *)(a2 + 24) == 1 )
  {
    sub_13DD4A0((__int64)a1, a2);
    return a1;
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 40);
    v3 = *(_QWORD *)(a2 + 32);
    *(_BYTE *)(a2 + 48) = 0;
    v4 = *(_QWORD *)(a2 + 24);
    a1[2] = v2;
    *a1 = v4;
    a1[1] = v3;
    return a1;
  }
}
