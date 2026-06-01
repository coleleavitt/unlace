unsigned __int64 __fastcall sub_6704E0(__int64 a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  unsigned int v4; // r15d
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  _DWORD *v15; // rsi
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rcx
  _QWORD *v20; // rdx
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int64 *v41; // [rsp+18h] [rbp-90h]
  _QWORD *v42; // [rsp+18h] [rbp-90h]
  __int64 *v43; // [rsp+18h] [rbp-90h]
  unsigned int v44; // [rsp+18h] [rbp-90h]
  unsigned int v45; // [rsp+20h] [rbp-88h]
  __int64 *v46; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+28h] [rbp-80h]
  int v50; // [rsp+3Ch] [rbp-6Ch] BYREF
  _QWORD v51[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v52[10]; // [rsp+5Eh] [rbp-4Ah] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  netnode_check(v51, "$ string windows", 0, 0);
  v2 = LODWORD(v51[0]);
  v3 = *(_QWORD *)(a1 + 48) == 0;
  *(_DWORD *)(a1 + 104) = v51[0];
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(2028);
    BUG();
  }
  v4 = netnode_altval(v2, 0xFFFFFFFFLL, 65);
  if ( v4 > 0x64 )
  {
    *(_BYTE *)(a1 + 136) = 1;
    return v53 - __readfsqword(0x28u);
  }
  v6 = *(_QWORD *)(a1 + 56);
  v7 = v4;
  if ( v6 < v4 )
  {
    v22 = qvector_reserve(a1 + 40, 0, v4, 8);
    v23 = *(_QWORD *)(a1 + 48);
    v24 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v6;
    v25 = *(__int64 **)(a1 + 40);
    v26 = v22;
    v27 = v23 - 1;
    if ( v27 >= 0 )
    {
      v28 = v22;
      do
      {
        v29 = *v25;
        v28 += 8;
        ++v25;
        *(_QWORD *)(v28 - 8) = v29;
        v30 = v27-- == 0;
      }
      while ( !v30 );
      v25 = *(__int64 **)(a1 + 40);
    }
    qfree(v25);
    *(_QWORD *)(a1 + 40) = v26;
    v7 = v4;
    *(_QWORD *)(a1 + 56) = v24;
LABEL_7:
    v8 = 0;
    v40 = v7;
    do
    {
      v50 = netnode_altval(*(unsigned int *)(a1 + 104), v8, 65);
      if ( (unsigned __int8)netnode_exist(&v50) )
      {
        v9 = sub_79B5C0(&v50, *(_QWORD *)a1, 0, v52, 10, 83);
        if ( v9 > 1 )
        {
          v51[0] = v52;
          v51[1] = &v52[v9];
          v10 = unpack_dd(v51) - 1;
          v11 = unpack_dd(v51) - 1;
          if ( v10 == -1 || v10 < v11 )
          {
            v12 = *(__int64 **)(a1 + 40);
            v13 = *(_QWORD *)(a1 + 48);
            v14 = &v12[v13];
            if ( v12 == v14 )
            {
LABEL_22:
              v17 = v13 + 1;
              if ( *(_QWORD *)(a1 + 56) < v17 )
              {
                v47 = *(_QWORD *)(a1 + 56);
                v44 = v11;
                v31 = qvector_reserve(a1 + 40, 0, v17, 8);
                v32 = *(_QWORD *)(a1 + 56);
                v33 = v31;
                v34 = *(_QWORD *)(a1 + 48);
                v35 = *(__int64 **)(a1 + 40);
                *(_QWORD *)(a1 + 56) = v47;
                v36 = v34 - 1;
                if ( v36 >= 0 )
                {
                  v37 = v33;
                  do
                  {
                    v38 = *v35;
                    v37 += 8;
                    ++v35;
                    *(_QWORD *)(v37 - 8) = v38;
                    v30 = v36-- == 0;
                  }
                  while ( !v30 );
                  v35 = *(__int64 **)(a1 + 40);
                }
                v49 = v32;
                v48 = v33;
                qfree(v35);
                v39 = *(_QWORD *)(a1 + 48);
                v11 = v44;
                *(_QWORD *)(a1 + 56) = v49;
                *(_QWORD *)(a1 + 40) = v48;
                v14 = (__int64 *)(v48 + 8 * v39);
              }
              *v14 = 0;
              ++*(_QWORD *)(a1 + 48);
              v45 = v11;
              v41 = v14;
              v18 = operator new(0x28u);
              v19 = v41;
              *(_DWORD *)v18 = v10;
              *(_DWORD *)(v18 + 4) = v45;
              *(_QWORD *)(v18 + 8) = 0;
              *(_DWORD *)(v18 + 32) = -1;
              *(_BYTE *)(v18 + 36) = 0;
              *(_OWORD *)(v18 + 16) = 0;
              v20 = (_QWORD *)*v41;
              *v41 = v18;
              if ( v20 )
              {
                v21 = (void *)v20[1];
                if ( v21 )
                {
                  v20[2] = 0;
                  v46 = v41;
                  v42 = v20;
                  qfree(v21);
                  v19 = v46;
                  v20 = v42;
                }
                v43 = v19;
                operator delete(v20, 0x28u);
                v19 = v43;
              }
              *(_BYTE *)(a1 + 136) = 1;
              v15 = (_DWORD *)*v19;
            }
            else
            {
              while ( 1 )
              {
                v15 = (_DWORD *)*v12;
                if ( v10 == *(_DWORD *)*v12 && v11 == v15[1] )
                  break;
                if ( v14 == ++v12 )
                  goto LABEL_22;
              }
            }
            v16 = v50;
            *((_BYTE *)v15 + 36) = 0;
            v15[8] = v16;
          }
        }
      }
      ++v8;
    }
    while ( v8 != v4 );
    v7 = v40;
    goto LABEL_20;
  }
  if ( v4 )
    goto LABEL_7;
LABEL_20:
  if ( v7 == *(_QWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 136) = 0;
  return v53 - __readfsqword(0x28u);
}

