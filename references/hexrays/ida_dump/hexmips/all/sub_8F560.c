__int64 __fastcall sub_8F560(__int64 a1, int *a2)
{
  int v2; // eax
  int *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbp
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = *a2;
  if ( *a2 != 12 )
  {
    if ( v2 == 14 )
    {
      v5 = sub_1186A0(a2, v7);
      v6 = v5;
      if ( !v5 || sub_325C90(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 0) != 2 )
        return 0;
      sub_120F80(v6);
    }
    else
    {
      if ( v2 != 13 )
        return 0;
      v4 = a2 + 12;
      if ( (unsigned __int8)sub_11BB80(a2 + 12, v7, 1) )
        sub_11C900(v4, a1, v7[0]);
      else
        sub_11C5E0(v4, a1, 5, *((_QWORD *)a2 + 3), (unsigned int)a2[13]);
    }
    *a2 = 12;
  }
  return 1;
}
