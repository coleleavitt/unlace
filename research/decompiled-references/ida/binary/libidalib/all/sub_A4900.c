__int64 __fastcall sub_A4900(unsigned int a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax

  v1 = -1;
  v2 = 16 * ((qword_251F98 == 0) + ((qword_251F98 - qword_251F78) >> 3) - 1)
     + ((qword_251F70 - qword_251F60) >> 5)
     + ((qword_251F80 - qword_251F88) >> 5);
  if ( a1 < (unsigned int)v2 )
  {
    v3 = &unk_251FB0;
    if ( a1 < v2 )
    {
      v3 = (_QWORD *)sub_A0530((__int64)&unk_251FB0 - 144, a1);
      if ( !v3 )
        v3 = &unk_251FB0;
    }
    v1 = -1;
    if ( *((_DWORD *)v3 + 2) == 4 )
    {
      v4 = v3[3];
      if ( v4 )
        return *(_QWORD *)v4;
    }
  }
  return v1;
}

