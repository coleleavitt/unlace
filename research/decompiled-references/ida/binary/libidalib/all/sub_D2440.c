_BYTE *__fastcall sub_D2440(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6, _BYTE *a7)
{
  char v8; // bp
  bool v9; // cc
  _BYTE *v10; // rsi
  _BYTE *result; // rax
  char v12; // bp
  unsigned __int64 v13; // rax
  __int64 v14; // rax

  if ( a6 == -1
    && *a7
    && (v12 = *(_BYTE *)(tag_advance() - 1), v12 != **(_BYTE **)(get_ash() + 48))
    && (v13 = sub_D2300((__int64)&qword_252280), v13 == a3)
    && qword_245178 != -1 )
  {
    v8 = 27;
    if ( qword_245178 != v13 )
      v8 = (v13 < qword_245178) + 24;
  }
  else
  {
    v8 = 32;
  }
  v9 = (unsigned __int64)a2[2] <= 1;
  v10 = (_BYTE *)*a2;
  a2[1] = 0;
  if ( v9 )
  {
    v14 = qvector_reserve();
    *a2 = v14;
    v10 = (_BYTE *)v14;
  }
  a2[1] = 2;
  *v10 = v8;
  result = (_BYTE *)*a2;
  *(_BYTE *)(*a2 + 1) = 0;
  return result;
}

