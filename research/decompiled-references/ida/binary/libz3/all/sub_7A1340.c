void __fastcall sub_7A1340(__int64 a1, unsigned int a2, int *a3, int *a4)
{
  std::ostream *v4; // r13
  char v5; // r14
  int v8; // eax
  int v9; // eax
  __int64 v10; // r15
  bool v11; // zf
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-60h]
  int v14; // [rsp+10h] [rbp-58h] BYREF
  int v15; // [rsp+14h] [rbp-54h]
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]

  v4 = *(std::ostream **)(a1 + 8408);
  if ( v4 )
  {
    v5 = *(_BYTE *)(a1 + 3136);
    *(_BYTE *)(a1 + 3136) = 1;
    sub_7A0960(a1, v4, a2, a3);
    v8 = *a4;
    if ( *a4 == 1 )
    {
      v9 = a4[1];
      v14 = 1;
      v15 = v9;
      v16 = *((_QWORD *)a4 + 1);
      sub_7A0B20(&v17, a1, &v14);
      v10 = v17;
      v13 = v18;
      sub_7A1060(a1, v4, a2, a3, v17);
      if ( !v10 )
        goto LABEL_7;
      v11 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( !v11 )
        goto LABEL_7;
    }
    else
    {
      if ( v8 == 3 )
      {
LABEL_9:
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_7A0C30(a1, (__int64)v4, a2, a3);
        std::__ostream_insert<char,std::char_traits<char>>();
LABEL_7:
        std::ostream::flush(v4);
        *(_BYTE *)(a1 + 3136) = v5;
        return;
      }
      if ( v8 != 2 )
      {
        if ( v8 )
        {
          sub_1872CE0("");
          sub_1873130(114, 404);
        }
        goto LABEL_9;
      }
      v12 = a4[1];
      v14 = 2;
      v15 = v12;
      v16 = *((_QWORD *)a4 + 1);
      sub_7A0B20(&v17, a1, &v14);
      v10 = v17;
      v13 = v18;
      sub_7A1060(a1, v4, a2, a3, v17);
      if ( !v10 )
        goto LABEL_7;
      v11 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( !v11 )
        goto LABEL_7;
    }
    sub_15D7BC0(v13, v10);
    goto LABEL_7;
  }
}

