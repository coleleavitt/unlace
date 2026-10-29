__int64 __fastcall sub_A0650(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  signed int v3; // esi
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdx
  _DWORD *v6; // rax

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = 3;
  if ( v3 >= 0 )
  {
    v5 = 16 * ((qword_250ED8 == 0) + ((qword_250ED8 - qword_250EB8) >> 3) - 1)
       + ((qword_250EB0 - qword_250EA0) >> 5)
       + ((qword_250EC0 - qword_250EC8) >> 5);
    if ( v3 < (int)v5 )
    {
      v6 = &unk_250EF0;
      if ( v3 < v5 )
      {
        v6 = (_DWORD *)sub_A0380((__int64)&unk_250EF0 - 144, v3);
        if ( !v6 )
          v6 = &unk_250EF0;
      }
      v4 = 3;
      if ( v6[2] )
      {
        v4 = 0;
        *(_DWORD *)(v2 + 8) = v6[4];
      }
    }
  }
  return v4;
}

