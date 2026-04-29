__int64 __fastcall sub_3D3A00(_QWORD *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rsi
  char *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rcx
  char *v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r11
  char *v36; // rbp
  unsigned __int64 v37; // r14
  char *v38; // rdx
  __int64 v39; // rax
  bool v40; // cf
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r15
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // [rsp+8h] [rbp-60h]

  if ( a2 )
  {
    v7 = *(unsigned __int64 **)(a2 + 8);
    if ( v7 )
    {
      v8 = (char *)&unk_4141E0;
      v9 = *(unsigned int *)(a2 + 312);
      while ( (_DWORD)v9 != *(_DWORD *)v8 )
      {
        v8 += 4;
        if ( v8 == "$ mbui.view_id" )
          return 0;
      }
      if ( *(_QWORD *)(a2 + 1336) )
      {
        sub_144100(a2, 1, v9, (__int64)"$ mbui.view_id", a6);
        v7 = *(unsigned __int64 **)(a2 + 8);
        if ( !v7 )
          v7 = *(unsigned __int64 **)(a2 + 16);
      }
      v12 = *v7;
      v13 = (__int64 *)sub_3CF540((__int64)a1, *v7);
      if ( v13 == (__int64 *)v14 )
      {
LABEL_17:
        v25 = operator new(0x68u);
        *(_QWORD *)v25 = &off_4C9538;
        v26 = *(__int64 **)(a2 + 8);
        if ( !v26 )
          v26 = *(__int64 **)(a2 + 16);
        v27 = *v26;
        *(_QWORD *)(v25 + 16) = 0;
        *(_QWORD *)(v25 + 40) = 0;
        *(_QWORD *)(v25 + 8) = v27;
        LODWORD(v27) = *(_DWORD *)(a2 + 312);
        *(_DWORD *)(v25 + 48) = -1;
        *(_QWORD *)(v25 + 56) = (unsigned int)v27;
        *(_OWORD *)(v25 + 24) = 0;
        sub_32D950((_QWORD *)(a2 + 8), v25 + 16, v21, v22, v23, v24);
        v28 = a1[253];
        v29 = a1[252];
        *(_QWORD *)(v25 + 64) = 0;
        *(_QWORD *)v25 = &off_4C9578;
        v30 = v29 + 8 * v28;
        *(_OWORD *)(v25 + 72) = 0;
        *(_OWORD *)(v25 + 88) = 0;
        v32 = (char *)sub_3CA3B0(v29, v30, v12);
        v36 = &v32[-v29];
        v37 = a1[254];
        if ( v37 < v35 + 1 )
        {
          v41 = qvector_reserve(a1 + 252, 0, v35 + 1, 8);
          v42 = a1[253];
          v43 = v41;
          v44 = (__int64 *)a1[252];
          v45 = a1[254];
          a1[254] = v37;
          v46 = v42 - 1;
          if ( v46 >= 0 )
          {
            v47 = v43;
            do
            {
              v48 = *v44;
              v47 += 8;
              ++v44;
              *(_QWORD *)(v47 - 8) = v48;
              v40 = v46-- == 0;
            }
            while ( !v40 );
            v44 = (__int64 *)a1[252];
          }
          v49 = v45;
          qfree(v44);
          a1[252] = v43;
          v32 = &v36[v43];
          a1[254] = v49;
          v34 = 8LL * a1[253];
          v30 = v34 + v43;
        }
        v38 = &v32[v34 - (_QWORD)v36 + 8];
        v39 = ((v34 - (__int64)v36) >> 3) - 1;
        if ( v39 >= 0 )
        {
          do
          {
            v31 = *(_QWORD *)(v30 - 8);
            v30 -= 8;
            v38 -= 8;
            *(_QWORD *)v38 = v31;
            v40 = v39-- == 0;
          }
          while ( !v40 );
        }
        *(_QWORD *)v32 = v25;
        ++a1[253];
        sub_3D08D0(v25, a2, 0.0, (__int64)v38, v31, v33, v34);
      }
      else
      {
        v17 = *(unsigned int *)(a2 + 312);
        while ( *(_DWORD *)(*v13 + 56) != (_DWORD)v17 )
        {
          if ( (__int64 *)v14 == ++v13 )
            goto LABEL_17;
        }
        sub_3D08D0(*v13, a2, a3, v14, v17, v15, v16);
      }
      if ( *(_QWORD *)(a2 + 1336) )
        sub_144100(a2, 0, v18, v19, v20);
    }
  }
  return 0;
}
