__int64 __fastcall sub_225A7F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v19; // [rsp+10h] [rbp-68h]
  void *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  _BYTE v23[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *((_DWORD *)a1 + 4);
  v7 = 4 * v6 + 4;
  v8 = 4 * v6 + 6;
  v9 = sub_227D090(*a1, v7);
  sub_995540(v9, "{\n");
  v10 = sub_227D090(*a1, v8);
  sub_995540(v10, "'type': 'file',\n");
  v11 = sub_227D090(*a1, v8);
  v19 = sub_995540(v11, "'name': \"");
  sub_2275830(&v21, a2, a3, 1);
  v12 = sub_227BF10(v19, v21, v22);
  sub_995540(v12, "\",\n");
  if ( v21 != v23 )
    operator delete(v21);
  v13 = sub_227D090(*a1, v8);
  v14 = sub_995540(v13, "'external-contents': \"");
  sub_2275830(&v21, a4, a5, 1);
  v15 = sub_227BF10(v14, v21, v22);
  sub_995540(v15, "\"\n");
  if ( v21 != v23 )
    operator delete(v21);
  v16 = sub_227D090(*a1, v7);
  return sub_995540(v16, "}");
}
