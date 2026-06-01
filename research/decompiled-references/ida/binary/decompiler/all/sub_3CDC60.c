__int64 __fastcall sub_3CDC60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 *v6; // rsi
  char *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r11
  char *v24; // rsi
  __int64 v25; // r9
  char *v26; // rbp
  unsigned __int64 v27; // r14
  char *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // cf
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // [rsp+8h] [rbp-60h]

  if ( a2 )
  {
    v6 = *(unsigned __int64 **)(a2 + 8);
    if ( v6 )
    {
      v7 = (char *)&unk_4328C0;
      v8 = *(unsigned int *)(a2 + 312);
      while ( (_DWORD)v8 != *(_DWORD *)v7 )
      {
        v7 += 4;
        if ( v7 == "$ mbui.view_id" )
          return 0;
      }
      if ( *(_QWORD *)(a2 + 1336) )
      {
        sub_145DA0(a2, 1, v8, (__int64)"$ mbui.view_id", a5);
        v6 = *(unsigned __int64 **)(a2 + 8);
        if ( !v6 )
          v6 = *(unsigned __int64 **)(a2 + 16);
      }
      v11 = *v6;
      v12 = (__int64 *)sub_3CA140((__int64)a1, *v6);
      if ( v12 == v13 )
      {
LABEL_17:
        v17 = operator new(0x68u);
        *(_QWORD *)v17 = &off_4E82D8;
        v18 = *(__int64 **)(a2 + 8);
        if ( !v18 )
          v18 = *(__int64 **)(a2 + 16);
        v19 = *v18;
        *(_QWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 40) = 0;
        *(_QWORD *)(v17 + 8) = v19;
        LODWORD(v19) = *(_DWORD *)(a2 + 312);
        *(_DWORD *)(v17 + 48) = -1;
        *(_QWORD *)(v17 + 56) = (unsigned int)v19;
        *(_OWORD *)(v17 + 24) = 0;
        sub_32F510(a2 + 8, v17 + 16);
        v20 = a1[101];
        v21 = a1[100];
        *(_QWORD *)(v17 + 64) = 0;
        *(_QWORD *)v17 = &off_4E8318;
        v22 = v21 + 8 * v20;
        *(_OWORD *)(v17 + 72) = 0;
        *(_OWORD *)(v17 + 88) = 0;
        v24 = (char *)sub_3C5580(v21, v22, v11);
        v26 = &v24[-v21];
        v27 = a1[102];
        if ( v27 < v23 + 1 )
        {
          v32 = qvector_reserve();
          v33 = a1[101];
          v34 = v32;
          v35 = (__int64 *)a1[100];
          v36 = a1[102];
          a1[102] = v27;
          v37 = v33 - 1;
          if ( v37 >= 0 )
          {
            v38 = v34;
            do
            {
              v39 = *v35;
              v38 += 8;
              ++v35;
              *(_QWORD *)(v38 - 8) = v39;
              v31 = v37-- == 0;
            }
            while ( !v31 );
          }
          v40 = v36;
          qfree();
          a1[100] = v34;
          v24 = &v26[v34];
          a1[102] = v40;
          v25 = 8LL * a1[101];
          v22 = v25 + v34;
        }
        v28 = &v24[v25 - (_QWORD)v26 + 8];
        v29 = ((v25 - (__int64)v26) >> 3) - 1;
        if ( v29 >= 0 )
        {
          do
          {
            v30 = *(_QWORD *)(v22 - 8);
            v22 -= 8;
            v28 -= 8;
            *(_QWORD *)v28 = v30;
            v31 = v29-- == 0;
          }
          while ( !v31 );
        }
        *(_QWORD *)v24 = v17;
        ++a1[101];
        sub_3CB410(v17, a2);
      }
      else
      {
        while ( *(_DWORD *)(*v12 + 56) != *(_DWORD *)(a2 + 312) )
        {
          if ( v13 == ++v12 )
            goto LABEL_17;
        }
        sub_3CB410(*v12, a2);
      }
      if ( *(_QWORD *)(a2 + 1336) )
        sub_145DA0(a2, 0, v14, v15, v16);
    }
  }
  return 0;
}
