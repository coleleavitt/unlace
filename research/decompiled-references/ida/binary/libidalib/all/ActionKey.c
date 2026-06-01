__int64 __fastcall ActionKey(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  v4 = sub_19DCF0(a1);
  if ( v4 && (v5 = *(unsigned __int16 *)(v4 + 170), (_WORD)v5) )
    return sub_19C680(v5, a2, a3);
  else
    return qstrncpy();
}

