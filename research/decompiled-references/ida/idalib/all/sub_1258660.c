__int64 __fastcall sub_1258660(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v13; // [rsp+8h] [rbp-60h]
  void *v14[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v15[72]; // [rsp+20h] [rbp-48h] BYREF

  v6 = std::use_facet<std::ctype<char>>(a2);
  v7 = v6;
  v8 = a4 - (_QWORD)a3;
  if ( v8 )
  {
    v13 = v6;
    v9 = (_BYTE *)operator new(v8);
    v10 = (__int64)&v9[v8];
    memcpy(v9, a3, v8);
    v7 = v13;
  }
  else
  {
    v10 = 0;
    v9 = nullptr;
  }
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v7 + 40LL))(v7, v9, v10);
  v11 = std::use_facet<std::collate<char>>(a2);
  v14[0] = v15;
  sub_124E3C0(v14, v9, v10);
  (*(void (__fastcall **)(__int64, __int64, void *, char *))(*(_QWORD *)v11 + 24LL))(
    a1,
    v11,
    v14[0],
    (char *)v14[0] + (unsigned __int64)v14[1]);
  if ( v14[0] != v15 )
    operator delete(v14[0]);
  if ( v9 )
    operator delete(v9);
  return a1;
}
