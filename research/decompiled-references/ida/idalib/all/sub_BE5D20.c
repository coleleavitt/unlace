__int64 __fastcall sub_BE5D20(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned int v15; // r12d
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 *v25; // rax
  __int64 *v26[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v26[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v26[0];
    v3 = (_QWORD *)*v26[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v26[0];
    v3 = (_QWORD *)*v26[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v26[0];
    v3 = (_QWORD *)*v26[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v26[0];
    v3 = (_QWORD *)*v26[0];
  }
  v8 = (__int64 (*)())v3[172];
  if ( v8 != sub_BC5C10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 0;
    a1 = v26[0];
    v3 = (_QWORD *)*v26[0];
  }
  v9 = (__int64 (*)())v3[173];
  if ( v9 != sub_BC5C20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v9)(a1, a2) )
      return 0;
    a1 = v26[0];
  }
  v10 = *(_QWORD *)(a2 + 120);
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10 && (v10 & 4) != 0 )
  {
    if ( !v11 )
      goto LABEL_18;
    v11 = *(_QWORD *)v11;
  }
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 )
    {
      v13 = v11 + 16;
      v14 = v11 + 32LL * (unsigned int)(v12 - 1) + 48;
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 112))(a1, v13) )
      {
        v13 += 32LL;
        a1 = v26[0];
        if ( v14 == v13 )
          goto LABEL_18;
      }
      return 0;
    }
  }
LABEL_18:
  if ( *((_BYTE *)a1 + 8) || (unsigned int)sub_B740B0(a2) == 2 )
  {
    v15 = sub_BC9500(v26, a2);
    if ( (_BYTE)v15 )
    {
      if ( !sub_B8E0B0(a2) || (v17 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v26, v17) )
      {
        v18 = sub_9C8850(a2);
        v20 = v19;
        v21 = (_QWORD *)v18;
        if ( (_QWORD *)v18 == v19 )
          return v15;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v26[0] + 32))(v26[0], *v21) )
        {
          if ( v20 == ++v21 )
            return v15;
        }
      }
    }
    return 0;
  }
  v22 = *(_QWORD *)(a2 + 56);
  v23 = 0;
  v24 = 0;
  if ( (v22 & 4) != 0 )
  {
    v25 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
    v24 = *v25;
    v23 = v25[1];
  }
  return (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64))(*v26[0] + 88))(v26[0], v24, v23);
}
