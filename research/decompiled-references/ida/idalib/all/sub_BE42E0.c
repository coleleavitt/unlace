__int64 __fastcall sub_BE42E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rax
  _QWORD *v6; // rdx
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r13
  _QWORD *v15; // rbp

  v3 = *a1;
  v4 = *(unsigned __int8 (**)(void))(*a1 + 216);
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    v3 = *a1;
  }
  v5 = *(__int64 (**)())(v3 + 1080);
  if ( v5 == sub_BC59C0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
  {
    v6 = *(_QWORD **)(a2 + 96);
    if ( !v6 || (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*a1 + 136))(a1, *v6, v6 + 1) )
    {
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
      v8 = v7 == sub_6EE8D0 ? *(_QWORD *)(a2 + 88) : v7(a2);
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 96))(a1, v8);
      if ( (_BYTE)v9 )
      {
        v10 = *(_QWORD *)(a2 + 104);
        v11 = v10 + 16LL * *(unsigned int *)(a2 + 112);
        if ( v10 == v11 )
        {
LABEL_12:
          v12 = sub_9C8850(a2);
          v14 = v13;
          v15 = (_QWORD *)v12;
          if ( (_QWORD *)v12 == v13 )
            return v9;
          while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, *v15) )
          {
            if ( v14 == ++v15 )
              return v9;
          }
        }
        else
        {
          while ( !*(_QWORD *)(v10 + 8) || (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 96))(a1) )
          {
            v10 += 16;
            if ( v11 == v10 )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return 0;
}
