__int64 __fastcall sub_AD3530(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  unsigned int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // eax
  _DWORD *v33; // r13
  __int64 v34; // rdi
  int v35; // eax
  char v36; // [rsp+Fh] [rbp-59h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+20h] [rbp-48h]
  __int64 v40; // [rsp+28h] [rbp-40h]

  sub_AD3490(a1, a2[7], a3, a4, a5, a6);
  sub_AD13F0(a1, a2[6]);
  result = *(unsigned int *)(a1 + 4);
  if ( !(_DWORD)result )
  {
    v8 = sub_BC39F0(a2);
    v9 = *(_QWORD *)(v8 + 16) + 8LL * *(unsigned int *)(v8 + 24);
    v40 = v9;
    v13 = *(_QWORD *)(sub_BC39F0(a2) + 16);
    result = a1 + 8;
    v38 = a1 + 8;
    if ( v9 != v13 )
    {
      do
      {
        v14 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
        v15 = *(_QWORD *)(v14 + 104);
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
            v16 = sub_6E2500(
                    v17,
                    *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112),
                    (__int64)v18,
                    v10,
                    v11,
                    v12)
                & 0xFFFFFFFFFFFFFFFELL;
            v15 = v16 | 1;
            *(_QWORD *)(v14 + 104) = v16 | 1;
          }
        }
        v18 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
        v33 = v18;
        v19 = v18;
        if ( v16 )
        {
          if ( (v16 & 4) != 0 )
          {
            v19 = nullptr;
            if ( v18 )
            {
              v34 = *(_QWORD *)v18;
              v35 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
              if ( v18[2] != v35 )
              {
                v18[2] = v35;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, v14);
              }
              v19 = *((_QWORD **)v33 + 2);
            }
          }
        }
LABEL_7:
        v20 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
        if ( v20 == sub_6EE8E0 )
          v37 = a2[9];
        else
          v37 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(__int64), _DWORD *))v20)(a2, sub_6EE8E0, v18);
        if ( v19 )
        {
          v36 = 0;
          v21 = (__int64)v19;
          v22 = 0;
          while ( 1 )
          {
            v23 = sub_B77D20(v21);
            if ( v23 <= 1 || v23 - 3 <= 1 )
            {
              if ( (__int64 *)v37 == a2 )
                sub_AD13F0(a1, v21);
              else
                sub_F3FCC0(v38, v21, 0, 0);
              v36 = 1;
            }
            result = *(_QWORD *)(v21 + 104);
            if ( (result & 1) != 0 )
            {
              if ( v22 )
                goto LABEL_21;
              v30 = result & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_34;
            }
            if ( (result & 2) != 0 )
            {
              if ( v22 )
                goto LABEL_21;
              v24 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
              v22 = 1;
              if ( v24 )
              {
                v25 = v24[2295];
                if ( v25 )
                {
                  v26 = v24[294];
                  v24[304] += 24LL;
                  v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v24[295] >= v27 + 24 && v26 )
                  {
                    v24[294] = v27 + 24;
                    v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v28 = sub_986170((__int64)(v24 + 294), 24, 24, 3, v11, v12);
                    v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v28 = v25;
                  v29 = v27 | 4;
                  *(_DWORD *)(v28 + 8) = 0;
                  *(_QWORD *)(v28 + 16) = v21;
                }
                else
                {
                  v29 = v21 & 0xFFFFFFFFFFFFFFFBLL;
                }
                v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
                result = v30 | 1;
                *(_QWORD *)(v21 + 104) = v30 | 1;
LABEL_34:
                result &= 0xFFFFFFFFFFFFFFF8LL;
                v22 = 1;
                v10 = result;
                if ( v30 && (v30 & 4) != 0 && result )
                {
                  v31 = *(_QWORD *)result;
                  v32 = *(_DWORD *)(*(_QWORD *)result + 12LL);
                  if ( *(_DWORD *)(v10 + 8) != v32 )
                  {
                    *(_DWORD *)(v10 + 8) = v32;
                    v39 = v10;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 152LL))(v31, v21);
                    v10 = v39;
                  }
                  result = *(_QWORD *)(v10 + 16);
                  v22 = 1;
                }
                goto LABEL_19;
              }
            }
            else
            {
              result &= 0xFFFFFFFFFFFFFFFCLL;
              if ( result )
                goto LABEL_19;
            }
            result = 0;
LABEL_19:
            if ( v19 != (_QWORD *)result )
            {
              v21 = result;
              if ( result )
                continue;
            }
LABEL_21:
            if ( v36 )
              goto LABEL_22;
            break;
          }
        }
        result = sub_F3FCC0(v38, v19, 0, 0);
LABEL_22:
        v13 += 8;
      }
      while ( v40 != v13 );
    }
  }
  return result;
}
