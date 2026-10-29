unsigned __int64 __fastcall sub_FF80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = a2;
  v3 = sub_FA80(a1);
  if ( a2 )
  {
    v2 = sub_CD20((_QWORD *)a1, 221, a2);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 96);
    if ( v6 )
    {
      v7 = (unsigned int)(v6 - 1);
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v7);
      if ( *(_WORD *)(v8 + 16) == 221 )
      {
        *(_DWORD *)(a1 + 96) = v7;
        v2 = v8;
      }
    }
  }
  v4 = sub_CE00((_QWORD *)a1, 42, v2, v3);
  return sub_CD20((_QWORD *)a1, 221, v4);
}

