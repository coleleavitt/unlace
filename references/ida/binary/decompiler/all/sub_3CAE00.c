__int64 __fastcall sub_3CAE00(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  unsigned __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 )
    return 0;
  v4 = 0;
  if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 )
  {
    v4 = qalloc_or_throw();
    *(_QWORD *)v4 = off_4E8410;
    *(_QWORD *)(v4 + 28) = 0x4900000000LL;
    v6 = a2 >> 16;
    *(_QWORD *)(v4 + 12) = 3;
    *(_QWORD *)(v4 + 20) = 0;
    *(_OWORD *)(v4 + 40) = -1;
    *(_OWORD *)(v4 + 56) = -1;
    if ( (int)(a2 >> 16) > 0 || (_WORD)a2 )
    {
      if ( a3 == 0x7FFFFFFF || (int)v6 >= *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL) )
      {
        sub_3CAD80(a1, (_DWORD *)v4, v3);
      }
      else if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 && (v6 & 0x80000000) == 0LL )
      {
        *(_DWORD *)(v4 + 8) = 0;
        *(_DWORD *)(v4 + 20) = v6;
        *(_DWORD *)(v4 + 24) = (unsigned __int16)a2;
        sub_3CA9E0(a1, v4, v3);
      }
    }
    else if ( (unsigned int)(*(_DWORD *)(v3 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v3 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(v4 + 8) = 0;
      sub_3CA9E0(a1, v4, v3);
    }
  }
  return v4;
}
