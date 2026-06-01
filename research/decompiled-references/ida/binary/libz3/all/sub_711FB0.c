void __fastcall sub_711FB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rax
  int v10; // esi
  char *v11; // rcx
  unsigned int v12; // edx
  char *v13; // rdi
  __int64 v14; // rdx
  char *v15; // r8
  char *i; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rcx
  unsigned int v20; // edx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 *j; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+Ch] [rbp-7Ch]
  int v30; // [rsp+10h] [rbp-78h]
  __int64 *v31; // [rsp+18h] [rbp-70h]
  _BYTE v32[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v33[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a3 + 8);
  if ( v3 )
  {
    v31 = &v3[*((unsigned int *)v3 - 1)];
    while ( v31 != v3 )
    {
      v6 = *v3;
      if ( *(_WORD *)(*v3 + 4) )
      {
        v7 = *v3;
      }
      else
      {
        v7 = *v3;
        v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
        if ( v8 && !*v8 && v8[1] == 8 && *(_DWORD *)(v6 + 24) == 1 )
          v7 = *(_QWORD *)(v6 + 32);
      }
      sub_1606360(v32, v6, *a1, 0, 0, 0);
      sub_160E8B0(a2, v32);
      sub_18572D0(v33);
      v9 = *((unsigned int *)a1 + 44);
      v10 = *(_DWORD *)(v7 + 12);
      v11 = (char *)a1[21];
      v12 = v9 - 1;
      v9 *= 16;
      v13 = &v11[v9];
      v14 = 16LL * (v10 & v12);
      v15 = &v11[v14];
      if ( v14 != v9 )
      {
        for ( i = &v11[v14]; v13 != i; i += 16 )
        {
          v17 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v17 + 12) == v10 && v17 == v7 )
            {
LABEL_23:
              v30 = *((_DWORD *)i + 2);
              v29 = *((_DWORD *)i + 3);
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v30 != -1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              if ( v29 != -1 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              v10 = *(_DWORD *)(v7 + 12);
              goto LABEL_13;
            }
          }
          else if ( !v17 )
          {
            goto LABEL_13;
          }
        }
      }
      for ( ; v15 != v11; v11 += 16 )
      {
        v27 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 > 1u )
        {
          if ( *(_DWORD *)(v27 + 12) == v10 && v27 == v7 )
          {
            i = v11;
            goto LABEL_23;
          }
        }
        else if ( !v27 )
        {
          break;
        }
      }
LABEL_13:
      v18 = *((unsigned int *)a1 + 12);
      v19 = (__int64 *)a1[5];
      v20 = v18 - 1;
      v18 *= 16;
      v21 = (__int64 *)((char *)v19 + v18);
      v22 = 16LL * (v10 & v20);
      v23 = &v19[(unsigned __int64)v22 / 8];
      if ( v22 != v18 )
      {
        for ( j = &v19[(unsigned __int64)v22 / 8]; v21 != j; j += 2 )
        {
          v25 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v25 + 12) == v10 && v25 == v7 )
            {
LABEL_29:
              v26 = j[1];
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1606360(v32, v26, *a1, 0, 0, 0);
              sub_160E8B0(a2, v32);
              sub_18572D0(v33);
              goto LABEL_20;
            }
          }
          else if ( !v25 )
          {
            goto LABEL_20;
          }
        }
      }
      for ( ; v23 != v19; v19 += 2 )
      {
        v28 = *v19;
        if ( (unsigned __int64)*v19 > 1 )
        {
          if ( *(_DWORD *)(v28 + 12) == v10 && v28 == v7 )
          {
            j = v19;
            goto LABEL_29;
          }
        }
        else if ( !v28 )
        {
          break;
        }
      }
LABEL_20:
      ++v3;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
}

