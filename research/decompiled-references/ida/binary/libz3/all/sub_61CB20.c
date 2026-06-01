__int64 __fastcall sub_61CB20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rbx

  a1[7] = a2;
  v2 = sub_186B270(0xF8u);
  sub_63D370(v2, a1[4]);
  v3 = *(_QWORD *)(a2 + 24);
  a1[8] = v2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v5 = *(unsigned int *)(v3 - 4);
    a1[9] = v4;
    if ( (_DWORD)v5 )
    {
      v6 = 8 * v5;
      v7 = 0;
      while ( 1 )
      {
        sub_61BC00((__int64)a1, *(_QWORD *)(v3 + v7), v2);
        v7 += 8;
        if ( v6 == v7 )
          break;
        v3 = *(_QWORD *)(a2 + 24);
      }
    }
    return v2;
  }
  else
  {
    a1[9] = v4;
    return v2;
  }
}

