void __fastcall sub_AB6F70(_QWORD *a1, __int64 a2, __int64 a3, double a4, __int64 a5, int a6, int a7)
{
  _QWORD *v9; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r15
  unsigned int v19; // r13d
  __int64 v20; // rbx
  char v21; // al
  __int64 v22; // r13
  __int64 v23; // r13
  _DWORD *v24; // [rsp+8h] [rbp-A0h]
  char v25; // [rsp+1Ch] [rbp-8Ch] BYREF
  _QWORD v26[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v29[88]; // [rsp+50h] [rbp-58h] BYREF

  v9 = a1 + 10;
  v26[0] = 0;
  v26[1] = 0;
  v27[0] = 1;
  v27[1] = 0;
  if ( !(unsigned __int8)sub_1673B50((_DWORD)v9, a3, (unsigned int)v26, (unsigned int)&v25, a6, a7) )
  {
    if ( (unsigned int)sub_180B130(v9) > 4 )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v22 = sub_180B150(v9, a3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v28, a3, a1[3], 0, 0, 0);
        sub_160E8B0(v22, v28);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v29);
        sub_186A500(v29, "\n");
      }
      else
      {
        v23 = sub_180B150(v9, a3);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v28, a3, a1[3], 0, 0, 0);
        sub_160E8B0(v23, v28);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v29);
      }
    }
    goto LABEL_3;
  }
  if ( *(_WORD *)(a2 + 4) )
  {
LABEL_3:
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v26);
    sub_182CBA0(v16, v27);
    return;
  }
  v17 = sub_AB3F30((__int64)a1, (unsigned int *)a2, v12, v13, v14, v15);
  v18 = *(_DWORD **)(a1[63] + 8LL * (unsigned int)sub_AB6F20((__int64)a1, v17));
  if ( v18 )
  {
    v24 = &v18[*(v18 - 1)];
    if ( v24 != v18 )
    {
      v19 = 0;
      do
      {
        v20 = *(_QWORD *)(a1[2] + 8872LL) + 16LL * (*v18 >> 1);
        *(_BYTE *)(v20 + 11) |= 4u;
        v21 = sub_182E3A0(qword_1C7F2C0, v26, v19++);
        ++v18;
        *(_BYTE *)(v20 + 11) = (8 * (v21 & 1)) | *(_BYTE *)(v20 + 11) & 0xF7;
      }
      while ( v24 != v18 );
    }
  }
  sub_25A130((char *)v26);
}

