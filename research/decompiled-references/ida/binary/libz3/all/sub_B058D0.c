__int64 __fastcall sub_B058D0(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v4; // edx
  __int64 i; // rax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  int v11; // r9d
  _QWORD *v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // rdi

  v2 = *(_DWORD *)(a2 + 8);
  v4 = 0;
  for ( i = *(_QWORD *)(a2 + 40LL * (v2 & 1) + 16); i; i = *(_QWORD *)(a2 + 40LL * (v2 & 1) + 16) )
  {
    if ( v4 >= *(_DWORD *)(i - 4) )
      break;
    v6 = *(_DWORD *)(i + 40LL * v4);
    v7 = *(_QWORD *)(a1 + 64);
    v8 = v6 >> 1;
    if ( v7 )
    {
      if ( (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
      {
        v9 = *(_QWORD **)(48 * v8 + v7 + 8LL * (v6 & 1));
        if ( v9 )
        {
          v10 = (_QWORD *)*v9;
          if ( *v9 )
          {
            v11 = *((_DWORD *)v10 - 1);
            if ( v11 )
            {
              v12 = (_QWORD *)*v9;
              while ( a2 != *v12 )
              {
                if ( &v10[v11] == ++v12 )
                  goto LABEL_12;
              }
              v13 = (unsigned int)(v11 - 1);
              v14 = &v10[v13];
              *v12 = *v14;
              *v14 = a2;
              *((_DWORD *)v10 - 1) = v13;
              v2 = *(_DWORD *)(a2 + 8);
            }
          }
        }
      }
    }
LABEL_12:
    ++v4;
  }
  sub_182F200(*(_QWORD *)(a2 + 128), a2 + 136);
  *(_DWORD *)(a2 + 120) = 0;
  sub_182F200(*(_QWORD *)(a2 + 96), a2 + 104);
  v15 = *(_QWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 152) = 0;
  sub_182F200(v15, a2 + 168);
  return sub_182F200(*(_QWORD *)(a2 + 184), a2 + 192);
}

