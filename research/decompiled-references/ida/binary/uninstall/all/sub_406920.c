__int64 __fastcall sub_406920(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  _BYTE v9[4]; // [rsp+Ch] [rbp-7Ch] BYREF
  char s[72]; // [rsp+10h] [rbp-78h] BYREF

  v4 = (_DWORD *)sub_496130(&qword_65A460, 4);
  v5 = (_QWORD *)sub_40FB00(16);
  sprintf(s, "Assoc Data Key #%d", *v4);
  v6 = *(_QWORD *)(a1 + 448);
  ++*v4;
  if ( !v6 )
  {
    v8 = sub_40FB00(88);
    *(_QWORD *)(a1 + 448) = v8;
    sub_457B90(v8, 0);
    v6 = *(_QWORD *)(a1 + 448);
  }
  result = (*(__int64 (__fastcall **)(__int64, char *, _BYTE *))(v6 + 72))(v6, s, v9);
  v5[1] = a3;
  *v5 = a2;
  *(_QWORD *)(result + 24) = v5;
  return result;
}

