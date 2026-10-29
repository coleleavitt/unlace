__int64 __fastcall sub_A0810(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = a2;
  v4 = 3;
  if ( (int)v2 >= 0 )
  {
    v5 = 16 * ((qword_251F98 == 0) + ((qword_251F98 - qword_251F78) >> 3) - 1)
       + ((qword_251F70 - qword_251F60) >> 5)
       + ((qword_251F80 - qword_251F88) >> 5);
    if ( (int)v2 < (int)v5 )
    {
      v6 = &unk_251FB0;
      if ( (unsigned int)v2 < v5 )
      {
        v6 = (_QWORD *)sub_A0530((__int64)&unk_251FB0 - 144, v2);
        if ( !v6 )
          v6 = &unk_251FB0;
      }
      v4 = 3;
      if ( *((_DWORD *)v6 + 2) )
      {
        v4 = 0;
        *(_QWORD *)(v3 + 8) = v6[2];
      }
    }
  }
  return v4;
}

