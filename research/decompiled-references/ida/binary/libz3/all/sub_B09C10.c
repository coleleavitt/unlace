__int64 __fastcall sub_B09C10(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  bool v12; // zf
  unsigned int v13; // r14d
  int *v14; // rdx
  int v15; // r12d
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp+0h] [rbp-78h]
  int v32; // [rsp+0h] [rbp-78h]
  void *v33; // [rsp+8h] [rbp-70h]
  void *v34; // [rsp+8h] [rbp-70h]
  void *v35; // [rsp+20h] [rbp-58h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h]
  _QWORD v37[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a3 + 8) == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 == -2 )
  {
    std::operator<<<std::char_traits<char>>();
  }
  else
  {
    if ( a4 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *(unsigned int *)(a3 + 8)));
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *(unsigned int *)(a3 + 8)) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      std::operator<<<std::char_traits<char>>();
      v8 = *(_DWORD *)(a3 + 8);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_QWORD *)(a1 + 16);
    v35 = nullptr;
    v36 = v9;
    sub_894B80(v10, v8, (__int64 *)&v35);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_160EBE0(a2, &v35);
    std::operator<<<std::char_traits<char>>();
    sub_B035B0((__int64)v35, v36);
  }
  v11 = *(_QWORD *)(a3 + 40LL * (*(_DWORD *)(a3 + 8) & 1) + 16);
  if ( v11 )
  {
    v12 = a4 == 0;
    v13 = 0;
    if ( v12 )
    {
      while ( v13 < *(_DWORD *)(v11 - 4) )
      {
        v14 = (int *)(v11 + 40LL * v13);
        v15 = *v14;
        if ( (v14[3] & 1) != 0 || v14[2] != 1 || (v14[7] & 1) != 0 || v14[6] != 1 )
        {
          sub_1850940(&v35, qword_1C7F2C0, v14 + 2);
          v16 = std::__ostream_insert<char,std::char_traits<char>>();
          if ( v35 != v37 )
          {
            v33 = (void *)v16;
            operator delete(v35, v37[0] + 1LL);
          }
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v15 != -2 )
          std::ostream::_M_insert<unsigned long>();
        if ( ++v13 == *(_DWORD *)(a3 + 120) )
          std::operator<<<std::char_traits<char>>();
        v11 = *(_QWORD *)(a3 + 40LL * (*(_DWORD *)(a3 + 8) & 1) + 16);
        if ( !v11 )
          break;
        if ( v13 < *(_DWORD *)(v11 - 4) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v11 = *(_QWORD *)(a3 + 40LL * (*(_DWORD *)(a3 + 8) & 1) + 16);
          if ( !v11 )
            break;
        }
      }
    }
    else
    {
      while ( v13 < *(_DWORD *)(v11 - 4) )
      {
        v24 = v11 + 40LL * v13;
        LODWORD(v33) = *(_DWORD *)v24;
        if ( (*(_BYTE *)(v24 + 12) & 1) != 0
          || *(_DWORD *)(v24 + 8) != 1
          || (*(_BYTE *)(v24 + 28) & 1) != 0
          || *(_DWORD *)(v24 + 24) != 1 )
        {
          sub_1850940(&v35, qword_1C7F2C0, v24 + 8);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v35 != v37 )
            operator delete(v35, v37[0] + 1LL);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (_DWORD)v33 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + (unsigned int)v33));
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + (unsigned int)v33) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v13;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v13 == *(_DWORD *)(a3 + 120) )
          std::operator<<<std::char_traits<char>>();
        v11 = *(_QWORD *)(a3 + 40LL * (*(_DWORD *)(a3 + 8) & 1) + 16);
        if ( !v11 )
          break;
        if ( v13 < *(_DWORD *)(v11 - 4) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v11 = *(_QWORD *)(a3 + 40LL * (*(_DWORD *)(a3 + 8) & 1) + 16);
          if ( !v11 )
            break;
        }
      }
    }
  }
  std::operator<<<std::char_traits<char>>();
  sub_1850940(&v35, qword_1C7F2C0, a3 + (-(*(_DWORD *)(a3 + 8) & 1) & 0x28) + 24);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v35 != v37 )
    operator delete(v35, v37[0] + 1LL);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_DWORD *)(a3 + 208) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
  }
  if ( *(int *)(a3 + 104) > 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_182F600(*(_QWORD *)(a3 + 96), a2, a3 + 104, v17, v18, v19, v31, v33);
    std::operator<<<std::char_traits<char>>();
  }
  if ( *(_DWORD *)(a3 + 120) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
  }
  if ( *(int *)(a3 + 136) > 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_182F600(*(_QWORD *)(a3 + 128), a2, a3 + 136, v20, v21, v22, v31, v33);
    std::operator<<<std::char_traits<char>>();
  }
  if ( *(_DWORD *)(a3 + 168) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_182F600(*(_QWORD *)(a3 + 184), a2, a3 + 192, v25, v26, v27, v31, v33);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_182F600(*(_QWORD *)(a3 + 160), a2, a3 + 168, v28, v29, v30, v32, v34);
    std::operator<<<std::char_traits<char>>();
  }
  if ( *(_DWORD *)(a3 + 208)
    || *(int *)(a3 + 104) > 0
    || *(_DWORD *)(a3 + 120)
    || *(int *)(a3 + 136) > 0
    || *(_DWORD *)(a3 + 168) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return a2;
}

