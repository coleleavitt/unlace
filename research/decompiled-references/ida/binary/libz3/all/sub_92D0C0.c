__int64 __fastcall sub_92D0C0(_QWORD *a1, __int64 *a2)
{
  _DWORD **v2; // rax
  _DWORD *v3; // r15
  _DWORD *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rax
  char *v9; // rdx
  __int64 v10; // rax
  char *v11; // rdx
  __int64 result; // rax
  __int64 *v13; // rbp
  __int64 *i; // r12
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-70h]
  _DWORD **v17; // [rsp+10h] [rbp-68h]
  _DWORD **v18; // [rsp+18h] [rbp-60h]
  void *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 280LL))(a1, a2);
  v2 = (_DWORD **)a1[31];
  v17 = v2;
  if ( v2 )
  {
    v18 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 != v18 )
    {
      v16 = 0;
      do
      {
        v3 = *v17;
        if ( *v17 )
        {
          v4 = &v3[12 * *(v3 - 1)];
          if ( v4 != v3 )
          {
            v5 = 0;
            do
            {
              while ( (unsigned int)(*v3 + 1) <= 1 )
              {
                v3 += 12;
                v5 += 8;
                if ( v3 == v4 )
                  goto LABEL_12;
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              v6 = *a2;
              *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
              v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
              LODWORD(v6) = *((_DWORD *)v7 + 6);
              LOBYTE(v6) = v6 & 0x4F;
              *((_DWORD *)v7 + 6) = v6 | 0x20;
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v8 = *a2;
              *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
              v9 = (char *)a2 + *(_QWORD *)(v8 - 24);
              LODWORD(v8) = *((_DWORD *)v9 + 6);
              LOBYTE(v8) = v8 & 0x4F;
              *((_DWORD *)v9 + 6) = v8 | 0x20;
              sub_1850940(&v19, qword_1C7F2C0, v3 + 2);
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v19 != &v20 )
                operator delete(v19, v20 + 1);
              v3 += 12;
              std::__ostream_insert<char,std::char_traits<char>>();
              v10 = *a2;
              *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
              v11 = (char *)a2 + *(_QWORD *)(v10 - 24);
              LODWORD(v10) = *((_DWORD *)v11 + 6);
              LOBYTE(v10) = v10 & 0x4F;
              *((_DWORD *)v11 + 6) = v10 | 0x20;
              std::ostream::operator<<();
              std::__ostream_insert<char,std::char_traits<char>>();
              v5 += 8;
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            while ( v3 != v4 );
          }
        }
LABEL_12:
        ++v17;
        v16 += 8;
      }
      while ( v17 != v18 );
    }
  }
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v13 = (__int64 *)a1[28];
  if ( v13 )
  {
    result = *((unsigned int *)v13 - 1);
    for ( i = &v13[result];
          v13 != i;
          result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 392LL))(a1, a2, v15) )
    {
      v15 = *v13++;
    }
  }
  return result;
}

