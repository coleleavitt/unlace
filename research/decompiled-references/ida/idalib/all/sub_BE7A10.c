__int64 __fastcall sub_BE7A10(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // r12d
  __int64 *v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rbp
  _QWORD *v20; // rbx
  _QWORD v21[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v21[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BC58E0 )
  {
    if ( !v4() )
      return 0;
    a1 = (_QWORD *)v21[0];
    v3 = *(_QWORD **)v21[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v21[0];
    v3 = *(_QWORD **)v21[0];
  }
  v6 = (__int64 (*)())v3[190];
  if ( v6 != sub_BC5D30 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v21[0];
    v3 = *(_QWORD **)v21[0];
  }
  v7 = (__int64 (*)())v3[191];
  if ( v7 != sub_BC5D40 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
      return 0;
    a1 = (_QWORD *)v21[0];
    v3 = *(_QWORD **)v21[0];
  }
  v8 = (__int64 (*)())v3[192];
  if ( v8 != sub_BC5D50 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v8)(a1, a2) )
    return 0;
  v9 = *(_QWORD *)(a2 + 120);
  if ( (v9 & 4) != 0 )
  {
    if ( !*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
    {
LABEL_16:
      v16 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *v16;
      v12 = v16[1];
      goto LABEL_11;
    }
    v10 = 0;
    while ( 1 )
    {
      v11 = v10++;
      sub_BC92E0(v21, *(_QWORD *)(*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8 * v11));
      v9 = *(_QWORD *)(a2 + 120);
      if ( (v9 & 4) == 0 )
        break;
      if ( *(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 16) <= v10 )
        goto LABEL_16;
    }
  }
  v12 = 0;
  v13 = 0;
LABEL_11:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v21[0] + 88LL))(v21[0], v13, v12) )
  {
    v14 = sub_BCF900(v21, a2 + 64);
    if ( (_BYTE)v14 )
    {
      v17 = sub_9C8850(a2);
      v19 = v18;
      v20 = (_QWORD *)v17;
      if ( (_QWORD *)v17 == v18 )
        return v14;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v21[0] + 32LL))(v21[0], *v20) )
      {
        if ( v19 == ++v20 )
          return v14;
      }
    }
  }
  return 0;
}
