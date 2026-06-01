__int64 __fastcall sub_A05B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // esi
  int v4; // ecx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  int *v7; // rax

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = -1;
  v5 = 16 * ((qword_250ED8 == 0) + ((qword_250ED8 - qword_250EB8) >> 3) - 1)
     + ((qword_250EB0 - qword_250EA0) >> 5)
     + ((qword_250EC0 - qword_250EC8) >> 5);
  if ( v3 < (unsigned int)v5 )
  {
    v6 = &unk_250EF0;
    if ( v3 < v5 )
    {
      v6 = (_QWORD *)sub_A0380((__int64)&unk_250EF0 - 144, v3);
      if ( !v6 )
        v6 = &unk_250EF0;
    }
    v4 = -1;
    if ( *((_DWORD *)v6 + 2) == 4 )
    {
      v7 = (int *)v6[3];
      if ( v7 )
        v4 = *v7;
    }
  }
  *(_DWORD *)(v2 + 8) = v4;
  return 0;
}

