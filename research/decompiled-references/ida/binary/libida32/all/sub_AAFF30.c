__int64 __fastcall sub_AAFF30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  _DWORD *v18; // rdx
  _QWORD *v19; // rbp
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // r15
  char v22; // r13
  _QWORD *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  int v31; // eax
  _DWORD *v32; // r13
  __int64 v33; // rdi
  int v34; // eax
  char v35; // [rsp+Fh] [rbp-59h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  __int64 v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+28h] [rbp-40h]

  sub_AAF750(a1, a2[7], a3, a4, a5, a6);
  sub_AAD6B0(a1, a2[6]);
  result = *(unsigned int *)(a1 + 4);
  if ( !(_DWORD)result )
  {
    v8 = sub_B9F920(a2);
    v9 = *(_QWORD *)(v8 + 16) + 8LL * *(unsigned int *)(v8 + 24);
    v39 = v9;
    v13 = *(_QWORD *)(sub_B9F920(a2) + 16);
    result = a1 + 8;
    v37 = a1 + 8;
    if ( v9 != v13 )
    {
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)v13 + 80LL);
        v15 = *(_QWORD *)(v14 + 72);
        v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v15 & 1) == 0 )
        {
          v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v18 = (_DWORD *)(v15 & 2);
            v19 = v17;
            if ( !(_DWORD)v18 )
              goto LABEL_7;
            v16 = sub_6C1EC0(v17, *(_QWORD *)(*(_QWORD *)v13 + 80LL), (__int64)v18, v10, v11, v12)
                & 0xFFFFFFFFFFFFFFFELL;
            v15 = v16 | 1;
            *(_QWORD *)(v14 + 72) = v16 | 1;
          }
        }
        v18 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
        v32 = v18;
        v19 = v18;
        if ( v16 )
        {
          if ( (v16 & 4) != 0 )
          {
            v19 = nullptr;
            if ( v18 )
            {
              v33 = *(_QWORD *)v18;
              v34 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
              if ( v18[2] != v34 )
              {
                v18[2] = v34;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v14);
              }
              v19 = *((_QWORD **)v32 + 2);
            }
          }
        }
LABEL_7:
        v20 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
        if ( v20 == sub_6CE2C0 )
          v36 = a2[9];
        else
          v36 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(__int64), _DWORD *))v20)(a2, sub_6CE2C0, v18);
        if ( v19 )
        {
          v35 = 0;
          v21 = (__int64)v19;
          v22 = 0;
          while ( 1 )
          {
            if ( (unsigned int)sub_B50370(v21) <= 1 )
            {
              if ( (__int64 *)v36 == a2 )
                sub_AAD6B0(a1, v21);
              else
                sub_F1BF80(v37, v21, 0, 0);
              v35 = 1;
            }
            result = *(_QWORD *)(v21 + 72);
            if ( (result & 1) != 0 )
            {
              if ( v22 )
                goto LABEL_17;
              v29 = result & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_30;
            }
            if ( (result & 2) != 0 )
            {
              if ( v22 )
                goto LABEL_17;
              v23 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
              v22 = 1;
              if ( v23 )
              {
                v24 = v23[2295];
                if ( v24 )
                {
                  v25 = v23[294];
                  v23[304] += 24LL;
                  v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v23[295] >= v26 + 24 && v25 )
                  {
                    v23[294] = v26 + 24;
                    v27 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v27 = sub_962430((__int64)(v23 + 294), 24, 24, 3, v11, v12);
                    v26 = v27 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v27 = v24;
                  v28 = v26 | 4;
                  *(_DWORD *)(v27 + 8) = 0;
                  *(_QWORD *)(v27 + 16) = v21;
                }
                else
                {
                  v28 = v21 & 0xFFFFFFFFFFFFFFFBLL;
                }
                v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
                result = v29 | 1;
                *(_QWORD *)(v21 + 72) = v29 | 1;
LABEL_30:
                result &= 0xFFFFFFFFFFFFFFF8LL;
                v22 = 1;
                v10 = result;
                if ( v29 && (v29 & 4) != 0 && result )
                {
                  v30 = *(_QWORD *)result;
                  v31 = *(_DWORD *)(*(_QWORD *)result + 12LL);
                  if ( *(_DWORD *)(v10 + 8) != v31 )
                  {
                    *(_DWORD *)(v10 + 8) = v31;
                    v38 = v10;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v21);
                    v10 = v38;
                  }
                  result = *(_QWORD *)(v10 + 16);
                  v22 = 1;
                }
                goto LABEL_15;
              }
            }
            else
            {
              result &= 0xFFFFFFFFFFFFFFFCLL;
              if ( result )
                goto LABEL_15;
            }
            result = 0;
LABEL_15:
            if ( v19 != (_QWORD *)result )
            {
              v21 = result;
              if ( result )
                continue;
            }
LABEL_17:
            if ( v35 )
              goto LABEL_18;
            break;
          }
        }
        result = sub_F1BF80(v37, v19, 0, 0);
LABEL_18:
        v13 += 8;
      }
      while ( v39 != v13 );
    }
  }
  return result;
}

