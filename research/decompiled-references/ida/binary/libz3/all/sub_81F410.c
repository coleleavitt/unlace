__int64 __fastcall sub_81F410(unsigned __int64 *a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // eax
  _DWORD *v5; // rdx
  int v7; // eax
  _DWORD *v8; // rdx
  int v9; // eax
  _DWORD *v10; // rdx
  int v11; // eax
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _DWORD *v18; // rdx
  _QWORD **v19; // r15
  __int64 v20; // rax
  _QWORD **v21; // r13
  _QWORD *v22; // r12
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // r14
  int v30; // eax
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned int *v33; // rax
  unsigned int *v34; // r14
  __int64 v35; // rax
  int v37; // [rsp+0h] [rbp-68h]
  _QWORD *v38; // [rsp+8h] [rbp-60h]
  int v39; // [rsp+10h] [rbp-58h]
  void (__fastcall *v40)(unsigned __int64 *, __int64); // [rsp+10h] [rbp-58h]
  int v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v42; // [rsp+18h] [rbp-50h]
  int v43; // [rsp+20h] [rbp-48h]
  int v44[2]; // [rsp+28h] [rbp-40h] BYREF
  int v45; // [rsp+30h] [rbp-38h]
  int v46; // [rsp+38h] [rbp-30h]
  __int64 v47; // [rsp+40h] [rbp-28h]

  v38 = (_QWORD *)sub_7E4F00((__int64)a1, (unsigned int *)a2);
  if ( !v38 )
    v38 = (_QWORD *)sub_7E67D0((__int64)a1, a2, 0);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_4;
  v7 = sub_15F0200(a1 + 14);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_4;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v8 && v7 == *v8 && !v8[1] )
  {
LABEL_26:
    v19 = (_QWORD **)(v38 + 22);
    v20 = *((unsigned int *)v38 + 38);
    v21 = (_QWORD **)&v38[v20 + 22];
    if ( v20 * 8 )
    {
      do
      {
        v22 = *v19;
        v23 = sub_15D1F10(**v19);
        v24 = sub_15F0200(a1 + 14);
        v25 = *(_QWORD *)(v23 + 24);
        if ( v25 )
        {
          if ( v24 == *(_DWORD *)v25 )
          {
            if ( !*(_DWORD *)(v25 + 4) )
              (*(void (__fastcall **)(unsigned __int64 *, _QWORD *))(*a1 + 528))(a1, v22);
          }
          else if ( *(_DWORD *)v25 == *((_DWORD *)a1 + 34) && !*(_DWORD *)(v25 + 4) )
          {
            v26 = *(_QWORD *)(v25 + 8);
            v27 = 0xFFFFFFFF0LL;
            if ( v26 )
              v27 = 16LL * (unsigned int)(*(_DWORD *)(v26 - 4) - 1);
            v28 = (__int64 *)(v27 + v26);
            if ( *((_BYTE *)v28 + 8) != 1 )
              sub_DBF6E(0);
            v29 = *v28;
            v30 = sub_15F0200(a1 + 14);
            v31 = *(_DWORD **)(v29 + 24);
            if ( v31 && v30 == *v31 && !v31[1] )
            {
              v32 = a1[18];
              v42 = a1[9];
              *(_QWORD *)v44 = *v22;
              v33 = (unsigned int *)sub_15DCAD0(v32, (int)v44, 0);
              v34 = v33;
              if ( v33 )
                ++v33[2];
              v40 = *(void (__fastcall **)(unsigned __int64 *, __int64))(*a1 + 528);
              v35 = sub_7E5940((__int64)a1, v33);
              v40(a1, v35);
              if ( v34 )
              {
                if ( v34[2]-- == 1 )
                  sub_15D7BC0(v42, v34);
              }
            }
          }
        }
        ++v19;
      }
      while ( v21 != v19 );
    }
    goto LABEL_24;
  }
  v9 = sub_15F0200(a1 + 14);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_4;
  v10 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v10 && v9 == *v10 && v10[1] == 4 )
    goto LABEL_26;
  if ( (v11 = sub_15F0200(a1 + 14), !*(_WORD *)(a2 + 4))
    && (v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
    && v11 == *v12
    && v12[1] == 1
    || (v17 = sub_15F0200(a1 + 14), !*(_WORD *)(a2 + 4))
    && (v18 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
    && v17 == *v18
    && v18[1] == 2 )
  {
    (*(void (__fastcall **)(unsigned __int64 *, _QWORD *))(*a1 + 528))(a1, v38);
    v13 = (*(__int64 (__fastcall **)(unsigned __int64 *, _QWORD))(*a1 + 528))(a1, v38[22]);
    sub_81E340(a1, v13, v38, v14, v15, v16, v37, (int)v38, v39, v41, v43, v44[0], v45, v46, v47);
  }
  else
  {
LABEL_4:
    (*(void (__fastcall **)(unsigned __int64 *, _QWORD))(*a1 + 528))(a1, v38[22]);
    v3 = sub_15D1F10(*v38);
    v4 = sub_15F0200(a1 + 14);
    v5 = *(_DWORD **)(v3 + 24);
    if ( v5 && v4 == *v5 && !v5[1] )
LABEL_24:
      (*(void (__fastcall **)(unsigned __int64 *, _QWORD *))(*a1 + 528))(a1, v38);
  }
  return 1;
}

