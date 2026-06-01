__int64 __fastcall sub_212ED0(signed int a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // esi
  unsigned __int64 v4; // rdx
  _DWORD *v5; // rax
  int v6; // edx

  v2 = a2;
  v3 = 0;
  if ( a1 >= 0 )
  {
    v4 = 16 * ((qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
       + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
       + ((qword_8CBB00 - qword_8CBB08) >> 5);
    if ( a1 < (int)v4 )
    {
      v5 = &unk_8CBB30;
      if ( a1 < v4 )
      {
        v5 = (_DWORD *)sub_20EF70((__int64)&unk_8CBB30 - 144, a1);
        if ( !v5 )
          v5 = &unk_8CBB30;
      }
      v6 = v5[2];
      v3 = 0;
      if ( v6 )
      {
        if ( v2 )
        {
          *(_DWORD *)v2 = v6;
          *(_DWORD *)(v2 + 4) = v5[3];
          *(_QWORD *)(v2 + 8) = *((_QWORD *)v5 + 2);
        }
        return 1;
      }
    }
  }
  return v3;
}
