__int64 __fastcall sub_BAB180(__int64 a1, unsigned int a2, unsigned int a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int v15; // r15d
  __int64 *v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // r11
  unsigned int *v19; // r9
  unsigned int *v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // r12d
  int v24; // ecx
  unsigned int v25; // r10d
  __int64 v26; // r10
  unsigned int *v27; // r9
  unsigned int v28; // r12d
  __int64 v29; // r10
  unsigned int *v30; // r9
  unsigned int v31; // r12d
  unsigned int *v32; // rax
  unsigned int *v33; // rax
  unsigned int *v34; // rax
  unsigned int *v35; // rax
  __int64 v36; // [rsp-18h] [rbp-88h]
  __int64 v37; // [rsp+0h] [rbp-70h]
  __int64 v38; // [rsp+0h] [rbp-70h]
  __int64 v39; // [rsp+0h] [rbp-70h]
  signed int v40; // [rsp+18h] [rbp-58h]
  signed int v41; // [rsp+1Ch] [rbp-54h]
  __int64 v42; // [rsp+20h] [rbp-50h]
  __int64 v43; // [rsp+20h] [rbp-50h]
  __int64 v44; // [rsp+20h] [rbp-50h]
  __int64 v45; // [rsp+20h] [rbp-50h]
  unsigned int *v46; // [rsp+28h] [rbp-48h]
  __int64 v47; // [rsp+28h] [rbp-48h]
  unsigned int *v48; // [rsp+28h] [rbp-48h]
  unsigned int *v49; // [rsp+28h] [rbp-48h]
  unsigned int v50; // [rsp+30h] [rbp-40h]
  unsigned int *v51; // [rsp+30h] [rbp-40h]

  result = *(_QWORD *)(a1 + 192);
  if ( result )
  {
    v9 = *(_DWORD *)(result - 4);
    if ( a2 < v9 )
    {
      v10 = *(_QWORD *)(result + 8LL * a2);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 - 4) )
        {
          if ( a3 < v9 )
          {
            result = *(_QWORD *)(result + 8LL * a3);
            if ( result )
            {
              if ( *(_DWORD *)(result - 4) )
              {
                sub_BA8A20((_QWORD *)a1, a2, a4, a5, a6);
                v11 = (__int64 *)(*(_QWORD *)(a1 + 192) + 8LL * a2);
                result = sub_BA8A20((_QWORD *)a1, a3, a4, a5, a6);
                v12 = v11;
                if ( *v11 )
                {
                  result = *(unsigned int *)(*v11 - 4);
                  if ( (_DWORD)result )
                  {
                    v41 = a3;
                    v13 = *v11;
                    v14 = 4LL * (unsigned int)(result - 1);
                    v40 = a2;
                    v15 = -2;
                    v16 = v12;
                    v17 = (_QWORD *)(8LL * a3 + *(_QWORD *)(a1 + 192));
                    while ( 1 )
                    {
                      v18 = *(_QWORD *)(a1 + 16);
                      v19 = (unsigned int *)(v14 + v13);
                      v20 = (unsigned int *)(v14 + *v17);
                      v21 = *(_QWORD *)(v18 + 8848);
                      v22 = *v19;
                      result = (unsigned int)*(char *)(v21 + v22);
                      v23 = *(char *)(v21 + *v20);
                      if ( v23 != (_DWORD)result && v23 != 0 )
                      {
                        if ( *(_BYTE *)(v21 + v22) )
                          break;
                      }
                      if ( (_DWORD)result == 1 )
                      {
                        if ( v15 == -2 )
                        {
                          v51 = (unsigned int *)(v14 + *v17);
                          v47 = *(_QWORD *)(a1 + 16);
                          v33 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 24));
                          v15 = sub_966440(a1, v33);
                          v43 = *(_QWORD *)(a1 + 16);
                          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v43 + 7488) + 48LL))(
                            *(_QWORD *)(v43 + 7488),
                            *(_QWORD *)(*(_QWORD *)(v43 + 8840) + 8LL * (v15 >> 1)));
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v43 + 7488) + 64LL))(*(_QWORD *)(v43 + 7488));
                          v20 = v51;
                          v18 = v47;
                        }
                        result = (__int64)sub_B6A4A0(
                                            v18,
                                            *(_DWORD *)(a1 + 8),
                                            v15 ^ 1,
                                            (unsigned int)v22 ^ 1,
                                            *v20,
                                            0,
                                            0);
                      }
                      else if ( (_DWORD)result == -1 )
                      {
                        v24 = *v20 ^ 1;
                        v25 = v24;
                        if ( v15 == -2 )
                        {
                          v50 = v24;
                          v46 = v19;
                          v42 = *(_QWORD *)(a1 + 16);
                          v32 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 24));
                          v15 = sub_966440(a1, v32);
                          v37 = *(_QWORD *)(a1 + 16);
                          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v37 + 7488) + 48LL))(
                            *(_QWORD *)(v37 + 7488),
                            *(_QWORD *)(*(_QWORD *)(v37 + 8840) + 8LL * (v15 >> 1)));
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v37 + 7488) + 64LL))(*(_QWORD *)(v37 + 7488));
                          v25 = v50;
                          v19 = v46;
                          v18 = v42;
                        }
                        result = (__int64)sub_B6A4A0(v18, *(_DWORD *)(a1 + 8), v15 ^ 1, *v19, v25, 0, 0);
                      }
                      if ( v23 == 1 )
                      {
                        v29 = *(_QWORD *)(a1 + 16);
                        v30 = (unsigned int *)(v14 + *v16);
                        v31 = *(_DWORD *)(*v17 + v14) ^ 1;
                        if ( v15 == -2 )
                        {
                          v49 = (unsigned int *)(v14 + *v16);
                          v45 = *(_QWORD *)(a1 + 16);
                          v35 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 24));
                          v15 = sub_966440(a1, v35);
                          v39 = *(_QWORD *)(a1 + 16);
                          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v39 + 7488) + 48LL))(
                            *(_QWORD *)(v39 + 7488),
                            *(_QWORD *)(*(_QWORD *)(v39 + 8840) + 8LL * (v15 >> 1)));
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v39 + 7488) + 64LL))(*(_QWORD *)(v39 + 7488));
                          v30 = v49;
                          v29 = v45;
                        }
                        result = (__int64)sub_B6A4A0(v29, *(_DWORD *)(a1 + 8), v15 ^ 1, *v30, v31, 0, 0);
                      }
                      else if ( v23 == -1 )
                      {
                        v26 = *(_QWORD *)(a1 + 16);
                        v27 = (unsigned int *)(v14 + *v17);
                        v28 = *(_DWORD *)(*v16 + v14) ^ 1;
                        if ( v15 == -2 )
                        {
                          v48 = (unsigned int *)(v14 + *v17);
                          v44 = *(_QWORD *)(a1 + 16);
                          v34 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 24));
                          v15 = sub_966440(a1, v34);
                          v38 = *(_QWORD *)(a1 + 16);
                          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v38 + 7488) + 48LL))(
                            *(_QWORD *)(v38 + 7488),
                            *(_QWORD *)(*(_QWORD *)(v38 + 8840) + 8LL * (v15 >> 1)));
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v38 + 7488) + 64LL))(*(_QWORD *)(v38 + 7488));
                          v27 = v48;
                          v26 = v44;
                        }
                        sub_B6A4A0(v26, *(_DWORD *)(a1 + 8), v15 ^ 1, v28, *v27, 0, 0);
                        result = v36;
                      }
                      v14 -= 4;
                      if ( v14 == -4 )
                        return result;
                      v13 = *v16;
                    }
                    return sub_BAA570(a1, v40, v41, a4, a5, a6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

