__int64 __fastcall sub_9DA920(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r13d
  void *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rbx
  unsigned int *i; // [rsp+8h] [rbp-70h]
  __int64 v18; // [rsp+10h] [rbp-68h]
  void *v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]

  sub_9DA680((__int64)a1, a2, a3);
  v5 = a1[73] + 16LL * a2;
  v6 = *(unsigned int **)v5;
  if ( *(_QWORD *)v5 )
  {
    if ( 2 * *(_DWORD *)(v5 + 8) < *(v6 - 1) )
      sub_99EFE0((__int64 *)v5, a1 + 71);
    v21 = 0;
    v23 = 1;
    v7 = *(v6 - 1);
    v22 = 0;
    v24 = 0;
    for ( i = &v6[2 * v7]; i != v6; v6 += 2 )
    {
      v8 = *v6;
      if ( (_DWORD)v8 != -1 )
      {
        v9 = a1[71] + 24 * v8;
        v10 = *(_DWORD *)(v9 + 12);
        if ( v10 != -1 && ((*(_BYTE *)(a1[74] + 4LL * v10 + 3) >> 4) & 3) != 2 )
        {
          v11 = qword_1C7F2C0;
          if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
          {
            v20 = a1[71] + 24 * v8;
            sub_182C690(qword_1C7F2C0, &v21, a3);
            v9 = v20;
          }
          else
          {
            v12 = *(_DWORD *)a3;
            BYTE4(v21) &= ~1u;
            LODWORD(v21) = v12;
          }
          if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
          {
            v18 = v9;
            sub_182C690(v11, &v23, a3 + 16);
            v9 = v18;
          }
          else
          {
            v13 = *(_DWORD *)(a3 + 16);
            BYTE4(v23) &= ~1u;
            LODWORD(v23) = v13;
          }
          v14 = *(_QWORD *)v9 + 40LL * v6[1];
          if ( (v23 & 0x100000000LL) != 0
            || (_DWORD)v23 != 1
            || (*(_BYTE *)(v14 + 20) & 1) != 0
            || *(_DWORD *)(v14 + 16) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, &v21, v14);
          }
          else
          {
            v19 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, &v21, v14);
            sub_182CBA0(v19, &v23);
            BYTE4(v23) &= ~1u;
            LODWORD(v23) = 1;
          }
          sub_1831620(qword_1C7F2C0, &v21);
          sub_9DA680((__int64)a1, v10, (__int64)&v21);
        }
      }
    }
  }
  else
  {
    v21 = 0;
    v22 = 0;
    v23 = 1;
    v24 = 0;
  }
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  return sub_182CBA0(v15, &v23);
}

