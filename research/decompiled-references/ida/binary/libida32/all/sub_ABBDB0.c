void __fastcall sub_ABBDB0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // r15
  char v17; // bl
  char v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdi
  int v32; // eax
  __int64 v34; // [rsp+8h] [rbp-60h]
  unsigned __int64 v35; // [rsp+8h] [rbp-60h]
  char *v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  __int64 v39; // [rsp+28h] [rbp-40h]

  sub_ABBD10(a1, a2[7]);
  sub_AB9DD0(a1, a2[6]);
  v3 = sub_B9FCB0(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  v39 = v4;
  v8 = *(_QWORD *)(sub_B9FCB0(a2) + 16);
  v36 = (char *)(a1 + 8);
  if ( v4 != v8 )
  {
    do
    {
      v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112);
      v10 = *(_QWORD *)(v9 + 104);
      v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v10 & 1) == 0 )
      {
        v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v13 = v10 & 2;
          v14 = (__int64)v12;
          if ( !(_DWORD)v13 )
            goto LABEL_5;
          v11 = sub_6C1EC0(
                  v12,
                  *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF8LL) + 112),
                  v13,
                  v5,
                  v6,
                  v7)
              & 0xFFFFFFFFFFFFFFFELL;
          v10 = v11 | 1;
          *(_QWORD *)(v9 + 104) = v11 | 1;
        }
      }
      v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v13;
      if ( v11 )
      {
        if ( (v11 & 4) != 0 )
        {
          v14 = 0;
          if ( v13 )
          {
            v31 = *(_QWORD *)v13;
            v32 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
            if ( *(_DWORD *)(v13 + 8) != v32 )
            {
              *(_DWORD *)(v13 + 8) = v32;
              v35 = v13;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 152LL))(v31, v9);
              v13 = v35;
            }
            v14 = *(_QWORD *)(v13 + 16);
          }
        }
      }
LABEL_5:
      v15 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
      if ( v15 == sub_6CE2A0 )
        v34 = a2[9];
      else
        v34 = ((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(__int64), unsigned __int64))v15)(
                a2,
                sub_6CE2A0,
                v13);
      if ( v14 )
      {
        v16 = v14;
        v17 = 0;
        v18 = 0;
        while ( 1 )
        {
          v19 = sub_B53FE0(v16);
          if ( v19 <= 1 || v19 - 3 <= 1 && a3 )
          {
            v18 = 1;
            if ( (__int64 *)v34 == a2 )
              sub_AB9DD0(a1, v16);
            else
              sub_AAA9C0(v36, (char *)&byte_22CD811, 0, a1, v16);
          }
          v20 = *(_QWORD *)(v16 + 104);
          if ( (v20 & 1) != 0 )
          {
            if ( v17 )
              goto LABEL_19;
            v28 = v20 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_32;
          }
          if ( (v20 & 2) != 0 )
          {
            if ( v17 )
              goto LABEL_19;
            v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
            v17 = 1;
            if ( v22 )
            {
              v23 = v22[2295];
              if ( v23 )
              {
                v24 = v22[294];
                v22[304] += 24LL;
                v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v22[295] >= v25 + 24 && v24 )
                {
                  v22[294] = v25 + 24;
                  v26 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v26 = sub_962430((__int64)(v22 + 294), 24, 24, 3, v6, v7);
                  v25 = v26 & 0xFFFFFFFFFFFFFFFBLL;
                }
                *(_QWORD *)v26 = v23;
                v27 = v25 | 4;
                *(_DWORD *)(v26 + 8) = 0;
                *(_QWORD *)(v26 + 16) = v16;
              }
              else
              {
                v27 = v16 & 0xFFFFFFFFFFFFFFFBLL;
              }
              v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
              v20 = v28 | 1;
              *(_QWORD *)(v16 + 104) = v28 | 1;
LABEL_32:
              v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
              v17 = 1;
              v5 = v21;
              if ( v28 && (v28 & 4) != 0 && v21 )
              {
                v29 = *(_QWORD *)v21;
                v30 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
                if ( *(_DWORD *)(v5 + 8) != v30 )
                {
                  *(_DWORD *)(v5 + 8) = v30;
                  v37 = v5;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, v16);
                  v5 = v37;
                }
                v21 = *(_QWORD *)(v5 + 16);
                v17 = 1;
              }
              goto LABEL_17;
            }
          }
          else
          {
            v21 = v20 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v21 )
              goto LABEL_17;
          }
          v21 = 0;
LABEL_17:
          if ( v14 != v21 )
          {
            v16 = v21;
            if ( v21 )
              continue;
          }
LABEL_19:
          if ( v18 )
            goto LABEL_20;
          break;
        }
      }
      sub_AAAF00(v36, (char *)&byte_22CD811, 0, a1, v14);
LABEL_20:
      v8 += 8;
    }
    while ( v39 != v8 );
  }
}

