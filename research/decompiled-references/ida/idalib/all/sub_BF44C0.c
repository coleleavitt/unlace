__int64 __fastcall sub_BF44C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rax
  unsigned int *v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // rbx
  _QWORD *v11; // [rsp+8h] [rbp-30h] BYREF

  v2 = (_QWORD *)*a1;
  v11 = a1;
  v3 = (unsigned __int8 (*)(void))v2[27];
  if ( (char *)v3 != (char *)sub_BC58E0 )
  {
    if ( !v3() )
      return 0;
    a1 = v11;
    v2 = (_QWORD *)*v11;
  }
  v4 = (__int64 (*)())v2[145];
  if ( v4 != sub_BC5A60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v4)(a1, a2) )
      return 0;
    a1 = v11;
    v2 = (_QWORD *)*v11;
  }
  v5 = (__int64 (*)())v2[156];
  if ( v5 != sub_BC5B10 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v5)(a1, a2) )
    {
      a1 = v11;
      v2 = (_QWORD *)*v11;
      goto LABEL_4;
    }
    return 0;
  }
LABEL_4:
  v6 = (__int64 (*)())v2[158];
  if ( v6 != sub_BC5B30 && !((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v6)(a1, a2) )
    return 0;
  v7 = *(unsigned int **)(a2 + 56);
  v8 = (__int64)&v7[2 * *v7 + 4];
  v9 = (__int64 *)(v7 + 4);
  if ( (__int64 *)v8 != v9 )
  {
    while ( (unsigned __int8)sub_BEC930(&v11, *v9) )
    {
      if ( (__int64 *)v8 == ++v9 )
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v11 + 128LL))(v11, *(_QWORD *)(a2 + 48));
    }
    return 0;
  }
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v11 + 128LL))(v11, *(_QWORD *)(a2 + 48));
}
