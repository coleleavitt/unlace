int __fastcall sub_119840(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  unsigned __int8 *v4; // rbp
  unsigned __int8 *v5; // rbx
  int v6; // ecx
  int result; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  bool v11; // sf
  bool v12; // of
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx

  v2 = *a1;
  v3 = *a2;
  if ( (unsigned __int8)v2 < *a2 )
    return -1;
  v4 = a2;
  v5 = a1;
  while ( 2 )
  {
    if ( v3 >= (unsigned __int8)v2 )
    {
      v6 = *((_DWORD *)v4 + 1);
      if ( *((_DWORD *)v5 + 1) < v6 )
        return -1;
      if ( *((_DWORD *)v5 + 1) <= v6 )
      {
        switch ( v2 )
        {
          case 0LL:
            return 0;
          case 1LL:
          case 7LL:
            v13 = *((_DWORD *)v4 + 2);
            v12 = __OFSUB__(*((_DWORD *)v5 + 2), v13);
            v10 = *((_DWORD *)v5 + 2) == v13;
            v11 = *((_DWORD *)v5 + 2) - v13 < 0;
            if ( *((_DWORD *)v5 + 2) >= v13 )
              return !(v11 ^ v12 | v10);
            return -1;
          case 2LL:
            return -(*(_QWORD *)(*((_QWORD *)v5 + 1) + 16LL) != *(_QWORD *)(*((_QWORD *)v4 + 1) + 16LL));
          case 3LL:
          case 11LL:
            return strcmp(*((const char **)v5 + 1), *((const char **)v4 + 1));
          case 4LL:
            return sub_1197A0(*((_QWORD *)v5 + 1), *((_QWORD *)v4 + 1));
          case 5LL:
            v8 = *((_QWORD *)v5 + 1);
            v9 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 8LL);
            v12 = __OFSUB__(*(_QWORD *)(v8 + 8), v9);
            v10 = *(_QWORD *)(v8 + 8) == v9;
            v11 = *(_QWORD *)(v8 + 8) - v9 < 0;
            if ( *(_QWORD *)(v8 + 8) < v9 )
              return -1;
            return !(v11 ^ v12 | v10);
          case 6LL:
            v18 = *((_QWORD *)v5 + 1);
            v19 = *((_QWORD *)v4 + 1);
            if ( v18 < v19 )
              return -1;
            return v19 < v18;
          case 8LL:
            return sub_329E50(*((_QWORD *)v5 + 1), *((_QWORD *)v4 + 1));
          case 9LL:
            return sub_32B8D0(*((_QWORD *)v5 + 1), *((_QWORD *)v4 + 1));
          case 10LL:
            v14 = *((_QWORD *)v5 + 1);
            v15 = *((_QWORD *)v4 + 1);
            result = sub_119840(v14, v15);
            if ( !result )
            {
              v16 = *(_DWORD *)(v14 + 16);
              v17 = *(_DWORD *)(v15 + 16);
              if ( v16 == v17 )
                return *(_DWORD *)(v14 + 20) - *(_DWORD *)(v15 + 20);
              else
                return v16 - v17;
            }
            return result;
          case 12LL:
            return sub_119400(*((__int64 **)v5 + 1), *((__int64 **)v4 + 1));
          case 13LL:
            return ecmp(*((_QWORD *)v5 + 1), *((_QWORD *)v4 + 1));
          case 14LL:
            result = sub_119840(*((_QWORD *)v5 + 1) + 16LL, *((_QWORD *)v4 + 1) + 16LL);
            if ( result )
              return result;
            v5 = *((unsigned __int8 **)v5 + 1);
            v4 = *((unsigned __int8 **)v4 + 1);
            v2 = *v5;
            v3 = *v4;
            if ( (unsigned __int8)v2 < *v4 )
              return -1;
            continue;
          case 15LL:
            return sub_1BE710(*((_QWORD *)v5 + 1), *((_QWORD *)v4 + 1));
          default:
            if ( !under_debugger )
              sub_37E160(50282);
            BUG();
        }
      }
    }
    break;
  }
  return 1;
}
