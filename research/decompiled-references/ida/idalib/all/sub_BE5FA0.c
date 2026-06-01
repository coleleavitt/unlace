__int64 __fastcall sub_BE5FA0(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rdx
  __int64 (*v9)(); // rdx
  __int64 (*v10)(); // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  unsigned int v16; // ebx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r12
  _QWORD *v22; // rbp
  __int64 *v23[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)*a1;
  v23[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = v23[0];
    v3 = (_QWORD *)*v23[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v23[0];
    v3 = (_QWORD *)*v23[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BC5B10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v23[0];
    v3 = (_QWORD *)*v23[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BC5BA0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v23[0];
    v3 = (_QWORD *)*v23[0];
  }
  v8 = (__int64 (*)())v3[172];
  if ( v8 != sub_BC5C10 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
      return 0;
    a1 = v23[0];
    v3 = (_QWORD *)*v23[0];
  }
  v9 = (__int64 (*)())v3[173];
  if ( v9 != sub_BC5C20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v9)(a1, a2) )
      return 0;
    a1 = v23[0];
    v3 = (_QWORD *)*v23[0];
  }
  v10 = (__int64 (*)())v3[174];
  if ( v10 != sub_BC5C30 && !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v10)(a1, a2)
    || !(unsigned __int8)sub_BC92E0(v23, *(_QWORD *)(a2 + 144)) )
  {
    return 0;
  }
  v11 = *(_QWORD *)(a2 + 120);
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v11 || (v11 & 4) == 0 )
    goto LABEL_13;
  if ( v12 )
  {
    v12 = *(_QWORD *)v12;
LABEL_13:
    v13 = *(_DWORD *)(v12 + 8);
    goto LABEL_14;
  }
  v13 = 0;
LABEL_14:
  if ( v13 )
  {
    v14 = v12 + 16;
    v15 = v12 + 32LL * (unsigned int)(v13 - 1) + 48;
    while ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*v23[0] + 112))(v23[0], v14) )
    {
      v14 += 32LL;
      if ( v15 == v14 )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    v16 = sub_BC9500(v23, a2);
    if ( (_BYTE)v16 )
    {
      if ( !sub_B8E0B0(a2) || (v18 = sub_B8D340(a2)) == 0 || (unsigned __int8)sub_BCF900(v23, v18) )
      {
        v19 = sub_9C8850(a2);
        v21 = v20;
        v22 = (_QWORD *)v19;
        if ( (_QWORD *)v19 == v20 )
          return v16;
        while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v23[0] + 32))(v23[0], *v22) )
        {
          if ( v21 == ++v22 )
            return v16;
        }
      }
    }
  }
  return 0;
}
