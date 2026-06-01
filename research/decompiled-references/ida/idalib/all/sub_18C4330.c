__int64 __fastcall sub_18C4330(__int64 a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r15
  char v11; // dl
  _QWORD *v12; // rdi
  __int64 v13; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 20LL) & 4) == 0 )
    return 1;
  v7 = a6;
  sub_1DBADC0(a1);
  result = 1;
  if ( !v11 )
  {
    if ( (a6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v13 = sub_F57E80(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL));
      v12 = *(_QWORD **)(a1 + 248);
      if ( (!v13 || (*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v13 + 17) & 4) != 0)
        && (*(_BYTE *)(v12[290] + 20LL) & 8) != 0 )
      {
        return sub_C09540(v12, v7, a2, a3, a4, a5);
      }
    }
    else
    {
      v12 = *(_QWORD **)(a1 + 248);
    }
    v7 = v12[2384];
    return sub_C09540(v12, v7, a2, a3, a4, a5);
  }
  return result;
}
