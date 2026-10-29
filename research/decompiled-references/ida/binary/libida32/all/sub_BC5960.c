__int64 __fastcall sub_BC5960(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  unsigned int v6; // r12d
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // r13
  _QWORD *v11; // rbx

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 216);
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 1160);
  if ( v4 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 1712);
  if ( v5 != sub_BA2170 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 88))(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  if ( (_BYTE)v6 )
  {
    v8 = sub_9A4B10(a2);
    v10 = v9;
    v11 = (_QWORD *)v8;
    if ( (_QWORD *)v8 == v9 )
      return v6;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *v11) )
    {
      if ( v10 == ++v11 )
        return v6;
    }
  }
  return 0;
}

