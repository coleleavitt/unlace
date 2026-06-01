__int64 __fastcall sub_AD38B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  char v19; // r14
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v22; // r12
  char v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // eax
  _DWORD *v33; // rdx
  _DWORD *v34; // r13
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  __int64 v41; // [rsp+28h] [rbp-40h]

  sub_AD3490(a1, a2[7], a3, a4, a5, a6);
  sub_AD13F0(a1, a2[6]);
  result = *(unsigned int *)(a1 + 4);
  if ( !(_DWORD)result )
  {
    v7 = sub_BC37C0(a2);
    v8 = *(_QWORD *)(v7 + 16) + 8LL * *(unsigned int *)(v7 + 24);
    v41 = v8;
    v12 = *(_QWORD *)(sub_BC37C0(a2) + 16);
    result = a1 + 8;
    v39 = a1 + 8;
    if ( v8 != v12 )
    {
      do
      {
        v13 = *(_QWORD *)(*(_QWORD *)v12 + 104LL);
        v14 = *(_QWORD *)(v13 + 96);
        v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v14 & 1) == 0 )
        {
          v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v17 = v14 & 2;
            v18 = (unsigned __int64)v16;
            if ( !(_DWORD)v17 )
              goto LABEL_7;
            v15 = sub_6E2500(v16, *(_QWORD *)(*(_QWORD *)v12 + 104LL), v17, v9, v10, v11) & 0xFFFFFFFFFFFFFFFELL;
            v14 = v15 | 1;
            *(_QWORD *)(v13 + 96) = v15 | 1;
          }
        }
        v33 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        v34 = v33;
        v18 = (unsigned __int64)v33;
        if ( v15 )
        {
          if ( (v15 & 4) != 0 )
          {
            v18 = 0;
            if ( v33 )
            {
              v35 = *(_QWORD *)v33;
              v36 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
              if ( v33[2] != v36 )
              {
                v33[2] = v36;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 152LL))(v35, v13);
              }
              v18 = *((_QWORD *)v34 + 2);
            }
          }
        }
LABEL_7:
        while ( 1 )
        {
          v19 = sub_B97450(v18);
          if ( !v19 )
            break;
          while ( 1 )
          {
            v20 = *(_QWORD *)(v18 + 96);
            v18 = 0;
            if ( (v20 & 3) != 0 )
              break;
            v18 = v20 & 0xFFFFFFFFFFFFFFFCLL;
            v19 = sub_B97450(v20 & 0xFFFFFFFFFFFFFFFCLL);
            if ( !v19 )
              goto LABEL_10;
          }
        }
LABEL_10:
        v21 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
        if ( v21 == sub_6EE8F0 )
          v37 = a2[9];
        else
          v37 = v21((__int64)a2);
        if ( v18 )
        {
          v22 = v18;
          v23 = 0;
          while ( 1 )
          {
            if ( (unsigned int)sub_B97260(v22) <= 1 )
            {
              v19 = 1;
              if ( (__int64 *)v37 == a2 )
                sub_AD13F0(a1, v22);
              else
                sub_F3FCC0(v39, v22, 0, 0);
            }
            result = *(_QWORD *)(v22 + 96);
            if ( (result & 1) != 0 )
            {
              if ( v23 )
                goto LABEL_20;
              v30 = result & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_33;
            }
            if ( (result & 2) != 0 )
            {
              if ( v23 )
                goto LABEL_20;
              v24 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL);
              v23 = 1;
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
                    v28 = sub_986170((__int64)(v24 + 294), 24, 24, 3, v10, v11);
                    v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v28 = v25;
                  v29 = v27 | 4;
                  *(_DWORD *)(v28 + 8) = 0;
                  *(_QWORD *)(v28 + 16) = v22;
                }
                else
                {
                  v29 = v22 & 0xFFFFFFFFFFFFFFFBLL;
                }
                v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
                result = v30 | 1;
                *(_QWORD *)(v22 + 96) = v30 | 1;
LABEL_33:
                result &= 0xFFFFFFFFFFFFFFF8LL;
                v23 = 1;
                v9 = result;
                if ( v30 && (v30 & 4) != 0 && result )
                {
                  v31 = *(_QWORD *)result;
                  v32 = *(_DWORD *)(*(_QWORD *)result + 12LL);
                  if ( *(_DWORD *)(v9 + 8) != v32 )
                  {
                    *(_DWORD *)(v9 + 8) = v32;
                    v40 = v9;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 152LL))(v31, v22);
                    v9 = v40;
                  }
                  result = *(_QWORD *)(v9 + 16);
                  v23 = 1;
                }
                goto LABEL_18;
              }
            }
            else
            {
              result &= 0xFFFFFFFFFFFFFFFCLL;
              if ( result )
                goto LABEL_18;
            }
            result = 0;
LABEL_18:
            if ( v18 != result )
            {
              v22 = result;
              if ( result )
                continue;
            }
LABEL_20:
            if ( v19 )
              goto LABEL_21;
            break;
          }
        }
        result = sub_F3FCC0(v39, v18, 0, 0);
LABEL_21:
        v12 += 8;
      }
      while ( v41 != v12 );
    }
  }
  return result;
}
