unsigned __int64 __fastcall sub_68FBE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r11
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+8h] [rbp-A0h]
  _QWORD **v40; // [rsp+8h] [rbp-A0h]
  _QWORD *v41; // [rsp+8h] [rbp-A0h]
  _QWORD *v42; // [rsp+8h] [rbp-A0h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+18h] [rbp-90h]
  _QWORD *v45; // [rsp+18h] [rbp-90h]
  unsigned __int64 v46; // [rsp+18h] [rbp-90h]
  unsigned __int64 v47; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+28h] [rbp-80h]
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v52[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v53[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  netnode_check(v52, "$ string windows", 0, 0);
  v2 = v52[0];
  v3 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 112) = v52[0];
  if ( v3 )
  {
    if ( !under_debugger )
      interr(2028);
    BUG();
  }
  v4 = netnode_altval(v2, -1, 65);
  if ( v4 > 0x64 )
  {
    *(_BYTE *)(a1 + 144) = 1;
    return v54 - __readfsqword(0x28u);
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 < v4 )
  {
    v21 = qvector_reserve(a1 + 48, 0, v4, 8);
    v22 = *(_QWORD *)(a1 + 56);
    v23 = *(__int64 **)(a1 + 48);
    v24 = v21;
    v25 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v6;
    v26 = v22 - 1;
    if ( v26 >= 0 )
    {
      v27 = v24;
      do
      {
        v28 = *v23;
        v27 += 8;
        ++v23;
        *(_QWORD *)(v27 - 8) = v28;
        v29 = v26-- == 0;
      }
      while ( !v29 );
      v23 = *(__int64 **)(a1 + 48);
    }
    v43 = v25;
    qfree(v23);
    *(_QWORD *)(a1 + 48) = v24;
    *(_QWORD *)(a1 + 64) = v43;
    do
    {
LABEL_7:
      v51 = netnode_altval(*(_QWORD *)(a1 + 112), v3, 65);
      if ( (unsigned __int8)netnode_exist(&v51) )
      {
        v7 = sub_7BE950(&v51, *(_QWORD *)a1, 0, v53, 20, 83);
        if ( v7 > 1 )
        {
          v52[0] = v53;
          v52[1] = &v53[v7];
          v39 = unpack_dq(v52) - 1;
          v8 = unpack_dq(v52);
          v9 = v39;
          v10 = v8 - 1;
          if ( v39 == -1 || v39 < v10 )
          {
            v11 = *(_QWORD **)(a1 + 48);
            v12 = *(_QWORD *)(a1 + 56);
            v13 = &v11[v12];
            if ( v11 == v13 )
            {
LABEL_20:
              v16 = v12 + 1;
              if ( *(_QWORD *)(a1 + 64) < v16 )
              {
                v48 = *(_QWORD *)(a1 + 64);
                v46 = v10;
                v30 = qvector_reserve(a1 + 48, 0, v16, 8);
                v31 = *(_QWORD *)(a1 + 64);
                v32 = v30;
                v33 = *(_QWORD *)(a1 + 56);
                v34 = *(__int64 **)(a1 + 48);
                *(_QWORD *)(a1 + 64) = v48;
                v35 = v33 - 1;
                if ( v35 >= 0 )
                {
                  v36 = v32;
                  do
                  {
                    v37 = *v34;
                    v36 += 8;
                    ++v34;
                    *(_QWORD *)(v36 - 8) = v37;
                    v29 = v35-- == 0;
                  }
                  while ( !v29 );
                  v34 = *(__int64 **)(a1 + 48);
                }
                v50 = v31;
                v49 = v32;
                qfree(v34);
                v38 = *(_QWORD *)(a1 + 56);
                v10 = v46;
                *(_QWORD *)(a1 + 64) = v50;
                v9 = v39;
                *(_QWORD *)(a1 + 48) = v49;
                v13 = (_QWORD *)(v49 + 8 * v38);
              }
              *v13 = 0;
              ++*(_QWORD *)(a1 + 56);
              v47 = v10;
              v44 = v9;
              v40 = (_QWORD **)v13;
              v17 = operator new(0x38u);
              v18 = v40;
              *(_QWORD *)(v17 + 16) = 0;
              *(_QWORD *)v17 = v44;
              *(_QWORD *)(v17 + 8) = v47;
              *(_QWORD *)(v17 + 40) = -1;
              *(_BYTE *)(v17 + 48) = 0;
              *(_OWORD *)(v17 + 24) = 0;
              v19 = *v40;
              *v40 = (_QWORD *)v17;
              if ( v19 )
              {
                v20 = (void *)v19[2];
                if ( v20 )
                {
                  v19[3] = 0;
                  v45 = v40;
                  v41 = v19;
                  qfree(v20);
                  v18 = v45;
                  v19 = v41;
                }
                v42 = v18;
                operator delete(v19, 0x38u);
                v18 = v42;
              }
              *(_BYTE *)(a1 + 144) = 1;
              v14 = (_QWORD *)*v18;
            }
            else
            {
              while ( 1 )
              {
                v14 = (_QWORD *)*v11;
                if ( v39 == *(_QWORD *)*v11 && v10 == v14[1] )
                  break;
                if ( v13 == ++v11 )
                  goto LABEL_20;
              }
            }
            v15 = v51;
            *((_BYTE *)v14 + 48) = 0;
            v14[5] = v15;
          }
        }
      }
      ++v3;
    }
    while ( v3 != v4 );
    goto LABEL_18;
  }
  if ( v4 )
    goto LABEL_7;
LABEL_18:
  if ( v4 == *(_QWORD *)(a1 + 56) )
    *(_BYTE *)(a1 + 144) = 0;
  return v54 - __readfsqword(0x28u);
}
