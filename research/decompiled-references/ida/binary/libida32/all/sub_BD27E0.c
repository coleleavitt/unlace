__int64 __fastcall sub_BD27E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // r13
  _QWORD *v11; // rbp

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 216);
  if ( (char *)v3 != (char *)sub_BA1BA0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 1072);
  if ( v4 == sub_BA1C70 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
  {
    v5 = sub_B4CD50(a2);
    v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 96))(a1, v5);
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
  }
  return 0;
}

