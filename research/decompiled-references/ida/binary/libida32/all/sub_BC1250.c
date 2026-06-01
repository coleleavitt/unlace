__int64 __fastcall sub_BC1250(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v13; // rax
  unsigned int *v14; // rbx
  _QWORD *v15; // r13
  unsigned int *v16; // r14
  _QWORD *v17; // r15
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rbp
  _QWORD *v21; // rbx
  _QWORD *v22; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_QWORD *)*a1;
  v22 = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v22;
    v3 = (_QWORD *)*v22;
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v22;
    v3 = (_QWORD *)*v22;
  }
  v6 = (__int64 (*)())v3[147];
  if ( v6 != sub_BA1D40 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v22;
    v3 = (_QWORD *)*v22;
  }
  v7 = (__int64 (*)())v3[153];
  if ( v7 == sub_BA1DA0 || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v7)(a1, a2) )
  {
    v8 = *(_QWORD *)(a2 + 96);
    if ( v8 && (v9 = (_QWORD *)(v8 + 16), v10 = v8 + 8LL * *(unsigned int *)(v8 + 8) + 16, v8 + 16 != v10) )
    {
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v22 + 824LL))(v22, *v9) )
      {
        if ( (_QWORD *)v10 == ++v9 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v13 = *(unsigned int *)(a2 + 112);
      v14 = *(unsigned int **)(a2 + 120);
      v15 = *(_QWORD **)(a2 + 104);
      v16 = &v14[v13];
      v17 = &v15[v13];
      if ( v14 == v16 || v15 == v17 )
      {
LABEL_16:
        v11 = sub_BABBC0(&v22, a2 + 48);
        if ( (_BYTE)v11 )
        {
          v18 = sub_9A4B10(a2);
          v20 = v19;
          v21 = (_QWORD *)v18;
          if ( (_QWORD *)v18 == v19 )
            return v11;
          while ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v22 + 32LL))(v22, *v21) )
          {
            if ( v20 == ++v21 )
              return v11;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v2 = *v14 | v2 & 0xFFFFFFFF00000000LL;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, unsigned __int64))(*v22 + 144LL))(v22, *v15, v2) )
            break;
          ++v15;
          if ( v16 == ++v14 || v17 == v15 )
            goto LABEL_16;
        }
      }
    }
  }
  return 0;
}

