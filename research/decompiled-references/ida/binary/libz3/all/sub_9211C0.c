__int64 __fastcall sub_9211C0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // r14d
  unsigned int *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbp
  void *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v19; // [rsp+8h] [rbp-40h]
  unsigned int v20; // [rsp+Ch] [rbp-3Ch]

  v2 = a1[34];
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  v19 = v3 - a2;
  v4 = (unsigned int *)(v2 + 12LL * (v3 - a2));
  sub_920F50((__int64)a1, v4[2]);
  v5 = a1[30];
  if ( v5 )
  {
    v20 = v4[1];
    v6 = 48LL * *(unsigned int *)(v5 - 4);
    v7 = v5 + 48LL * v20;
    v8 = v5 + v6;
    if ( 48LL * v20 != v6 )
    {
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7 + 8);
        v10 = v7 + 24;
        v7 += 48;
        sub_182CBA0(v9, v10);
      }
      while ( v8 != v7 );
      v5 = a1[30];
    }
    *(_DWORD *)(v5 - 4) = v20;
  }
  sub_9210C0(a1, *v4);
  v11 = a1[5];
  if ( v11 )
    v12 = *(_DWORD *)(v11 - 4);
  else
    v12 = 0;
  v13 = *(_DWORD *)(v11 + 4LL * (v12 - a2));
  v14 = a1[4];
  if ( v14 )
    v15 = *(_DWORD *)(v14 - 4);
  else
    v15 = 0;
  if ( v15 != v13 )
    sub_91D1D0(a1, v13);
  v16 = a1[34];
  if ( v16 )
    *(_DWORD *)(v16 - 4) = v19;
  return sub_965AE0(a1, a2);
}

