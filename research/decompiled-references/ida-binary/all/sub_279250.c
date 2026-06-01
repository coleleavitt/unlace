__int64 sub_279250()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax

  v0 = sub_277DF0();
  v1 = *(_QWORD *)(v0 + 112);
  if ( !v1 )
    return 7;
  v2 = *(_QWORD *)(v1 + 104);
  v3 = 7;
  if ( v2 && ((v4 = *(_QWORD *)(v0 + 120), v4 <= 0) || (v3 = 3, v4 - 1 >= v2)) )
    return 7;
  else
    return v3;
}
