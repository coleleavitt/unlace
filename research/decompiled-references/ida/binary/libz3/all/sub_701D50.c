__int64 __fastcall sub_701D50(__int64 a1, void **a2)
{
  void (__fastcall ***v3)(void *); // r14
  __int64 *v4; // rbp
  __int64 *v5; // r13
  __int64 v6; // rbx
  _DWORD *v7; // rax
  __int64 *v8; // rbx
  __int64 *i; // rbp
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rax
  void *v13; // rbx
  void (__fastcall ***v14)(void *); // rbp
  bool v15; // zf
  __int64 v17; // rax
  int v18; // edi
  __int64 *v19; // rcx
  unsigned int v20; // edx
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // rax
  int v29; // edi
  __int64 *v30; // rcx
  unsigned int v31; // edx
  __int64 *v32; // r11
  __int64 v33; // rdx
  __int64 *v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  _DWORD *v38; // rax
  bool v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned int v48; // [rsp+8h] [rbp-80h]
  __int64 v49; // [rsp+10h] [rbp-78h]
  __int64 v50; // [rsp+18h] [rbp-70h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  int v53[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v54; // [rsp+48h] [rbp-40h]

  v3 = (void (__fastcall ***)(void *))sub_186B270(0xA0u);
  sub_1373200(v3, *(_QWORD *)(a1 + 16));
  ++*((_DWORD *)v3 + 4);
  sub_16669D0(v53, *(_QWORD *)(a1 + 16));
  v4 = *(__int64 **)(a1 + 272);
  if ( v4 )
  {
    v5 = &v4[2 * *((unsigned int *)v4 - 1)];
    if ( v4 != v5 )
    {
      v52 = a1 + 40;
      do
      {
        v6 = *v4;
        if ( !*(_WORD *)(*v4 + 4) && !*(_DWORD *)(v6 + 24) )
        {
          v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
          if ( !v7 || *v7 == -1 )
          {
            v17 = *(unsigned int *)(a1 + 464);
            v18 = *(_DWORD *)(v6 + 12);
            v19 = *(__int64 **)(a1 + 456);
            v20 = v17 - 1;
            v17 *= 8;
            v21 = (__int64 *)((char *)v19 + v17);
            v22 = 8LL * (v18 & v20);
            v23 = &v19[(unsigned __int64)v22 / 8];
            if ( v22 == v17 )
            {
LABEL_31:
              while ( v23 != v19 )
              {
                v26 = *v19;
                if ( (unsigned __int64)*v19 > 1 )
                {
                  if ( *(_DWORD *)(v26 + 12) == v18 && v6 == v26 )
                    goto LABEL_56;
                }
                else if ( !v26 )
                {
                  break;
                }
                ++v19;
              }
            }
            else
            {
              v24 = &v19[(unsigned __int64)v22 / 8];
              while ( 1 )
              {
                while ( 1 )
                {
                  v25 = *v24;
                  if ( (unsigned __int64)*v24 > 1 )
                    break;
                  if ( !v25 )
                    goto LABEL_8;
                  if ( v21 == ++v24 )
                    goto LABEL_31;
                }
                if ( *(_DWORD *)(v25 + 12) == v18 && v6 == v25 )
                  break;
                if ( v21 == ++v24 )
                  goto LABEL_31;
              }
LABEL_56:
              v48 = *((_DWORD *)v4 + 2);
              v38 = *(_DWORD **)(sub_15D1F10(*v4) + 24);
              if ( v38 )
              {
                v39 = 0;
                if ( *v38 == 5 )
                  v39 = v38[1] == 1;
              }
              else
              {
                v39 = 0;
              }
              v49 = *(_QWORD *)(a1 + 112) + 8LL * v48;
              v40 = sub_1141F90(v52);
              v41 = v54;
              v50 = v40;
              if ( !v54 )
              {
                sub_16669E0(v53);
                v41 = v54;
              }
              v42 = sub_166B840(v41, v50, v49, v39);
              sub_135F9B0(v3, *(_QWORD *)(v6 + 16), v42);
            }
          }
        }
LABEL_8:
        v4 += 2;
      }
      while ( v5 != v4 );
    }
  }
  v8 = *(__int64 **)(a1 + 224);
  if ( v8 )
  {
    for ( i = &v8[2 * *((unsigned int *)v8 - 1)]; i != v8; v8 += 2 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( !*(_WORD *)(v10 + 4) && !*(_DWORD *)(v10 + 24) )
        {
          v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
          if ( !v11 || *v11 == -1 )
          {
            v27 = *((unsigned int *)v8 + 2);
            if ( (_DWORD)v27 != *(_DWORD *)(a1 + 56) >> 1 )
            {
              v28 = *(unsigned int *)(a1 + 464);
              v29 = *(_DWORD *)(v10 + 12);
              v30 = *(__int64 **)(a1 + 456);
              v31 = v28 - 1;
              v28 *= 8;
              v32 = (__int64 *)((char *)v30 + v28);
              v33 = 8LL * (v29 & v31);
              v34 = &v30[(unsigned __int64)v33 / 8];
              if ( v33 == v28 )
              {
LABEL_48:
                while ( v34 != v30 )
                {
                  v37 = *v30;
                  if ( (unsigned __int64)*v30 > 1 )
                  {
                    if ( *(_DWORD *)(v37 + 12) == v29 && v10 == v37 )
                      goto LABEL_62;
                  }
                  else if ( !v37 )
                  {
                    break;
                  }
                  ++v30;
                }
              }
              else
              {
                v35 = &v30[(unsigned __int64)v33 / 8];
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v36 = *v35;
                    if ( (unsigned __int64)*v35 > 1 )
                      break;
                    if ( !v36 )
                      goto LABEL_16;
                    if ( v32 == ++v35 )
                      goto LABEL_48;
                  }
                  if ( *(_DWORD *)(v36 + 12) == v29 && v10 == v36 )
                    break;
                  if ( v32 == ++v35 )
                    goto LABEL_48;
                }
LABEL_62:
                v43 = *(_QWORD *)(a1 + 136);
                if ( v43 )
                {
                  if ( (unsigned int)v27 < *(_DWORD *)(v43 - 4) )
                  {
                    v44 = *(_DWORD *)(v43 + 4 * v27);
                    if ( v44 )
                    {
                      v45 = *(_QWORD *)(a1 + 16);
                      v46 = *(_QWORD *)(v10 + 16);
                      v47 = *(_QWORD *)(v45 + 864);
                      if ( v44 == 1 )
                        v47 = *(_QWORD *)(v45 + 856);
                      sub_135F9B0(v3, v46, v47);
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_16:
      ;
    }
  }
  v12 = sub_1336B20(v3);
  v13 = (void *)v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v14 = (void (__fastcall ***)(void *))*a2;
  if ( *a2 )
  {
    v15 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v15 )
    {
      (**v14)(v14);
      sub_186B220(v14);
      v15 = (*((_DWORD *)v3 + 4))-- == 1;
      *a2 = v13;
      if ( !v15 )
        return 1;
      goto LABEL_68;
    }
  }
  v15 = (*((_DWORD *)v3 + 4))-- == 1;
  *a2 = (void *)v12;
  if ( v15 )
  {
LABEL_68:
    (**v3)(v3);
    sub_186B220(v3);
  }
  return 1;
}

