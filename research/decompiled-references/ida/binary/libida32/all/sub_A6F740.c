void __fastcall sub_A6F740(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rbp
  char v7; // al
  __int64 *v8; // rbx
  __int64 *v9; // r13
  int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // r13
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  __int64 *v20; // rdx
  int v21; // edx
  __int64 *v22; // rdi
  int *v23; // r15
  int *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 *v37; // [rsp+10h] [rbp-98h]
  __int64 v38; // [rsp+38h] [rbp-70h]
  __int64 v39; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v40; // [rsp+48h] [rbp-60h] BYREF
  int *v41; // [rsp+50h] [rbp-58h] BYREF
  int v42; // [rsp+58h] [rbp-50h]
  char v43; // [rsp+60h] [rbp-48h] BYREF

  v5 = a2;
  v7 = sub_EAE100(a1 + 18384);
  if ( a3 )
  {
    if ( !v7 )
    {
      v8 = &a2[a3];
      if ( v8 != a2 )
      {
        v9 = a2;
        while ( 1 )
        {
          if ( *(char *)(*v9 + 28) >= 0 )
          {
            v10 = *(_DWORD *)(sub_A33DF0(*v9) + 24);
            if ( v10 )
              break;
          }
          if ( v8 == ++v9 )
            return;
        }
        v11 = sub_A5CA10(*(_QWORD *)(a1 + 2312), v10);
        if ( v11 )
        {
          v12 = sub_EAEE30(a1 + 18384, v11);
          v13 = (_QWORD *)v12;
          if ( v12 )
          {
            if ( *(_QWORD *)(v12 + 40) && (*(_BYTE *)(*(_QWORD *)(std::_Rb_tree_decrement() + 40) + 32LL) & 0x20) == 0 )
            {
              v37 = v8;
              while ( 1 )
              {
                if ( *(char *)(*v5 + 28) >= 0 )
                {
                  v14 = sub_A33DF0(*v5);
                  v15 = *(_QWORD *)(a1 + 18472);
                  v16 = (__int64 *)v14;
                  v17 = *(_DWORD *)(a1 + 18488);
                  if ( !v17 )
                    goto LABEL_23;
                  v18 = v17 - 1;
                  v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
                  v20 = *(__int64 **)(v15 + 16LL * v19);
                  if ( v20 != v16 )
                    break;
                }
LABEL_17:
                if ( v37 == ++v5 )
                  return;
              }
              if ( v20 != (__int64 *)-4096LL )
              {
                v21 = 1;
                do
                {
                  v19 = v18 & (v21 + v19);
                  v22 = *(__int64 **)(v15 + 16LL * v19);
                  if ( v16 == v22 )
                    goto LABEL_17;
                  ++v21;
                }
                while ( v22 != (__int64 *)-4096LL );
              }
LABEL_23:
              sub_A39660((__int64)&v41, (__int64)v16, *(_QWORD *)(a1 + 2312));
              v23 = &v41[v42];
              if ( v41 != v23 )
              {
                v24 = v41;
                while ( 1 )
                {
                  if ( *v24 > 0 )
                  {
                    v25 = sub_A5D5A0(a1, (__int64)v16, *v24, v13);
                    if ( v25 )
                      break;
                  }
                  if ( v23 == ++v24 )
                  {
                    v23 = v41;
                    goto LABEL_29;
                  }
                }
                v38 = v25;
                sub_A6EAC0(a1, v16, v25, v26, v27, v28);
                v29 = sub_EAE970(v38, a1, a4, v16);
                v39 = (*(__int64 (__fastcall **)(__int64 *))(*v16 + 32))(v16);
                if ( (unsigned __int8)sub_A4A2E0((__int64 *)(a1 + 18544), &v39, &v40) )
                {
                  v33 = v40 + 1;
                }
                else
                {
                  v34 = sub_A6F6B0(a1 + 18544, &v39, v40, v30, v31, v32);
                  v35 = v39;
                  v34[1] = 0;
                  v33 = v34 + 1;
                  *(v33 - 1) = v35;
                }
                *v33 = v29;
                v23 = v41;
              }
LABEL_29:
              if ( v23 != (int *)&v43 )
                free(v23);
              goto LABEL_17;
            }
          }
        }
      }
    }
  }
}

