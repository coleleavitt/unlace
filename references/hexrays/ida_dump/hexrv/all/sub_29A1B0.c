__int64 __fastcall sub_29A1B0(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  sub_29A030(a1);
  *(_DWORD *)a1 = 2;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      *(_DWORD *)a1 = 1;
      sub_327290(v6, a2, a3 + 2);
      copy_tinfo_t(a1 + 8, v6);
      clear_tinfo_t(v6);
      sub_29A030((__int64)a3);
      operator delete(a3, 0x10u);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a3;
    }
  }
  else
  {
    v5 = (_QWORD *)operator new(0x10u);
    *v5 = 0;
    v5[1] = 0;
    *(_QWORD *)(a1 + 8) = v5;
  }
  return a1;
}
