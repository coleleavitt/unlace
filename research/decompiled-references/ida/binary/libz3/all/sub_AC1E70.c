void __fastcall sub_AC1E70(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // r15d
  unsigned int *v15; // rax
  unsigned int *v16; // rbp
  unsigned int *v17; // r15
  unsigned int v18; // edx
  _QWORD *v19; // [rsp+8h] [rbp-40h]

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v19 = (_QWORD *)sub_AB3F30(a1, a2, v2, v3, v4, v5);
  v6 = sub_B39350(v19, *(unsigned int *)(a1 + 8));
  v7 = a2[6];
  v8 = v6;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL * v6);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  if ( v7 )
  {
    v10 = v7 - 1;
    v11 = &v19[v10 + 14];
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( *(_BYTE *)(*(_QWORD *)(v12 + 112) + 429LL) )
        v13 = *v11;
      else
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8656) + 8LL * **(unsigned int **)(*v19 + 8LL * (unsigned int)v10 + 32));
      v14 = sub_B39350(v13, *(unsigned int *)(a1 + 8));
      if ( v14 == -1 )
      {
        v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v13);
        sub_AB6BC0((__int64 *)a1, v14);
      }
      v15 = *(unsigned int **)(*(_QWORD *)(a1 + 504) + 8LL * v14);
      if ( v15 )
      {
        v16 = &v15[*(v15 - 1)];
        if ( v16 != v15 )
        {
          v17 = *(unsigned int **)(*(_QWORD *)(a1 + 504) + 8LL * v14);
          do
          {
            v18 = *v17++;
            sub_AB9E50(a1, v8, v18);
          }
          while ( v16 != v17 );
        }
      }
      --v11;
      if ( !(_DWORD)v10 )
        break;
      LODWORD(v10) = v10 - 1;
    }
  }
  sub_ABDA50((_QWORD *)a1, v8);
}

