__int64 __fastcall sub_20F060(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = -1;
  v5 = 16 * ((qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
     + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
     + ((qword_8CBB00 - qword_8CBB08) >> 5);
  if ( (unsigned int)v3 < (unsigned int)v5 )
  {
    v6 = &unk_8CBB30;
    if ( (unsigned int)v3 < v5 )
    {
      v6 = (_QWORD *)sub_20EF70((__int64)&unk_8CBB30 - 144, v3);
      if ( !v6 )
        v6 = &unk_8CBB30;
    }
    v4 = -1;
    if ( *((_DWORD *)v6 + 2) == 2 )
      v4 = v6[3];
  }
  *(_QWORD *)(v2 + 8) = v4;
  return 0;
}
