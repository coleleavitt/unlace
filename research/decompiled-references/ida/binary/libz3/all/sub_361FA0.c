__int64 __fastcall sub_361FA0(__int64 a1)
{
  _QWORD *v2; // rbp
  void **p_ptr; // r15
  __int64 v4; // rdi
  __int64 v5; // rsi
  void *v6; // rdi
  int v7; // eax
  void *v8; // r13
  void (__fastcall ***v9)(_QWORD); // rbx
  void *v12; // r13
  char v13; // al
  int v14; // edx
  int v15; // eax
  __int64 v16; // r13
  char v17; // al
  unsigned int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-A0h]
  void *ptr; // [rsp+28h] [rbp-80h] BYREF
  int v21; // [rsp+30h] [rbp-78h] BYREF
  char v22; // [rsp+34h] [rbp-74h]
  int v23; // [rsp+40h] [rbp-68h] BYREF
  char v24; // [rsp+44h] [rbp-64h]
  void *v25[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+60h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 8);
  ptr = nullptr;
  p_ptr = &ptr;
  (*(void (__fastcall **)(_QWORD *, void **))(*v2 + 32LL))(v2, &ptr);
  if ( ptr )
  {
    v4 = v2[7];
    if ( v4 )
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 32LL))(v4, &ptr);
  }
  v5 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(int *))(*(_QWORD *)v5 + 32LL))(&v21);
  if ( (unsigned int)sub_180B130(&v21) > 2 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      sub_180B150(&v21, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(v25, qword_1C7F2C0, &v21);
      v16 = std::__ostream_insert<char,std::char_traits<char>>();
      if ( v25[0] != v26 )
        operator delete(v25[0], v26[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v16, ")\n");
    }
    else
    {
      sub_180B150(&v21, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(v25, qword_1C7F2C0, &v21);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v25[0] != v26 )
        operator delete(v25[0], v26[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v25[0] = nullptr;
  v25[1] = nullptr;
  v26[0] = 1;
  v26[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v26);
  v6 = qword_1C7F2C0;
  LODWORD(v26[0]) = 1;
  BYTE4(v26[0]) &= ~1u;
  v19 = a1 + 32;
  if ( (*(_BYTE *)(a1 + 52) & 1) == 0 && *(_DWORD *)(a1 + 48) == 1 )
  {
    if ( (*(_BYTE *)(a1 + 36) & 1) != 0 || (BYTE4(v25[0]) & 1) != 0 )
    {
      v18 = sub_182C7B0(qword_1C7F2C0, v19, v25);
      v6 = qword_1C7F2C0;
      LODWORD(p_ptr) = v18 >> 31;
    }
    else
    {
      LOBYTE(p_ptr) = *(_DWORD *)(a1 + 32) < SLODWORD(v25[0]);
    }
  }
  else
  {
    v7 = sub_1848D40(qword_1C7F2C0, v19, v25);
    v6 = qword_1C7F2C0;
    LODWORD(p_ptr) = v7;
  }
  sub_182CBA0(v6, v25);
  sub_182CBA0(v6, v26);
  if ( (_BYTE)p_ptr )
    goto LABEL_17;
  v8 = qword_1C7F2C0;
  if ( (v24 & 1) != 0 || v23 != 1 || (*(_BYTE *)(a1 + 52) & 1) != 0 || *(_DWORD *)(a1 + 48) != 1 )
  {
    LODWORD(p_ptr) = sub_1848D40(qword_1C7F2C0, &v21, v19);
    if ( (_BYTE)p_ptr )
      goto LABEL_17;
  }
  else
  {
    if ( (v22 & 1) == 0 )
    {
      v17 = *(_BYTE *)(a1 + 36);
      if ( (v17 & 1) == 0 )
      {
        if ( v21 >= *(_DWORD *)(a1 + 32) )
          goto LABEL_12;
        *(_DWORD *)(a1 + 32) = v21;
        *(_BYTE *)(a1 + 36) = v17 & 0xFE;
        goto LABEL_19;
      }
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, &v21, v19) < 0 )
    {
LABEL_17:
      v12 = qword_1C7F2C0;
      if ( (v22 & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v19, &v21);
        if ( (v24 & 1) == 0 )
          goto LABEL_19;
      }
      else
      {
        v13 = v24;
        v14 = v21;
        *(_BYTE *)(a1 + 36) &= ~1u;
        *(_DWORD *)(a1 + 32) = v14;
        if ( (v13 & 1) == 0 )
        {
LABEL_19:
          v15 = v23;
          *(_BYTE *)(a1 + 52) &= ~1u;
          *(_DWORD *)(a1 + 48) = v15;
LABEL_20:
          (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), &ptr);
          v8 = qword_1C7F2C0;
          LODWORD(p_ptr) = 1;
          goto LABEL_12;
        }
      }
      sub_182C690(v12, a1 + 48, &v23);
      goto LABEL_20;
    }
  }
  v8 = qword_1C7F2C0;
LABEL_12:
  sub_182CBA0(v8, &v21);
  sub_182CBA0(v8, &v23);
  v9 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 4))-- == 1 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  return (unsigned int)p_ptr;
}

