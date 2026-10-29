__int64 __fastcall sub_A4150(signed int a1, _DWORD *a2)
{
  _DWORD *v2; // r10
  unsigned int v3; // esi
  unsigned __int64 v4; // rdx
  _DWORD *v5; // rax
  int v6; // edx

  v2 = a2;
  v3 = 0;
  if ( a1 >= 0 )
  {
    v4 = 16 * ((qword_250ED8 == 0) + ((qword_250ED8 - qword_250EB8) >> 3) - 1)
       + ((qword_250EB0 - qword_250EA0) >> 5)
       + ((qword_250EC0 - qword_250EC8) >> 5);
    if ( a1 < (int)v4 )
    {
      v5 = &unk_250EF0;
      if ( a1 < v4 )
      {
        v5 = (_DWORD *)sub_A0380((__int64)&unk_250EF0 - 144, a1);
        if ( !v5 )
          v5 = &unk_250EF0;
      }
      v6 = v5[2];
      v3 = 0;
      if ( v6 )
      {
        if ( v2 )
        {
          *v2 = v6;
          v2[1] = v5[3];
          v2[2] = v5[4];
        }
        return 1;
      }
    }
  }
  return v3;
}

