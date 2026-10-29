__int64 __fastcall sub_BDEE90(__int64 *a1, __m128 a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // r13
  unsigned int *v6; // r12
  __int64 v7; // rbp
  unsigned int *v8; // r14
  _QWORD *v9; // r15
  _DWORD *v10; // rcx
  __int64 (__fastcall *v11)(__int64, _DWORD *, _DWORD *); // rax
  _DWORD *v12; // r15
  __int64 v13; // rdi
  _DWORD *v14; // rax
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int *v19; // r15
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // rax
  __int64 v27; // [rsp+0h] [rbp-B8h]
  _QWORD *v28; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+10h] [rbp-A8h]
  __int64 v30; // [rsp+18h] [rbp-A0h]
  __int64 v31; // [rsp+20h] [rbp-98h]
  unsigned int *v32; // [rsp+28h] [rbp-90h]
  int v33[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-80h]
  _BYTE v35[120]; // [rsp+40h] [rbp-78h] BYREF

  v32 = (unsigned int *)v35;
  *(_QWORD *)v33 = v35;
  v34 = 0x1000000000LL;
  sub_BDEAD0((__int64)a1, (__int64)v33);
  v5 = *(unsigned int **)v33;
  HIDWORD(v31) = 0;
  v6 = (unsigned int *)(*(_QWORD *)v33 + 4LL * (unsigned int)v34);
  if ( *(unsigned int **)v33 != v6 )
  {
LABEL_2:
    v28 = *(_QWORD **)(a1[4] + 8LL * *v5++);
    v7 = sub_15D1F10(*v28);
    if ( v6 != v5 )
    {
      v8 = v5;
      while ( 1 )
      {
        v9 = *(_QWORD **)(a1[4] + 8LL * *v8);
        if ( v7 != sub_15D1F10(*v9) || (unsigned __int8)sub_8E77E0(a1[2], (__int64)v28, (__int64)v9) )
          goto LABEL_4;
        v10 = (_DWORD *)*v9;
        v11 = *(__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *))(*a1 + 296);
        v12 = (_DWORD *)*v28;
        if ( v11 != sub_8FEA20 )
          break;
        v13 = a1[3];
        if ( *v10 >= *v12 )
        {
          v14 = v10;
          v10 = (_DWORD *)*v28;
          v12 = v14;
        }
        v30 = (__int64)v10;
        v29 = a1[3];
        v15 = sub_15D27F0(v13, v10, v12);
        v18 = v30;
        if ( v15 )
        {
          v19 = *(unsigned int **)(v13 + 864);
        }
        else
        {
          v23 = v30;
          v29 = v30;
          v30 = v13;
          v24 = sub_15D2760(v13, v23, v12);
          v18 = v29;
          if ( !v24 )
          {
            v25 = sub_15E1B70(a1[3]);
            goto LABEL_22;
          }
          v19 = *(unsigned int **)(v13 + 856);
        }
LABEL_12:
        v20 = (_QWORD *)a1[2];
        v21 = v20[1104];
        if ( v21 )
        {
          v22 = *v19;
          if ( (unsigned int)v22 < *(_DWORD *)(v21 - 4) && *(_DWORD *)(v21 + 4 * v22) != 0x7FFFFFFF )
          {
            v29 = a1[2];
            if ( !(unsigned int)sub_8E7030((__int64)v20)
              || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v29 + 7488) + 56LL))(
                   *(_QWORD *)(v29 + 7488),
                   v19) )
            {
              goto LABEL_4;
            }
            v20 = (_QWORD *)a1[2];
          }
        }
        ++HIDWORD(v31);
        sub_B6F780(
          v20,
          (__int64)v19,
          1u,
          a2,
          a3,
          a4,
          v18,
          v16,
          v17,
          v27,
          (int)v28,
          v29,
          v30,
          v31,
          (__int64)v32,
          *(__int64 *)v33);
        v29 = a1[2];
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v29 + 7488) + 48LL))(
          *(_QWORD *)(v29 + 7488),
          v19);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v29 + 7488) + 64LL))(*(_QWORD *)(v29 + 7488));
LABEL_4:
        if ( v6 == ++v8 )
          goto LABEL_2;
      }
      v25 = v11((__int64)a1, (_DWORD *)*v28, v10);
LABEL_22:
      v19 = (unsigned int *)v25;
      goto LABEL_12;
    }
    v6 = *(unsigned int **)v33;
  }
  if ( v6 != v32 && v6 )
    sub_186B220(v6);
  return HIDWORD(v31);
}

