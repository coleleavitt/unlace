__int64 __fastcall sub_A44D0(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rax
  unsigned int *v4; // rax

  v1 = -1;
  v2 = 16 * ((qword_250ED8 == 0) + ((qword_250ED8 - qword_250EB8) >> 3) - 1)
     + ((qword_250EB0 - qword_250EA0) >> 5)
     + ((qword_250EC0 - qword_250EC8) >> 5);
  if ( a1 < (unsigned int)v2 )
  {
    v3 = &unk_250EF0;
    if ( a1 < v2 )
    {
      v3 = (_QWORD *)sub_A0380((__int64)&unk_250EF0 - 144, a1);
      if ( !v3 )
        v3 = &unk_250EF0;
    }
    v1 = -1;
    if ( *((_DWORD *)v3 + 2) == 4 )
    {
      v4 = (unsigned int *)v3[3];
      if ( v4 )
        return *v4;
    }
  }
  return v1;
}

