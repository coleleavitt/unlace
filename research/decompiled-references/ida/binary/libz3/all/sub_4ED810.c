__int64 __fastcall sub_4ED810(_QWORD *a1, _QWORD *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // r15d
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  void *v15; // rbp
  _QWORD *v18; // [rsp+8h] [rbp-70h]
  int v19; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF

  v9 = a1[15];
  v10 = a1[1];
  v20[0] = 0;
  v21[0] = 1;
  v11 = *(_DWORD *)(v9 + 4LL * a3);
  v20[1] = 0;
  v21[1] = 0;
  v12 = sub_4ECAE0(v10, a6, (__int64)v20, &v19, a5, a6);
  if ( (_BYTE)v12 )
  {
    v13 = (_QWORD *)sub_552E50(a1[4]);
    v14 = a2[1];
    if ( v14 )
    {
      v18 = v13;
      sub_553300(*a2, v14);
      v13 = v18;
    }
    a2[1] = v13;
    sub_182A110(a1[4], *v13, v20, (unsigned int)(v11 + a4), (unsigned int)(v11 + a5));
  }
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  sub_182CBA0(v15, v21);
  return v12;
}

