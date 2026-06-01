__int64 __fastcall sub_412520(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbp
  void *v8; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  void *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  void *v15; // rax

  if ( (unsigned int)(a3 - 2) > 2 )
  {
    sub_458930(a2, 1, a4, "message ?errorInfo? ?errorCode?");
    return 1;
  }
  else
  {
    v6 = (_DWORD *)sub_496740();
    *v6 = 0;
    v7 = v6;
    v8 = (void *)sub_40FB00(21);
    *((_QWORD *)v7 + 1) = v8;
    qmemcpy(v8, "-code error -level 0", 20);
    *(_BYTE *)(*((_QWORD *)v7 + 1) + 20LL) = 0;
    v7[4] = 20;
    *((_QWORD *)v7 + 3) = 0;
    if ( a3 > 2 )
    {
      v10 = (_DWORD *)sub_496740();
      *v10 = 0;
      v11 = v10;
      v12 = (void *)sub_40FB00(11);
      *((_QWORD *)v11 + 1) = v12;
      qmemcpy(v12, "-errorinfo", 10);
      *(_BYTE *)(*((_QWORD *)v11 + 1) + 10LL) = 0;
      v11[4] = 10;
      *((_QWORD *)v11 + 3) = 0;
      sub_46FBF0(0, v7, v11);
      sub_46FBF0(0, v7, a4[2]);
    }
    if ( a3 > 3 )
    {
      v13 = (_DWORD *)sub_496740();
      *v13 = 0;
      v14 = v13;
      v15 = (void *)sub_40FB00(11);
      *((_QWORD *)v14 + 1) = v15;
      qmemcpy(v15, "-errorcode", 10);
      *(_BYTE *)(*((_QWORD *)v14 + 1) + 10LL) = 0;
      v14[4] = 10;
      *((_QWORD *)v14 + 3) = 0;
      sub_46FBF0(0, v7, v14);
      sub_46FBF0(0, v7, a4[3]);
    }
    sub_48AFD0(a2, a4[1]);
    return sub_48C760(a2, v7);
  }
}

