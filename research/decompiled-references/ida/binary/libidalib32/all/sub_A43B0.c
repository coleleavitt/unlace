__int64 __fastcall sub_A43B0(unsigned int a1)
{
  unsigned int v1; // ecx
  unsigned __int64 v2; // rdx
  unsigned int *v3; // rax

  v1 = -1;
  v2 = 16 * ((qword_250ED8 == 0) + ((qword_250ED8 - qword_250EB8) >> 3) - 1)
     + ((qword_250EB0 - qword_250EA0) >> 5)
     + ((qword_250EC0 - qword_250EC8) >> 5);
  if ( a1 < (unsigned int)v2 )
  {
    v3 = (unsigned int *)&unk_250EF0;
    if ( a1 < v2 )
    {
      v3 = (unsigned int *)sub_A0380((__int64)&unk_250EF0 - 144, a1);
      if ( !v3 )
        v3 = (unsigned int *)&unk_250EF0;
    }
    v1 = -1;
    if ( v3[2] == 2 )
      return v3[6];
  }
  return v1;
}

