__int64 __fastcall sub_7FD600(__int64 a1, __int64 a2, unsigned int *a3, double a4)
{
  unsigned int **v4; // r14
  unsigned int v8; // r13d
  unsigned int v9; // eax
  __int64 v10; // rsi
  bool v11; // zf
  _DWORD *v12; // rax
  void *v13; // rbp
  __int64 v15; // r13
  __int64 v16; // r13
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  bool v20; // dl
  _DWORD *v21; // rax
  __int64 v22; // rdi
  unsigned int *v23; // r15
  unsigned int v24; // r15d
  unsigned int v25; // eax
  __int64 v26; // [rsp+8h] [rbp-90h]
  bool v27; // [rsp+8h] [rbp-90h]
  char v28; // [rsp+1Fh] [rbp-79h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-68h] BYREF
  char v31[88]; // [rsp+40h] [rbp-58h] BYREF

  v4 = (unsigned int **)(a1 + 48);
  v8 = sub_7FD040(a1, a3);
  v9 = sub_7FD040(a1, (unsigned int *)a2);
  v10 = v9;
  sub_5F18A0((unsigned int **)(a1 + 48), v9, v8);
  if ( (unsigned int)sub_180B130(a1 + 48) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v15 = sub_180B150(v4, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v15, *(_QWORD *)(a1 + 8), a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v15, *(_QWORD *)(a1 + 8), a3, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v15, "\n");
    }
    else
    {
      v16 = sub_180B150(v4, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v16, *(_QWORD *)(a1 + 8), a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v16, *(_QWORD *)(a1 + 8), a3, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v11 = *(_WORD *)(a2 + 4) == 0;
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  if ( v11 )
  {
    v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v12 )
    {
      if ( *v12 == 5
        && v12[1] == 8
        && *(_DWORD *)(a2 + 24) == 1
        && (unsigned __int8)sub_1666AE0(a1 + 16, *(_QWORD *)(a2 + 32), v29, &v28) )
      {
        v26 = sub_15D1F10(a2);
        sub_3EBD70((__int64)v31, (__int64)v29);
        v20 = 0;
        v21 = *(_DWORD **)(v26 + 24);
        if ( v21 && *v21 == 5 )
          v20 = v21[1] == 1;
        v22 = *(_QWORD *)(a1 + 24);
        if ( !v22 )
        {
          v27 = v20;
          sub_16669E0(a1 + 16);
          v22 = *(_QWORD *)(a1 + 24);
          v20 = v27;
        }
        v23 = (unsigned int *)sub_166A700(v22, (unsigned int)v31, v20, v17, v18, v19);
        sub_25A130(v31);
        *(_QWORD *)v31 = v23;
        if ( v23 )
          ++v23[2];
        sub_7F6FA0((_QWORD *)(a1 + 40), v31);
        v24 = sub_7FD040(a1, v23);
        v25 = sub_7FD040(a1, (unsigned int *)a2);
        sub_5F18A0(v4, v25, v24);
      }
    }
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v13, v30);
  return sub_7FD3D0(a1, (__int64)a3);
}

