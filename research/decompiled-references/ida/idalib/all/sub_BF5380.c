__int64 __fastcall sub_BF5380(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
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
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // r12
  _QWORD *v21; // rbp
  _QWORD v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (_QWORD *)*a1;
  v22[0] = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v5 = (__int64 (*)())v2[190];
  if ( v5 != sub_BC5D30 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v6 = (__int64 (*)())v2[191];
  if ( v6 != sub_BC5D40 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v7 = (__int64 (*)())v2[192];
  if ( v7 != sub_BC5D50 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v8 = (__int64 (*)())v2[193];
  if ( v8 != sub_BC5D60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v8)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v9 = (__int64 (*)())v2[194];
  if ( v9 != sub_BC5D70 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v9)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v22[0];
    v2 = *(_QWORD **)v22[0];
  }
  v10 = (__int64 (*)())v2[195];
  if ( v10 != sub_BC5D80 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v10)(a1, a2)
    || !(unsigned __int8)sub_BC92E0(v22, *(_QWORD *)(a2 + 184)) )
  {
    return 0;
  }
  v11 = *(_QWORD *)(a2 + 160);
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v11 || (v11 & 4) == 0 )
    goto LABEL_14;
  if ( v12 )
  {
    v12 = *(_QWORD *)v12;
LABEL_14:
    v13 = *(_DWORD *)(v12 + 8);
    goto LABEL_15;
  }
  v13 = 0;
LABEL_15:
  if ( v13 )
  {
    v14 = v12 + 16;
    v15 = v12 + 32LL * (unsigned int)(v13 - 1) + 48;
    while ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)v22[0] + 112LL))(v22[0], v14) )
    {
      v14 += 32LL;
      if ( v15 == v14 )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    if ( (unsigned __int8)sub_BF4E20(v22, a2) )
    {
      v16 = sub_BCF900(v22, a2 + 64);
      if ( (_BYTE)v16 )
      {
        v18 = sub_9C8850(a2);
        v20 = v19;
        v21 = (_QWORD *)v18;
        if ( (_QWORD *)v18 == v19 )
          return v16;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22[0] + 32LL))(v22[0], *v21) )
        {
          if ( v20 == ++v21 )
            return v16;
        }
      }
    }
  }
  return 0;
}
