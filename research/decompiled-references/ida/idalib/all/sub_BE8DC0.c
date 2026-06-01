__int64 __fastcall sub_BE8DC0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  unsigned int v9; // ebp
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  _QWORD v18[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v18[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = (_QWORD *)v18[0];
    v3 = *(_QWORD **)v18[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))v5)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v18[0];
    v3 = *(_QWORD **)v18[0];
  }
  v6 = (__int64 (*)())v3[203];
  if ( v6 != sub_BC5E00 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))v6)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v18[0];
    v3 = *(_QWORD **)v18[0];
  }
  v7 = (__int64 (*)())v3[205];
  if ( v7 != sub_BC5E20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))v7)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v18[0];
    v3 = *(_QWORD **)v18[0];
  }
  v8 = (__int64 (*)())v3[208];
  if ( v8 == sub_BC5E50 || ((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))v8)(a1, a2) )
  {
    if ( (unsigned __int8)sub_BC92E0(v18, a2[7]) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18[0] + 56LL))(v18[0], a2[6]);
      if ( (_BYTE)v9 )
      {
        if ( !*(_BYTE *)(v18[0] + 8LL)
          || ((v10 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL), v10 != sub_6EE8E0)
            ? (v11 = v10((__int64)a2))
            : (v11 = a2[9]),
              a2 != (_QWORD *)v11
           || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v18[0] + 288LL))(v18[0], a2)) )
        {
          if ( !sub_B8E0B0((__int64)a2) || (v12 = sub_B8D340((__int64)a2)) == 0 || (unsigned __int8)sub_BCF900(v18, v12) )
          {
            v13 = sub_9C8850((__int64)a2);
            v15 = v14;
            v16 = (_QWORD *)v13;
            if ( (_QWORD *)v13 == v14 )
              return v9;
            while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18[0] + 32LL))(v18[0], *v16) )
            {
              if ( v15 == ++v16 )
                return v9;
            }
          }
        }
      }
    }
  }
  return 0;
}
