__int64 __fastcall sub_5C66B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_QWORD *)(v2 + 40);
  if ( (v3 & 3) != 0 )
    return set_qerrno(66, a2);
  *(_QWORD *)(v2 + 40) = v3 | 2;
  return 0;
}

