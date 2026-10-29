__int64 __fastcall sub_BADD40(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax

  v3 = *a1;
  v4 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v4 != (char *)sub_BA1BC0 )
  {
    if ( !v4() )
      return 0;
    v3 = *a1;
  }
  v5 = *(__int64 (**)())(v3 + 6832);
  if ( v5 != sub_BA35C0 )
  {
    if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
    {
      v3 = *a1;
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  v6 = *(_QWORD *)(a2 + 40);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v3 + 80))(a1, v6) )
    return 0;
  if ( (unsigned __int8)sub_F3F090(a2) )
  {
    v11 = sub_F3DED0(a2, v6, v8, v9, v10);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 128))(
            a1,
            *(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL) )
      return 0;
  }
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, *(_QWORD *)(a2 + 32));
}

