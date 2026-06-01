void __fastcall sub_B962B0(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rdi
  int v23; // r14d
  int v24; // r8d
  __int64 v25; // rdi
  _WORD *v26; // rdx
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]
  int v28; // [rsp+8h] [rbp-40h]

  sub_B93C20((__int64)a1, a2);
  if ( *((_BYTE *)a1 + 36) )
  {
    v3 = sub_B9FA80(a2);
    v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
    v5 = *(_QWORD *)(sub_B9FA80(a2) + 16);
    if ( v4 != v5 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
        v9 = *(_QWORD *)(v8 + 96);
        v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v9 & 1) != 0 )
          goto LABEL_19;
        v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_19;
        v12 = v9 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v9 & 2) != 0 )
          break;
LABEL_7:
        while ( sub_B73710(v12) )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(v12 + 96);
            v12 = 0;
            if ( (v13 & 3) != 0 )
              break;
            v12 = v13 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !sub_B73710(v13 & 0xFFFFFFFFFFFFFFFCLL) )
              goto LABEL_10;
          }
        }
LABEL_10:
        if ( (*(_BYTE *)(v12 + 180) & 7) == 1 )
        {
          v22 = *(_QWORD *)a1;
          if ( (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 74LL) & 1) != 0 )
          {
            sub_971800(v22, ";");
            v22 = *(_QWORD *)a1;
          }
          sub_971800(v22, "\n");
          v23 = a1[8];
          v24 = 0;
          if ( v23 )
          {
            do
            {
              while ( 1 )
              {
                v25 = *(_QWORD *)a1;
                v26 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
                if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v26 > 1u )
                  break;
                v28 = v24;
                sub_22581D0(v25, "  ", 2);
                v24 = v28 + 1;
                if ( v23 == v28 + 1 )
                  goto LABEL_32;
              }
              ++v24;
              *v26 = 8224;
              *(_QWORD *)(v25 + 32) += 2LL;
            }
            while ( v23 != v24 );
          }
LABEL_32:
          sub_B91A70((__int64)a1, v12);
        }
        v5 += 8;
        if ( v4 == v5 )
          return;
      }
      v14 = v11[2295];
      v15 = v8 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v14 )
      {
        v16 = v11[294];
        v11[304] += 24LL;
        v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11[295] >= v17 + 24 && v16 )
        {
          v11[294] = v17 + 24;
          v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v18 = sub_962430((__int64)(v11 + 294), 24, 24, 3, v6, v7);
          v17 = v18 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v18 = v14;
        v15 = v17 | 4;
        *(_DWORD *)(v18 + 8) = 0;
        *(_QWORD *)(v18 + 16) = v8;
      }
      v10 = v15 & 0xFFFFFFFFFFFFFFFELL;
      v9 = v10 | 1;
      *(_QWORD *)(v8 + 96) = v10 | 1;
LABEL_19:
      v19 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v19;
      if ( v10 )
      {
        if ( (v10 & 4) != 0 )
        {
          v12 = 0;
          if ( v19 )
          {
            v20 = *(_QWORD *)v19;
            v21 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
            if ( *(_DWORD *)(v19 + 8) != v21 )
            {
              *(_DWORD *)(v19 + 8) = v21;
              v27 = v19;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL))(v20, v8);
              v19 = v27;
            }
            v12 = *(_QWORD *)(v19 + 16);
          }
        }
      }
      goto LABEL_7;
    }
  }
}

