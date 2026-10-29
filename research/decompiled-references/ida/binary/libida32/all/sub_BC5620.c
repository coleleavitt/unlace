__int64 __fastcall sub_BC5620(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  unsigned int v8; // ebp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  _QWORD v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v15[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = (_QWORD *)v15[0];
    v3 = *(_QWORD **)v15[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v15[0];
    v3 = *(_QWORD **)v15[0];
  }
  v6 = (__int64 (*)())v3[203];
  if ( v6 != sub_BA20C0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v15[0];
    v3 = *(_QWORD **)v15[0];
  }
  v7 = (__int64 (*)())v3[211];
  if ( v7 == sub_BA2140 || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
  {
    v8 = sub_BA55A0(v15, *(_QWORD *)(a2 + 56));
    if ( (_BYTE)v8 )
    {
      if ( !sub_B6A370(a2) || (v10 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v15, v10) )
      {
        v11 = sub_9A4B10(a2);
        v13 = v12;
        v14 = (_QWORD *)v11;
        if ( (_QWORD *)v11 == v12 )
          return v8;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15[0] + 32LL))(v15[0], *v14) )
        {
          if ( v13 == ++v14 )
            return v8;
        }
      }
    }
  }
  return 0;
}

