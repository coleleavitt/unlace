__int64 __fastcall sub_8831C0(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 *i; // rbp
  _BYTE *v8; // rdi
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rdi
  _DWORD *v12; // rax
  int v13; // edx
  _DWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned int *v16; // r14
  _QWORD *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 (*v20)(void); // rax
  __int64 v21; // rdi
  _QWORD **v22; // r14
  _QWORD **j; // r9
  _DWORD *v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rax
  char v28; // al
  unsigned int *v29; // [rsp+0h] [rbp-48h]
  _QWORD *v30; // [rsp+0h] [rbp-48h]
  _QWORD **v31; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 80);
  result = *(_QWORD *)(*(_QWORD *)v3 + 440LL);
  if ( (__int64 (__fastcall *)(__int64))result == sub_79F010 )
  {
    v5 = v3 + 1592;
  }
  else
  {
    result = ((__int64 (*)(void))result)();
    v5 = result;
  }
  v6 = *(__int64 **)(v5 + 176);
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    for ( i = &v6[result]; i != v6; ++v6 )
    {
      v8 = *(_BYTE **)(a1 + 80);
      v9 = *v6;
      v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 488LL);
      if ( v10 == sub_795570 )
      {
        if ( !v8[168] )
        {
LABEL_11:
          v11 = *(_QWORD *)v9;
          if ( !*(_WORD *)(*(_QWORD *)v9 + 4LL) )
          {
            v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
            if ( v12 )
            {
              v13 = *(_DWORD *)(a1 + 112);
              if ( *v12 == v13 && v12[1] == 1 )
              {
                v26 = **(_QWORD **)(v9 + 176);
                if ( !*(_WORD *)(v26 + 4) )
                {
                  v27 = *(_DWORD **)(*(_QWORD *)(v26 + 16) + 24LL);
                  if ( v27 )
                  {
                    if ( v13 == *v27 && !v27[1] )
                    {
                      sub_882C40((_QWORD *)a1, (_QWORD *)v9, a2);
                      v11 = *(_QWORD *)v9;
                    }
                  }
                }
              }
            }
          }
          v14 = *(_DWORD **)(sub_15D1F10(v11) + 24);
          if ( v14
            && *(_DWORD *)(a1 + 112) == *v14
            && !v14[1]
            && v9 == *(_QWORD *)(v9 + 64)
            && (unsigned __int8)sub_79AAE0(*(_QWORD *)(a1 + 80), v9) )
          {
            v19 = *(_QWORD *)(a1 + 80);
            v20 = *(__int64 (**)(void))(*(_QWORD *)v19 + 440LL);
            if ( (char *)v20 == (char *)sub_79F010 )
              v21 = v19 + 1592;
            else
              v21 = v20();
            v22 = *(_QWORD ***)(v21 + 176);
            result = *(_QWORD *)v9;
            if ( v22 )
            {
              for ( j = &v22[*((unsigned int *)v22 - 1)]; j != v22; ++v22 )
              {
                v24 = (_DWORD *)**v22;
                if ( *(_DWORD *)result < *v24 && *v22 == (_QWORD *)(*v22)[8] )
                {
                  v31 = j;
                  v30 = *v22;
                  v25 = *(_DWORD **)(sub_15D1F10(v24) + 24);
                  j = v31;
                  if ( v25
                    && *(_DWORD *)(a1 + 112) == *v25
                    && !v25[1]
                    && (v28 = sub_79AAE0(*(_QWORD *)(a1 + 80), (__int64)v30), j = v31, v28) )
                  {
                    sub_882A30(a1, (_QWORD *)v9, v30, a2);
                    result = *(_QWORD *)v9;
                    j = v31;
                  }
                  else
                  {
                    result = *(_QWORD *)v9;
                  }
                }
              }
            }
          }
          else
          {
            result = *(_QWORD *)v9;
          }
          if ( !*(_WORD *)(result + 4) )
          {
            v15 = *(_QWORD **)(*(_QWORD *)(result + 16) + 24LL);
            if ( v15 )
            {
              if ( *v15 == 0x200000000LL && *(_DWORD *)(result + 24) == 2 )
              {
                v16 = *(unsigned int **)(result + 32);
                v29 = *(unsigned int **)(result + 40);
                result = *(_QWORD *)(sub_15D1F10(v16) + 24);
                if ( result )
                {
                  if ( *(_DWORD *)(a1 + 112) == *(_DWORD *)result )
                  {
                    result = *(unsigned int *)(result + 4);
                    if ( !(_DWORD)result )
                    {
                      result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL);
                      if ( *(_DWORD *)(result + 4LL * (unsigned int)(2 * *(_DWORD *)(v9 + 28))) == -1 )
                      {
                        v17 = (_QWORD *)sub_7E4F00(a1, v29);
                        v18 = (_QWORD *)sub_7E4F00(a1, v16);
                        result = sub_882A30(a1, v18, v17, a2);
                      }
                    }
                  }
                }
              }
            }
          }
          continue;
        }
        result = *(unsigned __int8 *)(v9 + 16);
      }
      else
      {
        result = v10((__int64)v8, *v6);
      }
      if ( (_BYTE)result )
        goto LABEL_11;
    }
  }
  return result;
}

