__int64 __fastcall sub_A0620(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = -1;
  v5 = 16 * ((qword_251F98 == 0) + ((qword_251F98 - qword_251F78) >> 3) - 1)
     + ((qword_251F70 - qword_251F60) >> 5)
     + ((qword_251F80 - qword_251F88) >> 5);
  if ( (unsigned int)v3 < (unsigned int)v5 )
  {
    v6 = &unk_251FB0;
    if ( (unsigned int)v3 < v5 )
    {
      v6 = (_QWORD *)sub_A0530((__int64)&unk_251FB0 - 144, v3);
      if ( !v6 )
        v6 = &unk_251FB0;
    }
    v4 = -1;
    if ( *((_DWORD *)v6 + 2) == 2 )
      v4 = v6[3];
  }
  *(_QWORD *)(v2 + 8) = v4;
  return 0;
}

