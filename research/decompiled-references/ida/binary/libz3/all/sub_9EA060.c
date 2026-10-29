void __fastcall sub_9EA060(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  _DWORD *v8; // rax
  void *v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  char *v13; // r13
  char *v14; // r15
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r13d
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  void *v25; // [rsp+0h] [rbp-178h]
  void *v26; // [rsp+0h] [rbp-178h]
  int v27; // [rsp+8h] [rbp-170h]
  int *v28; // [rsp+8h] [rbp-170h]
  int v29; // [rsp+8h] [rbp-170h]
  int v30; // [rsp+10h] [rbp-168h] BYREF
  char v31; // [rsp+14h] [rbp-164h]
  int v32; // [rsp+18h] [rbp-160h]
  int v33; // [rsp+20h] [rbp-158h]
  char v34; // [rsp+24h] [rbp-154h]
  void *v35; // [rsp+28h] [rbp-150h]
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __int64 v37; // [rsp+38h] [rbp-140h]
  _QWORD v38[39]; // [rsp+40h] [rbp-138h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v5 )
  {
    v6 = *a3;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 - 4) )
    {
      v7 = *(_QWORD *)(v5 + 8 * v6);
      if ( v7 )
      {
        if ( (unsigned int)sub_B39350(v7, *(unsigned int *)(a1 + 8)) != -1 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          return;
        }
      }
    }
  }
  if ( *((_WORD *)a3 + 2) )
    goto LABEL_9;
  v8 = *(_DWORD **)(*((_QWORD *)a3 + 2) + 24LL);
  if ( !v8 || *v8 != 5 )
    goto LABEL_9;
  v10 = v8[1];
  if ( v10 == 6 )
  {
    std::operator<<<std::char_traits<char>>();
    if ( a3[6] )
    {
      sub_9EA060(a1, a2, *((_QWORD *)a3 + 4), v17, v18, v19, v25, v27, v30, v32, v33, v35);
      if ( a3[6] > 1 )
      {
        v20 = 1;
        do
        {
          std::operator<<<std::char_traits<char>>();
          v21 = *(_QWORD *)&a3[2 * v20++ + 8];
          sub_9EA060(a1, a2, v21, v22, v23, v24, v26, v29, v30, v32, v33, v35);
        }
        while ( v20 < a3[6] );
      }
    }
    std::operator<<<std::char_traits<char>>();
  }
  else
  {
    if ( v10 != 9 )
    {
LABEL_9:
      ptr = nullptr;
      v37 = 0;
      v38[0] = 1;
      v38[1] = 0;
      if ( (unsigned __int8)sub_1666AE0(a1 + 408, a3, &ptr, &v30) )
      {
        sub_2FCE40(a2, (__int64)&ptr);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &ptr);
      sub_182CBA0(v9, v38);
      return;
    }
    ptr = v38;
    v28 = &v30;
    v37 = 0x1000000000LL;
    sub_9E98E0((__int64)&v30, a1, (__int64)a3, (__int64)&ptr);
    if ( (v31 & 1) != 0 || v30 != 1 || (v34 & 1) != 0 || v33 != 1 )
    {
      sub_2FCE40(a2, (__int64)&v30);
      v13 = (char *)ptr;
      v14 = (char *)ptr + 16 * (unsigned int)v37;
      if ( v14 != ptr )
        goto LABEL_19;
    }
    else
    {
      v15 = (int)ptr;
      v13 = (char *)ptr;
      v14 = (char *)ptr + 16 * (unsigned int)v37;
      if ( v14 != ptr )
      {
        while ( 1 )
        {
          v16 = *((_DWORD *)v13 + 2);
          sub_9EA060(a1, a2, *(_QWORD *)v13, v15, v11, v12, v25, (int)v28, v30, v32, v33, v35);
          if ( v16 != 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
          }
          v13 += 16;
          if ( v14 == v13 )
            break;
LABEL_19:
          std::operator<<<std::char_traits<char>>();
        }
      }
    }
    sub_25A130((char *)v28);
    if ( ptr != v38 && ptr )
      sub_186B220(ptr);
  }
}

