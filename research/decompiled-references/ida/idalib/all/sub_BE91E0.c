__int64 __fastcall sub_BE91E0(_QWORD *a1, __int64 a2)
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
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = (_QWORD *)v15[0];
    v3 = *(_QWORD **)v15[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v15[0];
    v3 = *(_QWORD **)v15[0];
  }
  v6 = (__int64 (*)())v3[203];
  if ( v6 != sub_BC5E00 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v15[0];
    v3 = *(_QWORD **)v15[0];
  }
  v7 = (__int64 (*)())v3[210];
  if ( v7 == sub_BC5E70 || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
  {
    if ( (unsigned __int8)sub_BC92E0(v15, *(_QWORD *)(a2 + 56)) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15[0] + 96LL))(v15[0], *(_QWORD *)(a2 + 64));
      if ( (_BYTE)v8 )
      {
        if ( !sub_B8E0B0(a2) || (v10 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v15, v10) )
        {
          v11 = sub_9C8850(a2);
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
  }
  return 0;
}
