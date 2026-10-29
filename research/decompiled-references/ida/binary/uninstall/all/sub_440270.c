__int64 __fastcall sub_440270(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbp
  int i; // r14d
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rdi
  int v23; // r9d
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  _DWORD v31[13]; // [rsp+24h] [rbp-34h] BYREF

  v6 = a2;
  if ( *(char ***)(a2 + 24) == &off_6554A0 || (v7 = sub_43FB20(a1, a2), v8 = 0, !v7) )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( (a5 & 1) != 0 )
      *(_QWORD *)(v9 + 112) = 0;
    for ( i = 0; i < a3; ++i )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 64))(v9, *(_QWORD *)(a4 + 8LL * i));
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 24);
        if ( *(char ***)(v13 + 24) != &off_6554A0 && (unsigned int)sub_43FB20(a1, v13) )
          return 0;
      }
      else
      {
        if ( (a5 & 2) != 0 )
          return 1;
        if ( (a5 & 5) != 5 )
        {
          if ( a1 )
          {
            sub_48B350(a1);
            v24 = *(_QWORD *)(a4 + 8LL * i);
            v25 = *(_QWORD *)(v24 + 8);
            if ( !v25 )
              LODWORD(v25) = sub_47B3B0(v24);
            sub_48B710(a1, (unsigned int)"key \"", v25, (unsigned int)"\" not known in dictionary", 0, v23);
            v26 = *(_QWORD *)(a4 + 8LL * i);
            v27 = *(_QWORD *)(v26 + 8);
            if ( !v27 )
              LODWORD(v27) = sub_47B3B0(v26);
            sub_48BC40(a1, (unsigned int)"TCL", (unsigned int)"LOOKUP", (unsigned int)"DICT", v27, 0);
          }
          return 0;
        }
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v9 + 72))(v9, *(_QWORD *)(a4 + 8LL * i), v31);
        v19 = v31[0];
        if ( v31[0] )
        {
          *(_QWORD *)(v18 + 48) = 0;
          if ( *(_QWORD *)(v9 + 88) )
          {
            *(_QWORD *)(v18 + 40) = *(_QWORD *)(v9 + 96);
            *(_QWORD *)(*(_QWORD *)(v9 + 96) + 48LL) = v18;
          }
          else
          {
            *(_QWORD *)(v18 + 40) = 0;
            *(_QWORD *)(v9 + 88) = v18;
          }
          *(_QWORD *)(v9 + 96) = v18;
        }
        v12 = v18;
        v20 = (_DWORD *)sub_4401E0(v9, v19);
        ++*v20;
        v13 = (__int64)v20;
        *(_QWORD *)(v12 + 24) = v20;
      }
      v14 = *(_QWORD *)(v13 + 32);
      if ( (a5 & 1) != 0 )
      {
        if ( *(int *)v13 > 1 )
        {
          v15 = *(_DWORD *)v13 - 1;
          *(_DWORD *)v13 = v15;
          if ( v15 <= 0 )
          {
            v21 = *(_QWORD *)(v13 + 24);
            if ( v21 && *(_QWORD *)(v21 + 8) )
            {
              sub_47B120(v13);
            }
            else
            {
              v22 = *(__int64 **)(v13 + 8);
              if ( v22 && v22 != off_656088 )
                Tcl_Free((__int64)v22);
              *(_DWORD *)(v13 + 16) = -1;
              sub_496830(v13);
            }
          }
          v16 = sub_47B2A0(v13);
          ++*(_DWORD *)v16;
          *(_QWORD *)(v12 + 24) = v16;
          v13 = v16;
          ++*(_DWORD *)(v9 + 104);
          v14 = *(_QWORD *)(v16 + 32);
        }
        *(_QWORD *)(v14 + 112) = v6;
      }
      v9 = v14;
      v6 = v13;
    }
    return v6;
  }
  return v8;
}

