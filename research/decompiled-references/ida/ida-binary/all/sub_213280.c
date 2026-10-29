__int64 __fastcall sub_213280(unsigned int a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax

  v1 = -1;
  v2 = 16 * ((qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
     + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
     + ((qword_8CBB00 - qword_8CBB08) >> 5);
  if ( a1 < (unsigned int)v2 )
  {
    v3 = &unk_8CBB30;
    if ( a1 < v2 )
    {
      v3 = (_QWORD *)sub_20EF70((__int64)&unk_8CBB30 - 144, a1);
      if ( !v3 )
        v3 = &unk_8CBB30;
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
