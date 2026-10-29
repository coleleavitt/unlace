unsigned __int64 __fastcall sub_B76A50(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 *a6, int a7)
{
  unsigned __int64 v11; // rbx
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v14 = a1[2384];
  v11 = sub_B6C590(88, a1, a2, 0);
  v13 = *a6;
  sub_B4E870(v11, 0x1Cu, a2, *((_DWORD *)a6 + 2));
  *(_DWORD *)(v11 + 56) = a3;
  *(_QWORD *)(v11 + 64) = a4;
  *(_QWORD *)(v11 + 40) = v13;
  *(_QWORD *)(v11 + 48) = v14;
  *(_QWORD *)(v11 + 72) = a5;
  *(_QWORD *)v11 = &off_2BD93C0;
  *(_DWORD *)(v11 + 60) = a7;
  *(_QWORD *)(v11 + 80) = a6[2];
  return v11;
}

