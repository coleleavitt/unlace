void __fastcall sub_7B6D70(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rdi

  if ( (*(_BYTE *)(a1 + 29) & 2) != 0 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 104) = a4;
    if ( a4 )
    {
      v15 = a2[274];
      v16 = (unsigned int)(8 * a4);
      a2[284] += v16;
      v17 = (_QWORD *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( a2[275] >= (unsigned __int64)v17 + v16 && v15 )
        a2[274] = (char *)v17 + v16;
      else
        v17 = (_QWORD *)sub_7B4EB0((__int64)(a2 + 274), v16, 3);
      *(_QWORD *)(a1 + 96) = v17;
      if ( 8 * a4 <= 8 )
      {
        if ( 8 * a4 == 8 )
          *v17 = *a3;
      }
      else
      {
        memmove(v17, a3, 8 * a4);
      }
    }
  }
  else
  {
    v12 = sub_AC22F0(*(_QWORD *)(a1 + 40), a5, a6, a3, a4, *(unsigned int *)(a1 + 108));
    v13 = 0;
    v14 = 0;
    *(_BYTE *)(a1 + 60) = (4 * (v12 & 3)) | *(_BYTE *)(a1 + 60) & 0xF3;
    if ( (v12 & 3) == 0 )
    {
      v13 = a5;
      v14 = a6;
    }
    sub_7B6B60(a1, a2, a3, a4, v13, v14);
  }
}

