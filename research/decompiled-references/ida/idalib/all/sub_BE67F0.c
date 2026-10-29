__int64 __fastcall sub_BE67F0(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  unsigned int v10; // r12d
  _QWORD *v11; // rbx
  __int64 v12; // r13
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rbp
  _QWORD *v18; // rbx
  __int64 *v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)*a1;
  v19[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v19[0];
    v3 = (_QWORD *)*v19[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v19[0];
    v3 = (_QWORD *)*v19[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v19[0];
    v3 = (_QWORD *)*v19[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v19[0];
    v3 = (_QWORD *)*v19[0];
  }
  v8 = (__int64 (*)())v3[172];
  if ( v8 != sub_BC5C10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 0;
    a1 = v19[0];
    v3 = (_QWORD *)*v19[0];
  }
  v9 = (__int64 (*)())v3[178];
  if ( v9 == sub_BC5C70 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v9)(a1, a2) )
  {
    v10 = sub_BC9500(v19, a2);
    if ( (_BYTE)v10 )
    {
      v11 = (_QWORD *)(a2 + 104);
      v12 = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100);
      if ( a2 + 104 == v12 )
      {
LABEL_16:
        if ( !sub_B8E0B0(a2) || (v14 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v19, v14) )
        {
          v15 = sub_9C8850(a2);
          v17 = v16;
          v18 = (_QWORD *)v15;
          if ( (_QWORD *)v15 == v16 )
            return v10;
          while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v19[0] + 32))(v19[0], *v18) )
          {
            if ( v17 == ++v18 )
              return v10;
          }
        }
      }
      else
      {
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v19[0] + 56))(v19[0], *v11) )
        {
          if ( (_QWORD *)v12 == ++v11 )
            goto LABEL_16;
        }
      }
    }
  }
  return 0;
}
