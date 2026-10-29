__int64 __fastcall sub_A08C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  int *v6; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a2;
  v4 = -1;
  if ( (int)v2 >= 0 )
  {
    v5 = 16 * ((qword_251F98 == 0) + ((qword_251F98 - qword_251F78) >> 3) - 1)
       + ((qword_251F70 - qword_251F60) >> 5)
       + ((qword_251F80 - qword_251F88) >> 5);
    if ( (int)v2 < (int)v5 )
    {
      v6 = (int *)&unk_251FB0;
      if ( (unsigned int)v2 < v5 )
      {
        v6 = (int *)sub_A0530((__int64)&unk_251FB0 - 144, v2);
        if ( !v6 )
          v6 = (int *)&unk_251FB0;
      }
      v4 = -1;
      if ( v6[2] )
        v4 = v6[3];
    }
  }
  *(_QWORD *)(v3 + 8) = v4;
  return 0;
}

