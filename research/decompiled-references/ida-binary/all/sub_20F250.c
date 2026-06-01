__int64 __fastcall sub_20F250(__int64 a1, __int64 a2)
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
    v5 = 16 * ((qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
       + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
       + ((qword_8CBB00 - qword_8CBB08) >> 5);
    if ( (int)v2 < (int)v5 )
    {
      v6 = &unk_8CBB30;
      if ( (unsigned int)v2 < v5 )
      {
        v6 = (_QWORD *)sub_20EF70((__int64)&unk_8CBB30 - 144, v2);
        if ( !v6 )
          v6 = &unk_8CBB30;
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
